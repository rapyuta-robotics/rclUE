// Copyright 2021 Rapyuta Robotics Co., Ltd.

#include "Sensors/SensorLidar.h"

#include "Kismet/KismetMathLibrary.h"
#include "Components/LineBatchComponent.h"

DEFINE_LOG_CATEGORY(LogROS2Sensor);

ASensorLidar::ASensorLidar()
{
	PrimaryActorTick.bCanEverTick = true;
 	
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	LidarPublisher = CreateDefaultSubobject<UROS2Publisher>(TEXT("LidarPublisher"));
	LidarPublisher->TopicName = FString("scan");
	LidarPublisher->PublicationFrequencyHz = ScanFrequency;
	LidarPublisher->MsgClass = UROS2LaserScanMsg::StaticClass();
}

void ASensorLidar::BeginPlay()
{
	Super::BeginPlay();
}

void ASensorLidar::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void ASensorLidar::LidarMessageUpdate(UROS2GenericMsg* TopicMessage)
{
	UROS2LaserScanMsg* ScanMessage = Cast<UROS2LaserScanMsg>(TopicMessage);
	ScanMessage->Update(GetROS2Data());
}

void ASensorLidar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

#if TRACE_ASYNC
	for (int i = 0; i < NSamplesPerScan; ++i)
	{
		if (TraceHandles[i]._Data.FrameNumber != 0)
		{
			FTraceDatum Output;

			if (GWorld->QueryTraceData(TraceHandles[i], Output))
			{
				if (Output.OutHits.Num() > 0)
				{
					check(Output.OutHits.Num() > 0);
					check(i < RecordedHits.Num());
					check(i < TraceHandles.Num());
					TraceHandles[i]._Data.FrameNumber = 0;
					RecordedHits[i] = Output.OutHits[0];	// We should only be tracing the first hit anyhow
				}
				else
				{
					TraceHandles[i]._Data.FrameNumber = 0;
					RecordedHits[i] = FHitResult();
					RecordedHits[i].TraceStart = Output.Start;
					RecordedHits[i].TraceEnd = Output.End;
				}
			}
		}
	}
#endif
}

void ASensorLidar::Run()
{
	RecordedHits.Empty();
	RecordedHits.Init(FHitResult(ForceInit), NSamplesPerScan);

#if TRACE_ASYNC
	TraceHandles.Empty();
	TraceHandles.Init(FTraceHandle{}, NSamplesPerScan);
#endif

	GWorld->GetGameInstance()->GetTimerManager().SetTimer(TimerHandle, this, &ASensorLidar::Scan, 1.f/(float)ScanFrequency, true);
}

void ASensorLidar::Scan()
{
	DHAngle = FOVHorizontal / (float)NSamplesPerScan;
	
	FCollisionQueryParams TraceParams = FCollisionQueryParams(FName(TEXT("Laser_Trace")), true, this); // complex collisions: true
	TraceParams.bReturnPhysicalMaterial = false;
	TraceParams.bIgnoreTouches = true;

	FVector LidarPos = GetActorLocation();
	FRotator LidarRot = GetActorRotation();

#if TRACE_ASYNC
	// This is cheesy, but basically if the first trace is in flight we assume they're all waiting and don't do another trace.
	// This is not good if done on other threads and only works because both timers and actor ticks happen on the game thread.
	if (TraceHandles[0]._Data.FrameNumber == 0)
	{
		for (int i = 0; i < NSamplesPerScan; ++i)
		{
			const float HAngle = StartAngle + DHAngle * i;

			FRotator LaserRot(0, HAngle, 0);
			FRotator Rot = UKismetMathLibrary::ComposeRotators(LaserRot, LidarRot);

			FVector StartPos = LidarPos + MinRange * UKismetMathLibrary::GetForwardVector(Rot);
			FVector EndPos   = LidarPos + MaxRange * UKismetMathLibrary::GetForwardVector(Rot);

			TraceHandles[i] = GWorld->AsyncLineTraceByChannel(EAsyncTraceType::Single, StartPos, EndPos, ECC_Visibility, TraceParams, FCollisionResponseParams::DefaultResponseParam, nullptr);
		}
	}
#else
	ParallelFor(NSamplesPerScan, [this, &TraceParams, &LidarPos, &LidarRot](int32 Index)
	{
		const float HAngle = StartAngle + DHAngle * Index;

		FRotator LaserRot(0, HAngle, 0);
		FRotator Rot = UKismetMathLibrary::ComposeRotators(LaserRot, LidarRot);

		FVector StartPos = LidarPos + MinRange * UKismetMathLibrary::GetForwardVector(Rot);
		FVector EndPos   = LidarPos + MaxRange * UKismetMathLibrary::GetForwardVector(Rot);

		GWorld->LineTraceSingleByChannel(RecordedHits[Index], StartPos, EndPos, ECC_Visibility, TraceParams, FCollisionResponseParams::DefaultResponseParam);
	}, false);
#endif

	TimeOfLastScan = UGameplayStatics::GetTimeSeconds(GWorld);
	dt = 1.f / (float)ScanFrequency;

	// need to store on a structure associating hits with time?
	// GetROS2Data needs to get all data since the last Get? or the last within the last time interval?

	ULineBatchComponent* const LineBatcher = GetWorld()->PersistentLineBatcher;
	if (LineBatcher != nullptr && ShowLidarRays)
	{
		for (auto& h : RecordedHits)
		{
			if (h.Actor != nullptr)
			{
				LineBatcher->DrawLine(h.TraceStart, h.Location, FColor(255, 0, 0, 255), 10, .5, dt);
			}
			else
			{
				LineBatcher->DrawLine(h.TraceStart, h.TraceEnd, FColor(255, 127, 0, 255), 10, .25, dt);
			}
		}
	}
}

void ASensorLidar::InitToNode(AROS2Node* Node)
{
	if (IsValid(Node))
	{
		check(IsValid(LidarPublisher));

		LidarPublisher->UpdateDelegate.BindDynamic(this, &ASensorLidar::LidarMessageUpdate);
		Node->AddPublisher(LidarPublisher);
		LidarPublisher->Init(UROS2QoS::SensorData);
	}
}

void ASensorLidar::GetData(TArray<FHitResult>& Hits, float& Time)
{
	// what about the rest of the information?
	Hits = RecordedHits;
	Time = TimeOfLastScan;
}

float ASensorLidar::GetMinAngleRadians() const
{
	return FMath::DegreesToRadians(-StartAngle-FOVHorizontal);
	//return FMath::DegreesToRadians(StartAngle+FOVHorizontal+180);
}

float ASensorLidar::GetMaxAngleRadians() const
{
	return FMath::DegreesToRadians(-StartAngle);
	//return FMath::DegreesToRadians(StartAngle+180);
}

FLaserScanData ASensorLidar::GetROS2Data() const
{
	FLaserScanData RetValue;
	RetValue.sec = (int32_t)TimeOfLastScan;
	unsigned long long ns = (unsigned long long)(TimeOfLastScan * 1000000000.0f);
	RetValue.nanosec = (uint32_t)(ns - (RetValue.sec * 1000000000ul));
	
	RetValue.frame_id = FString("base_scan");

	RetValue.angle_min = GetMinAngleRadians();
	RetValue.angle_max = GetMaxAngleRadians();
	RetValue.angle_increment = FMath::DegreesToRadians(DHAngle);
	RetValue.time_increment = dt / NSamplesPerScan;
	RetValue.scan_time = dt;
	RetValue.range_min = MinRange*.01;
	RetValue.range_max = MaxRange*.01;

	RetValue.ranges.Empty();
	RetValue.intensities.Empty();
	// note that angles are reversed compared to rviz
	// ROS is right handed
	// UE4 is left handed
	for (int i=0; i<RecordedHits.Num(); i++)
	{
		RetValue.ranges.Add((MinRange*(RecordedHits.Last(i).Distance>0)+RecordedHits.Last(i).Distance)*.01); // convert to [m]
		RetValue.intensities.Add(0);
	}

	return RetValue;
}