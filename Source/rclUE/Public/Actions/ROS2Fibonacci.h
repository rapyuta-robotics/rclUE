// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/action/Fibonacci.action - do not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "action_msgs/srv/cancel_goal.h"
#include "example_interfaces/action/fibonacci.h"
#include "unique_identifier_msgs/msg/uuid.h"

// rclUE
#include "Actions/ROS2GenericAction.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)

#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Generated
#include "ROS2Fibonacci.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSFibonacciSGReq
{
    GENERATED_BODY()

public:
    TArray<uint, TFixedAllocator<16>> GoalId;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Order = 0;

    FROSFibonacciSGReq()
    {
        UROS2Utils::GenerateRandomUUID16(GoalId);
    }

    void SetFromROS2(const example_interfaces__action__Fibonacci_SendGoal_Request& in_ros_data)
    {
        for (int i = 0; i < 16; i++)
        {
            GoalId[i] = in_ros_data.goal_id.uuid[i];
        }

        Order = in_ros_data.goal.order;
    }

    void SetROS2(example_interfaces__action__Fibonacci_SendGoal_Request& out_ros_data) const
    {
        for (int i = 0; i < 16; i++)
        {
            out_ros_data.goal_id.uuid[i] = GoalId[i];
        }

        out_ros_data.goal.order = Order;
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSFibonacciSGRes
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bAccepted = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Stamp = 0.f;

    void SetFromROS2(const example_interfaces__action__Fibonacci_SendGoal_Response& in_ros_data)
    {
        bAccepted = in_ros_data.accepted;
        Stamp = UROS2Utils::ROSStampToFloat(in_ros_data.stamp);
    }

    void SetROS2(example_interfaces__action__Fibonacci_SendGoal_Response& out_ros_data) const
    {
        out_ros_data.accepted = bAccepted;
        out_ros_data.stamp = UROS2Utils::FloatToROSStamp(Stamp);
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSFibonacciGRReq
{
    GENERATED_BODY()

public:
    TArray<uint, TFixedAllocator<16>> GoalId;

    FROSFibonacciGRReq()
    {
        GoalId.Init(0, 16);
    }

    void SetFromROS2(const example_interfaces__action__Fibonacci_GetResult_Request& in_ros_data)
    {
        for (int i = 0; i < 16; i++)
        {
            GoalId[i] = in_ros_data.goal_id.uuid[i];
        }
    }

    void SetROS2(example_interfaces__action__Fibonacci_GetResult_Request& out_ros_data) const
    {
        for (int i = 0; i < 16; i++)
        {
            out_ros_data.goal_id.uuid[i] = GoalId[i];
        }
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSFibonacciGRRes
{
    GENERATED_BODY()

public:
    UPROPERTY()
    int8 GRResStatus = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<int> Sequence;

    FROSFibonacciGRRes()
    {
    }

    void SetFromROS2(const example_interfaces__action__Fibonacci_GetResult_Response& in_ros_data)
    {
        GRResStatus = in_ros_data.status;
        UROS2Utils::SequenceROSToUEArray<int, int>(in_ros_data.result.sequence.data, Sequence, in_ros_data.result.sequence.size);
    }

    void SetROS2(example_interfaces__action__Fibonacci_GetResult_Response& out_ros_data) const
    {
        out_ros_data.status = GRResStatus;
        if (out_ros_data.result.sequence.data)
        {
            rosidl_runtime_c__int32__Sequence__fini(&out_ros_data.result.sequence);
        }
        if (!rosidl_runtime_c__int32__Sequence__init(&out_ros_data.result.sequence, Sequence.Num()))
        {
            UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.result.sequence  "));
        }
        UROS2Utils::ArrayUEToROSSequence<int, int>(Sequence, out_ros_data.result.sequence.data, Sequence.Num());
    }
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSFibonacciFB
{
    GENERATED_BODY()

public:
    TArray<uint, TFixedAllocator<16>> GoalId;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<int> Sequence;

    FROSFibonacciFB()
    {
        GoalId.Init(0, 16);
    }

    void SetFromROS2(const example_interfaces__action__Fibonacci_FeedbackMessage& in_ros_data)
    {
        for (int i = 0; i < 16; i++)
        {
            GoalId[i] = in_ros_data.goal_id.uuid[i];
        }

        UROS2Utils::SequenceROSToUEArray<int, int>(
            in_ros_data.feedback.sequence.data, Sequence, in_ros_data.feedback.sequence.size);
    }

    void SetROS2(example_interfaces__action__Fibonacci_FeedbackMessage& out_ros_data) const
    {
        for (int i = 0; i < 16; i++)
        {
            out_ros_data.goal_id.uuid[i] = GoalId[i];
        }

        if (out_ros_data.feedback.sequence.data)
        {
            rosidl_runtime_c__int32__Sequence__fini(&out_ros_data.feedback.sequence);
        }
        if (!rosidl_runtime_c__int32__Sequence__init(&out_ros_data.feedback.sequence, Sequence.Num()))
        {
            UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.feedback.sequence  "));
        }
        UROS2Utils::ArrayUEToROSSequence<int, int>(Sequence, out_ros_data.feedback.sequence.data, Sequence.Num());
    }
};

UCLASS()
class RCLUE_API UROS2FibonacciAction : public UROS2GenericAction
{
    GENERATED_BODY()

public:
    virtual void Init() override;

    virtual void Fini() override;

    virtual const rosidl_action_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetGoalRequest(const FROSFibonacciSGReq& Goal);

    UFUNCTION(BlueprintCallable)
    void GetGoalRequest(FROSFibonacciSGReq& Goal) const;

    UFUNCTION(BlueprintCallable)
    void SetGoalResponse(const FROSFibonacciSGRes& Goal);

    UFUNCTION(BlueprintCallable)
    void GetGoalResponse(FROSFibonacciSGRes& Goal) const;

    UFUNCTION(BlueprintCallable)
    void SetResultRequest(const FROSFibonacciGRReq& Result);

    UFUNCTION(BlueprintCallable)
    void GetResultRequest(FROSFibonacciGRReq& Result) const;

    UFUNCTION(BlueprintCallable)
    void SetResultResponse(const FROSFibonacciGRRes& Result);

    UFUNCTION(BlueprintCallable)
    void GetResultResponse(FROSFibonacciGRRes& Result) const;

    UFUNCTION(BlueprintCallable)
    void SetFeedback(const FROSFibonacciFB& Feedback);

    UFUNCTION(BlueprintCallable)
    void GetFeedback(FROSFibonacciFB& Feedback) const;

    UFUNCTION(BlueprintCallable)
    void SetGoalIdToFeedback(FROSFibonacciFB& Feedback);

    virtual void* GetGoalRequest() override;
    virtual void* GetGoalResponse() override;
    virtual void* GetResultRequest() override;
    virtual void* GetResultResponse() override;
    virtual void* GetFeedbackMessage() override;

private:
    example_interfaces__action__Fibonacci_SendGoal_Request Fibonacci_goal_request;
    example_interfaces__action__Fibonacci_SendGoal_Response Fibonacci_goal_response;
    example_interfaces__action__Fibonacci_GetResult_Request Fibonacci_result_request;
    example_interfaces__action__Fibonacci_GetResult_Response Fibonacci_result_response;
    example_interfaces__action__Fibonacci_FeedbackMessage Fibonacci_feedback_message;
};
