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
#include "ROS2Node.h"

#include <rcl_action/action_server.h>

#include "ROS2ActionServer.generated.h"

/**
 * @brief  Class implementing ROS2 action servers. Wrapper class of rclc action server. Callbacks are set through the SetDelegates
 * method
 * @sa [rclc action client](https://docs.ros2.org/dashing/api/rcl_action/action__server_8h.html)
 * @sa [Unreal Engine
 * Delegates](https://docs.unrealengine.com/5.1/en-US/ProgrammingAndScripting/ProgrammingWithCPP/UnrealArchitecture/Delegates/)
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2ActionServer : public UROS2Action
{
    GENERATED_BODY()

public:
    static UROS2ActionServer* CreateActionServer(UObject* InOwner,
                                                 const FString& InActionName,
                                                 const TSubclassOf<UROS2GenericAction>& InActionClass,
                                                 const FActionCallback& InGoalDelegate,
                                                 const FSimpleCallback& InCancelDelegate,
                                                 const FSimpleCallback& InResultDelegate);

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
     * @brief Set the Delegates object
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
    FSimpleCallback CancelDelegate;
    FSimpleCallback ResultDelegate;

    /**
     * @brief Initialize ROS2 action client with rcl_action_server_init.
     * Set QOS for all goal, result, cancel, feedback and status
     *
     */
    virtual void InitializeActionComponent() override;
};
