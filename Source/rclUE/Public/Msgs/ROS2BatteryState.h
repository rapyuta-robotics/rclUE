#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "sensor_msgs/msg/battery_state.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"

#include "ROS2BatteryState.generated.h"


UENUM(BlueprintType)
enum class UROSPowerSupplyTechnology : uint8
{
    POWER_SUPPLY_TECHNOLOGY_UNKNOWN = 0,
    POWER_SUPPLY_TECHNOLOGY_NIMH = 1,
    POWER_SUPPLY_TECHNOLOGY_LION = 2,
    POWER_SUPPLY_TECHNOLOGY_LIPO = 3,
    POWER_SUPPLY_TECHNOLOGY_LIFE = 4,
    POWER_SUPPLY_TECHNOLOGY_NICD = 5,
    POWER_SUPPLY_TECHNOLOGY_LIMN = 6
};

UENUM(BlueprintType)
enum class UROSPowerSupplyStatus : uint8
{
    POWER_SUPPLY_STATUS_UNKNOWN = 0,
    POWER_SUPPLY_STATUS_CHARGING = 1,
    POWER_SUPPLY_STATUS_DISCHARGING = 2,
    POWER_SUPPLY_STATUS_NOT_CHARGING = 3,
    POWER_SUPPLY_STATUS_FULL = 4
};

UENUM(BlueprintType)
enum class UROSPowerSupplyHealth : uint8
{
    POWER_SUPPLY_HEALTH_UNKNOWN = 0,
    POWER_SUPPLY_HEALTH_GOOD = 1,
    POWER_SUPPLY_HEALTH_OVERHEAT = 2,
    POWER_SUPPLY_HEALTH_DEAD = 3,
    POWER_SUPPLY_HEALTH_OVERVOLTAGE = 4,
    POWER_SUPPLY_HEALTH_UNSPEC_FAILURE = 5,
    POWER_SUPPLY_HEALTH_COLD = 6,
    POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE = 7,
    POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE = 8
};

USTRUCT(Blueprintable)
struct RCLUE_API FROSBatteryState
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__BatteryState;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float voltage;
    // rclc type: float voltage

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float temperature;
    // rclc type: float temperature

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float current;
    // rclc type: float current

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float charge;
    // rclc type: float charge

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float capacity;
    // rclc type: float capacity

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float design_capacity;
    // rclc type: float design_capacity

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float percentage;
    // rclc type: float percentage

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROSPowerSupplyStatus power_supply_status;
    // rclc type: uint8_t power_supply_status

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROSPowerSupplyHealth power_supply_health;
    // rclc type: uint8_t power_supply_health

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UROSPowerSupplyTechnology power_supply_technology;
    // rclc type: uint8_t power_supply_technology

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool present;
    // rclc type: bool present

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> cell_voltage;
    // rclc type: rosidl_runtime_c__float__Sequence cell_voltage

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> cell_temperature;
    // rclc type: rosidl_runtime_c__float__Sequence cell_temperature

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString location;
    // rclc type: rosidl_runtime_c__String location

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString serial_number;
    // rclc type: rosidl_runtime_c__String serial_number

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        voltage = in_ros_data.voltage;
        temperature = in_ros_data.temperature;
        current = in_ros_data.current;
        charge = in_ros_data.charge;
        capacity = in_ros_data.capacity;
        design_capacity = in_ros_data.design_capacity;
        percentage = in_ros_data.percentage;
        power_supply_status = static_cast<UROSPowerSupplyStatus>(in_ros_data.power_supply_status);
        power_supply_health = static_cast<UROSPowerSupplyHealth>(in_ros_data.power_supply_health);
        power_supply_technology = static_cast<UROSPowerSupplyTechnology>(in_ros_data.power_supply_technology);
        present = in_ros_data.present;
        cell_voltage = ROS2MsgToUE::FromSequence<float>(in_ros_data.cell_voltage);
        cell_temperature = ROS2MsgToUE::FromSequence<float>(in_ros_data.cell_temperature);
        location = ROS2MsgToUE::From(in_ros_data.location);
        serial_number = ROS2MsgToUE::From(in_ros_data.serial_number);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        out_ros_data.voltage = voltage;
        out_ros_data.temperature = temperature;
        out_ros_data.current = current;
        out_ros_data.charge = charge;
        out_ros_data.capacity = capacity;
        out_ros_data.design_capacity = design_capacity;
        out_ros_data.percentage = percentage;
        out_ros_data.power_supply_status = static_cast<uint8>(power_supply_status);
        out_ros_data.power_supply_health = static_cast<uint8>(power_supply_health);
        out_ros_data.power_supply_technology = static_cast<uint8>(power_supply_technology);
        out_ros_data.present = present;
        UEToROS2Msg::SetSequence(cell_voltage, out_ros_data.cell_voltage);
        UEToROS2Msg::SetSequence(cell_temperature, out_ros_data.cell_temperature);
        UEToROS2Msg::Set(location, out_ros_data.location);
        UEToROS2Msg::Set(serial_number, out_ros_data.serial_number);
    }
};

UCLASS()
class RCLUE_API UROS2BatteryState : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = sensor_msgs__msg__BatteryState;

public:
    virtual void Init() override
    {
        sensor_msgs__msg__BatteryState__init(&battery_state_msg);
    }

    virtual void Fini() override
    {
        sensor_msgs__msg__BatteryState__fini(&battery_state_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, BatteryState);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSBatteryState& Input)
    {
        Input.SetROS2(battery_state_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSBatteryState& Output) const
    {
        Output.SetFromROS2(battery_state_msg);
    }

    virtual void* Get() override
    {
        return &battery_state_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename battery_state_msg;
};
