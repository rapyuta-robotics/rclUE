#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/region_of_interest.h"



#include "ROS2RegionOfInterest.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSRegionOfInterest
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__RegionOfInterest;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int x_offset;
    // rclc type: uint32_t x_offset

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int y_offset;
    // rclc type: uint32_t y_offset

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int height;
    // rclc type: uint32_t height

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int width;
    // rclc type: uint32_t width

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool do_rectify;
    // rclc type: bool do_rectify

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        x_offset = in_ros_data.x_offset;
        y_offset = in_ros_data.y_offset;
        height = in_ros_data.height;
        width = in_ros_data.width;
        do_rectify = in_ros_data.do_rectify;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        out_ros_data.x_offset = x_offset;
        out_ros_data.y_offset = y_offset;
        out_ros_data.height = height;
        out_ros_data.width = width;
        out_ros_data.do_rectify = do_rectify;
    }
};

UCLASS()
class RCLUE_API UROS2RegionOfInterest : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__RegionOfInterest;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__RegionOfInterest__init(&region_of_interest_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__RegionOfInterest__fini(&region_of_interest_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, RegionOfInterest);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSRegionOfInterest& Input)
    {
        Input.SetROS2(region_of_interest_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSRegionOfInterest& Output) const
    {
        Output.SetFromROS2(region_of_interest_msg);
    }

    virtual void* Get() override
    {
        return &region_of_interest_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename region_of_interest_msg;
};
