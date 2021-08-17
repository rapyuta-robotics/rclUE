// Copyright (C) Rapyuta Robotics

#pragma once

#include <Msgs/ROS2OdometryMsg.h>
#include <Msgs/ROS2GenericMsg.h>
#include "CoreMinimal.h"
#include "ROS2Publisher.h"
#include "TFPublisher.h"
#include "Kismet/GameplayStatics.h"
#include "Components/ActorComponent.h"
#include "KinematicsMovementComponent.h"
#include "OdomPublisher.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RCLUE_API UOdomPublisher : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOdomPublisher();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FrameId = TEXT("");

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ChildFrameId = TEXT("");

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TopicName = TEXT("odom");

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool PublishTF = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PublicationFrequencyHz = 30;

	// todo not worked. need to investiage
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Float)
	// TArray<float, TFixedAllocator<36>> PoseCovariance;

	// UPROPERTY(EditAnywhere, BlueprintReadWrite)
	// TArray<double, TFixedAllocator<36>> TwistCovariance;

	UPROPERTY(EditAnywhere)
	FTransform InitialTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	APawn *Vehicle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UROS2Publisher *TopicPublisher;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTFPublisher *TFPublisher;

	UFUNCTION(BlueprintCallable)
	void InitOdomPublisher(APawn *InPawn, AROS2Node *Node);

	UFUNCTION(BlueprintCallable)
	void UpdateOdomMsg(UROS2GenericMsg *Message);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//temp
	FTransform UEToROS(FTransform Input);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
