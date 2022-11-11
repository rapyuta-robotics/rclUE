#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/transform.h"


// Include directives for member types
#include "Msgs/ROS2Vector3.h"
#include "Msgs/ROS2Quaternion.h"

#include "ROS2Transform.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSTransform
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Transform;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector translation = FVector(EForceInit::ForceInitToZero);
    // rclc type: geometry_msgs__msg__Vector3 translation

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FQuat rotation = FQuat(EForceInit::ForceInitToZero);
    // rclc type: geometry_msgs__msg__Quaternion rotation

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        translation = ROS2MsgToUE::From(in_ros_data.translation);
        rotation = ROS2MsgToUE::From(in_ros_data.rotation);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::Set(translation, out_ros_data.translation);
        UEToROS2Msg::Set(rotation, out_ros_data.rotation);
    }
};

UCLASS()
class RCLUE_API UROS2Transform : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Transform;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__Transform__init(&transform_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__Transform__fini(&transform_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Transform);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSTransform& Input)
    {
        Input.SetROS2(transform_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSTransform& Output) const
    {
        Output.SetFromROS2(transform_msg);
    }

    virtual void* Get() override
    {
        return &transform_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename transform_msg;
};
