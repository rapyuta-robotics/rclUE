#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geographic_msgs/msg/route_segment.h"


// Include directives for member types
#include "Msgs/ROS2UUID.h"
#include "Msgs/ROS2KeyValue.h"

#include "ROS2RouteSegment.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSRouteSegment
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__RouteSegment;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSUUID id;
    // rclc type: unique_identifier_msgs__msg__UUID id

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSUUID start;
    // rclc type: unique_identifier_msgs__msg__UUID start

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSUUID end;
    // rclc type: unique_identifier_msgs__msg__UUID end

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSKeyValue> props;
    // rclc type: geographic_msgs__msg__KeyValue__Sequence props

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        id.SetFromROS2(in_ros_data.id);
        start.SetFromROS2(in_ros_data.start);
        end.SetFromROS2(in_ros_data.end);
        props = ROS2MsgToUE::FromStructSequence<FROSKeyValue>(in_ros_data.props);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        id.SetROS2(out_ros_data.id);
        start.SetROS2(out_ros_data.start);
        end.SetROS2(out_ros_data.end);
        UEToROS2Msg::SetStructSequence(props, out_ros_data.props);
    }
};

UCLASS()
class RCLUE_API UROS2RouteSegment : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__RouteSegment;

public:
    virtual void Init() override
    {
        geographic_msgs__msg__RouteSegment__init(&route_segment_msg);
    }

    virtual void Fini() override
    {
        geographic_msgs__msg__RouteSegment__fini(&route_segment_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geographic_msgs, msg, RouteSegment);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSRouteSegment& Input)
    {
        Input.SetROS2(route_segment_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSRouteSegment& Output) const
    {
        Output.SetFromROS2(route_segment_msg);
    }

    virtual void* Get() override
    {
        return &route_segment_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename route_segment_msg;
};
