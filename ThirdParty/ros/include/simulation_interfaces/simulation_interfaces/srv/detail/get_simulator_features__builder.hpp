// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:srv/GetSimulatorFeatures.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATOR_FEATURES__BUILDER_HPP_
#define SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATOR_FEATURES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/srv/detail/get_simulator_features__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetSimulatorFeatures_Request>()
{
  return ::simulation_interfaces::srv::GetSimulatorFeatures_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetSimulatorFeatures_Response_features
{
public:
  Init_GetSimulatorFeatures_Response_features()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::srv::GetSimulatorFeatures_Response features(::simulation_interfaces::srv::GetSimulatorFeatures_Response::_features_type arg)
  {
    msg_.features = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::srv::GetSimulatorFeatures_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::srv::GetSimulatorFeatures_Response>()
{
  return simulation_interfaces::srv::builder::Init_GetSimulatorFeatures_Response_features();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__SRV__DETAIL__GET_SIMULATOR_FEATURES__BUILDER_HPP_
