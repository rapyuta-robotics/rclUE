// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simulation_interfaces:action/SimulateSteps.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__ACTION__DETAIL__SIMULATE_STEPS__TRAITS_HPP_
#define SIMULATION_INTERFACES__ACTION__DETAIL__SIMULATE_STEPS__TRAITS_HPP_

#include "simulation_interfaces/action/detail/simulate_steps__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

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

namespace rosidl_generator_traits
{

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

namespace rosidl_generator_traits
{

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

namespace rosidl_generator_traits
{

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

namespace rosidl_generator_traits
{

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

namespace rosidl_generator_traits
{

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

namespace rosidl_generator_traits
{

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

namespace rosidl_generator_traits
{

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
