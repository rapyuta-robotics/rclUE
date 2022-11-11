#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/point_cloud2.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2PointField.h"

#include "ROS2PointCloud2.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSPointCloud2
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__PointCloud2;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int height;
    // rclc type: uint32_t height

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int width;
    // rclc type: uint32_t width

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSPointField> fields;
    // rclc type: sensor_msgs__msg__PointField__Sequence fields

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool is_bigendian;
    // rclc type: bool is_bigendian

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int point_step;
    // rclc type: uint32_t point_step

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int row_step;
    // rclc type: uint32_t row_step

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<int> data;
    // rclc type: rosidl_runtime_c__uint8__Sequence data

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool is_dense;
    // rclc type: bool is_dense

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        height = in_ros_data.height;
        width = in_ros_data.width;
        fields = ROS2MsgToUE::FromStructSequence<FROSPointField>(in_ros_data.fields);
        is_bigendian = in_ros_data.is_bigendian;
        point_step = in_ros_data.point_step;
        row_step = in_ros_data.row_step;
        data = ROS2MsgToUE::FromSequence<int>(in_ros_data.data);
        is_dense = in_ros_data.is_dense;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        out_ros_data.height = height;
        out_ros_data.width = width;
        UEToROS2Msg::SetStructSequence(fields, out_ros_data.fields);
        out_ros_data.is_bigendian = is_bigendian;
        out_ros_data.point_step = point_step;
        out_ros_data.row_step = row_step;
        UEToROS2Msg::SetSequence(data, out_ros_data.data);
        out_ros_data.is_dense = is_dense;
    }
};

UCLASS()
class RCLUE_API UROS2PointCloud2 : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__PointCloud2;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__PointCloud2__init(&point_cloud2_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__PointCloud2__fini(&point_cloud2_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, PointCloud2);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPointCloud2& Input)
    {
        Input.SetROS2(point_cloud2_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPointCloud2& Output) const
    {
        Output.SetFromROS2(point_cloud2_msg);
    }

    virtual void* Get() override
    {
        return &point_cloud2_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename point_cloud2_msg;
};
