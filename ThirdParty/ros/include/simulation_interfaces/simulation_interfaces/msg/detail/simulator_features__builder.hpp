// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:msg/SimulatorFeatures.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__MSG__DETAIL__SIMULATOR_FEATURES__BUILDER_HPP_
#define SIMULATION_INTERFACES__MSG__DETAIL__SIMULATOR_FEATURES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/msg/detail/simulator_features__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace msg
{

namespace builder
{

class Init_SimulatorFeatures_custom_info
{
public:
  explicit Init_SimulatorFeatures_custom_info(::simulation_interfaces::msg::SimulatorFeatures & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::msg::SimulatorFeatures custom_info(::simulation_interfaces::msg::SimulatorFeatures::_custom_info_type arg)
  {
    msg_.custom_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::msg::SimulatorFeatures msg_;
};

class Init_SimulatorFeatures_spawn_formats
{
public:
  explicit Init_SimulatorFeatures_spawn_formats(::simulation_interfaces::msg::SimulatorFeatures & msg)
  : msg_(msg)
  {}
  Init_SimulatorFeatures_custom_info spawn_formats(::simulation_interfaces::msg::SimulatorFeatures::_spawn_formats_type arg)
  {
    msg_.spawn_formats = std::move(arg);
    return Init_SimulatorFeatures_custom_info(msg_);
  }

private:
  ::simulation_interfaces::msg::SimulatorFeatures msg_;
};

class Init_SimulatorFeatures_features
{
public:
  Init_SimulatorFeatures_features()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimulatorFeatures_spawn_formats features(::simulation_interfaces::msg::SimulatorFeatures::_features_type arg)
  {
    msg_.features = std::move(arg);
    return Init_SimulatorFeatures_spawn_formats(msg_);
  }

private:
  ::simulation_interfaces::msg::SimulatorFeatures msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::msg::SimulatorFeatures>()
{
  return simulation_interfaces::msg::builder::Init_SimulatorFeatures_features();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__MSG__DETAIL__SIMULATOR_FEATURES__BUILDER_HPP_
