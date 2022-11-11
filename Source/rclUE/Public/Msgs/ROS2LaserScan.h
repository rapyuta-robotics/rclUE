#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/laser_scan.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"

#include "ROS2LaserScan.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSLaserScan
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__LaserScan;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float angle_min;
    // rclc type: float angle_min

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float angle_max;
    // rclc type: float angle_max

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float angle_increment;
    // rclc type: float angle_increment

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float time_increment;
    // rclc type: float time_increment

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float scan_time;
    // rclc type: float scan_time

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float range_min;
    // rclc type: float range_min

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float range_max;
    // rclc type: float range_max

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> ranges;
    // rclc type: rosidl_runtime_c__float__Sequence ranges

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> intensities;
    // rclc type: rosidl_runtime_c__float__Sequence intensities

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        angle_min = in_ros_data.angle_min;
        angle_max = in_ros_data.angle_max;
        angle_increment = in_ros_data.angle_increment;
        time_increment = in_ros_data.time_increment;
        scan_time = in_ros_data.scan_time;
        range_min = in_ros_data.range_min;
        range_max = in_ros_data.range_max;
        ranges = ROS2MsgToUE::FromSequence<float>(in_ros_data.ranges);
        intensities = ROS2MsgToUE::FromSequence<float>(in_ros_data.intensities);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        out_ros_data.angle_min = angle_min;
        out_ros_data.angle_max = angle_max;
        out_ros_data.angle_increment = angle_increment;
        out_ros_data.time_increment = time_increment;
        out_ros_data.scan_time = scan_time;
        out_ros_data.range_min = range_min;
        out_ros_data.range_max = range_max;
        UEToROS2Msg::SetSequence(ranges, out_ros_data.ranges);
        UEToROS2Msg::SetSequence(intensities, out_ros_data.intensities);
    }
};

UCLASS()
class RCLUE_API UROS2LaserScan : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__LaserScan;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__LaserScan__init(&laser_scan_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__LaserScan__fini(&laser_scan_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, LaserScan);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSLaserScan& Input)
    {
        Input.SetROS2(laser_scan_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSLaserScan& Output) const
    {
        Output.SetFromROS2(laser_scan_msg);
    }

    virtual void* Get() override
    {
        return &laser_scan_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename laser_scan_msg;
};
