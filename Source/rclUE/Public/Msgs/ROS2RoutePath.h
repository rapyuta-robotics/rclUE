#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geographic_msgs/msg/route_path.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2UUID.h"
#include "Msgs/ROS2KeyValue.h"

#include "ROS2RoutePath.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSRoutePath
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__RoutePath;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSUUID network;
    // rclc type: unique_identifier_msgs__msg__UUID network

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSUUID> segments;
    // rclc type: unique_identifier_msgs__msg__UUID__Sequence segments

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSKeyValue> props;
    // rclc type: geographic_msgs__msg__KeyValue__Sequence props

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        network.SetFromROS2(in_ros_data.network);
        segments = ROS2MsgToUE::FromStructSequence<FROSUUID>(in_ros_data.segments);
        props = ROS2MsgToUE::FromStructSequence<FROSKeyValue>(in_ros_data.props);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        network.SetROS2(out_ros_data.network);
        UEToROS2Msg::SetStructSequence(segments, out_ros_data.segments);
        UEToROS2Msg::SetStructSequence(props, out_ros_data.props);
    }
};

UCLASS()
class RCLUE_API UROS2RoutePath : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__RoutePath;

public:
    virtual void Init() override
    {
        geographic_msgs__msg__RoutePath__init(&route_path_msg);
    }

    virtual void Fini() override
    {
        geographic_msgs__msg__RoutePath__fini(&route_path_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geographic_msgs, msg, RoutePath);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSRoutePath& Input)
    {
        Input.SetROS2(route_path_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSRoutePath& Output) const
    {
        Output.SetFromROS2(route_path_msg);
    }

    virtual void* Get() override
    {
        return &route_path_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename route_path_msg;
};
