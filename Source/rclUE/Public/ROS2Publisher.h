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
#include "ROS2NodeComponent.h"
#include "ROS2Topic.h"

#include "ROS2Publisher.generated.h"

/**
 * @brief ROS2 Publisher class.
 *
 */
UCLASS(ClassGroup = (Custom), Blueprintable, meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2Publisher : public UROS2Topic
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
                                           float InPubFrequency);

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

    //! Publish frequency. if this value > 0, this will update and publish msg periodically.
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PublicationFrequencyHz = 1.f;

    //! Delegate which is Bound with #UpdateMessage by #SetDefaultDelegates
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTopicCallback UpdateDelegate;

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

    /**
     * @brief Bind #UpdateMessage with #UpdateDelegate
     *
     */
    UFUNCTION(BlueprintCallable)
    void SetDefaultDelegates();

    /**
     * @brief Set the Delegates object.
     *
     * @param InUpdateDelegate
     */
    UFUNCTION(BlueprintCallable)
    void SetDelegates(const FTopicCallback& InUpdateDelegate);

    /**
     * @brief Publish msg.
     *
     */
    UFUNCTION(BlueprintCallable)
    void Publish();

protected:
    //! Timer handler for periodic publisher
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    FTimerHandle TimerHandle;

    //! Last published msg.
    const void* PublishedMsg = nullptr;

    //! ROS2 publisher
    rcl_publisher_t RclPublisher;

    //! Timer Manager
    UPROPERTY()
    URRTimerManager* TimerManager = nullptr;

    /**
     * @brief Initialize ROS2 Action. Should be implemented in ActionServer and ActionClient
     *
     */
    virtual void InitializeTopicComponent();
};
