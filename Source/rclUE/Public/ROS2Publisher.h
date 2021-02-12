// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ROS2Node.h"
#include "ROS2Publisher.generated.h"


// Should this be an interface instead?
UCLASS( ClassGroup=(Custom), Blueprintable, abstract )
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

	virtual void InitializeMessage() PURE_VIRTUAL(UROS2Publisher::InitializeMessage,);
	virtual void UpdateAndPublishMessage() PURE_VIRTUAL(UROS2Publisher::UpdateAndPublishMessage,);
	virtual const rosidl_message_type_support_t* GetTypeSupport() PURE_VIRTUAL(UROS2Publisher::GetTypeSupport,return nullptr;);

	virtual void Destroy();

protected:	

	UPROPERTY(EditAnywhere)
	int32 PublicationFrequencyHz = 1000;
	
	UPROPERTY(EditAnywhere)
	FString TopicName = TEXT("DefaultTopic");

	AROS2Node* ownerNode;

	const void* pub_msg;
	rcl_publisher_t pub;
	
	FTimerHandle timerHandle;
};
