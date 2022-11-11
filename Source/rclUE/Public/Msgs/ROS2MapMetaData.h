#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "nav_msgs/msg/map_meta_data.h"


// Include directives for member types
#include "Msgs/ROS2Time.h"
#include "Msgs/ROS2Pose.h"

#include "ROS2MapMetaData.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSMapMetaData
{
    GENERATED_BODY()

    using ros_msg_c_typename = nav_msgs__msg__MapMetaData;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FDateTime map_load_time;
    // rclc type: builtin_interfaces__msg__Time map_load_time

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float resolution;
    // rclc type: float resolution

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int width;
    // rclc type: uint32_t width

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int height;
    // rclc type: uint32_t height

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSPose origin;
    // rclc type: geometry_msgs__msg__Pose origin

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        map_load_time = ROS2MsgToUE::From(in_ros_data.map_load_time);
        resolution = in_ros_data.resolution;
        width = in_ros_data.width;
        height = in_ros_data.height;
        origin.SetFromROS2(in_ros_data.origin);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::Set(map_load_time, out_ros_data.map_load_time);
        out_ros_data.resolution = resolution;
        out_ros_data.width = width;
        out_ros_data.height = height;
        origin.SetROS2(out_ros_data.origin);
    }
};

UCLASS()
class RCLUE_API UROS2MapMetaData : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = nav_msgs__msg__MapMetaData;

public:
    virtual void Init() override
    {
        nav_msgs__msg__MapMetaData__init(&map_meta_data_msg);
    }

    virtual void Fini() override
    {
        nav_msgs__msg__MapMetaData__fini(&map_meta_data_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(nav_msgs, msg, MapMetaData);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSMapMetaData& Input)
    {
        Input.SetROS2(map_meta_data_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSMapMetaData& Output) const
    {
        Output.SetFromROS2(map_meta_data_msg);
    }

    virtual void* Get() override
    {
        return &map_meta_data_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename map_meta_data_msg;
};
