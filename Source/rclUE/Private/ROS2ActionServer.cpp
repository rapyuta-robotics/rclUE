// Copyright 2020-2023 Rapyuta Robotics Co., Ltd.

#include "ROS2ActionServer.h"

#include "rclcUtilities.h"

UROS2ActionServer* UROS2ActionServer::CreateActionServer(UObject* InOwner,
                                                         const FString& InActionName,
                                                         const TSubclassOf<UROS2GenericAction>& InActionClass,
                                                         const FActionCallback& InGoalDelegate,
                                                         const FSimpleCallback& InResultDelegate,
                                                         const FSimpleCallback& InCancelDelegate,
                                                         const UROS2QoS InGoalQoS,
                                                         const UROS2QoS InResultQoS,
                                                         const UROS2QoS InFeedbackQoS,
                                                         const UROS2QoS InCancelQoS)
{
    UROS2ActionServer* server = NewObject<UROS2ActionServer>(InOwner);
    server->ActionClass = InActionClass;
    server->ActionName = InActionName;
    server->GoalQoS = InGoalQoS;
    server->ResultQoS = InResultQoS;
    server->CancelQoS = InCancelQoS;
    server->SetDelegates(InGoalDelegate, InCancelDelegate, InResultDelegate);
    return server;
}

void UROS2ActionServer::InitializeActionComponent()
{
    const rosidl_action_type_support_t* action_type_support = Action->GetTypeSupport();

    server = rcl_action_get_zero_initialized_server();
    rcl_action_server_options_t server_opt = rcl_action_server_get_default_options();

    server_opt.goal_service_qos = QoS_LUT[GoalQoS];
    server_opt.result_service_qos = QoS_LUT[ResultQoS];
    server_opt.cancel_service_qos = QoS_LUT[CancelQoS];
    server_opt.feedback_topic_qos = QoS_LUT[FeedbackQoS];
    server_opt.status_topic_qos = QoS_LUT[UROS2QoS::Default];    // status is not supported yet.

    rcl_allocator_t allocator = rcl_get_default_allocator();
    RCSOFTCHECK(rcl_ros_clock_init(&ros_clock, &allocator));
    rcl_ret_t rc = rcl_action_server_init(
        &server, OwnerNode->GetNode(), &ros_clock, action_type_support, TCHAR_TO_UTF8(*ActionName), &server_opt);
}

void UROS2ActionServer::Destroy()
{
    Super::Destroy();

    bool res = true;
    IS_ROS2NODE_INITED(OwnerNode, GetName(), res);
    if (res)
    {
        RCSOFTCHECK(rcl_action_server_fini(&server, OwnerNode->GetNode()));
        RCSOFTCHECK(rcl_ros_clock_fini(&ros_clock));
    }

    GoalDelegate.Unbind();
    CancelDelegate.Unbind();
    ResultDelegate.Unbind();
}

void UROS2ActionServer::ProcessReady(rcl_wait_set_t* wait_set)
{
    TArray<bool, TFixedAllocator<4>> IsReady = {false, false, false, false};
    RCSOFTCHECK(
        rcl_action_server_wait_set_get_entities_ready(wait_set, &server, &IsReady[0], &IsReady[1], &IsReady[2], &IsReady[3]));

    if (IsReady[0])
    {
        UE_LOG_WITH_INFO(LogROS2Action, Log, TEXT("2. Action Server - Received goal request"));
        void* data = Action->GetGoalRequest();
        RCSOFTCHECK(rcl_action_take_goal_request(&server, &goal_req_id, data));
        GoalDelegate.ExecuteIfBound(Action);
    }

    if (IsReady[1])
    {
        UE_LOG_WITH_INFO(LogROS2Action, Log, TEXT("B. Action Server - Received cancel action request"));
        void* data = Action->GetCancelRequest();
        RCSOFTCHECK(rcl_action_take_cancel_request(&server, &cancel_req_id, data));
        CancelDelegate.ExecuteIfBound();
    }

    if (IsReady[2])
    {
        UE_LOG_WITH_INFO(LogROS2Action, Log, TEXT("6. Action Server - Received result request"));
        void* data = Action->GetResultRequest();
        RCSOFTCHECK(rcl_action_take_result_request(&server, &result_req_id, data));
        ResultDelegate.ExecuteIfBound();
    }

    if (IsReady[3])
    {
        ensureMsgf(false, TEXT("Action Server goal expired not implemented yet"));
    }
}

void UROS2ActionServer::ProcessAndSendCancelResponse(const int InReturnCode)
{
    UE_LOG_WITH_INFO(LogROS2Action, Log, TEXT("C. Action Server - Send cancel response"));
    bool res = true;
    IS_ACTION_INITED(OwnerNode, GetName(), res);
    if (!res)
    {
        return;
    }

    rcl_action_cancel_request_t cancel_request = rcl_action_get_zero_initialized_cancel_request();
    cancel_request.goal_info.stamp = UROS2Utils::FloatToROSStamp(UGameplayStatics::GetTimeSeconds(GetWorld()));

    rcl_action_cancel_response_t cancel_response = rcl_action_get_zero_initialized_cancel_response();
    RCSOFTCHECK(rcl_action_process_cancel_request(&server, &cancel_request, &cancel_response));

    action_msgs__srv__CancelGoal_Response* CancelResponse = (action_msgs__srv__CancelGoal_Response*)Action->GetCancelResponse();
    CancelResponse = &cancel_response.msg;
    CancelResponse->return_code = InReturnCode;
    RCSOFTCHECK(rcl_action_send_cancel_response(&server, &cancel_req_id, Action->GetCancelResponse()));
}

void UROS2ActionServer::SendGoalResponse()
{
    UE_LOG_WITH_INFO(LogROS2Action, Log, TEXT("3. Action Server - Send goal response"));
    bool res = true;
    IS_ACTION_INITED(OwnerNode, GetName(), res);
    if (!res)
    {
        return;
    }

    RCSOFTCHECK(rcl_action_send_goal_response(&server, &goal_req_id, Action->GetGoalResponse()));
}

void UROS2ActionServer::SendFeedback()
{
    UE_LOG_WITH_INFO(LogROS2Action, Log, TEXT("7. Action Server - Publish feedback"));
    bool res = true;
    IS_ACTION_INITED(OwnerNode, GetName(), res);
    if (!res)
    {
        return;
    }

    RCSOFTCHECK(rcl_action_publish_feedback(&server, Action->GetFeedbackMessage()));
}

void UROS2ActionServer::SendResultResponse()
{
    UE_LOG_WITH_INFO(LogROS2Action, Log, TEXT("9. Action Server - Send result response"));
    bool res = true;
    IS_ACTION_INITED(OwnerNode, GetName(), res);
    if (!res)
    {
        return;
    }

    RCSOFTCHECK(rcl_action_send_result_response(&server, &result_req_id, Action->GetResultResponse()));
}

void UROS2ActionServer::SetDelegates(const FActionCallback& InGoalDelegate,
                                     const FSimpleCallback& InCancelDelegate,
                                     const FSimpleCallback& InResultDelegate)
{
    if (!InGoalDelegate.IsBound())
    {
        UE_LOG_WITH_INFO(LogROS2Action, Warning, TEXT("GoalDelegate is not set - is this on purpose?"));
    }

    if (!InCancelDelegate.IsBound())
    {
        UE_LOG_WITH_INFO(LogROS2Action, Warning, TEXT("CancelDelegate is not set - is this on purpose?"));
    }

    if (!InResultDelegate.IsBound())
    {
        UE_LOG_WITH_INFO(LogROS2Action, Warning, TEXT("ResultDelegate is not set - is this on purpose?"));
    }

    GoalDelegate.Unbind();
    CancelDelegate.Unbind();
    ResultDelegate.Unbind();

    GoalDelegate = InGoalDelegate;
    CancelDelegate = InCancelDelegate;
    ResultDelegate = InResultDelegate;
}
