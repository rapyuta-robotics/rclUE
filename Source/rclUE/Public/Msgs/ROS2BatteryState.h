// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from sensor_msgs/msg/BatteryState.msg - do
// not modify

#pragma once

// UE
#include <CoreMinimal.h>

// ROS
#include "sensor_msgs/msg/battery_state.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"

// Generated
#include "ROS2BatteryState.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSBatteryState {
  GENERATED_BODY()

public:
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FROSHeader Header;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  float Voltage = 0.f;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  float Temperature = 0.f;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  float Current = 0.f;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  float Charge = 0.f;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  float Capacity = 0.f;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  float DesignCapacity = 0.f;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  float Percentage = 0.f;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  uint8 PowerSupplyStatus = 0;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  uint8 PowerSupplyHealth = 0;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  uint8 PowerSupplyTechnology = 0;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  bool bPresent = false;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TArray<float> CellVoltage;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TArray<float> CellTemperature;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString Location;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString SerialNumber;

  FROSBatteryState() {}

  void SetFromROS2(const sensor_msgs__msg__BatteryState &in_ros_data) {
    Header.SetFromROS2(in_ros_data.header);

    Voltage = in_ros_data.voltage;

    Temperature = in_ros_data.temperature;

    Current = in_ros_data.current;

    Charge = in_ros_data.charge;

    Capacity = in_ros_data.capacity;

    DesignCapacity = in_ros_data.design_capacity;

    Percentage = in_ros_data.percentage;

    PowerSupplyStatus = in_ros_data.power_supply_status;

    PowerSupplyHealth = in_ros_data.power_supply_health;

    PowerSupplyTechnology = in_ros_data.power_supply_technology;

    bPresent = in_ros_data.present;

    for (auto i = 0; i < in_ros_data.cell_voltage.size; ++i) {
      CellVoltage.Emplace(in_ros_data.cell_voltage.data[i]);
    }

    for (auto i = 0; i < in_ros_data.cell_temperature.size; ++i) {
      CellTemperature.Emplace(in_ros_data.cell_temperature.data[i]);
    }

    Location.AppendChars(in_ros_data.location.data, in_ros_data.location.size);

    SerialNumber.AppendChars(in_ros_data.serial_number.data,
                             in_ros_data.serial_number.size);
  }

  void SetROS2(sensor_msgs__msg__BatteryState &out_ros_data) const {
    Header.SetROS2(out_ros_data.header);

    out_ros_data.voltage = Voltage;

    out_ros_data.temperature = Temperature;

    out_ros_data.current = Current;

    out_ros_data.charge = Charge;

    out_ros_data.capacity = Capacity;

    out_ros_data.design_capacity = DesignCapacity;

    out_ros_data.percentage = Percentage;

    out_ros_data.power_supply_status = PowerSupplyStatus;

    out_ros_data.power_supply_health = PowerSupplyHealth;

    out_ros_data.power_supply_technology = PowerSupplyTechnology;

    out_ros_data.present = bPresent;

    out_ros_data.cell_voltage.data =
        (decltype(out_ros_data.cell_voltage.data))malloc(
            (CellVoltage.Num()) *
            sizeof(decltype(*out_ros_data.cell_voltage.data)));

    for (auto i = 0; i < CellVoltage.Num(); ++i) {
      out_ros_data.cell_voltage.data[i] = CellVoltage[i];
    }

    out_ros_data.cell_voltage.size = CellVoltage.Num();
    out_ros_data.cell_voltage.capacity = CellVoltage.Num();

    out_ros_data.cell_temperature.data =
        (decltype(out_ros_data.cell_temperature.data))malloc(
            (CellTemperature.Num()) *
            sizeof(decltype(*out_ros_data.cell_temperature.data)));

    for (auto i = 0; i < CellTemperature.Num(); ++i) {
      out_ros_data.cell_temperature.data[i] = CellTemperature[i];
    }

    out_ros_data.cell_temperature.size = CellTemperature.Num();
    out_ros_data.cell_temperature.capacity = CellTemperature.Num();

    {
      FTCHARToUTF8 strUtf8(*Location);
      int32 strLength = strUtf8.Length();
      out_ros_data.location.data = (decltype(out_ros_data.location.data))malloc(
          (strLength + 1) * sizeof(decltype(*out_ros_data.location.data)));
      memcpy(out_ros_data.location.data, TCHAR_TO_UTF8(*Location),
             (strLength + 1) * sizeof(char));
      out_ros_data.location.size = strLength;
      out_ros_data.location.capacity = strLength + 1;
    }

    {
      FTCHARToUTF8 strUtf8(*SerialNumber);
      int32 strLength = strUtf8.Length();
      out_ros_data.serial_number.data =
          (decltype(out_ros_data.serial_number.data))malloc(
              (strLength + 1) *
              sizeof(decltype(*out_ros_data.serial_number.data)));
      memcpy(out_ros_data.serial_number.data, TCHAR_TO_UTF8(*SerialNumber),
             (strLength + 1) * sizeof(char));
      out_ros_data.serial_number.size = strLength;
      out_ros_data.serial_number.capacity = strLength + 1;
    }
  }
};

UCLASS()
class RCLUE_API UROS2BatteryStateMsg : public UROS2GenericMsg {
  GENERATED_BODY()

public:
  virtual void Init() override;
  virtual void Fini() override;

  virtual const rosidl_message_type_support_t *GetTypeSupport() const override;

  UFUNCTION(BlueprintCallable)
  void SetMsg(const FROSBatteryState &Input);

  UFUNCTION(BlueprintCallable)
  void GetMsg(FROSBatteryState &Output) const;

  virtual void *Get() override;

private:
  virtual FString MsgToString() const override;

  sensor_msgs__msg__BatteryState battery_state_msg;
};