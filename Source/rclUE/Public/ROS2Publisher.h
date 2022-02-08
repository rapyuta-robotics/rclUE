// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

// Class implementing ROS2 publishers
// Message type is defined by MsgClass

#pragma once

#include <Components/ActorComponent.h>
#include <CoreMinimal.h>
#include <ROS2Node.h>

#include "ROS2Publisher.generated.h"

// BP requires a custom-made callback thus it must be Dynamic
DECLARE_DYNAMIC_DELEGATE_OneParam(FPublisherUpdateCallback, UROS2GenericMsg*, InTopicMessage);

UCLASS(ClassGroup = (Custom), Blueprintable, meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2Publisher : public UActorComponent
{
    GENERATED_BODY()

public:
    UROS2Publisher();

    virtual void InitializeWithROS2(AROS2Node* InROS2Node)
    {
        RegisterToROS2Node(InROS2Node);
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
    int32 PublicationFrequencyHz = 100;

    // this information is redundant with Topic, but it's needed to initialize it
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2GenericMsg> MsgClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FPublisherUpdateCallback UpdateDelegate;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bPublish = true;

    UFUNCTION(BlueprintCallable)
    void SetupUpdateCallback()
    {
        UpdateDelegate.BindDynamic(this, &UROS2Publisher::UpdateMessage);
    }

    UFUNCTION(BlueprintCallable)
    virtual void RevokeUpdateCallback()
    {
        UpdateDelegate.Unbind();
    }

    UFUNCTION()
    virtual void UpdateMessage(UROS2GenericMsg* InMessage)
    {
        checkNoEntry();
    }

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    AROS2Node* OwnerNode = nullptr;

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
