/**
 * @file ROS2Publisher.h
 * @brief  Class implementing ROS2 publishers
 * Message type is defined by MsgClass
 * @copyright Copyright 2020-2022 Rapyuta Robotics Co., Ltd.
 *
 */

#pragma once

#include <Components/ActorComponent.h>
#include <CoreMinimal.h>

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "ROS2Node.h"

#include "ROS2Publisher.generated.h"

//! BP requires a custom-made callback thus it must be Dynamic
DECLARE_DYNAMIC_DELEGATE_OneParam(FPublisherUpdateCallback, UROS2GenericMsg*, InTopicMessage);

/**
 * @brief ROS2 Publisher class.
 *
 */
UCLASS(ClassGroup = (Custom), Blueprintable, meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2Publisher : public UActorComponent
{
    GENERATED_BODY()

public:
    /**
     * @brief Create a new UROS2Publisher of custom type
     *
     * @param InTopicName Topic name
     * @param InPublisherClass Custom output publisher type class
     * @param InMsgClass Custom message type class
     * @param InPubFrequency Publishing frequency
     */
    static UROS2Publisher* CreatePublisher(UObject* InOwner,
                                           const FString& InTopicName,
                                           const TSubclassOf<UROS2Publisher>& InPublisherClass,
                                           const TSubclassOf<UROS2GenericMsg>& InMsgClass,
                                           int32 InPubFrequency);

    /**
     * @brief Construct a new UROS2Publisher object
     *
     */
    UROS2Publisher();

    /**
     * @brief Initialize Publisher
     *
     * @param InROS2Node ROS2Node which this publisher belongs to
     */
    virtual void InitializeWithROS2(AROS2Node* InROS2Node)
    {
        RegisterToROS2Node(InROS2Node);
    }

    /**
     * @brief Register this publisher to input ROS2Node
     *
     * @param InROS2Node ROS2Node which this publisher belongs to
     */
    UFUNCTION()
    void RegisterToROS2Node(AROS2Node* InROS2Node);

    /**
     * @brief Initialize publisher with rcl_publisher_init, initialize message and start timer and
     *
     * @param QoS
     * @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)
     */
    UFUNCTION(BlueprintCallable)
    void Init(const TEnumAsByte<UROS2QoS> QoS);

    /**
     * @brief Create #UROS2GenericMsg instance and initialize it.
     *
     */
    UFUNCTION(BlueprintCallable)
    void InitializeMessage();

    /**
     * @brief Update Msg with delegate and publish msg.
     *
     */
    UFUNCTION(BlueprintCallable)
    void UpdateAndPublishMessage();

    /**
     * @brief Publish a message
     *
     * @tparam TMessageStruct
     * @param InMessage
     */
    template<typename TUEMessage, typename TUEStruct>
    void PublishMessage(const TUEStruct& InMessageData)
    {
        if (UROS2State::Initialized == State)
        {
            // Update [TopicMessage] with [InMessageData]
            CastChecked<TUEMessage>(TopicMessage)->SetMsg(InMessageData);

            // Publish [TopicMessage]
            Publish();
        }
        else
        {
            UE_LOG(LogTemp, Log, TEXT("PublishMessage() [%s] Publisher not yet initialized"), *GetName());
        }
    }

    /**
     * @brief Destroy publisher with rcl_publisher_fini
     *
     */
    UFUNCTION()
    virtual void Destroy();

    /**
     * @brief Stope publishing timer
     *
     */
    UFUNCTION()
    void StopPublishTimer();

    /**
     * @brief Start publishing topic with #PublicationFrequencyHz
     *
     */
    UFUNCTION()
    void StartPublishTimer();

    //! this information is redundant with Topic, but it's needed to initialize it
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString TopicName;

    //! Publish frequency. if this value > 0, this will update and publish msg periodically.
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PublicationFrequencyHz = 1000.f;

    //! this information is redundant with Topic, but it's needed to initialize it
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2GenericMsg> MsgClass;

    //! Delegate which is Bound with #UpdateMessage by #SetupUpdateCallback
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FPublisherUpdateCallback UpdateDelegate;

    /**
     * @brief Bind #UpdateMessage with #UpdateDelegate
     *
     */
    UFUNCTION(BlueprintCallable)
    void SetupUpdateCallback()
    {
        UpdateDelegate.BindDynamic(this, &UROS2Publisher::UpdateMessage);
    }

    /**
     * @brief Unbind #UpdateDelegate
     *
     */
    UFUNCTION(BlueprintCallable)
    virtual void RevokeUpdateCallback()
    {
        UpdateDelegate.Unbind();
    }

    /**
     * @brief Update msg. Should be implemented in child class.
     *
     * @param InMessage Input Message.
     */
    UFUNCTION()
    virtual void UpdateMessage(UROS2GenericMsg* InMessage)
    {
        checkNoEntry();
    }

    //! ROS2Node which own this publisher.
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    AROS2Node* OwnerNode = nullptr;

    //! Publisher state
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    TEnumAsByte<UROS2State> State = UROS2State::Created;

protected:
    /**
     * @brief Publish msg.
     *
     */
    UFUNCTION(BlueprintCallable)
    void Publish();

    //! Message Instance
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UROS2GenericMsg* TopicMessage;

    //! Timer handler for periodic publisher
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    FTimerHandle TimerHandle;

    //! Last published msg.
    const void* PublishedMsg = nullptr;

    //! ROS2 publisher
    rcl_publisher_t RclPublisher;
};
