#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/multi_dof_joint_state.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Transform.h"
#include "Msgs/ROS2Twist.h"
#include "Msgs/ROS2Wrench.h"

#include "ROS2MultiDOFJointState.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSMultiDOFJointState
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__MultiDOFJointState;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FString> joint_names;
    // rclc type: rosidl_runtime_c__String__Sequence joint_names

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSTransform> transforms;
    // rclc type: geometry_msgs__msg__Transform__Sequence transforms

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSTwist> twist;
    // rclc type: geometry_msgs__msg__Twist__Sequence twist

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSWrench> wrench;
    // rclc type: geometry_msgs__msg__Wrench__Sequence wrench

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        joint_names = ROS2MsgToUE::FromSequence<FString>(in_ros_data.joint_names);
        transforms = ROS2MsgToUE::FromStructSequence<FROSTransform>(in_ros_data.transforms);
        twist = ROS2MsgToUE::FromStructSequence<FROSTwist>(in_ros_data.twist);
        wrench = ROS2MsgToUE::FromStructSequence<FROSWrench>(in_ros_data.wrench);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        UEToROS2Msg::SetSequence(joint_names, out_ros_data.joint_names);
        UEToROS2Msg::SetStructSequence(transforms, out_ros_data.transforms);
        UEToROS2Msg::SetStructSequence(twist, out_ros_data.twist);
        UEToROS2Msg::SetStructSequence(wrench, out_ros_data.wrench);
    }
};

UCLASS()
class RCLUE_API UROS2MultiDOFJointState : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__MultiDOFJointState;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__MultiDOFJointState__init(&multi_dof_joint_state_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__MultiDOFJointState__fini(&multi_dof_joint_state_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, MultiDOFJointState);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSMultiDOFJointState& Input)
    {
        Input.SetROS2(multi_dof_joint_state_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSMultiDOFJointState& Output) const
    {
        Output.SetFromROS2(multi_dof_joint_state_msg);
    }

    virtual void* Get() override
    {
        return &multi_dof_joint_state_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename multi_dof_joint_state_msg;
};
