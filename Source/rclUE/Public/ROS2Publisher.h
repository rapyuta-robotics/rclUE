// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.

#pragma once

#include <Components/ActorComponent.h>
#include <CoreMinimal.h>
#include <ROS2Node.h>

#include "ROS2Publisher.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FPublisherUpdateCallback, UROS2GenericMsg*, TopicMessage);

UCLASS(ClassGroup = (Custom), Blueprintable, meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2Publisher : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UROS2Publisher();

public:
	UFUNCTION(BlueprintCallable)
	void Init(TEnumAsByte<UROS2QoS> QoS);

	UFUNCTION(BlueprintCallable)
	void InitializeMessage();

	// with a callback function, this might not needed anymore, eliminating the need to create Publisher classes for each MsgClass
	UFUNCTION(BlueprintNativeEvent)
	void UpdateAndPublishMessage();

	UFUNCTION()
	virtual void Destroy();

	// this information is redundant with Topic, but it's used to initialize it
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TopicName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PublicationFrequencyHz = 1000;

	// this information is redundant with Topic, but it's used to initialize it
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UROS2GenericMsg> MsgClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPublisherUpdateCallback UpdateDelegate;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	AROS2Node* OwnerNode;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TEnumAsByte<UROS2State> State = UROS2State::Created;

protected:
	UFUNCTION(BlueprintCallable)
	void Publish();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UROS2GenericMsg* TopicMessage;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTimerHandle TimerHandle;

	const void* pub_msg;

	rcl_publisher_t pub;
};
