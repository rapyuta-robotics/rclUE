/**
 * @file ROS2ActionServer.h
 * @brief   Class implementing ROS2 action servers.
 * Wrapper class of rclc action server.
 * Callbacks are set through the SetDelegates method.
 * @copyright Copyright 2020-2022 Rapyuta Robotics Co., Ltd.
 *
 */

#pragma once

#include "ROS2Action.h"
#include "ROS2NodeComponent.h"

#include <rcl_action/action_server.h>

#include "ROS2ActionServer.generated.h"

/**
 * @brief  Class implementing ROS2 action servers. Wrapper class of rclc action server. Callbacks are set through the SetDelegates
 * method
 * @sa [rclc action client](https://docs.ros2.org/dashing/api/rcl_action/action__server_8h.html)
 * @sa [Unreal Engine
 * Delegates](https://docs.unrealengine.com/5.1/en-US/ProgrammingAndScripting/ProgrammingWithCPP/UnrealArchitecture/Delegates/)
 */
UCLASS(ClassGroup = (Custom), Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2ActionServer : public UROS2Action
{
    GENERATED_BODY()

public:
    static UROS2ActionServer* CreateActionServer(UObject* InOwner,
                                                 const FString& InActionName,
                                                 const TSubclassOf<UROS2GenericAction>& InActionClass,
                                                 const FActionCallback& InGoalDelegate,
                                                 const FSimpleCallback& InResultDelegate,
                                                 const FSimpleCallback& InCancelDelegate,
                                                 const UROS2QoS InGoalQoS = UROS2QoS::Services,
                                                 const UROS2QoS InResultQoS = UROS2QoS::Services,
                                                 const UROS2QoS InFeedbackQoS = UROS2QoS::Default,
                                                 const UROS2QoS InCancelQoS = UROS2QoS::Services);

    /**
     * @brief Destroy action server from rclc
     *
     */
    virtual void Destroy() override;

    /**
     * @brief Determine the relevant action server functions to call.
     *
     * @param wait_set
     */
    virtual void ProcessReady(rcl_wait_set_t* wait_set) override;

    /**
     * @brief Process and send cancel response with rcl_action_process_cancel_request
     * @param InReturnCode return code
     * @sa [CancelGoal](https://docs.ros2.org/foxy/api/action_msgs/srv/CancelGoal.html)
     */
    UFUNCTION(BlueprintCallable)
    void ProcessAndSendCancelResponse(const int InReturnCode);

    /**
     * @brief Send action goal response with rcl_action_send_goal_response
     *
     */
    UFUNCTION(BlueprintCallable)
    void SendGoalResponse();

    /**
     * @brief Update and send feedback with rcl_action_publish_feedback
     *
     */
    UFUNCTION(BlueprintCallable)
    void SendFeedback();

    /**
     * @brief Update and send feedback with rcl_action_send_result_response
     *
     */
    UFUNCTION(BlueprintCallable)
    void SendResultResponse();

    /**
     * @brief Set the Delegates
     *
     * @param HandleGoal
     * @param HandleCancel
     * @param HandleAccepted
     */
    UFUNCTION(BlueprintCallable)
    void SetDelegates(const FActionCallback& InGoalDelegate,
                      const FSimpleCallback& InCancelDelegate,
                      const FSimpleCallback& InResultDelegate);

    //! ROS2 action server from rclc
    rcl_action_server_t server;

private:
    rcl_clock_t ros_clock;
    rmw_request_id_t goal_req_id;
    rmw_request_id_t result_req_id;
    rmw_request_id_t cancel_req_id;

    FActionCallback GoalDelegate;
    FSimpleCallback ResultDelegate;
    FSimpleCallback CancelDelegate;

    /**
     * @brief Initialize ROS2 action server with rcl_action_server_init.
     * Set QOS for all goal, result, cancel, feedback and status
     *
     */
    virtual void InitializeActionComponent() override;
};

/**
 * @brief ROS2 Action server Component. Wrapper of #UROS2ActionServer for BP.
 *
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2ActionServerComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2ActionServer* ActionServer = nullptr;

    //! this is pass to #UROS2ActionServer::ActionName in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ActionName = TEXT("");

    //! this is pass to #UROS2ActionServer::ActionClass in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UROS2GenericAction> ActionClass;

    //! this is pass to #UROS2ActionServer::CancelQoS in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QoS CancelQoS = UROS2QoS::Services;

    //! this is pass to #UROS2ActionServer::GoalQoS in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QoS GoalQoS = UROS2QoS::Services;

    //! this is pass to #UROS2ActionServer::ResultQoS in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QoS ResultQoS = UROS2QoS::Services;

    //! this is pass to #UROS2ActionServer::FeedbackQoS in #BeginPlay
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROS2QoS FeedbackQoS = UROS2QoS::Default;

    FActionCallback GoalDelegate;
    FSimpleCallback ResultDelegate;
    FSimpleCallback CancelDelegate;

    UFUNCTION(BlueprintCallable)
    virtual void DefaultCreateActionServer()
    {
        if (ActionServer == nullptr)
        {
            ActionServer = UROS2ActionServer::CreateActionServer(this,
                                                                 ActionName,
                                                                 ActionClass,
                                                                 GoalDelegate,
                                                                 ResultDelegate,
                                                                 CancelDelegate,
                                                                 GoalQoS,
                                                                 ResultQoS,
                                                                 FeedbackQoS,
                                                                 CancelQoS);
        }
    }

    virtual void BeginPlay() override
    {
        DefaultCreateActionServer();
        Super::BeginPlay();
    };
};
