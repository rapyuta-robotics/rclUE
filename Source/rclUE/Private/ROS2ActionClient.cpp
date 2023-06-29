// Copyright 2020-2023 Rapyuta Robotics Co., Ltd.

#include "ROS2ActionClient.h"

#include "rclcUtilities.h"

UROS2ActionClient* UROS2ActionClient::CreateActionClient(UObject* InOwner,
                                                         const FString& InActionName,
                                                         const TSubclassOf<UROS2GenericAction>& InActionClass,
                                                         const FActionCallback& InGoalResponseDelegate,
                                                         const FActionCallback& InResultResponseDelegate,
                                                         const FActionCallback& InFeedbackDelegate,
                                                         const FSimpleCallback& InCancelResponseDelegate,
                                                         const UROS2QoS InGoalQoS,
                                                         const UROS2QoS InResultQoS,
                                                         const UROS2QoS InFeedbackQoS,
                                                         const UROS2QoS InCancelQoS)
{
    UROS2ActionClient* client = NewObject<UROS2ActionClient>(InOwner);
    client->ActionClass = InActionClass;
    client->ActionName = InActionName;
    client->GoalQoS = InGoalQoS;
    client->ResultQoS = InResultQoS;
    client->FeedbackQoS = InFeedbackQoS;
    client->CancelQoS = InCancelQoS;
    client->SetDelegates(InFeedbackDelegate, InResultResponseDelegate, InGoalResponseDelegate, InCancelResponseDelegate);
    return client;
}

void UROS2ActionClient::InitializeActionComponent()
{
    const rosidl_action_type_support_t* action_type_support = Action->GetTypeSupport();

    client = rcl_action_get_zero_initialized_client();
    rcl_action_client_options_t client_opt = rcl_action_client_get_default_options();

    client_opt.goal_service_qos = QoS_LUT[GoalQoS];
    client_opt.result_service_qos = QoS_LUT[ResultQoS];
    client_opt.cancel_service_qos = QoS_LUT[CancelQoS];
    client_opt.feedback_topic_qos = QoS_LUT[FeedbackQoS];
    client_opt.status_topic_qos = QoS_LUT[UROS2QoS::Default];    // status is not supported yet.

    rcl_ret_t rc =
        rcl_action_client_init(&client, OwnerNode->GetNode(), action_type_support, TCHAR_TO_UTF8(*ActionName), &client_opt);
}

void UROS2ActionClient::Destroy()
{
    Super::Destroy();

    bool res = true;
    IS_ROS2NODE_INITED(OwnerNode, GetName(), res);
    if (res)
    {
        RCSOFTCHECK(rcl_action_client_fini(&client, OwnerNode->GetNode()));
    }
}

void UROS2ActionClient::ProcessReady(rcl_wait_set_t* wait_set)
{
    bool res = true;
    IS_ACTION_INITED(OwnerNode, GetName(), res);
    if (!res)
    {
        return;
    }

    TArray<bool, TFixedAllocator<5>> IsReady = {false, false, false, false, false};
    RCSOFTCHECK(rcl_action_client_wait_set_get_entities_ready(
        wait_set, &client, &IsReady[0], &IsReady[1], &IsReady[2], &IsReady[3], &IsReady[4]));

    if (IsReady[0])
    {
        UE_LOG_WITH_INFO(LogROS2Action, Log, TEXT("8. Action Client - Received feedback"));
        void* data = Action->GetFeedbackMessage();
        RCSOFTCHECK(rcl_action_take_feedback(&client, data));
        FeedbackDelegate.ExecuteIfBound(Action);
    }

    if (IsReady[1])
    {
        ensureMsgf(false, TEXT("Action Client take status not implemented yet"));
    }

    if (IsReady[2])
    {
        UE_LOG_WITH_INFO(LogROS2Action, Log, TEXT("4. Action Client - Received goal response"));
        void* data = Action->GetGoalResponse();
        RCSOFTCHECK(rcl_action_take_goal_response(&client, &goal_res_id, data));
        GoalResponseDelegate.ExecuteIfBound(Action);
    }

    if (IsReady[3])
    {
        UE_LOG_WITH_INFO(LogROS2Action, Log, TEXT("D. Action Client - Received cancel response"));
        void* data = Action->GetCancelResponse();
        RCSOFTCHECK(rcl_action_take_cancel_response(&client, &cancel_res_id, data));
        CancelResponseDelegate.ExecuteIfBound();
    }

    if (IsReady[4])
    {
        UE_LOG_WITH_INFO(LogROS2Action, Log, TEXT("10. Action Client - Received result response"));
        void* data = Action->GetResultResponse();
        RCSOFTCHECK(rcl_action_take_result_response(&client, &result_res_id, data));
        ResultResponseDelegate.ExecuteIfBound(Action);
    }
}

bool UROS2ActionClient::SendGoal()
{
    bool res = true;
    IS_ACTION_INITED(OwnerNode, GetName(), res);
    if (!res)
    {
        return false;
    }

    bool bActionServerIsAvailable = false;
    RCSOFTCHECK(rcl_action_server_is_available(OwnerNode->GetNode(), &client, &bActionServerIsAvailable));
    if (bActionServerIsAvailable)
    {
        UE_LOG_WITH_INFO(LogROS2Action, Log, TEXT("1. Action Client - Send goal"));
        const void* goal = Action->GetGoalRequest();

        int64_t Seq;
        RCSOFTCHECK(rcl_action_send_goal_request(&client, goal, &Seq));
    }
    else
    {
        UE_LOG_WITH_INFO(LogROS2Action, Error, TEXT("Action Server Unavailable"));
    }

    return bActionServerIsAvailable;
}

void UROS2ActionClient::SendResultRequest()
{
    UE_LOG_WITH_INFO(LogROS2Action, Log, TEXT("5. Action Client - Send result request"));
    bool res = true;
    IS_ACTION_INITED(OwnerNode, GetName(), res);
    if (!res)
    {
        return;
    }

    const void* result = Action->GetResultRequest();

    int64_t Seq;
    RCSOFTCHECK(rcl_action_send_result_request(&client, result, &Seq));
}

void UROS2ActionClient::SendCancelRequest()
{
    UE_LOG_WITH_INFO(LogROS2Action, Log, TEXT("A. Action Client - Send cancel action request"));
    bool res = true;
    IS_ACTION_INITED(OwnerNode, GetName(), res);
    if (!res)
    {
        return;
    }

    action_msgs__srv__CancelGoal_Request* cancel_request = (action_msgs__srv__CancelGoal_Request*)Action->GetCancelRequest();
    cancel_request->goal_info.stamp = UROS2Utils::FloatToROSStamp(UGameplayStatics::GetTimeSeconds(GetWorld()));

    int64_t Seq;
    RCSOFTCHECK(rcl_action_send_cancel_request(&client, Action->GetCancelRequest(), &Seq));
}

void UROS2ActionClient::SetDelegates(const FActionCallback& InFeedbackDelegate,
                                     const FActionCallback& InResultResponseDelegate,
                                     const FActionCallback& InGoalResponseDelegate,
                                     const FSimpleCallback& InCancelResponseDelegate)
{
    if (!InFeedbackDelegate.IsBound())
    {
        UE_LOG_WITH_INFO(LogROS2Action, Warning, TEXT("FeedbackDelegate is not set - is this on purpose?"));
    }

    if (!InResultResponseDelegate.IsBound())
    {
        UE_LOG_WITH_INFO(LogROS2Action, Warning, TEXT("ResultResponseDelegate is not set - is this on purpose?"));
    }

    if (!InGoalResponseDelegate.IsBound())
    {
        UE_LOG_WITH_INFO(LogROS2Action, Warning, TEXT("GoalResponseDelegate is not set - is this on purpose?"));
    }

    if (!InCancelResponseDelegate.IsBound())
    {
        UE_LOG_WITH_INFO(LogROS2Action, Warning, TEXT("CancelResponseDelegate is not set - is this on purpose?"));
    }

    GoalResponseDelegate.Unbind();
    FeedbackDelegate.Unbind();
    ResultResponseDelegate.Unbind();
    CancelResponseDelegate.Unbind();
    GoalResponseDelegate = InGoalResponseDelegate;
    FeedbackDelegate = InFeedbackDelegate;
    ResultResponseDelegate = InResultResponseDelegate;
    CancelResponseDelegate = InCancelResponseDelegate;
}
