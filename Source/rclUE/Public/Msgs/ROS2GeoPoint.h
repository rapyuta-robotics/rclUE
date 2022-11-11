#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geographic_msgs/msg/geo_point.h"



#include "ROS2GeoPoint.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSGeoPoint
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__GeoPoint;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float latitude;
    // rclc type: double latitude

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float longitude;
    // rclc type: double longitude

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float altitude;
    // rclc type: double altitude

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        latitude = in_ros_data.latitude;
        longitude = in_ros_data.longitude;
        altitude = in_ros_data.altitude;
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        out_ros_data.latitude = latitude;
        out_ros_data.longitude = longitude;
        out_ros_data.altitude = altitude;
    }
};

UCLASS()
class RCLUE_API UROS2GeoPoint : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__GeoPoint;

public:
    virtual void Init() override
    {
        geographic_msgs__msg__GeoPoint__init(&geo_point_msg);
    }

    virtual void Fini() override
    {
        geographic_msgs__msg__GeoPoint__fini(&geo_point_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geographic_msgs, msg, GeoPoint);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSGeoPoint& Input)
    {
        Input.SetROS2(geo_point_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSGeoPoint& Output) const
    {
        Output.SetFromROS2(geo_point_msg);
    }

    virtual void* Get() override
    {
        return &geo_point_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename geo_point_msg;
};
