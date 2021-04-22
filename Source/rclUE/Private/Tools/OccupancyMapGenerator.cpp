// Fill out your copyright notice in the Description page of Project Settings.


#include "Tools/OccupancyMapGenerator.h"
#include <Runtime/Core/Public/Misc/Paths.h>
#include <Runtime/Core/Public/HAL/PlatformFilemanager.h>
#include <DrawDebugHelpers.h>


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

	FVector Origin = Center - Extent;

	float GridRes_cm = GridRes*100;

	// cell-centered sampling
	float XPos = Origin.X + GridRes_cm*.5;
	float YPos = Origin.Y + GridRes_cm*.5;
	
	int NCellsX = 2*Extent.X / GridRes_cm;
	int NCellsY = 2*Extent.Y / GridRes_cm;

	OccupancyGrid.Reserve(NCellsX*NCellsY);
	
	FCollisionQueryParams TraceParams = FCollisionQueryParams(FName(TEXT("Laser_Trace")), false, this);
	TraceParams.bReturnPhysicalMaterial = false;
	TraceParams.bIgnoreTouches = true;

	for (int j=0; j<NCellsY; j++)
	{
		for (int i=0; i<NCellsX; i++)
		{
			FVector OccupancyRayStart(Origin.X + GridRes_cm * (.5 + i), Origin.Y + GridRes_cm * (.5 + j), GridRes_cm);
			FVector OccupancyRayEnd(  Origin.X + GridRes_cm * (.5 + i), Origin.Y + GridRes_cm * (.5 + j), MaxVerticalHeight*100);

			FHitResult hit;
			GWorld->LineTraceSingleByChannel(hit, OccupancyRayStart, OccupancyRayEnd, ECC_Visibility, TraceParams, FCollisionResponseParams::DefaultResponseParam);

			OccupancyGrid.Add(hit.bBlockingHit ? 0 : 255);
		}
	}

	// write to file
	check(WriteToFile(NCellsX, NCellsY, Origin.X/100.f, -(Center.Y+Extent.Y)/100.f));
}

bool AOccupancyMapGenerator::WriteToFile(int width, int height, float originx, float originy)
{
	FString Directory = FPaths::ProjectContentDir();

	FString TargetFile = Directory + "/" + Filename + ".pgm";
	FString TargetInfoFile = Directory + "/" + Filename + ".yaml";

	FString yamlContent = "image: " + Filename + ".pgm\n"
						+ "resolution: " + FString::SanitizeFloat(GridRes) + "\n"
						+ "origin: [" + FString::SanitizeFloat(originx) + ", " + FString::SanitizeFloat(originy) + ", 0.0]\n" 
						+ "negate: 0\n"
						+ "occupied_thresh: 0.65\n"
						+ "free_thresh: 0.196\n";

	FString pgmHeader = "P5\n" + FString::FromInt(width) + " " + FString::FromInt(height) + "\n" + FString::FromInt(255) + "\n";

	TArrayView<uint8> data = OccupancyGrid;

	FFileHelper::SaveStringToFile(yamlContent, *TargetInfoFile);
	FFileHelper::SaveStringToFile(pgmHeader, *TargetFile);
	for (int i=0; i<height; i++)
	{
		FFileHelper::SaveArrayToFile(data.Slice(i*width, width), *TargetFile, &IFileManager::Get(), FILEWRITE_Append);
	}

	return true;
}

