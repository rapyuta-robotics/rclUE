// Copyright 2021 Rapyuta Robotics Co., Ltd.

#include "Tools/TimeLogger.h"


ATimeLogger::ATimeLogger()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ATimeLogger::BeginPlay()
{
	Super::BeginPlay();

	// 1 minute worth of data at 200 FPS
	RealTimeHistory.Reserve(1000);
	SimTimeHistory.Reserve(1000);
}

void ATimeLogger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FDateTime CurrentRealTime = FDateTime::Now();
	float CurrentRealTime_s = CurrentRealTime.GetMinute()*60 + CurrentRealTime.GetSecond() + CurrentRealTime.GetMillisecond()*.001f;
	float CurrentSimTime  = UGameplayStatics::GetRealTimeSeconds(GWorld); // clock
	RealTimeHistory.Add(FString::SanitizeFloat(CurrentRealTime_s));
	SimTimeHistory.Add(FString::SanitizeFloat(CurrentSimTime));

	if (CurrentSimTime-StartSimTime >= MaxTime)
	{
		DumpData();
		UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, true);
	}
}

void ATimeLogger::StartTimer()
{
	StartSimTime = UGameplayStatics::GetRealTimeSeconds(GWorld);
	StartRealTime = FDateTime::Now();
}

void ATimeLogger::DumpData()
{
    FString Directory = FPaths::ProjectContentDir();
	FString TargetFile_RealTime = Directory + "/RealTime_UE4";
	FString TargetFile_SimTime = Directory + "/SimTime_UE4";

	FFileHelper::SaveStringArrayToFile(RealTimeHistory, *TargetFile_RealTime);
	FFileHelper::SaveStringArrayToFile(SimTimeHistory, *TargetFile_SimTime);
}
