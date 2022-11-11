#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/joint_state.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"

#include "ROS2JointState.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSJointState
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__JointState;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FString> name;
    // rclc type: rosidl_runtime_c__String__Sequence name

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> position;
    // rclc type: rosidl_runtime_c__double__Sequence position

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> velocity;
    // rclc type: rosidl_runtime_c__double__Sequence velocity

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> effort;
    // rclc type: rosidl_runtime_c__double__Sequence effort

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        name = ROS2MsgToUE::FromSequence<FString>(in_ros_data.name);
        position = ROS2MsgToUE::FromSequence<float>(in_ros_data.position);
        velocity = ROS2MsgToUE::FromSequence<float>(in_ros_data.velocity);
        effort = ROS2MsgToUE::FromSequence<float>(in_ros_data.effort);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        UEToROS2Msg::SetSequence(name, out_ros_data.name);
        UEToROS2Msg::SetSequence(position, out_ros_data.position);
        UEToROS2Msg::SetSequence(velocity, out_ros_data.velocity);
        UEToROS2Msg::SetSequence(effort, out_ros_data.effort);
    }
};

UCLASS()
class RCLUE_API UROS2JointState : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__JointState;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__JointState__init(&joint_state_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__JointState__fini(&joint_state_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, JointState);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSJointState& Input)
    {
        Input.SetROS2(joint_state_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSJointState& Output) const
    {
        Output.SetFromROS2(joint_state_msg);
    }

    virtual void* Get() override
    {
        return &joint_state_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename joint_state_msg;
};
