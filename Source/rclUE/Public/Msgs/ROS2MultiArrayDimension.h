#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "example_interfaces/msg/multi_array_dimension.h"



#include "ROS2MultiArrayDimension.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSMultiArrayDimension
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__MultiArrayDimension;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString label;
    // rclc type: rosidl_runtime_c__String label

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int size;
    // rclc type: uint32_t size

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int stride;
    // rclc type: uint32_t stride

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        label = ROS2MsgToUE::From(in_ros_data.label);
        size = in_ros_data.size;
        stride = in_ros_data.stride;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::Set(label, out_ros_data.label);
        out_ros_data.size = size;
        out_ros_data.stride = stride;
    }
};

UCLASS()
class RCLUE_API UROS2MultiArrayDimension : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__MultiArrayDimension;

public:
    virtual void Init() override
    {
        example_interfaces__msg__MultiArrayDimension__init(&multi_array_dimension_msg);
    }

    virtual void Fini() override
    {
        example_interfaces__msg__MultiArrayDimension__fini(&multi_array_dimension_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, MultiArrayDimension);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSMultiArrayDimension& Input)
    {
        Input.SetROS2(multi_array_dimension_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSMultiArrayDimension& Output) const
    {
        Output.SetFromROS2(multi_array_dimension_msg);
    }

    virtual void* Get() override
    {
        return &multi_array_dimension_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename multi_array_dimension_msg;
};
