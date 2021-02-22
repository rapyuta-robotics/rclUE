// Fill out your copyright notice in the Description page of Project Settings.


#include "Sensors/SensorLidar.h"
#include "Kismet/KismetMathLibrary.h"
#include "DrawDebugHelpers.h"


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

	LidarMesh->SetWorldScale3D(FVector(.1f,.1f,.1f));
}

// Called when the game starts or when spawned
void ASensorLidar::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASensorLidar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const float CurrentHAngle = 0.f;

	DHAngle = RotationFrequency * FOVHorizontal * DeltaTime;
	const int nSamplesPerLaserPerFrame = FMath::RoundHalfFromZero(float(nSamplesPerSecond) * DeltaTime);

	RecordedHits.Empty();
	RecordedHits.Reserve(nSamplesPerLaserPerFrame);
	
	for (int p=0; p<nSamplesPerLaserPerFrame; p++)
	{
		float remainder;
		const float HAngle = UKismetMathLibrary::FMod(CurrentHAngle + DHAngle * p, FOVHorizontal, remainder) - FOVHorizontal * .5f;
	
		FCollisionQueryParams TraceParams = FCollisionQueryParams(FName(TEXT("Laser_Trace")), true, this);
		TraceParams.bTraceComplex = true;
		TraceParams.bReturnPhysicalMaterial = false;

		FHitResult HitInfo(ForceInit);

		FTransform lidarTransform = GetTransform();
		FVector lidarPos = lidarTransform.GetLocation();
		FRotator lidarRot = lidarTransform.Rotator();
		FRotator laserRot(0, HAngle, 0);
		FRotator rot = UKismetMathLibrary::ComposeRotators(laserRot, lidarRot);

		FVector endPos = lidarPos + Range * UKismetMathLibrary::GetForwardVector(rot);

		if (GetWorld()->LineTraceSingleByChannel(HitInfo, lidarPos, endPos, ECC_Visibility, TraceParams, FCollisionResponseParams::DefaultResponseParam))
		{
			RecordedHits.Add(HitInfo);
		}
	}
	TimeOfLastScan = UGameplayStatics::GetTimeSeconds(GetWorld());

	// need to store on a structure associating hits with time?
	// GetROS2Data needs to get all data since the last Get? or the last within the last time interval?


	for (auto& h : RecordedHits)
	{
		DrawDebugLine(GetWorld(), h.TraceStart, h.Location, FColor(255, 0, 0, 255), true, .1, 0, 1);
		//DrawDebugCircle(GetWorld(), h.Location, 1.f, 4, FColor(255, 0, 0, 255), true, .1, 0, 1);
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

	retValue.angle_min = -PI;
	retValue.angle_max = PI;
	retValue.angle_increment = PI;
	retValue.time_increment = 1;
	retValue.scan_time = 1.f/RotationFrequency;
	retValue.range_min = 0;
	retValue.range_max = Range;

	for (auto& e : RecordedHits)
	{
		retValue.ranges.Add(e.Distance);
	}

	return retValue;
}