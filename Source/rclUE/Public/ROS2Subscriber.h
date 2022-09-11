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
UCLASS(ClassGroup = (Custom), Blueprintable, meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2Subscriber : public UROS2Topic
{
    GENERATED_BODY()

public:

    /**
     * @brief Destroy subscriber with rcl_subscriber_fini
     *
     */
    UFUNCTION()
    virtual void Destroy() override;

    //! Delegate which is Bound with #UpdateMessage by #SetupUpdateCallback
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FSubscriberUpdateCallback UpdateDelegate;

    /**
     * @brief Bind #UpdateMessage with #UpdateDelegate
     *
     */
    UFUNCTION(BlueprintCallable)
    void SetupUpdateCallback()
    {
        UpdateDelegate.BindDynamic(this, &UROS2Subscriber::UpdateMessage);
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

    UFUNCTION(BlueprintCallable)
    void SetDelegates(const FTopicCallback& InUpdateDelegate);

    bool Ready = false;

protected:

    //! ROS2 subscriber
    rcl_subscription_t rcl_subscription;

    /**
     * @brief Initialize ROS2 Action. Should be implemented in ActionServer and ActionClient
     *
     */
    UFUNCTION()
    virtual void InitializeTopicComponent();
};
