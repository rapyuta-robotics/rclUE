// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/NavSatFix.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "sensor_msgs/msg/nav_sat_fix.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2NavSatStatus.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Generated
#include "ROS2NavSatFix.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSNavSatFix
{
    GENERATED_BODY()

public:
    static constexpr uint8 COVARIANCE_TYPE_UNKNOWN = 0;
    static constexpr uint8 COVARIANCE_TYPE_APPROXIMATED = 1;
    static constexpr uint8 COVARIANCE_TYPE_DIAGONAL_KNOWN = 2;
    static constexpr uint8 COVARIANCE_TYPE_KNOWN = 3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSNavSatStatus Status;

    UPROPERTY(EditAnywhere)
    double Latitude = 0.f;

    UPROPERTY(EditAnywhere)
    double Longitude = 0.f;

    UPROPERTY(EditAnywhere)
    double Altitude = 0.f;

    UPROPERTY(EditAnywhere)
    TArray<double> PositionCovariance;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 PositionCovarianceType = 0;

    FROSNavSatFix()
    {
        PositionCovariance.SetNumZeroed(9);
    }

    void SetFromROS2(const sensor_msgs__msg__NavSatFix& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        Status.SetFromROS2(in_ros_data.status);

        Latitude = in_ros_data.latitude;

        Longitude = in_ros_data.longitude;

        Altitude = in_ros_data.altitude;

        UROS2Utils::SequenceROSToUEArray<double, double>(in_ros_data.position_covariance, PositionCovariance, 9);

        PositionCovarianceType = in_ros_data.position_covariance_type;
    }

    void SetROS2(sensor_msgs__msg__NavSatFix& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        Status.SetROS2(out_ros_data.status);

        out_ros_data.latitude = Latitude;

        out_ros_data.longitude = Longitude;

        out_ros_data.altitude = Altitude;

        UROS2Utils::ArrayUEToROSSequence<double, double>(PositionCovariance, out_ros_data.position_covariance, 9);

        out_ros_data.position_covariance_type = PositionCovarianceType;
    }
};

UCLASS()
class RCLUE_API UROS2NavSatFixMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSNavSatFix& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSNavSatFix& Output) const;

    virtual void* Get() override;

    UFUNCTION(BlueprintCallable)
    static uint8 CONST_COVARIANCE_TYPE_UNKNOWN()
    {
        return FROSNavSatFix::COVARIANCE_TYPE_UNKNOWN;
    }
    UFUNCTION(BlueprintCallable)
    static uint8 CONST_COVARIANCE_TYPE_APPROXIMATED()
    {
        return FROSNavSatFix::COVARIANCE_TYPE_APPROXIMATED;
    }
    UFUNCTION(BlueprintCallable)
    static uint8 CONST_COVARIANCE_TYPE_DIAGONAL_KNOWN()
    {
        return FROSNavSatFix::COVARIANCE_TYPE_DIAGONAL_KNOWN;
    }
    UFUNCTION(BlueprintCallable)
    static uint8 CONST_COVARIANCE_TYPE_KNOWN()
    {
        return FROSNavSatFix::COVARIANCE_TYPE_KNOWN;
    }

private:
    virtual FString MsgToString() const override;

    sensor_msgs__msg__NavSatFix nav_sat_fix_msg;
};
