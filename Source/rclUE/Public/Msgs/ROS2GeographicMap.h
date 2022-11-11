#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geographic_msgs/msg/geographic_map.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2UUID.h"
#include "Msgs/ROS2BoundingBox.h"
#include "Msgs/ROS2WayPoint.h"
#include "Msgs/ROS2MapFeature.h"
#include "Msgs/ROS2KeyValue.h"

#include "ROS2GeographicMap.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSGeographicMap
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__GeographicMap;

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
    TArray<FROSMapFeature> features;
    // rclc type: geographic_msgs__msg__MapFeature__Sequence features

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSKeyValue> props;
    // rclc type: geographic_msgs__msg__KeyValue__Sequence props

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        id.SetFromROS2(in_ros_data.id);
        bounds.SetFromROS2(in_ros_data.bounds);
        points = ROS2MsgToUE::FromStructSequence<FROSWayPoint>(in_ros_data.points);
        features = ROS2MsgToUE::FromStructSequence<FROSMapFeature>(in_ros_data.features);
        props = ROS2MsgToUE::FromStructSequence<FROSKeyValue>(in_ros_data.props);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        id.SetROS2(out_ros_data.id);
        bounds.SetROS2(out_ros_data.bounds);
        UEToROS2Msg::SetStructSequence(points, out_ros_data.points);
        UEToROS2Msg::SetStructSequence(features, out_ros_data.features);
        UEToROS2Msg::SetStructSequence(props, out_ros_data.props);
    }
};

UCLASS()
class RCLUE_API UROS2GeographicMap : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__GeographicMap;

public:
    virtual void Init() override
    {
        geographic_msgs__msg__GeographicMap__init(&geographic_map_msg);
    }

    virtual void Fini() override
    {
        geographic_msgs__msg__GeographicMap__fini(&geographic_map_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geographic_msgs, msg, GeographicMap);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSGeographicMap& Input)
    {
        Input.SetROS2(geographic_map_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSGeographicMap& Output) const
    {
        Output.SetFromROS2(geographic_map_msg);
    }

    virtual void* Get() override
    {
        return &geographic_map_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename geographic_map_msg;
};
