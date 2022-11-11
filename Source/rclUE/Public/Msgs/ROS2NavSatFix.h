#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/nav_sat_fix.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2NavSatStatus.h"

#include "ROS2NavSatFix.generated.h"


UENUM(BlueprintType)
enum class UROSPositionCovarianceType : uint8
{
    COVARIANCE_TYPE_UNKNOWN = 0,
    COVARIANCE_TYPE_APPROXIMATED = 1,
    COVARIANCE_TYPE_DIAGONAL_KNOWN = 2,
    COVARIANCE_TYPE_KNOWN = 3
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSNavSatFix
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__NavSatFix;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSNavSatStatus status;
    // rclc type: sensor_msgs__msg__NavSatStatus status

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float latitude;
    // rclc type: double latitude

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float longitude;
    // rclc type: double longitude

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float altitude;
    // rclc type: double altitude

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> position_covariance = ArrayInitialisers::FloatArray(9);
    // rclc type: double position_covariance[9]

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROSPositionCovarianceType position_covariance_type;
    // rclc type: uint8_t position_covariance_type

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        status.SetFromROS2(in_ros_data.status);
        latitude = in_ros_data.latitude;
        longitude = in_ros_data.longitude;
        altitude = in_ros_data.altitude;
        position_covariance = ROS2MsgToUE::FromArray(in_ros_data.position_covariance);
        position_covariance_type = static_cast<UROSPositionCovarianceType>(in_ros_data.position_covariance_type);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        status.SetROS2(out_ros_data.status);
        out_ros_data.latitude = latitude;
        out_ros_data.longitude = longitude;
        out_ros_data.altitude = altitude;
        UEToROS2Msg::SetSequence(position_covariance, out_ros_data.position_covariance);
        out_ros_data.position_covariance_type = static_cast<uint8>(position_covariance_type);
    }
};

UCLASS()
class RCLUE_API UROS2NavSatFix : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__NavSatFix;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__NavSatFix__init(&nav_sat_fix_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__NavSatFix__fini(&nav_sat_fix_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, NavSatFix);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSNavSatFix& Input)
    {
        Input.SetROS2(nav_sat_fix_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSNavSatFix& Output) const
    {
        Output.SetFromROS2(nav_sat_fix_msg);
    }

    virtual void* Get() override
    {
        return &nav_sat_fix_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename nav_sat_fix_msg;
};
