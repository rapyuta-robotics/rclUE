#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/polygon_stamped.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Polygon.h"

#include "ROS2PolygonStamped.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSPolygonStamped
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__PolygonStamped;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSPolygon polygon;
    // rclc type: geometry_msgs__msg__Polygon polygon

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        polygon.SetFromROS2(in_ros_data.polygon);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        polygon.SetROS2(out_ros_data.polygon);
    }
};

UCLASS()
class RCLUE_API UROS2PolygonStamped : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__PolygonStamped;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__PolygonStamped__init(&polygon_stamped_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__PolygonStamped__fini(&polygon_stamped_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, PolygonStamped);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPolygonStamped& Input)
    {
        Input.SetROS2(polygon_stamped_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPolygonStamped& Output) const
    {
        Output.SetFromROS2(polygon_stamped_msg);
    }

    virtual void* Get() override
    {
        return &polygon_stamped_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename polygon_stamped_msg;
};
