#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "example_interfaces/msg/float32_multi_array.h"


// Include directives for member types
#include "Msgs/ROS2MultiArrayLayout.h"

#include "ROS2Float32MultiArray.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSFloat32MultiArray
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__Float32MultiArray;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSMultiArrayLayout layout;
    // rclc type: example_interfaces__msg__MultiArrayLayout layout

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> data;
    // rclc type: rosidl_runtime_c__float__Sequence data

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        layout.SetFromROS2(in_ros_data.layout);
        data = ROS2MsgToUE::FromSequence<float>(in_ros_data.data);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        layout.SetROS2(out_ros_data.layout);
        UEToROS2Msg::SetSequence(data, out_ros_data.data);
    }
};

UCLASS()
class RCLUE_API UROS2Float32MultiArray : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = example_interfaces__msg__Float32MultiArray;

public:
    virtual void Init() override
    {
        example_interfaces__msg__Float32MultiArray__init(&float32_multi_array_msg);
    }

    virtual void Fini() override
    {
        example_interfaces__msg__Float32MultiArray__fini(&float32_multi_array_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(example_interfaces, msg, Float32MultiArray);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSFloat32MultiArray& Input)
    {
        Input.SetROS2(float32_multi_array_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSFloat32MultiArray& Output) const
    {
        Output.SetFromROS2(float32_multi_array_msg);
    }

    virtual void* Get() override
    {
        return &float32_multi_array_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename float32_multi_array_msg;
};
