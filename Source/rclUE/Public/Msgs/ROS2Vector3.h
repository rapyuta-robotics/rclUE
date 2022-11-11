#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/vector3.h"



#include "ROS2Vector3.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSVector3
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Vector3;

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

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        x = in_ros_data.x;
        y = in_ros_data.y;
        z = in_ros_data.z;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        out_ros_data.x = x;
        out_ros_data.y = y;
        out_ros_data.z = z;
    }
};

UCLASS()
class RCLUE_API UROS2Vector3 : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Vector3;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__Vector3__init(&vector3_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__Vector3__fini(&vector3_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Vector3);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSVector3& Input)
    {
        Input.SetROS2(vector3_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSVector3& Output) const
    {
        Output.SetFromROS2(vector3_msg);
    }

    virtual void* Get() override
    {
        return &vector3_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename vector3_msg;
};
