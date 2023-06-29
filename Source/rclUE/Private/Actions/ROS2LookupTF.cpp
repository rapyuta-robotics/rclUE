// Copyright 2023 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from tf2_msgs/action/LookupTransform.action - do not modify

#include "Actions/ROS2LookupTF.h"

const rosidl_action_type_support_t* UROS2LookupTFAction::GetTypeSupport() const
{
    return ROSIDL_GET_ACTION_TYPE_SUPPORT(tf2_msgs, LookupTransform);
}

void UROS2LookupTFAction::Init()
{
    Super::Init();
    tf2_msgs__action__LookupTransform_SendGoal_Request__init(&LookupTransform_goal_request);
    tf2_msgs__action__LookupTransform_SendGoal_Response__init(&LookupTransform_goal_response);
    tf2_msgs__action__LookupTransform_GetResult_Request__init(&LookupTransform_result_request);
    tf2_msgs__action__LookupTransform_GetResult_Response__init(&LookupTransform_result_response);
    tf2_msgs__action__LookupTransform_FeedbackMessage__init(&LookupTransform_feedback_message);
}

void UROS2LookupTFAction::Fini()
{
    tf2_msgs__action__LookupTransform_SendGoal_Request__fini(&LookupTransform_goal_request);
    tf2_msgs__action__LookupTransform_SendGoal_Response__fini(&LookupTransform_goal_response);
    tf2_msgs__action__LookupTransform_GetResult_Request__fini(&LookupTransform_result_request);
    tf2_msgs__action__LookupTransform_GetResult_Response__fini(&LookupTransform_result_response);
    tf2_msgs__action__LookupTransform_FeedbackMessage__fini(&LookupTransform_feedback_message);
    Super::Fini();
}

void UROS2LookupTFAction::SetGoalRequest(const FROSLookupTFSGReq& Goal)
{
    Goal.SetROS2(LookupTransform_goal_request);
}

void UROS2LookupTFAction::GetGoalRequest(FROSLookupTFSGReq& Goal) const
{
    Goal.SetFromROS2(LookupTransform_goal_request);
}

void UROS2LookupTFAction::SetGoalResponse(const FROSLookupTFSGRes& Goal)
{
    Goal.SetROS2(LookupTransform_goal_response);
}

void UROS2LookupTFAction::GetGoalResponse(FROSLookupTFSGRes& Goal) const
{
    Goal.SetFromROS2(LookupTransform_goal_response);
}

void UROS2LookupTFAction::SetResultRequest(const FROSLookupTFGRReq& Result)
{
    Result.SetROS2(LookupTransform_result_request);
}

void UROS2LookupTFAction::GetResultRequest(FROSLookupTFGRReq& Result) const
{
    Result.SetFromROS2(LookupTransform_result_request);
}

void UROS2LookupTFAction::SetResultResponse(const FROSLookupTFGRRes& Result)
{
    Result.SetROS2(LookupTransform_result_response);
}

void UROS2LookupTFAction::GetResultResponse(FROSLookupTFGRRes& Result) const
{
    Result.SetFromROS2(LookupTransform_result_response);
}

void UROS2LookupTFAction::SetFeedback(const FROSLookupTFFB& Feedback)
{
    Feedback.SetROS2(LookupTransform_feedback_message);
}

void UROS2LookupTFAction::GetFeedback(FROSLookupTFFB& Feedback) const
{
    Feedback.SetFromROS2(LookupTransform_feedback_message);
}

void UROS2LookupTFAction::SetGoalIdToFeedback(FROSLookupTFFB& Feedback)
{
    for (int i = 0; i < 16; i++)
    {
        Feedback.GoalId[i] = LookupTransform_goal_request.goal_id.uuid[i];
    }
}

void* UROS2LookupTFAction::GetGoalRequest()
{
    return &LookupTransform_goal_request;
}

void* UROS2LookupTFAction::GetGoalResponse()
{
    return &LookupTransform_goal_response;
}

void* UROS2LookupTFAction::GetResultRequest()
{
    return &LookupTransform_result_request;
}

void* UROS2LookupTFAction::GetResultResponse()
{
    return &LookupTransform_result_response;
}

void* UROS2LookupTFAction::GetFeedbackMessage()
{
    return &LookupTransform_feedback_message;
}
