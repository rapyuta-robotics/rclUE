#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/nav_sat_status.h"



#include "ROS2NavSatStatus.generated.h"

// TODO - Cannot use enum for service in NavSatStatus
// TODO - Cannot use enum for status in NavSatStatus

USTRUCT(Blueprintable)
struct RCLUE_API FROSNavSatStatus
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__NavSatStatus;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int status;
    // rclc type: int8_t status

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int service;
    // rclc type: uint16_t service

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        status = in_ros_data.status;
        service = in_ros_data.service;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        out_ros_data.status = status;
        out_ros_data.service = service;
    }
};

UCLASS()
class RCLUE_API UROS2NavSatStatus : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__NavSatStatus;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__NavSatStatus__init(&nav_sat_status_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__NavSatStatus__fini(&nav_sat_status_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, NavSatStatus);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSNavSatStatus& Input)
    {
        Input.SetROS2(nav_sat_status_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSNavSatStatus& Output) const
    {
        Output.SetFromROS2(nav_sat_status_msg);
    }

    virtual void* Get() override
    {
        return &nav_sat_status_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename nav_sat_status_msg;
};
