#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/image.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"

#include "ROS2Image.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSImage
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__Image;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int height;
    // rclc type: uint32_t height

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int width;
    // rclc type: uint32_t width

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString encoding;
    // rclc type: rosidl_runtime_c__String encoding

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int is_bigendian;
    // rclc type: uint8_t is_bigendian

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int step;
    // rclc type: uint32_t step

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<int> data;
    // rclc type: rosidl_runtime_c__uint8__Sequence data

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        height = in_ros_data.height;
        width = in_ros_data.width;
        encoding = ROS2MsgToUE::From(in_ros_data.encoding);
        is_bigendian = in_ros_data.is_bigendian;
        step = in_ros_data.step;
        data = ROS2MsgToUE::FromSequence<int>(in_ros_data.data);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        out_ros_data.height = height;
        out_ros_data.width = width;
        UEToROS2Msg::Set(encoding, out_ros_data.encoding);
        out_ros_data.is_bigendian = is_bigendian;
        out_ros_data.step = step;
        UEToROS2Msg::SetSequence(data, out_ros_data.data);
    }
};

UCLASS()
class RCLUE_API UROS2Image : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__Image;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__Image__init(&image_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__Image__fini(&image_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Image);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSImage& Input)
    {
        Input.SetROS2(image_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSImage& Output) const
    {
        Output.SetFromROS2(image_msg);
    }

    virtual void* Get() override
    {
        return &image_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename image_msg;
};
