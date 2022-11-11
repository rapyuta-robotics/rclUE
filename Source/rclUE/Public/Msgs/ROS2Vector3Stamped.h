#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/vector3_stamped.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Vector3.h"

#include "ROS2Vector3Stamped.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSVector3Stamped
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Vector3Stamped;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector vector = FVector(EForceInit::ForceInitToZero);
    // rclc type: geometry_msgs__msg__Vector3 vector

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        vector = ROS2MsgToUE::From(in_ros_data.vector);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        UEToROS2Msg::Set(vector, out_ros_data.vector);
    }
};

UCLASS()
class RCLUE_API UROS2Vector3Stamped : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Vector3Stamped;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__Vector3Stamped__init(&vector3_stamped_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__Vector3Stamped__fini(&vector3_stamped_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Vector3Stamped);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSVector3Stamped& Input)
    {
        Input.SetROS2(vector3_stamped_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSVector3Stamped& Output) const
    {
        Output.SetFromROS2(vector3_stamped_msg);
    }

    virtual void* Get() override
    {
        return &vector3_stamped_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename vector3_stamped_msg;
};
