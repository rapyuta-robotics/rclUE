// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tf2_msgs:action/LookupTransform.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__ACTION__DETAIL__LOOKUP_TRANSFORM__TRAITS_HPP_
#define TF2_MSGS__ACTION__DETAIL__LOOKUP_TRANSFORM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tf2_msgs/action/detail/lookup_transform__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'source_time'
// Member 'target_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace tf2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const LookupTransform_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_frame
  {
    out << "target_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.target_frame, out);
    out << ", ";
  }

  // member: source_frame
  {
    out << "source_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.source_frame, out);
    out << ", ";
  }

  // member: source_time
  {
    out << "source_time: ";
    to_flow_style_yaml(msg.source_time, out);
    out << ", ";
  }

  // member: timeout
  {
    out << "timeout: ";
    to_flow_style_yaml(msg.timeout, out);
    out << ", ";
  }

  // member: target_time
  {
    out << "target_time: ";
    to_flow_style_yaml(msg.target_time, out);
    out << ", ";
  }

  // member: fixed_frame
  {
    out << "fixed_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_frame, out);
    out << ", ";
  }

  // member: advanced
  {
    out << "advanced: ";
    rosidl_generator_traits::value_to_yaml(msg.advanced, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LookupTransform_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.target_frame, out);
    out << "\n";
  }

  // member: source_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.source_frame, out);
    out << "\n";
  }

  // member: source_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_time:\n";
    to_block_style_yaml(msg.source_time, out, indentation + 2);
  }

  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout:\n";
    to_block_style_yaml(msg.timeout, out, indentation + 2);
  }

  // member: target_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_time:\n";
    to_block_style_yaml(msg.target_time, out, indentation + 2);
  }

  // member: fixed_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixed_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_frame, out);
    out << "\n";
  }

  // member: advanced
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "advanced: ";
    rosidl_generator_traits::value_to_yaml(msg.advanced, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LookupTransform_Goal & msg, bool use_flow_style = false)
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

}  // namespace tf2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tf2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tf2_msgs::action::LookupTransform_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  tf2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tf2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tf2_msgs::action::LookupTransform_Goal & msg)
{
  return tf2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_Goal>()
{
  return "tf2_msgs::action::LookupTransform_Goal";
}

template<>
inline const char * name<tf2_msgs::action::LookupTransform_Goal>()
{
  return "tf2_msgs/action/LookupTransform_Goal";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tf2_msgs::action::LookupTransform_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform_stamped__traits.hpp"
// Member 'error'
#include "tf2_msgs/msg/detail/tf2_error__traits.hpp"

namespace tf2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const LookupTransform_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: transform
  {
    out << "transform: ";
    to_flow_style_yaml(msg.transform, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    to_flow_style_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LookupTransform_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transform:\n";
    to_block_style_yaml(msg.transform, out, indentation + 2);
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error:\n";
    to_block_style_yaml(msg.error, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LookupTransform_Result & msg, bool use_flow_style = false)
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

}  // namespace tf2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tf2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tf2_msgs::action::LookupTransform_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  tf2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tf2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tf2_msgs::action::LookupTransform_Result & msg)
{
  return tf2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_Result>()
{
  return "tf2_msgs::action::LookupTransform_Result";
}

template<>
inline const char * name<tf2_msgs::action::LookupTransform_Result>()
{
  return "tf2_msgs/action/LookupTransform_Result";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_Result>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::TransformStamped>::value && has_fixed_size<tf2_msgs::msg::TF2Error>::value> {};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_Result>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::TransformStamped>::value && has_bounded_size<tf2_msgs::msg::TF2Error>::value> {};

template<>
struct is_message<tf2_msgs::action::LookupTransform_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tf2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const LookupTransform_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LookupTransform_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LookupTransform_Feedback & msg, bool use_flow_style = false)
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

}  // namespace tf2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tf2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tf2_msgs::action::LookupTransform_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  tf2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tf2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tf2_msgs::action::LookupTransform_Feedback & msg)
{
  return tf2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_Feedback>()
{
  return "tf2_msgs::action::LookupTransform_Feedback";
}

template<>
inline const char * name<tf2_msgs::action::LookupTransform_Feedback>()
{
  return "tf2_msgs/action/LookupTransform_Feedback";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tf2_msgs::action::LookupTransform_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "tf2_msgs/action/detail/lookup_transform__traits.hpp"

namespace tf2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const LookupTransform_SendGoal_Request & msg,
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
  const LookupTransform_SendGoal_Request & msg,
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

inline std::string to_yaml(const LookupTransform_SendGoal_Request & msg, bool use_flow_style = false)
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

}  // namespace tf2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tf2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tf2_msgs::action::LookupTransform_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tf2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tf2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tf2_msgs::action::LookupTransform_SendGoal_Request & msg)
{
  return tf2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_SendGoal_Request>()
{
  return "tf2_msgs::action::LookupTransform_SendGoal_Request";
}

template<>
inline const char * name<tf2_msgs::action::LookupTransform_SendGoal_Request>()
{
  return "tf2_msgs/action/LookupTransform_SendGoal_Request";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<tf2_msgs::action::LookupTransform_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<tf2_msgs::action::LookupTransform_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tf2_msgs::action::LookupTransform_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace tf2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const LookupTransform_SendGoal_Response & msg,
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
  const LookupTransform_SendGoal_Response & msg,
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

inline std::string to_yaml(const LookupTransform_SendGoal_Response & msg, bool use_flow_style = false)
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

}  // namespace tf2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tf2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tf2_msgs::action::LookupTransform_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tf2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tf2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tf2_msgs::action::LookupTransform_SendGoal_Response & msg)
{
  return tf2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_SendGoal_Response>()
{
  return "tf2_msgs::action::LookupTransform_SendGoal_Response";
}

template<>
inline const char * name<tf2_msgs::action::LookupTransform_SendGoal_Response>()
{
  return "tf2_msgs/action/LookupTransform_SendGoal_Response";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<tf2_msgs::action::LookupTransform_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_SendGoal>()
{
  return "tf2_msgs::action::LookupTransform_SendGoal";
}

template<>
inline const char * name<tf2_msgs::action::LookupTransform_SendGoal>()
{
  return "tf2_msgs/action/LookupTransform_SendGoal";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<tf2_msgs::action::LookupTransform_SendGoal_Request>::value &&
    has_fixed_size<tf2_msgs::action::LookupTransform_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<tf2_msgs::action::LookupTransform_SendGoal_Request>::value &&
    has_bounded_size<tf2_msgs::action::LookupTransform_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<tf2_msgs::action::LookupTransform_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<tf2_msgs::action::LookupTransform_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tf2_msgs::action::LookupTransform_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace tf2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const LookupTransform_GetResult_Request & msg,
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
  const LookupTransform_GetResult_Request & msg,
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

inline std::string to_yaml(const LookupTransform_GetResult_Request & msg, bool use_flow_style = false)
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

}  // namespace tf2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tf2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tf2_msgs::action::LookupTransform_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tf2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tf2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tf2_msgs::action::LookupTransform_GetResult_Request & msg)
{
  return tf2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_GetResult_Request>()
{
  return "tf2_msgs::action::LookupTransform_GetResult_Request";
}

template<>
inline const char * name<tf2_msgs::action::LookupTransform_GetResult_Request>()
{
  return "tf2_msgs/action/LookupTransform_GetResult_Request";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tf2_msgs::action::LookupTransform_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "tf2_msgs/action/detail/lookup_transform__traits.hpp"

namespace tf2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const LookupTransform_GetResult_Response & msg,
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
  const LookupTransform_GetResult_Response & msg,
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

inline std::string to_yaml(const LookupTransform_GetResult_Response & msg, bool use_flow_style = false)
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

}  // namespace tf2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tf2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tf2_msgs::action::LookupTransform_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tf2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tf2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tf2_msgs::action::LookupTransform_GetResult_Response & msg)
{
  return tf2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_GetResult_Response>()
{
  return "tf2_msgs::action::LookupTransform_GetResult_Response";
}

template<>
inline const char * name<tf2_msgs::action::LookupTransform_GetResult_Response>()
{
  return "tf2_msgs/action/LookupTransform_GetResult_Response";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<tf2_msgs::action::LookupTransform_Result>::value> {};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<tf2_msgs::action::LookupTransform_Result>::value> {};

template<>
struct is_message<tf2_msgs::action::LookupTransform_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_GetResult>()
{
  return "tf2_msgs::action::LookupTransform_GetResult";
}

template<>
inline const char * name<tf2_msgs::action::LookupTransform_GetResult>()
{
  return "tf2_msgs/action/LookupTransform_GetResult";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<tf2_msgs::action::LookupTransform_GetResult_Request>::value &&
    has_fixed_size<tf2_msgs::action::LookupTransform_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<tf2_msgs::action::LookupTransform_GetResult_Request>::value &&
    has_bounded_size<tf2_msgs::action::LookupTransform_GetResult_Response>::value
  >
{
};

template<>
struct is_service<tf2_msgs::action::LookupTransform_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<tf2_msgs::action::LookupTransform_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tf2_msgs::action::LookupTransform_GetResult_Response>
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
// #include "tf2_msgs/action/detail/lookup_transform__traits.hpp"

namespace tf2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const LookupTransform_FeedbackMessage & msg,
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
  const LookupTransform_FeedbackMessage & msg,
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

inline std::string to_yaml(const LookupTransform_FeedbackMessage & msg, bool use_flow_style = false)
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

}  // namespace tf2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tf2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tf2_msgs::action::LookupTransform_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  tf2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tf2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tf2_msgs::action::LookupTransform_FeedbackMessage & msg)
{
  return tf2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tf2_msgs::action::LookupTransform_FeedbackMessage>()
{
  return "tf2_msgs::action::LookupTransform_FeedbackMessage";
}

template<>
inline const char * name<tf2_msgs::action::LookupTransform_FeedbackMessage>()
{
  return "tf2_msgs/action/LookupTransform_FeedbackMessage";
}

template<>
struct has_fixed_size<tf2_msgs::action::LookupTransform_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<tf2_msgs::action::LookupTransform_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tf2_msgs::action::LookupTransform_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<tf2_msgs::action::LookupTransform_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tf2_msgs::action::LookupTransform_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<tf2_msgs::action::LookupTransform>
  : std::true_type
{
};

template<>
struct is_action_goal<tf2_msgs::action::LookupTransform_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<tf2_msgs::action::LookupTransform_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<tf2_msgs::action::LookupTransform_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TF2_MSGS__ACTION__DETAIL__LOOKUP_TRANSFORM__TRAITS_HPP_
