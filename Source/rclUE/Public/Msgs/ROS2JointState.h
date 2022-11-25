// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/JointState.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "sensor_msgs/msg/joint_state.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
#include "rosidl_runtime_c/string_functions.h"

// Generated
#include "ROS2JointState.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSJointState
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FString> Name;

    UPROPERTY(EditAnywhere)
    TArray<double> Position;

    UPROPERTY(EditAnywhere)
    TArray<double> Velocity;

    UPROPERTY(EditAnywhere)
    TArray<double> Effort;

    FROSJointState()
    {
    }

    void SetFromROS2(const sensor_msgs__msg__JointState& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        UROS2Utils::StringSequenceROSToUEArray<rosidl_runtime_c__String>(in_ros_data.name.data, Name, in_ros_data.name.size);

        UROS2Utils::SequenceROSToUEArray<double, double>(in_ros_data.position.data, Position, in_ros_data.position.size);

        UROS2Utils::SequenceROSToUEArray<double, double>(in_ros_data.velocity.data, Velocity, in_ros_data.velocity.size);

        UROS2Utils::SequenceROSToUEArray<double, double>(in_ros_data.effort.data, Effort, in_ros_data.effort.size);
    }

    void SetROS2(sensor_msgs__msg__JointState& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        if (out_ros_data.name.data)
        {
            rosidl_runtime_c__String__Sequence__fini(&out_ros_data.name);
        }
        if (!rosidl_runtime_c__String__Sequence__init(&out_ros_data.name, Name.Num()))
        {
            UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.name  "));
        }
        UROS2Utils::StringArrayUEToROSSequence(Name, out_ros_data.name.data, Name.Num());

        if (out_ros_data.position.data)
        {
            rosidl_runtime_c__float64__Sequence__fini(&out_ros_data.position);
        }
        if (!rosidl_runtime_c__float64__Sequence__init(&out_ros_data.position, Position.Num()))
        {
            UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.position  "));
        }
        UROS2Utils::ArrayUEToROSSequence<double, double>(Position, out_ros_data.position.data, Position.Num());

        if (out_ros_data.velocity.data)
        {
            rosidl_runtime_c__float64__Sequence__fini(&out_ros_data.velocity);
        }
        if (!rosidl_runtime_c__float64__Sequence__init(&out_ros_data.velocity, Velocity.Num()))
        {
            UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.velocity  "));
        }
        UROS2Utils::ArrayUEToROSSequence<double, double>(Velocity, out_ros_data.velocity.data, Velocity.Num());

        if (out_ros_data.effort.data)
        {
            rosidl_runtime_c__float64__Sequence__fini(&out_ros_data.effort);
        }
        if (!rosidl_runtime_c__float64__Sequence__init(&out_ros_data.effort, Effort.Num()))
        {
            UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.effort  "));
        }
        UROS2Utils::ArrayUEToROSSequence<double, double>(Effort, out_ros_data.effort.data, Effort.Num());
    }
};

UCLASS()
class RCLUE_API UROS2JointStateMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSJointState& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSJointState& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    sensor_msgs__msg__JointState joint_state_msg;
};
