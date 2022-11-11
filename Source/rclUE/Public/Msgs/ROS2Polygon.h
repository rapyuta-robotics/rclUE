#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geometry_msgs/msg/polygon.h"


// Include directives for member types
#include "Msgs/ROS2Point32.h"

#include "ROS2Polygon.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSPolygon
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Polygon;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FVector> points;
    // rclc type: geometry_msgs__msg__Point32__Sequence points

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        points = ROS2MsgToUE::FromSequence<FVector>(in_ros_data.points);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::SetSequence(points, out_ros_data.points);
    }
};

UCLASS()
class RCLUE_API UROS2Polygon : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geometry_msgs__msg__Polygon;

public:
    virtual void Init() override
    {
        geometry_msgs__msg__Polygon__init(&polygon_msg);
    }

    virtual void Fini() override
    {
        geometry_msgs__msg__Polygon__fini(&polygon_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Polygon);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPolygon& Input)
    {
        Input.SetROS2(polygon_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPolygon& Output) const
    {
        Output.SetFromROS2(polygon_msg);
    }

    virtual void* Get() override
    {
        return &polygon_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename polygon_msg;
};
