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

DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FActionGoalCallback, UROS2GenericAction*, InAction /*Action*/);

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
     * @brief Send action goal response with rcl_action_send_goal_response
     *
     */
    UFUNCTION(BlueprintCallable)
    void SendGoalResponse();

    /**
     * @brief Process and send cancel response with rcl_action_process_cancel_request
     *
     */
    UFUNCTION(BlueprintCallable)
    void ProcessAndSendCancelResponse();

    /**
     * @brief Update and send feedback with rcl_action_publish_feedback
     *
     */
    UFUNCTION(BlueprintCallable)
    void UpdateAndSendFeedback();

    /**
     * @brief Update and send feedback with rcl_action_send_result_response
     *
     */
    UFUNCTION(BlueprintCallable)
    void UpdateAndSendResult();

    /**
     * @brief Set the Delegates object
     *
     * @param UpdateFeedback
     * @param UpdateResult
     * @param HandleGoal
     * @param HandleCancel
     * @param HandleAccepted
     */
    UFUNCTION(BlueprintCallable)
    void SetDelegates(const FActionCallback& UpdateFeedback,
                      const FActionCallback& UpdateResult,
                      const FActionGoalCallback& HandleGoal,
                      const FSimpleCallback& HandleCancel,
                      const FSimpleCallback& HandleAccepted);

    //! ROS2 action server from rclc
    rcl_action_server_t server;

private:
    rcl_clock_t ros_clock;
    rmw_request_id_t goal_req_id;
    rmw_request_id_t result_req_id;
    rmw_request_id_t cancel_req_id;

    FActionCallback UpdateFeedbackDelegate;
    FActionCallback UpdateResultDelegate;
    FActionGoalCallback HandleGoalDelegate;
    FSimpleCallback HandleCancelDelegate;
    FSimpleCallback HandleAcceptedDelegate;

    /**
     * @brief Initialize ROS2 action client with rcl_action_server_init.
     * Set QOS for all goal, result, cancel, feedback and status
     *
     * @param QoS Quality of Service
     * @sa [ROS2 QoS](https://docs.ros.org/en/rolling/Concepts/About-Quality-of-Service-Settings.html)
     */
    virtual void InitializeActionComponent(const TEnumAsByte<UROS2QoS> QoS) override;
};
