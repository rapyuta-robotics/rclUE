// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ROS2Node.h"
#include "ROS2Topic.h"
#include "ROS2Publisher.generated.h"


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
	void InitializeMessage();
	
	// with a callback function, this might not needed anymore, eliminating the need to create Publisher classes for each MsgClass
	UFUNCTION(BlueprintNativeEvent)
	void UpdateAndPublishMessage();
	
	UFUNCTION()
	virtual void Destroy();

protected:
	UFUNCTION(BlueprintCallable)
	void Publish();

	// this information is redundant with Topic, but it's used to initialize it
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FName TopicName;

	// this information is redundant with Topic, but it's used to initialize it
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TSubclassOf<UROS2GenericMsg> MsgClass;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 PublicationFrequencyHz = 1000;
	
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	UROS2Topic* Topic;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	AROS2Node* ownerNode;
	
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	FTimerHandle timerHandle;

	const void* pub_msg;
	
	rcl_publisher_t pub;
};
