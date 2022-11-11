#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/quaternion.h"



#include "ROS2Quaternion.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSQuaternion
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Quaternion;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float x;
    // rclc type: double x

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float y;
    // rclc type: double y

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float z;
    // rclc type: double z

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float w;
    // rclc type: double w

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        x = in_ros_data.x;
        y = in_ros_data.y;
        z = in_ros_data.z;
        w = in_ros_data.w;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        out_ros_data.x = x;
        out_ros_data.y = y;
        out_ros_data.z = z;
        out_ros_data.w = w;
    }
};

UCLASS()
class RCLUE_API UROS2Quaternion : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Quaternion;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__Quaternion__init(&quaternion_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__Quaternion__fini(&quaternion_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Quaternion);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSQuaternion& Input)
    {
        Input.SetROS2(quaternion_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSQuaternion& Output) const
    {
        Output.SetFromROS2(quaternion_msg);
    }

    virtual void* Get() override
    {
        return &quaternion_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename quaternion_msg;
};
