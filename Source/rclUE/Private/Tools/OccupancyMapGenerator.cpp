// Copyright 2021 Rapyuta Robotics Co., Ltd.

#include "Tools/OccupancyMapGenerator.h"

#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/Core/Public/HAL/PlatformFilemanager.h"
#include "DrawDebugHelpers.h"

// Sets default values
AOccupancyMapGenerator::AOccupancyMapGenerator()
{
}

// Called when the game starts or when spawned
void AOccupancyMapGenerator::BeginPlay()
{
	Super::BeginPlay();

	// this could be done via shader if GPU raycast is accessible
	// result would be saved on texture
	FVector Center;
	FVector Extent;
	Map->GetActorBounds(false, Center, Extent, true);

	const FVector Origin = Center - Extent;

	const float GridRes_cm = GridRes * 100;

	// cell-centered sampling
	const float XPos = Origin.X + GridRes_cm * .5;
	const float YPos = Origin.Y + GridRes_cm * .5;

	const int NCellsX = 2 * Extent.X / GridRes_cm;
	const int NCellsY = 2 * Extent.Y / GridRes_cm;

	OccupancyGrid.Reserve(NCellsX * NCellsY);

	FCollisionQueryParams TraceParams = FCollisionQueryParams(FName(TEXT("Laser_Trace")), false, this);
	TraceParams.bReturnPhysicalMaterial = false;
	TraceParams.bIgnoreTouches = true;

	for (int j = 0; j < NCellsY; j++)
	{
		for (int i = 0; i < NCellsX; i++)
		{
			const FVector OccupancyRayStart(Origin.X + GridRes_cm * (.5 + i), Origin.Y + GridRes_cm * (.5 + j), GridRes_cm);
			const FVector OccupancyRayEnd(Origin.X + GridRes_cm * (.5 + i), Origin.Y + GridRes_cm * (.5 + j), MaxVerticalHeight * 100);

			FHitResult Hit;
			GWorld->LineTraceSingleByChannel(Hit, OccupancyRayStart, OccupancyRayEnd, ECC_Visibility, TraceParams, FCollisionResponseParams::DefaultResponseParam);

			OccupancyGrid.Add(Hit.bBlockingHit ? 0 : 255);
		}
	}

	// write to file
	check(WriteToFile(NCellsX, NCellsY, Origin.X / 100.f, -(Center.Y + Extent.Y) / 100.f));
}

const bool AOccupancyMapGenerator::WriteToFile(const int Width, int const Height, const float OriginX, const float OriginY)
{
	const FString Directory = FPaths::ProjectContentDir();

	const FString TargetFile = Directory + "/" + Filename + ".pgm";
	const FString TargetInfoFile = Directory + "/" + Filename + ".yaml";

	const FString YamlContent = "image: " + Filename + ".pgm\n" + "resolution: " + FString::SanitizeFloat(GridRes) + "\n" + "origin: [" + FString::SanitizeFloat(OriginX) + ", " + FString::SanitizeFloat(OriginY) + ", 0.0]\n" + "negate: 0\n" + "occupied_thresh: 0.65\n" + "free_thresh: 0.196\n";

	const FString PgmHeader = "P5\n" + FString::FromInt(Width) + " " + FString::FromInt(Height) + "\n" + FString::FromInt(255) + "\n";

	TArrayView<uint8> Data = OccupancyGrid;

	FFileHelper::SaveStringToFile(YamlContent, *TargetInfoFile);
	FFileHelper::SaveStringToFile(PgmHeader, *TargetFile);
	for (int i = 0; i < Height; i++)
	{
		FFileHelper::SaveArrayToFile(Data.Slice(i * Width, Width), *TargetFile, &IFileManager::Get(), FILEWRITE_Append);
	}

	return true;
}
