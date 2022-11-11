#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "example_interfaces/msg/multi_array_layout.h"


// Include directives for member types
#include "Msgs/ROS2MultiArrayDimension.h"

#include "ROS2MultiArrayLayout.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSMultiArrayLayout
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__MultiArrayLayout;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSMultiArrayDimension> dim;
    // rclc type: example_interfaces__msg__MultiArrayDimension__Sequence dim

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int data_offset;
    // rclc type: uint32_t data_offset

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        dim = ROS2MsgToUE::FromStructSequence<FROSMultiArrayDimension>(in_ros_data.dim);
        data_offset = in_ros_data.data_offset;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::SetStructSequence(dim, out_ros_data.dim);
        out_ros_data.data_offset = data_offset;
    }
};

UCLASS()
class RCLUE_API UROS2MultiArrayLayout : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__MultiArrayLayout;

public:
    virtual void Init() override
    {
        example_interfaces__msg__MultiArrayLayout__init(&multi_array_layout_msg);
    }

    virtual void Fini() override
    {
        example_interfaces__msg__MultiArrayLayout__fini(&multi_array_layout_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, MultiArrayLayout);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSMultiArrayLayout& Input)
    {
        Input.SetROS2(multi_array_layout_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSMultiArrayLayout& Output) const
    {
        Output.SetFromROS2(multi_array_layout_msg);
    }

    virtual void* Get() override
    {
        return &multi_array_layout_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename multi_array_layout_msg;
};
