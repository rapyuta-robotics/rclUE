// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HAL/Runnable.h"
#include "HAL/RunnableThread.h"
#include "ROS2PublisherThread.h"
#include "ROS2Node.h"
#include "ROS2Publisher.generated.h"


UCLASS( ClassGroup=(Custom), abstract )
class RCLUE_API UROS2Publisher : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UROS2Publisher();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UFUNCTION(BlueprintCallable)
	void SetTopicName(FString Topic);
	
	UFUNCTION(BlueprintCallable)
	FString GetTopicName();
	
	UFUNCTION(BlueprintCallable)
	void SetPubFrequency(int32 PubFrequencyHz);
	
	UFUNCTION(BlueprintCallable)
	int32 GetPubFrequency();
	
	UFUNCTION(BlueprintCallable)
	AROS2Node* GetOwnerNode();

	virtual void InitializeMessage();
	virtual void UpdateMessage();

	virtual void Destroy();

protected:
	FROS2PublisherThread* PublisherThread = nullptr;
	FRunnableThread* RunningThread = nullptr;
	
	const rosidl_message_type_support_t* GetTypeSupport(FString MsgType);

	UPROPERTY(EditAnywhere)
	int32 PublicationFrequencyHz = 1000;
	
	UPROPERTY(EditAnywhere)
	FString TopicName = TEXT("DefaultTopic");

	rcl_publisher_t pub;
	AROS2Node* ownerNode;
};
