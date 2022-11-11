#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/point_stamped.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Point.h"

#include "ROS2PointStamped.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSPointStamped
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__PointStamped;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector point = FVector(EForceInit::ForceInitToZero);
    // rclc type: geometry_msgs__msg__Point point

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        point = ROS2MsgToUE::From(in_ros_data.point);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        UEToROS2Msg::Set(point, out_ros_data.point);
    }
};

UCLASS()
class RCLUE_API UROS2PointStamped : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__PointStamped;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__PointStamped__init(&point_stamped_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__PointStamped__fini(&point_stamped_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, PointStamped);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPointStamped& Input)
    {
        Input.SetROS2(point_stamped_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPointStamped& Output) const
    {
        Output.SetFromROS2(point_stamped_msg);
    }

    virtual void* Get() override
    {
        return &point_stamped_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename point_stamped_msg;
};
