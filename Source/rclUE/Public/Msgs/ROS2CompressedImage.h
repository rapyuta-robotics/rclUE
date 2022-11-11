#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/compressed_image.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"

#include "ROS2CompressedImage.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSCompressedImage
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__CompressedImage;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString format;
    // rclc type: rosidl_runtime_c__String format

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<int> data;
    // rclc type: rosidl_runtime_c__uint8__Sequence data

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        format = ROS2MsgToUE::From(in_ros_data.format);
        data = ROS2MsgToUE::FromSequence<int>(in_ros_data.data);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        UEToROS2Msg::Set(format, out_ros_data.format);
        UEToROS2Msg::SetSequence(data, out_ros_data.data);
    }
};

UCLASS()
class RCLUE_API UROS2CompressedImage : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__CompressedImage;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__CompressedImage__init(&compressed_image_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__CompressedImage__fini(&compressed_image_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, CompressedImage);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSCompressedImage& Input)
    {
        Input.SetROS2(compressed_image_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSCompressedImage& Output) const
    {
        Output.SetFromROS2(compressed_image_msg);
    }

    virtual void* Get() override
    {
        return &compressed_image_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename compressed_image_msg;
};
