/**
 * @file ROS2Subscriber.h
 * @brief  Class implementing ROS2 subscribers
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

#include "ROS2Subscriber.generated.h"

/**
 * @brief ROS2 Subscriber class.
 *
 */
UCLASS(ClassGroup = (Custom), Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2Subscriber : public UROS2Topic
{
    GENERATED_BODY()

public:
    /**
     * @brief Create a new UROS2Subscriber of custom type
     *
     * @param InTopicName Topic name
     * @param InMsgClass Custom message type class
     * @param InCallback Callback function
     */
    static UROS2Subscriber* CreateSubscriber(UObject* InOwner,
                                             const FString& InTopicName,
                                             const TSubclassOf<UROS2GenericMsg>& InMsgClass,
                                             const FSubscriptionCallback& InCallback,
                                             const UROS2QoS InQoS = UROS2QoS::Default);

    /**
     * @brief Destroy subscriber with rcl_subscriber_fini
     *
     */
    virtual void Destroy() override;

    //! Delegate which is Bound with #UpdateMessage by #SetDelegates
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FSubscriptionCallback Callback;

    /**
     * @brief Determine the relevant subscriber functions to call.
     */
    virtual void ProcessReady();

    UFUNCTION(BlueprintCallable)
    void SetDelegates(const FSubscriptionCallback& InCallback);

    bool Ready = false;

    //! ROS2 subscriber
    rcl_subscription_t rcl_subscription;

protected:
    /**
     * @brief Initialize ROS2 Subscriber.
     *
     */
    virtual void InitializeTopicComponent();
};

/**
 * @brief ROS2 Subscriber Component. Wrapper of #UROS2Subscriber for BP.
 *
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2SubscriberComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2Subscriber* Subscriber = nullptr;

    //! this is pass to #UROS2Subscriber::TopicName in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString TopicName = TEXT("");

    //! this is pass to #UROS2Subscriber::MsgClass in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2GenericMsg> MsgClass = UROS2GenericMsg::StaticClass();

    //! this is pass to #UROS2Subscriber::QoS in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QoS QoS = UROS2QoS::Default;

    //! this is pass to #UROS2Subscriber::Callback in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FSubscriptionCallback Callback;

    UFUNCTION(BlueprintCallable)
    virtual void DefaultCreateSubscriber()
    {
        if (Subscriber == nullptr)
        {
            Subscriber = UROS2Subscriber::CreateSubscriber(this, TopicName, MsgClass, Callback, QoS);
        }
    }

    virtual void BeginPlay() override
    {
        DefaultCreateSubscriber();
        Super::BeginPlay();
    };
};
