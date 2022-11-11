#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geographic_msgs/msg/route_network.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2UUID.h"
#include "Msgs/ROS2BoundingBox.h"
#include "Msgs/ROS2WayPoint.h"
#include "Msgs/ROS2RouteSegment.h"
#include "Msgs/ROS2KeyValue.h"

#include "ROS2RouteNetwork.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSRouteNetwork
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__RouteNetwork;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSUUID id;
    // rclc type: unique_identifier_msgs__msg__UUID id

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSBoundingBox bounds;
    // rclc type: geographic_msgs__msg__BoundingBox bounds

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSWayPoint> points;
    // rclc type: geographic_msgs__msg__WayPoint__Sequence points

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSRouteSegment> segments;
    // rclc type: geographic_msgs__msg__RouteSegment__Sequence segments

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSKeyValue> props;
    // rclc type: geographic_msgs__msg__KeyValue__Sequence props

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        id.SetFromROS2(in_ros_data.id);
        bounds.SetFromROS2(in_ros_data.bounds);
        points = ROS2MsgToUE::FromStructSequence<FROSWayPoint>(in_ros_data.points);
        segments = ROS2MsgToUE::FromStructSequence<FROSRouteSegment>(in_ros_data.segments);
        props = ROS2MsgToUE::FromStructSequence<FROSKeyValue>(in_ros_data.props);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        id.SetROS2(out_ros_data.id);
        bounds.SetROS2(out_ros_data.bounds);
        UEToROS2Msg::SetStructSequence(points, out_ros_data.points);
        UEToROS2Msg::SetStructSequence(segments, out_ros_data.segments);
        UEToROS2Msg::SetStructSequence(props, out_ros_data.props);
    }
};

UCLASS()
class RCLUE_API UROS2RouteNetwork : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__RouteNetwork;

public:
    virtual void Init() override
    {
        geographic_msgs__msg__RouteNetwork__init(&route_network_msg);
    }

    virtual void Fini() override
    {
        geographic_msgs__msg__RouteNetwork__fini(&route_network_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geographic_msgs, msg, RouteNetwork);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSRouteNetwork& Input)
    {
        Input.SetROS2(route_network_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSRouteNetwork& Output) const
    {
        Output.SetFromROS2(route_network_msg);
    }

    virtual void* Get() override
    {
        return &route_network_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename route_network_msg;
};
