#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "tf2_msgs/msg/tf2_error.h"



#include "ROS2TF2Error.generated.h"


UENUM(BlueprintType)
enum class UROSError : uint8
{
    NO_ERROR = 0,
    LOOKUP_ERROR = 1,
    CONNECTIVITY_ERROR = 2,
    EXTRAPOLATION_ERROR = 3,
    INVALID_ARGUMENT_ERROR = 4,
    TIMEOUT_ERROR = 5,
    TRANSFORM_ERROR = 6
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSTF2Error
{
    GENERATED_BODY()

    using ros_msg_c_typename = tf2_msgs__msg__TF2Error;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROSError error;
    // rclc type: uint8_t error

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString error_string;
    // rclc type: rosidl_runtime_c__String error_string

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        error = static_cast<UROSError>(in_ros_data.error);
        error_string = ROS2MsgToUE::From(in_ros_data.error_string);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        out_ros_data.error = static_cast<uint8>(error);
        UEToROS2Msg::Set(error_string, out_ros_data.error_string);
    }
};

UCLASS()
class RCLUE_API UROS2TF2Error : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = tf2_msgs__msg__TF2Error;

public:
    virtual void Init() override
    {
        tf2_msgs__msg__TF2Error__init(&tf2_error_msg);
    }

    virtual void Fini() override
    {
        tf2_msgs__msg__TF2Error__fini(&tf2_error_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(tf2_msgs, msg, TF2Error);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSTF2Error& Input)
    {
        Input.SetROS2(tf2_error_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSTF2Error& Output) const
    {
        Output.SetFromROS2(tf2_error_msg);
    }

    virtual void* Get() override
    {
        return &tf2_error_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename tf2_error_msg;
};
