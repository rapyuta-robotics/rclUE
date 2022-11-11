#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/joy_feedback.h"



#include "ROS2JoyFeedback.generated.h"


UENUM(BlueprintType)
enum class UROSType : uint8
{
    TYPE_LED = 0,
    TYPE_RUMBLE = 1,
    TYPE_BUZZER = 2
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSJoyFeedback
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__JoyFeedback;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROSType type;
    // rclc type: uint8_t type

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int id;
    // rclc type: uint8_t id

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float intensity;
    // rclc type: float intensity

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        type = static_cast<UROSType>(in_ros_data.type);
        id = in_ros_data.id;
        intensity = in_ros_data.intensity;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        out_ros_data.type = static_cast<uint8>(type);
        out_ros_data.id = id;
        out_ros_data.intensity = intensity;
    }
};

UCLASS()
class RCLUE_API UROS2JoyFeedback : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__JoyFeedback;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__JoyFeedback__init(&joy_feedback_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__JoyFeedback__fini(&joy_feedback_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, JoyFeedback);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSJoyFeedback& Input)
    {
        Input.SetROS2(joy_feedback_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSJoyFeedback& Output) const
    {
        Output.SetFromROS2(joy_feedback_msg);
    }

    virtual void* Get() override
    {
        return &joy_feedback_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename joy_feedback_msg;
};
