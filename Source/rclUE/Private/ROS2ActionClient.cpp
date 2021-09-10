// Copyright (c) 2020-2021 Rapyuta Robotics Co., Ltd.

#include "ROS2ActionClient.h"

void UROS2ActionClient::InitializeActionComponent(const TEnumAsByte<UROS2QoS> QoS)
{
    const rosidl_action_type_support_t* action_type_support = Action->GetTypeSupport();

    client = rcl_action_get_zero_initialized_client();
    rcl_action_client_options_t client_opt = rcl_action_client_get_default_options();

    client_opt.goal_service_qos = QoS_LUT[QoS];
    client_opt.result_service_qos = QoS_LUT[QoS];
    client_opt.cancel_service_qos = QoS_LUT[QoS];
    client_opt.feedback_topic_qos = QoS_LUT[QoS];
    client_opt.status_topic_qos = QoS_LUT[QoS];

    rcl_ret_t rc =
        rcl_action_client_init(&client, OwnerNode->GetNode(), action_type_support, TCHAR_TO_UTF8(*ActionName), &client_opt);
}

void UROS2ActionClient::Destroy()
{
    Super::Destroy();

    if (OwnerNode != nullptr)
    {
        RCSOFTCHECK(rcl_action_client_fini(&client, OwnerNode->GetNode()));
    }
}

void UROS2ActionClient::ProcessReady(rcl_wait_set_t* wait_set)
{
    TArray<bool, TFixedAllocator<5>> IsReady = {false, false, false, false, false};
    RCSOFTCHECK(rcl_action_client_wait_set_get_entities_ready(
        wait_set, &client, &IsReady[0], &IsReady[1], &IsReady[2], &IsReady[3], &IsReady[4]));

    if (IsReady[0])
    {
        UE_LOG(LogROS2Action, Log, TEXT("8. Action Client - Received feedback (%s)"), *__LOG_INFO__);
        void* data = Action->GetFeedbackMessage();
        RCSOFTCHECK(rcl_action_take_feedback(&client, data));
        FeedbackDelegate.ExecuteIfBound(Action);
    }

    if (IsReady[1])
    {
        ensureMsgf(false, TEXT("Action Client take status not implemented yet (%s)"), *__LOG_INFO__);
    }

    if (IsReady[2])
    {
        UE_LOG(LogROS2Action, Log, TEXT("4. Action Client - Received goal response (%s)"), *__LOG_INFO__);
        void* data = Action->GetGoalResponse();
        RCSOFTCHECK(rcl_action_take_goal_response(&client, &goal_res_id, data));
        GoalResponseDelegate.ExecuteIfBound();
    }

    if (IsReady[3])
    {
        UE_LOG(LogROS2Action, Log, TEXT("D. Action Client - Received cancel response (%s)"), *__LOG_INFO__);
        void* data = Action->GetCancelResponse();
        RCSOFTCHECK(rcl_action_take_cancel_response(&client, &cancel_res_id, data));
        CancelDelegate.ExecuteIfBound();
    }

    if (IsReady[4])
    {
        UE_LOG(LogROS2Action, Log, TEXT("10. Action Client - Received result response (%s)"), *__LOG_INFO__);
        void* data = Action->GetResultResponse();
        RCSOFTCHECK(rcl_action_take_result_response(&client, &result_res_id, data));
        ResultDelegate.ExecuteIfBound(Action);
    }
}

void UROS2ActionClient::UpdateAndSendGoal()
{
    check(State == UROS2State::Initialized);
    check(IsValid(OwnerNode));

    bool ActionServerIsAvailable = false;
    RCSOFTCHECK(rcl_action_server_is_available(OwnerNode->GetNode(), &client, &ActionServerIsAvailable));
    if (ActionServerIsAvailable)
    {
        UE_LOG(LogROS2Action, Log, TEXT("1. Action Client - Send goal (%s)"), *__LOG_INFO__);
        SetGoalDelegate.ExecuteIfBound(Action);
        const void* goal = Action->GetGoalRequest();

        int64_t Seq;
        RCSOFTCHECK(rcl_action_send_goal_request(&client, goal, &Seq));
    }
    else
    {
        UE_LOG(LogROS2Action, Error, TEXT("Action Server Unavailable (%s)"), *__LOG_INFO__);
    }
}

void UROS2ActionClient::GetResultRequest()
{
    UE_LOG(LogROS2Action, Log, TEXT("5. Action Client - Send result request (%s)"), *__LOG_INFO__);
    const void* result = Action->GetResultRequest();

    int64_t Seq;
    RCSOFTCHECK(rcl_action_send_result_request(&client, result, &Seq));
}

void UROS2ActionClient::CancelActionRequest()
{
    UE_LOG(LogROS2Action, Log, TEXT("A. Action Client - Send cancel action request (%s)"), *__LOG_INFO__);
    action_msgs__srv__CancelGoal_Request* cancel_request = (action_msgs__srv__CancelGoal_Request*)Action->GetCancelRequest();
    float CancelTime = UGameplayStatics::GetTimeSeconds(GetWorld());
    cancel_request->goal_info.stamp.sec = static_cast<int32>(CancelTime);
    uint64 ns = static_cast<uint64>(CancelTime * 1e+09f);
    cancel_request->goal_info.stamp.nanosec = static_cast<uint32>(ns - (cancel_request->goal_info.stamp.sec * 1e+09));

    int64_t Seq;
    RCSOFTCHECK(rcl_action_send_cancel_request(&client, Action->GetCancelRequest(), &Seq));
}

void UROS2ActionClient::SetDelegates(const FActionCallback SetGoal,
                                     const FActionCallback Feedback,
                                     const FActionCallback Result,
                                     const FSimpleCallback GoalResponse,
                                     const FSimpleCallback Cancel)
{
    if (!SetGoalDelegate.IsBound())
    {
        UE_LOG(LogROS2Action, Warning, TEXT("SetGoalDelegate is not set - is this on purpose? (%s)"), *__LOG_INFO__);
    }

    if (!FeedbackDelegate.IsBound())
    {
        UE_LOG(LogROS2Action, Warning, TEXT("FeedbackDelegate is not set - is this on purpose? (%s)"), *__LOG_INFO__);
    }

    if (!ResultDelegate.IsBound())
    {
        UE_LOG(LogROS2Action, Warning, TEXT("ResultDelegate is not set - is this on purpose? (%s)"), *__LOG_INFO__);
    }

    if (!GoalResponseDelegate.IsBound())
    {
        UE_LOG(LogROS2Action, Warning, TEXT("GoalResponseDelegate is not set - is this on purpose? (%s)"), *__LOG_INFO__);
    }

    if (!CancelDelegate.IsBound())
    {
        UE_LOG(LogROS2Action, Warning, TEXT("CancelDelegate is not set - is this on purpose? (%s)"), *__LOG_INFO__);
    }

    SetGoalDelegate = SetGoal;
    GoalResponseDelegate = GoalResponse;
    FeedbackDelegate = Feedback;
    ResultDelegate = Result;
    CancelDelegate = Cancel;
}
