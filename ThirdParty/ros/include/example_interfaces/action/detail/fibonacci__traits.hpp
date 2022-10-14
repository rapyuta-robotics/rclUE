// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from example_interfaces:action/Fibonacci.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__ACTION__DETAIL__FIBONACCI__TRAITS_HPP_
#define EXAMPLE_INTERFACES__ACTION__DETAIL__FIBONACCI__TRAITS_HPP_

#include "example_interfaces/action/detail/fibonacci__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::action::Fibonacci_Goal>()
{
  return "example_interfaces::action::Fibonacci_Goal";
}

template<>
inline const char * name<example_interfaces::action::Fibonacci_Goal>()
{
  return "example_interfaces/action/Fibonacci_Goal";
}

template<>
struct has_fixed_size<example_interfaces::action::Fibonacci_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<example_interfaces::action::Fibonacci_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<example_interfaces::action::Fibonacci_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::action::Fibonacci_Result>()
{
  return "example_interfaces::action::Fibonacci_Result";
}

template<>
inline const char * name<example_interfaces::action::Fibonacci_Result>()
{
  return "example_interfaces/action/Fibonacci_Result";
}

template<>
struct has_fixed_size<example_interfaces::action::Fibonacci_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<example_interfaces::action::Fibonacci_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<example_interfaces::action::Fibonacci_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::action::Fibonacci_Feedback>()
{
  return "example_interfaces::action::Fibonacci_Feedback";
}

template<>
inline const char * name<example_interfaces::action::Fibonacci_Feedback>()
{
  return "example_interfaces/action/Fibonacci_Feedback";
}

template<>
struct has_fixed_size<example_interfaces::action::Fibonacci_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<example_interfaces::action::Fibonacci_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<example_interfaces::action::Fibonacci_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "example_interfaces/action/detail/fibonacci__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::action::Fibonacci_SendGoal_Request>()
{
  return "example_interfaces::action::Fibonacci_SendGoal_Request";
}

template<>
inline const char * name<example_interfaces::action::Fibonacci_SendGoal_Request>()
{
  return "example_interfaces/action/Fibonacci_SendGoal_Request";
}

template<>
struct has_fixed_size<example_interfaces::action::Fibonacci_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<example_interfaces::action::Fibonacci_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<example_interfaces::action::Fibonacci_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<example_interfaces::action::Fibonacci_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<example_interfaces::action::Fibonacci_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::action::Fibonacci_SendGoal_Response>()
{
  return "example_interfaces::action::Fibonacci_SendGoal_Response";
}

template<>
inline const char * name<example_interfaces::action::Fibonacci_SendGoal_Response>()
{
  return "example_interfaces/action/Fibonacci_SendGoal_Response";
}

template<>
struct has_fixed_size<example_interfaces::action::Fibonacci_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<example_interfaces::action::Fibonacci_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<example_interfaces::action::Fibonacci_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::action::Fibonacci_SendGoal>()
{
  return "example_interfaces::action::Fibonacci_SendGoal";
}

template<>
inline const char * name<example_interfaces::action::Fibonacci_SendGoal>()
{
  return "example_interfaces/action/Fibonacci_SendGoal";
}

template<>
struct has_fixed_size<example_interfaces::action::Fibonacci_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<example_interfaces::action::Fibonacci_SendGoal_Request>::value &&
    has_fixed_size<example_interfaces::action::Fibonacci_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<example_interfaces::action::Fibonacci_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<example_interfaces::action::Fibonacci_SendGoal_Request>::value &&
    has_bounded_size<example_interfaces::action::Fibonacci_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<example_interfaces::action::Fibonacci_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<example_interfaces::action::Fibonacci_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<example_interfaces::action::Fibonacci_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::action::Fibonacci_GetResult_Request>()
{
  return "example_interfaces::action::Fibonacci_GetResult_Request";
}

template<>
inline const char * name<example_interfaces::action::Fibonacci_GetResult_Request>()
{
  return "example_interfaces/action/Fibonacci_GetResult_Request";
}

template<>
struct has_fixed_size<example_interfaces::action::Fibonacci_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<example_interfaces::action::Fibonacci_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<example_interfaces::action::Fibonacci_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "example_interfaces/action/detail/fibonacci__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::action::Fibonacci_GetResult_Response>()
{
  return "example_interfaces::action::Fibonacci_GetResult_Response";
}

template<>
inline const char * name<example_interfaces::action::Fibonacci_GetResult_Response>()
{
  return "example_interfaces/action/Fibonacci_GetResult_Response";
}

template<>
struct has_fixed_size<example_interfaces::action::Fibonacci_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<example_interfaces::action::Fibonacci_Result>::value> {};

template<>
struct has_bounded_size<example_interfaces::action::Fibonacci_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<example_interfaces::action::Fibonacci_Result>::value> {};

template<>
struct is_message<example_interfaces::action::Fibonacci_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::action::Fibonacci_GetResult>()
{
  return "example_interfaces::action::Fibonacci_GetResult";
}

template<>
inline const char * name<example_interfaces::action::Fibonacci_GetResult>()
{
  return "example_interfaces/action/Fibonacci_GetResult";
}

template<>
struct has_fixed_size<example_interfaces::action::Fibonacci_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<example_interfaces::action::Fibonacci_GetResult_Request>::value &&
    has_fixed_size<example_interfaces::action::Fibonacci_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<example_interfaces::action::Fibonacci_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<example_interfaces::action::Fibonacci_GetResult_Request>::value &&
    has_bounded_size<example_interfaces::action::Fibonacci_GetResult_Response>::value
  >
{
};

template<>
struct is_service<example_interfaces::action::Fibonacci_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<example_interfaces::action::Fibonacci_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<example_interfaces::action::Fibonacci_GetResult_Response>
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
// #include "example_interfaces/action/detail/fibonacci__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::action::Fibonacci_FeedbackMessage>()
{
  return "example_interfaces::action::Fibonacci_FeedbackMessage";
}

template<>
inline const char * name<example_interfaces::action::Fibonacci_FeedbackMessage>()
{
  return "example_interfaces/action/Fibonacci_FeedbackMessage";
}

template<>
struct has_fixed_size<example_interfaces::action::Fibonacci_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<example_interfaces::action::Fibonacci_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<example_interfaces::action::Fibonacci_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<example_interfaces::action::Fibonacci_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<example_interfaces::action::Fibonacci_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<example_interfaces::action::Fibonacci>
  : std::true_type
{
};

template<>
struct is_action_goal<example_interfaces::action::Fibonacci_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<example_interfaces::action::Fibonacci_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<example_interfaces::action::Fibonacci_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // EXAMPLE_INTERFACES__ACTION__DETAIL__FIBONACCI__TRAITS_HPP_
