#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/camera_info.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2RegionOfInterest.h"

#include "ROS2CameraInfo.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSCameraInfo
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__CameraInfo;

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
    FString distortion_model;
    // rclc type: rosidl_runtime_c__String distortion_model

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> d;
    // rclc type: rosidl_runtime_c__double__Sequence d

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> k = ArrayInitialisers::FloatArray(9);
    // rclc type: double k[9]

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> r = ArrayInitialisers::FloatArray(9);
    // rclc type: double r[9]

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> p = ArrayInitialisers::FloatArray(12);
    // rclc type: double p[12]

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int binning_x;
    // rclc type: uint32_t binning_x

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int binning_y;
    // rclc type: uint32_t binning_y

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSRegionOfInterest roi;
    // rclc type: sensor_msgs__msg__RegionOfInterest roi

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        height = in_ros_data.height;
        width = in_ros_data.width;
        distortion_model = ROS2MsgToUE::From(in_ros_data.distortion_model);
        d = ROS2MsgToUE::FromSequence<float>(in_ros_data.d);
        k = ROS2MsgToUE::FromArray(in_ros_data.k);
        r = ROS2MsgToUE::FromArray(in_ros_data.r);
        p = ROS2MsgToUE::FromArray(in_ros_data.p);
        binning_x = in_ros_data.binning_x;
        binning_y = in_ros_data.binning_y;
        roi.SetFromROS2(in_ros_data.roi);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        out_ros_data.height = height;
        out_ros_data.width = width;
        UEToROS2Msg::Set(distortion_model, out_ros_data.distortion_model);
        UEToROS2Msg::SetSequence(d, out_ros_data.d);
        UEToROS2Msg::SetSequence(k, out_ros_data.k);
        UEToROS2Msg::SetSequence(r, out_ros_data.r);
        UEToROS2Msg::SetSequence(p, out_ros_data.p);
        out_ros_data.binning_x = binning_x;
        out_ros_data.binning_y = binning_y;
        roi.SetROS2(out_ros_data.roi);
    }
};

UCLASS()
class RCLUE_API UROS2CameraInfo : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__CameraInfo;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__CameraInfo__init(&camera_info_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__CameraInfo__fini(&camera_info_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, CameraInfo);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSCameraInfo& Input)
    {
        Input.SetROS2(camera_info_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSCameraInfo& Output) const
    {
        Output.SetFromROS2(camera_info_msg);
    }

    virtual void* Get() override
    {
        return &camera_info_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename camera_info_msg;
};
