// Fill out your copyright notice in the Description page of Project Settings.


#include "Sensors/SensorLidar.h"
#include "Kismet/KismetMathLibrary.h"
#include "DrawDebugHelpers.h"

DEFINE_LOG_CATEGORY(LogROS2Sensor);

// Sets default values
ASensorLidar::ASensorLidar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
 	
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    LidarMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LidarMesh"));
    LidarMesh->SetupAttachment(RootComponent);
    static ConstructorHelpers::FObjectFinder<UStaticMesh> LidarCylinderMesh(TEXT("'/Engine/BasicShapes/Cylinder.Cylinder'"));

    // check if path is valid
    if (LidarCylinderMesh.Succeeded())
    {
        // mesh = valid path
        LidarMesh->SetStaticMesh(LidarCylinderMesh.Object);
    }

	LidarPublisher = CreateDefaultSubobject<UROS2LidarPublisher>(TEXT("LidarPubliser"));
	LidarPublisher->TopicName = FName("scan");
	LidarPublisher->PublicationFrequencyHz = ScanFrequency;
	LidarPublisher->MsgClass = UROS2LaserScanMsg::StaticClass();
	
	//LidarMesh->SetWorldScale3D(FVector(.1f,.1f,.1f));
}

// Called when the game starts or when spawned
void ASensorLidar::BeginPlay()
{
	Super::BeginPlay();
	LidarPublisher->Lidar = this;
}

void ASensorLidar::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	LidarPublisher->Lidar = nullptr;
}

// Called every frame
void ASensorLidar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

#if TRACE_ASYNC
	for (int i = 0; i < nSamplesPerScan; ++i)
	{
		if (TraceHandles[i]._Data.FrameNumber != 0)
		{
			FTraceDatum Output;

			if (GWorld->QueryTraceData(TraceHandles[i], Output))
			{
				TraceHandles[i]._Data.FrameNumber = 0;
				RecordedHits[i] = Output.OutHits[0];	// We should only be tracing the first hit anyhow
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
}

void ASensorLidar::Scan()
{
	DHAngle = FOVHorizontal / (float)nSamplesPerScan;
	
	FCollisionQueryParams TraceParams = FCollisionQueryParams(FName(TEXT("Laser_Trace")), false, this);
	//TraceParams.bTraceComplex = false;
	TraceParams.bReturnPhysicalMaterial = false;
	TraceParams.bIgnoreTouches = true;

	FTransform lidarTransform = GetTransform();
	FVector lidarPos = lidarTransform.GetLocation();
	FRotator lidarRot = lidarTransform.Rotator();

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

	TimeOfLastScan = UGameplayStatics::GetTimeSeconds(GWorld);
	dt = 1.f/(float)ScanFrequency;

	// need to store on a structure associating hits with time?
	// GetROS2Data needs to get all data since the last Get? or the last within the last time interval?

	if (DrawDebugLines)
	{
		for (auto& h : RecordedHits)
		{
			DrawDebugLine(GetWorld(), h.TraceStart, h.Location, FColor(255, 0, 0, 255), false, 10*dt, 0, 1);
			//DrawDebugCircle(GetWorld(), h.Location, 1.f, 4, FColor(255, 0, 0, 255), false, .1, 0, 1);
		}
	}
}

void ASensorLidar::InitToNode(AROS2Node *Node)
{
	if (IsValid(Node))
	{
		Node->AddPublisher(LidarPublisher);
	}
}

void ASensorLidar::GetData(TArray<FHitResult>& hits, float& time)
{
	// what about the rest of the information?
	hits = RecordedHits;
	time = TimeOfLastScan;
}

FLaserScanData ASensorLidar::GetROS2Data() const
{
	FLaserScanData retValue;
	retValue.sec = (int32_t)TimeOfLastScan;
	unsigned long long ns = (unsigned long long)(TimeOfLastScan * 1000000000.0f);
	retValue.nanosec = (uint32_t)(ns - (retValue.sec * 1000000000ul));
	
	retValue.frame_id = FName("Lidar");

	retValue.angle_min = FMath::DegreesToRadians(StartAngle+FOVHorizontal);
	retValue.angle_max = FMath::DegreesToRadians(StartAngle);
	retValue.angle_increment = FMath::DegreesToRadians(DHAngle);
	retValue.time_increment = dt / nSamplesPerScan;
	retValue.scan_time = dt;
	retValue.range_min = MinRange*.01;
	retValue.range_max = MaxRange*.01;

	//UE_LOG(LogROS2Sensor, Error, TEXT("Recorded hits distance (%d entries): %f %f %f %f %f"), RecordedHits.Num(), RecordedHits.Last(0).Distance*.01, RecordedHits.Last(1).Distance*.01, RecordedHits.Last(2).Distance*.01, RecordedHits.Last(3).Distance*.01, RecordedHits.Last(4).Distance*.01);

	retValue.ranges.Empty();
	// note that angles are reversed compared to rviz
	// ROS is right handed
	// UE4 is left handed
	for (int i=0; i<RecordedHits.Num(); i++)
	{
		retValue.ranges.Add(RecordedHits.Last(i).Distance*.01); // convert to [m]
	}

	return retValue;
}