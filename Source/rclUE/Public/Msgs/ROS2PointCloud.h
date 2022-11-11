#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/point_cloud.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Point32.h"
#include "Msgs/ROS2ChannelFloat32.h"

#include "ROS2PointCloud.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSPointCloud
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__PointCloud;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FVector> points;
    // rclc type: geometry_msgs__msg__Point32__Sequence points

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSChannelFloat32> channels;
    // rclc type: sensor_msgs__msg__ChannelFloat32__Sequence channels

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        points = ROS2MsgToUE::FromSequence<FVector>(in_ros_data.points);
        channels = ROS2MsgToUE::FromStructSequence<FROSChannelFloat32>(in_ros_data.channels);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        UEToROS2Msg::SetSequence(points, out_ros_data.points);
        UEToROS2Msg::SetStructSequence(channels, out_ros_data.channels);
    }
};

UCLASS()
class RCLUE_API UROS2PointCloud : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__PointCloud;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__PointCloud__init(&point_cloud_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__PointCloud__fini(&point_cloud_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, PointCloud);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPointCloud& Input)
    {
        Input.SetROS2(point_cloud_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPointCloud& Output) const
    {
        Output.SetFromROS2(point_cloud_msg);
    }

    virtual void* Get() override
    {
        return &point_cloud_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename point_cloud_msg;
};
