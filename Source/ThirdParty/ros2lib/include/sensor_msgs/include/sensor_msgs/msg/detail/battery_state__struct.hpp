// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_HPP_
#define SENSOR_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sensor_msgs__msg__BatteryState __attribute__((deprecated))
#else
# define DEPRECATED__sensor_msgs__msg__BatteryState __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BatteryState_
{
  using Type = BatteryState_<ContainerAllocator>;

  explicit BatteryState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voltage = 0.0f;
      this->temperature = 0.0f;
      this->current = 0.0f;
      this->charge = 0.0f;
      this->capacity = 0.0f;
      this->design_capacity = 0.0f;
      this->percentage = 0.0f;
      this->power_supply_status = 0;
      this->power_supply_health = 0;
      this->power_supply_technology = 0;
      this->present = false;
      this->location = "";
      this->serial_number = "";
    }
  }

  explicit BatteryState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    location(_alloc),
    serial_number(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voltage = 0.0f;
      this->temperature = 0.0f;
      this->current = 0.0f;
      this->charge = 0.0f;
      this->capacity = 0.0f;
      this->design_capacity = 0.0f;
      this->percentage = 0.0f;
      this->power_supply_status = 0;
      this->power_supply_health = 0;
      this->power_supply_technology = 0;
      this->present = false;
      this->location = "";
      this->serial_number = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _voltage_type =
    float;
  _voltage_type voltage;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _current_type =
    float;
  _current_type current;
  using _charge_type =
    float;
  _charge_type charge;
  using _capacity_type =
    float;
  _capacity_type capacity;
  using _design_capacity_type =
    float;
  _design_capacity_type design_capacity;
  using _percentage_type =
    float;
  _percentage_type percentage;
  using _power_supply_status_type =
    uint8_t;
  _power_supply_status_type power_supply_status;
  using _power_supply_health_type =
    uint8_t;
  _power_supply_health_type power_supply_health;
  using _power_supply_technology_type =
    uint8_t;
  _power_supply_technology_type power_supply_technology;
  using _present_type =
    bool;
  _present_type present;
  using _cell_voltage_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _cell_voltage_type cell_voltage;
  using _cell_temperature_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _cell_temperature_type cell_temperature;
  using _location_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _location_type location;
  using _serial_number_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _serial_number_type serial_number;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__voltage(
    const float & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__current(
    const float & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__charge(
    const float & _arg)
  {
    this->charge = _arg;
    return *this;
  }
  Type & set__capacity(
    const float & _arg)
  {
    this->capacity = _arg;
    return *this;
  }
  Type & set__design_capacity(
    const float & _arg)
  {
    this->design_capacity = _arg;
    return *this;
  }
  Type & set__percentage(
    const float & _arg)
  {
    this->percentage = _arg;
    return *this;
  }
  Type & set__power_supply_status(
    const uint8_t & _arg)
  {
    this->power_supply_status = _arg;
    return *this;
  }
  Type & set__power_supply_health(
    const uint8_t & _arg)
  {
    this->power_supply_health = _arg;
    return *this;
  }
  Type & set__power_supply_technology(
    const uint8_t & _arg)
  {
    this->power_supply_technology = _arg;
    return *this;
  }
  Type & set__present(
    const bool & _arg)
  {
    this->present = _arg;
    return *this;
  }
  Type & set__cell_voltage(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->cell_voltage = _arg;
    return *this;
  }
  Type & set__cell_temperature(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->cell_temperature = _arg;
    return *this;
  }
  Type & set__location(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->location = _arg;
    return *this;
  }
  Type & set__serial_number(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->serial_number = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t POWER_SUPPLY_STATUS_UNKNOWN =
    0u;
  static constexpr uint8_t POWER_SUPPLY_STATUS_CHARGING =
    1u;
  static constexpr uint8_t POWER_SUPPLY_STATUS_DISCHARGING =
    2u;
  static constexpr uint8_t POWER_SUPPLY_STATUS_NOT_CHARGING =
    3u;
  static constexpr uint8_t POWER_SUPPLY_STATUS_FULL =
    4u;
  static constexpr uint8_t POWER_SUPPLY_HEALTH_UNKNOWN =
    0u;
  static constexpr uint8_t POWER_SUPPLY_HEALTH_GOOD =
    1u;
  static constexpr uint8_t POWER_SUPPLY_HEALTH_OVERHEAT =
    2u;
  static constexpr uint8_t POWER_SUPPLY_HEALTH_DEAD =
    3u;
  static constexpr uint8_t POWER_SUPPLY_HEALTH_OVERVOLTAGE =
    4u;
  static constexpr uint8_t POWER_SUPPLY_HEALTH_UNSPEC_FAILURE =
    5u;
  static constexpr uint8_t POWER_SUPPLY_HEALTH_COLD =
    6u;
  static constexpr uint8_t POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE =
    7u;
  static constexpr uint8_t POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE =
    8u;
  static constexpr uint8_t POWER_SUPPLY_TECHNOLOGY_UNKNOWN =
    0u;
  static constexpr uint8_t POWER_SUPPLY_TECHNOLOGY_NIMH =
    1u;
  static constexpr uint8_t POWER_SUPPLY_TECHNOLOGY_LION =
    2u;
  static constexpr uint8_t POWER_SUPPLY_TECHNOLOGY_LIPO =
    3u;
  static constexpr uint8_t POWER_SUPPLY_TECHNOLOGY_LIFE =
    4u;
  static constexpr uint8_t POWER_SUPPLY_TECHNOLOGY_NICD =
    5u;
  static constexpr uint8_t POWER_SUPPLY_TECHNOLOGY_LIMN =
    6u;

  // pointer types
  using RawPtr =
    sensor_msgs::msg::BatteryState_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_msgs::msg::BatteryState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_msgs::msg::BatteryState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_msgs::msg::BatteryState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::BatteryState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::BatteryState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::BatteryState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::BatteryState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_msgs::msg::BatteryState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_msgs::msg::BatteryState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_msgs__msg__BatteryState
    std::shared_ptr<sensor_msgs::msg::BatteryState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_msgs__msg__BatteryState
    std::shared_ptr<sensor_msgs::msg::BatteryState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->charge != other.charge) {
      return false;
    }
    if (this->capacity != other.capacity) {
      return false;
    }
    if (this->design_capacity != other.design_capacity) {
      return false;
    }
    if (this->percentage != other.percentage) {
      return false;
    }
    if (this->power_supply_status != other.power_supply_status) {
      return false;
    }
    if (this->power_supply_health != other.power_supply_health) {
      return false;
    }
    if (this->power_supply_technology != other.power_supply_technology) {
      return false;
    }
    if (this->present != other.present) {
      return false;
    }
    if (this->cell_voltage != other.cell_voltage) {
      return false;
    }
    if (this->cell_temperature != other.cell_temperature) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    if (this->serial_number != other.serial_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryState_

// alias to use template instance with default allocator
using BatteryState =
  sensor_msgs::msg::BatteryState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_STATUS_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_STATUS_CHARGING;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_STATUS_DISCHARGING;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_STATUS_NOT_CHARGING;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_STATUS_FULL;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_HEALTH_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_HEALTH_GOOD;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_HEALTH_OVERHEAT;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_HEALTH_DEAD;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_HEALTH_OVERVOLTAGE;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_HEALTH_UNSPEC_FAILURE;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_HEALTH_COLD;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_TECHNOLOGY_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_TECHNOLOGY_NIMH;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_TECHNOLOGY_LION;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_TECHNOLOGY_LIPO;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_TECHNOLOGY_LIFE;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_TECHNOLOGY_NICD;
template<typename ContainerAllocator>
constexpr uint8_t BatteryState_<ContainerAllocator>::POWER_SUPPLY_TECHNOLOGY_LIMN;

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_HPP_
