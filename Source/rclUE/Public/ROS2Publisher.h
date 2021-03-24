// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ROS2Node.h"
#include "ROS2Publisher.generated.h"


DECLARE_DYNAMIC_DELEGATE_OneParam(FPublisherUpdateCallback, UROS2GenericMsg *, TopicMessage);

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
	void Init();
	
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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AROS2Node* ownerNode;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TEnumAsByte<UROS2State> State = UROS2State::Created;

protected:
	UFUNCTION(BlueprintCallable)
	void Publish();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UROS2GenericMsg *TopicMessage;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTimerHandle timerHandle;

	const void* pub_msg;
	
	rcl_publisher_t pub;
};
