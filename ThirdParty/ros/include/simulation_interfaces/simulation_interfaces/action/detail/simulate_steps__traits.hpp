// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:action/SimulateSteps.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__ACTION__DETAIL__SIMULATE_STEPS__TRAITS_HPP_
#define SIMULATION_INTERFACES__ACTION__DETAIL__SIMULATE_STEPS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simulation_interfaces/action/detail/simulate_steps__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simulation_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SimulateSteps_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: steps
  {
    out << "steps: ";
    rosidl_generator_traits::value_to_yaml(msg.steps, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimulateSteps_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: steps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steps: ";
    rosidl_generator_traits::value_to_yaml(msg.steps, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimulateSteps_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace simulation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simulation_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simulation_interfaces::action::SimulateSteps_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::action::SimulateSteps_Goal & msg)
{
  return simulation_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::action::SimulateSteps_Goal>()
{
  return "simulation_interfaces::action::SimulateSteps_Goal";
}

template<>
inline const char * name<simulation_interfaces::action::SimulateSteps_Goal>()
{
  return "simulation_interfaces/action/SimulateSteps_Goal";
}

template<>
struct has_fixed_size<simulation_interfaces::action::SimulateSteps_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<simulation_interfaces::action::SimulateSteps_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<simulation_interfaces::action::SimulateSteps_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "simulation_interfaces/msg/detail/result__traits.hpp"

namespace simulation_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SimulateSteps_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimulateSteps_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimulateSteps_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace simulation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simulation_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simulation_interfaces::action::SimulateSteps_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::action::SimulateSteps_Result & msg)
{
  return simulation_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::action::SimulateSteps_Result>()
{
  return "simulation_interfaces::action::SimulateSteps_Result";
}

template<>
inline const char * name<simulation_interfaces::action::SimulateSteps_Result>()
{
  return "simulation_interfaces/action/SimulateSteps_Result";
}

template<>
struct has_fixed_size<simulation_interfaces::action::SimulateSteps_Result>
  : std::integral_constant<bool, has_fixed_size<simulation_interfaces::msg::Result>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::action::SimulateSteps_Result>
  : std::integral_constant<bool, has_bounded_size<simulation_interfaces::msg::Result>::value> {};

template<>
struct is_message<simulation_interfaces::action::SimulateSteps_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace simulation_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SimulateSteps_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: completed_steps
  {
    out << "completed_steps: ";
    rosidl_generator_traits::value_to_yaml(msg.completed_steps, out);
    out << ", ";
  }

  // member: remaining_steps
  {
    out << "remaining_steps: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_steps, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimulateSteps_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: completed_steps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "completed_steps: ";
    rosidl_generator_traits::value_to_yaml(msg.completed_steps, out);
    out << "\n";
  }

  // member: remaining_steps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_steps: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_steps, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimulateSteps_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace simulation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simulation_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simulation_interfaces::action::SimulateSteps_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::action::SimulateSteps_Feedback & msg)
{
  return simulation_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::action::SimulateSteps_Feedback>()
{
  return "simulation_interfaces::action::SimulateSteps_Feedback";
}

template<>
inline const char * name<simulation_interfaces::action::SimulateSteps_Feedback>()
{
  return "simulation_interfaces/action/SimulateSteps_Feedback";
}

template<>
struct has_fixed_size<simulation_interfaces::action::SimulateSteps_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<simulation_interfaces::action::SimulateSteps_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<simulation_interfaces::action::SimulateSteps_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "simulation_interfaces/action/detail/simulate_steps__traits.hpp"

namespace simulation_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SimulateSteps_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimulateSteps_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimulateSteps_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace simulation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simulation_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simulation_interfaces::action::SimulateSteps_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::action::SimulateSteps_SendGoal_Request & msg)
{
  return simulation_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::action::SimulateSteps_SendGoal_Request>()
{
  return "simulation_interfaces::action::SimulateSteps_SendGoal_Request";
}

template<>
inline const char * name<simulation_interfaces::action::SimulateSteps_SendGoal_Request>()
{
  return "simulation_interfaces/action/SimulateSteps_SendGoal_Request";
}

template<>
struct has_fixed_size<simulation_interfaces::action::SimulateSteps_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<simulation_interfaces::action::SimulateSteps_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::action::SimulateSteps_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<simulation_interfaces::action::SimulateSteps_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<simulation_interfaces::action::SimulateSteps_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace simulation_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SimulateSteps_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimulateSteps_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimulateSteps_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace simulation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simulation_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simulation_interfaces::action::SimulateSteps_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::action::SimulateSteps_SendGoal_Response & msg)
{
  return simulation_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::action::SimulateSteps_SendGoal_Response>()
{
  return "simulation_interfaces::action::SimulateSteps_SendGoal_Response";
}

template<>
inline const char * name<simulation_interfaces::action::SimulateSteps_SendGoal_Response>()
{
  return "simulation_interfaces/action/SimulateSteps_SendGoal_Response";
}

template<>
struct has_fixed_size<simulation_interfaces::action::SimulateSteps_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::action::SimulateSteps_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<simulation_interfaces::action::SimulateSteps_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::action::SimulateSteps_SendGoal>()
{
  return "simulation_interfaces::action::SimulateSteps_SendGoal";
}

template<>
inline const char * name<simulation_interfaces::action::SimulateSteps_SendGoal>()
{
  return "simulation_interfaces/action/SimulateSteps_SendGoal";
}

template<>
struct has_fixed_size<simulation_interfaces::action::SimulateSteps_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<simulation_interfaces::action::SimulateSteps_SendGoal_Request>::value &&
    has_fixed_size<simulation_interfaces::action::SimulateSteps_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<simulation_interfaces::action::SimulateSteps_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<simulation_interfaces::action::SimulateSteps_SendGoal_Request>::value &&
    has_bounded_size<simulation_interfaces::action::SimulateSteps_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<simulation_interfaces::action::SimulateSteps_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<simulation_interfaces::action::SimulateSteps_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simulation_interfaces::action::SimulateSteps_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace simulation_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SimulateSteps_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimulateSteps_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimulateSteps_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace simulation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simulation_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simulation_interfaces::action::SimulateSteps_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::action::SimulateSteps_GetResult_Request & msg)
{
  return simulation_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::action::SimulateSteps_GetResult_Request>()
{
  return "simulation_interfaces::action::SimulateSteps_GetResult_Request";
}

template<>
inline const char * name<simulation_interfaces::action::SimulateSteps_GetResult_Request>()
{
  return "simulation_interfaces/action/SimulateSteps_GetResult_Request";
}

template<>
struct has_fixed_size<simulation_interfaces::action::SimulateSteps_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::action::SimulateSteps_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<simulation_interfaces::action::SimulateSteps_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "simulation_interfaces/action/detail/simulate_steps__traits.hpp"

namespace simulation_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SimulateSteps_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimulateSteps_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimulateSteps_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace simulation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simulation_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simulation_interfaces::action::SimulateSteps_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::action::SimulateSteps_GetResult_Response & msg)
{
  return simulation_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::action::SimulateSteps_GetResult_Response>()
{
  return "simulation_interfaces::action::SimulateSteps_GetResult_Response";
}

template<>
inline const char * name<simulation_interfaces::action::SimulateSteps_GetResult_Response>()
{
  return "simulation_interfaces/action/SimulateSteps_GetResult_Response";
}

template<>
struct has_fixed_size<simulation_interfaces::action::SimulateSteps_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<simulation_interfaces::action::SimulateSteps_Result>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::action::SimulateSteps_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<simulation_interfaces::action::SimulateSteps_Result>::value> {};

template<>
struct is_message<simulation_interfaces::action::SimulateSteps_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simulation_interfaces::action::SimulateSteps_GetResult>()
{
  return "simulation_interfaces::action::SimulateSteps_GetResult";
}

template<>
inline const char * name<simulation_interfaces::action::SimulateSteps_GetResult>()
{
  return "simulation_interfaces/action/SimulateSteps_GetResult";
}

template<>
struct has_fixed_size<simulation_interfaces::action::SimulateSteps_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<simulation_interfaces::action::SimulateSteps_GetResult_Request>::value &&
    has_fixed_size<simulation_interfaces::action::SimulateSteps_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<simulation_interfaces::action::SimulateSteps_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<simulation_interfaces::action::SimulateSteps_GetResult_Request>::value &&
    has_bounded_size<simulation_interfaces::action::SimulateSteps_GetResult_Response>::value
  >
{
};

template<>
struct is_service<simulation_interfaces::action::SimulateSteps_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<simulation_interfaces::action::SimulateSteps_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simulation_interfaces::action::SimulateSteps_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "simulation_interfaces/action/detail/simulate_steps__traits.hpp"

namespace simulation_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SimulateSteps_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimulateSteps_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimulateSteps_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace simulation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simulation_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simulation_interfaces::action::SimulateSteps_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  simulation_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simulation_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const simulation_interfaces::action::SimulateSteps_FeedbackMessage & msg)
{
  return simulation_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<simulation_interfaces::action::SimulateSteps_FeedbackMessage>()
{
  return "simulation_interfaces::action::SimulateSteps_FeedbackMessage";
}

template<>
inline const char * name<simulation_interfaces::action::SimulateSteps_FeedbackMessage>()
{
  return "simulation_interfaces/action/SimulateSteps_FeedbackMessage";
}

template<>
struct has_fixed_size<simulation_interfaces::action::SimulateSteps_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<simulation_interfaces::action::SimulateSteps_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<simulation_interfaces::action::SimulateSteps_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<simulation_interfaces::action::SimulateSteps_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<simulation_interfaces::action::SimulateSteps_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<simulation_interfaces::action::SimulateSteps>
  : std::true_type
{
};

template<>
struct is_action_goal<simulation_interfaces::action::SimulateSteps_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<simulation_interfaces::action::SimulateSteps_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<simulation_interfaces::action::SimulateSteps_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // SIMULATION_INTERFACES__ACTION__DETAIL__SIMULATE_STEPS__TRAITS_HPP_
