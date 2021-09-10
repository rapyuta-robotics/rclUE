// Copyright (c) 2020-2021 Rapyuta Robotics Co., Ltd.

// Class implementing ROS2 action clients
// Callbacks are set through the SetDelegates method

#pragma once

#include "ROS2Action.h"

#include <rcl_action/action_client.h>

#include "ROS2ActionClient.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RCLUE_API UROS2ActionClient : public UROS2Action
{
    GENERATED_BODY()

public:
    virtual void Destroy() override;

    virtual void ProcessReady(rcl_wait_set_t* wait_set) override;

    UFUNCTION(BlueprintCallable)
    void UpdateAndSendGoal();

    UFUNCTION(BlueprintCallable)
    void GetResultRequest();

    UFUNCTION(BlueprintCallable)
    void CancelActionRequest();

    UFUNCTION(BlueprintCallable)
    void SetDelegates(const FActionCallback SetGoal,
                      const FActionCallback Feedback,
                      const FActionCallback Result,
                      const FSimpleCallback GoalResponse,
                      const FSimpleCallback Cancel);

    rcl_action_client_t client;

private:
    rmw_request_id_t goal_res_id;
    rmw_request_id_t result_res_id;
    rmw_request_id_t cancel_res_id;

    UPROPERTY()
    FActionCallback SetGoalDelegate;

    UPROPERTY()
    FActionCallback FeedbackDelegate;

    UPROPERTY()
    FActionCallback ResultDelegate;

    UPROPERTY()
    FSimpleCallback GoalResponseDelegate;

    UPROPERTY()
    FSimpleCallback CancelDelegate;

    virtual void InitializeActionComponent(const TEnumAsByte<UROS2QoS> QoS) override;
};
