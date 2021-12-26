// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

// Class implementing ROS2 publishers
// Message type is defined by MsgClass

#pragma once

#include <Components/ActorComponent.h>
#include <CoreMinimal.h>
#include <ROS2Node.h>

#include "ROS2Publisher.generated.h"

DECLARE_DELEGATE_OneParam(FPublisherUpdateCallback, UROS2GenericMsg* /*InTopicMessage*/);
DECLARE_DYNAMIC_DELEGATE_OneParam(FPublisherUpdateCallbackBP, UROS2GenericMsg*, InTopicMessage);

UCLASS(ClassGroup = (Custom), Blueprintable, meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2Publisher : public UActorComponent
{
    GENERATED_BODY()

public:
    UROS2Publisher();

public:
    virtual void InitializeWithROS2(AROS2Node* InROS2Node)
    {
        checkNoEntry();
    }
    UFUNCTION()
    void RegisterToROS2Node(AROS2Node* InROS2Node);

    UFUNCTION(BlueprintCallable)
    void Init(const TEnumAsByte<UROS2QoS> QoS);

    UFUNCTION(BlueprintCallable)
    void InitializeMessage();

    UFUNCTION()
    void UpdateAndPublishMessage();

    UFUNCTION()
    virtual void Destroy();

    // this information is redundant with Topic, but it's needed to initialize it
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString TopicName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 PublicationFrequencyHz = 1000;

    // this information is redundant with Topic, but it's needed to initialize it
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2GenericMsg> MsgClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FPublisherUpdateCallbackBP UpdateDelegateBP;
    FPublisherUpdateCallback UpdateDelegate;

    UFUNCTION(BlueprintCallable)
    void SetupUpdateCallback()
    {
        UpdateDelegate.BindUObject(this, &UROS2Publisher::UpdateMessage);
    }
    UFUNCTION(BlueprintCallable)
    void RevokeUpdateCallback()
    {
        UpdateDelegate.Unbind();
        UpdateDelegateBP.Unbind();
    }
    UFUNCTION()
    virtual void UpdateMessage(UROS2GenericMsg* InMessage)
    {
        checkNoEntry();
    }

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

    const void* PublishedMsg = nullptr;

    rcl_publisher_t RclPublisher;
};
