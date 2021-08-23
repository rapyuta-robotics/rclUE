// Fill out your copyright notice in the Description page of Project Settings.


#include "Sensors/SensorLidar.h"
#include "Kismet/KismetMathLibrary.h"
//#include "DrawDebugHelpers.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "Components/LineBatchComponent.h"

DEFINE_LOG_CATEGORY(LogROS2Sensor);

// Sets default values
ASensorLidar::ASensorLidar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
 	
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	LidarPublisher = CreateDefaultSubobject<UROS2Publisher>(TEXT("LidarPublisher"));
	LidarPublisher->TopicName = TEXT("scan");
	LidarPublisher->PublicationFrequencyHz = ScanFrequency;
	LidarPublisher->MsgClass = UROS2LaserScanMsg::StaticClass();
}

// Called when the game starts or when spawned
void ASensorLidar::BeginPlay()
{
	Super::BeginPlay();
}

void ASensorLidar::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void ASensorLidar::LidarMessageUpdate(UROS2GenericMsg *TopicMessage)
{
	UROS2LaserScanMsg* ScanMessage = Cast<UROS2LaserScanMsg>(TopicMessage);
	ScanMessage->Update(GetROS2Data());
}

// Called every frame
void ASensorLidar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(!IsInitialized){
		return;
	}
#if TRACE_ASYNC
	for (int i = 0; i < nSamplesPerScan; ++i)
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
	RecordedHits.Init(FHitResult(ForceInit), nSamplesPerScan);

#if TRACE_ASYNC
	TraceHandles.Empty();
	TraceHandles.Init(FTraceHandle{}, nSamplesPerScan);
#endif

	GWorld->GetGameInstance()->GetTimerManager().SetTimer(timerHandle, this, &ASensorLidar::Scan, 1.f/(float)ScanFrequency, true);
	IsInitialized = true;
}

void ASensorLidar::Scan()
{
	DHAngle = FOVHorizontal / (float)nSamplesPerScan;
	
	FCollisionQueryParams TraceParams = FCollisionQueryParams(FName(TEXT("Laser_Trace")), true, this); // complex collisions: true
	TraceParams.bReturnPhysicalMaterial = true;
	//TraceParams.bIgnoreTouches = true;
	TraceParams.bTraceComplex = true;
	TraceParams.bReturnFaceIndex = true;

	FVector lidarPos = GetActorLocation();
	FRotator lidarRot = GetActorRotation();

#if TRACE_ASYNC
	// This is cheesy, but basically if the first trace is in flight we assume they're all waiting and don't do another trace.
	// This is not good if done on other threads and only works because both timers and actor ticks happen on the game thread.
	if (TraceHandles[0]._Data.FrameNumber == 0)
	{
		for (int i = 0; i < nSamplesPerScan; ++i)
		{
			const float HAngle = StartAngle + DHAngle * i;

			FRotator laserRot(0, HAngle, 0);
			FRotator rot = UKismetMathLibrary::ComposeRotators(laserRot, lidarRot);

			FVector startPos = lidarPos + MinRange * UKismetMathLibrary::GetForwardVector(rot);
			FVector endPos   = lidarPos + MaxRange * UKismetMathLibrary::GetForwardVector(rot);

			TraceHandles[i] = GWorld->AsyncLineTraceByChannel(EAsyncTraceType::Single, startPos, endPos, ECC_Visibility, TraceParams, FCollisionResponseParams::DefaultResponseParam, nullptr);
		}
	}
#else
	ParallelFor(nSamplesPerScan, [this, &TraceParams, &lidarPos, &lidarRot](int32 Index)
	{
		const float HAngle = StartAngle + DHAngle * Index;

		FRotator laserRot(0, HAngle, 0);
		FRotator rot = UKismetMathLibrary::ComposeRotators(laserRot, lidarRot);

		FVector startPos = lidarPos + MinRange * UKismetMathLibrary::GetForwardVector(rot);
		FVector endPos   = lidarPos + MaxRange * UKismetMathLibrary::GetForwardVector(rot);

		GWorld->LineTraceSingleByChannel(RecordedHits[Index], startPos, endPos, ECC_Visibility, TraceParams, FCollisionResponseParams::DefaultResponseParam);
	}, false);
#endif

	TimeOfLastScan = UGameplayStatics::GetTimeSeconds(GWorld);
	dt = 1.f/(float)ScanFrequency;

	// need to store on a structure associating hits with time?
	// GetROS2Data needs to get all data since the last Get? or the last within the last time interval?

	ULineBatchComponent* const LineBatcher = GetWorld()->PersistentLineBatcher;
	if (LineBatcher != nullptr && ShowLidarRays)
	{
		for (auto& h : RecordedHits)
		{
			if (h.Actor != nullptr)
			{
				if (h.PhysMaterial != nullptr)
				{
					// retroreflective material
					if (h.PhysMaterial->SurfaceType == EPhysicalSurface::SurfaceType1)
					{
						//UE_LOG(LogTemp, Warning, TEXT("retroreflective surface type hit"));
						LineBatcher->DrawLine(h.TraceStart, h.ImpactPoint, ColorReflected, 10, .5, dt);
					}
					// non reflective material
					else if (h.PhysMaterial->SurfaceType == EPhysicalSurface::SurfaceType_Default)
					{
						//UE_LOG(LogTemp, Warning, TEXT("default surface type hit"));
						LineBatcher->DrawLine(h.TraceStart, h.ImpactPoint, ColorHit, 10, .5, dt);
					}
					// reflective material
					else if (h.PhysMaterial->SurfaceType == EPhysicalSurface::SurfaceType2)
					{
						FVector HitSurfaceNormal = h.Normal;
						FVector RayDirection = h.TraceEnd -h.TraceStart;
						RayDirection.Normalize();

						float NormalAlignment = FVector::DotProduct(HitSurfaceNormal, -RayDirection);
						NormalAlignment *= NormalAlignment;
						NormalAlignment *= NormalAlignment;
						NormalAlignment *= NormalAlignment;
						NormalAlignment *= NormalAlignment;
						NormalAlignment *= NormalAlignment; // pow 32
						LineBatcher->DrawLine(h.TraceStart, h.ImpactPoint, FLinearColor::LerpUsingHSV(ColorHit, ColorReflected, NormalAlignment), 10, .5, dt);
					}
				}
				else
				{
					//UE_LOG(LogTemp, Warning, TEXT("no physics material"));
					LineBatcher->DrawLine(h.TraceStart, h.ImpactPoint, ColorHit, 10, .5, dt);
				}
			}
			else
			{
				LineBatcher->DrawLine(h.TraceStart, h.TraceEnd, ColorMiss, 10, .25, dt);
			}
		}
	}
}

void ASensorLidar::InitLidar(AROS2Node* Node, FString TopicName)
{
	LidarPublisher->TopicName = TopicName;
	LidarPublisher->PublicationFrequencyHz = ScanFrequency;
	LidarPublisher->ownerNode = Node;
	
	InitToNode(Node);

	Run();
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

void ASensorLidar::GetData(TArray<FHitResult>& hits, float& time)
{
	// what about the rest of the information?
	hits = RecordedHits;
	time = TimeOfLastScan;
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
	FLaserScanData retValue;
	retValue.sec = (int32_t)TimeOfLastScan;
	unsigned long long ns = (unsigned long long)(TimeOfLastScan * 1000000000.0f);
	retValue.nanosec = (uint32_t)(ns - (retValue.sec * 1000000000ul));
	
	retValue.frame_id = FrameId;

	retValue.angle_min = GetMinAngleRadians();
	retValue.angle_max = GetMaxAngleRadians();
	retValue.angle_increment = FMath::DegreesToRadians(DHAngle);
	retValue.time_increment = dt / nSamplesPerScan;
	retValue.scan_time = dt;
	retValue.range_min = MinRange*.01;
	retValue.range_max = MaxRange*.01;

	retValue.ranges.Empty();
	retValue.intensities.Empty();
	// note that angles are reversed compared to rviz
	// ROS is right handed
	// UE4 is left handed
	for (int i=0; i<RecordedHits.Num(); i++)
	{
		retValue.ranges.Add((MinRange*(RecordedHits.Last(i).Distance>0)+RecordedHits.Last(i).Distance)*.01); // convert to [m]
		//retValue.intensities.Add(0);

		UStaticMeshComponent* ComponentHit = Cast<UStaticMeshComponent>(RecordedHits.Last(i).GetComponent());
		if (RecordedHits.Last(i).PhysMaterial != nullptr)
		{
			// retroreflective material
			if (RecordedHits.Last(i).PhysMaterial->SurfaceType == EPhysicalSurface::SurfaceType1)
			{
				retValue.intensities.Add(IntensityReflective);
			}
			// non-reflective material
			else if (RecordedHits.Last(i).PhysMaterial->SurfaceType == EPhysicalSurface::SurfaceType_Default)
			{
				retValue.intensities.Add(IntensityNonReflective);
			}
			// reflective material
			else if (RecordedHits.Last(i).PhysMaterial->SurfaceType == EPhysicalSurface::SurfaceType2)
			{
				FVector HitSurfaceNormal = RecordedHits.Last(i).Normal;
				FVector RayDirection = RecordedHits.Last(i).TraceEnd - RecordedHits.Last(i).TraceStart;
				RayDirection.Normalize();

				// the dot product for this should always be between 0 and 1
				float Intensity = IntensityNonReflective + (IntensityReflective-IntensityNonReflective) * FVector::DotProduct(HitSurfaceNormal, -RayDirection);
				check(Intensity >= IntensityNonReflective);
				check(Intensity <= IntensityReflective);
				retValue.intensities.Add(Intensity);
			}
		}
		else
		{
				retValue.intensities.Add(10);
		}
	}

	return retValue;
}