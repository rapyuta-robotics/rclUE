// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from action_msgs/srv/CancelGoal.srv - do not
// modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "action_msgs/srv/cancel_goal.h"

// rclUE
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2GoalInfo.h"
#include "action_msgs/msg/detail/goal_info__functions.h"

// Generated
#include "ROS2CancelGoal.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FROSCancelGoalReq
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSGoalInfo GoalInfo;

    FROSCancelGoalReq()
    {
    }

    void SetFromROS2(const action_msgs__srv__CancelGoal_Request& in_ros_data)
    {
        GoalInfo.SetFromROS2(in_ros_data.goal_info);
    }

    void SetROS2(action_msgs__srv__CancelGoal_Request& out_ros_data) const
    {
        GoalInfo.SetROS2(out_ros_data.goal_info);
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSCancelGoalRes
{
    GENERATED_BODY()

public:
    static constexpr int8 ERROR_NONE = 0;
    static constexpr int8 ERROR_REJECTED = 1;
    static constexpr int8 ERROR_UNKNOWN_GOAL_ID = 2;
    static constexpr int8 ERROR_GOAL_TERMINATED = 3;

    UPROPERTY(EditAnywhere)
    int8 ReturnCode = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSGoalInfo> GoalsCanceling;

    FROSCancelGoalRes()
    {
    }

    void SetFromROS2(const action_msgs__srv__CancelGoal_Response& in_ros_data)
    {
        ReturnCode = in_ros_data.return_code;

        UROS2Utils::SequenceROSToUEArray<action_msgs__msg__GoalInfo, FROSGoalInfo>(
            in_ros_data.goals_canceling.data, GoalsCanceling, in_ros_data.goals_canceling.size);
    }

    void SetROS2(action_msgs__srv__CancelGoal_Response& out_ros_data) const
    {
        out_ros_data.return_code = ReturnCode;

        action_msgs__msg__GoalInfo__Sequence__fini(&out_ros_data.goals_canceling);
        action_msgs__msg__GoalInfo__Sequence__init(&out_ros_data.goals_canceling, GoalsCanceling.Num());
        UROS2Utils::ArrayUEToROSSequence<action_msgs__msg__GoalInfo, FROSGoalInfo>(
            GoalsCanceling, out_ros_data.goals_canceling.data, GoalsCanceling.Num());
    }
};

UCLASS()
class RCLUE_API UROS2CancelGoalSrv : public UROS2GenericSrv
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable)
    virtual void Init() override;

    UFUNCTION(BlueprintCallable)
    virtual void Fini() override;

    virtual const rosidl_service_type_support_t* GetTypeSupport() const override;

    // used by client
    UFUNCTION(BlueprintCallable)
    void SetRequest(const FROSCancelGoalReq& Request);

    // used by service
    UFUNCTION(BlueprintCallable)
    void GetRequest(FROSCancelGoalReq& Request) const;

    // used by service
    UFUNCTION(BlueprintCallable)
    void SetResponse(const FROSCancelGoalRes& Response);

    // used by client
    UFUNCTION(BlueprintCallable)
    void GetResponse(FROSCancelGoalRes& Response) const;

    virtual void* GetRequest() override;
    virtual void* GetResponse() override;

    static int8 CONST_ERROR_NONE()
    {
        return FROSCancelGoalRes::ERROR_NONE;
    }
    static int8 CONST_ERROR_REJECTED()
    {
        return FROSCancelGoalRes::ERROR_REJECTED;
    }
    static int8 CONST_ERROR_UNKNOWN_GOAL_ID()
    {
        return FROSCancelGoalRes::ERROR_UNKNOWN_GOAL_ID;
    }
    static int8 CONST_ERROR_GOAL_TERMINATED()
    {
        return FROSCancelGoalRes::ERROR_GOAL_TERMINATED;
    }

private:
    virtual FString SrvRequestToString() const override;
    virtual FString SrvResponseToString() const override;

    action_msgs__srv__CancelGoal_Request CancelGoal_req;
    action_msgs__srv__CancelGoal_Response CancelGoal_res;
};
