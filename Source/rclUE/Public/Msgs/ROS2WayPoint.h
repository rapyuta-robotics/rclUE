#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geographic_msgs/msg/way_point.h"


// Include directives for member types
#include "Msgs/ROS2UUID.h"
#include "Msgs/ROS2GeoPoint.h"
#include "Msgs/ROS2KeyValue.h"

#include "ROS2WayPoint.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSWayPoint
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__WayPoint;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSUUID id;
    // rclc type: unique_identifier_msgs__msg__UUID id

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGeographicCoordinates position;
    // rclc type: geographic_msgs__msg__GeoPoint position

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSKeyValue> props;
    // rclc type: geographic_msgs__msg__KeyValue__Sequence props

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        id.SetFromROS2(in_ros_data.id);
        position = ROS2MsgToUE::From(in_ros_data.position);
        props = ROS2MsgToUE::FromStructSequence<FROSKeyValue>(in_ros_data.props);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        id.SetROS2(out_ros_data.id);
        UEToROS2Msg::Set(position, out_ros_data.position);
        UEToROS2Msg::SetStructSequence(props, out_ros_data.props);
    }
};

UCLASS()
class RCLUE_API UROS2WayPoint : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__WayPoint;

public:
    virtual void Init() override
    {
        geographic_msgs__msg__WayPoint__init(&way_point_msg);
    }

    virtual void Fini() override
    {
        geographic_msgs__msg__WayPoint__fini(&way_point_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geographic_msgs, msg, WayPoint);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSWayPoint& Input)
    {
        Input.SetROS2(way_point_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSWayPoint& Output) const
    {
        Output.SetFromROS2(way_point_msg);
    }

    virtual void* Get() override
    {
        return &way_point_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename way_point_msg;
};
