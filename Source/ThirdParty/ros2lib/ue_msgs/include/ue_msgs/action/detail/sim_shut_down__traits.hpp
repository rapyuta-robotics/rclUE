// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue_msgs:action/SimShutDown.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__ACTION__DETAIL__SIM_SHUT_DOWN__TRAITS_HPP_
#define UE_MSGS__ACTION__DETAIL__SIM_SHUT_DOWN__TRAITS_HPP_

#include "ue_msgs/action/detail/sim_shut_down__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::action::SimShutDown_Goal>()
{
  return "ue_msgs::action::SimShutDown_Goal";
}

template<>
inline const char * name<ue_msgs::action::SimShutDown_Goal>()
{
  return "ue_msgs/action/SimShutDown_Goal";
}

template<>
struct has_fixed_size<ue_msgs::action::SimShutDown_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ue_msgs::action::SimShutDown_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ue_msgs::action::SimShutDown_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::action::SimShutDown_Result>()
{
  return "ue_msgs::action::SimShutDown_Result";
}

template<>
inline const char * name<ue_msgs::action::SimShutDown_Result>()
{
  return "ue_msgs/action/SimShutDown_Result";
}

template<>
struct has_fixed_size<ue_msgs::action::SimShutDown_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ue_msgs::action::SimShutDown_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ue_msgs::action::SimShutDown_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::action::SimShutDown_Feedback>()
{
  return "ue_msgs::action::SimShutDown_Feedback";
}

template<>
inline const char * name<ue_msgs::action::SimShutDown_Feedback>()
{
  return "ue_msgs/action/SimShutDown_Feedback";
}

template<>
struct has_fixed_size<ue_msgs::action::SimShutDown_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ue_msgs::action::SimShutDown_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ue_msgs::action::SimShutDown_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ue_msgs/action/detail/sim_shut_down__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::action::SimShutDown_SendGoal_Request>()
{
  return "ue_msgs::action::SimShutDown_SendGoal_Request";
}

template<>
inline const char * name<ue_msgs::action::SimShutDown_SendGoal_Request>()
{
  return "ue_msgs/action/SimShutDown_SendGoal_Request";
}

template<>
struct has_fixed_size<ue_msgs::action::SimShutDown_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<ue_msgs::action::SimShutDown_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ue_msgs::action::SimShutDown_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<ue_msgs::action::SimShutDown_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ue_msgs::action::SimShutDown_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::action::SimShutDown_SendGoal_Response>()
{
  return "ue_msgs::action::SimShutDown_SendGoal_Response";
}

template<>
inline const char * name<ue_msgs::action::SimShutDown_SendGoal_Response>()
{
  return "ue_msgs/action/SimShutDown_SendGoal_Response";
}

template<>
struct has_fixed_size<ue_msgs::action::SimShutDown_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ue_msgs::action::SimShutDown_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ue_msgs::action::SimShutDown_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::action::SimShutDown_SendGoal>()
{
  return "ue_msgs::action::SimShutDown_SendGoal";
}

template<>
inline const char * name<ue_msgs::action::SimShutDown_SendGoal>()
{
  return "ue_msgs/action/SimShutDown_SendGoal";
}

template<>
struct has_fixed_size<ue_msgs::action::SimShutDown_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ue_msgs::action::SimShutDown_SendGoal_Request>::value &&
    has_fixed_size<ue_msgs::action::SimShutDown_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ue_msgs::action::SimShutDown_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ue_msgs::action::SimShutDown_SendGoal_Request>::value &&
    has_bounded_size<ue_msgs::action::SimShutDown_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ue_msgs::action::SimShutDown_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ue_msgs::action::SimShutDown_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ue_msgs::action::SimShutDown_SendGoal_Response>
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
inline const char * data_type<ue_msgs::action::SimShutDown_GetResult_Request>()
{
  return "ue_msgs::action::SimShutDown_GetResult_Request";
}

template<>
inline const char * name<ue_msgs::action::SimShutDown_GetResult_Request>()
{
  return "ue_msgs/action/SimShutDown_GetResult_Request";
}

template<>
struct has_fixed_size<ue_msgs::action::SimShutDown_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ue_msgs::action::SimShutDown_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ue_msgs::action::SimShutDown_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ue_msgs/action/detail/sim_shut_down__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::action::SimShutDown_GetResult_Response>()
{
  return "ue_msgs::action::SimShutDown_GetResult_Response";
}

template<>
inline const char * name<ue_msgs::action::SimShutDown_GetResult_Response>()
{
  return "ue_msgs/action/SimShutDown_GetResult_Response";
}

template<>
struct has_fixed_size<ue_msgs::action::SimShutDown_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ue_msgs::action::SimShutDown_Result>::value> {};

template<>
struct has_bounded_size<ue_msgs::action::SimShutDown_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ue_msgs::action::SimShutDown_Result>::value> {};

template<>
struct is_message<ue_msgs::action::SimShutDown_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::action::SimShutDown_GetResult>()
{
  return "ue_msgs::action::SimShutDown_GetResult";
}

template<>
inline const char * name<ue_msgs::action::SimShutDown_GetResult>()
{
  return "ue_msgs/action/SimShutDown_GetResult";
}

template<>
struct has_fixed_size<ue_msgs::action::SimShutDown_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ue_msgs::action::SimShutDown_GetResult_Request>::value &&
    has_fixed_size<ue_msgs::action::SimShutDown_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ue_msgs::action::SimShutDown_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ue_msgs::action::SimShutDown_GetResult_Request>::value &&
    has_bounded_size<ue_msgs::action::SimShutDown_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ue_msgs::action::SimShutDown_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ue_msgs::action::SimShutDown_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ue_msgs::action::SimShutDown_GetResult_Response>
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
// #include "ue_msgs/action/detail/sim_shut_down__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::action::SimShutDown_FeedbackMessage>()
{
  return "ue_msgs::action::SimShutDown_FeedbackMessage";
}

template<>
inline const char * name<ue_msgs::action::SimShutDown_FeedbackMessage>()
{
  return "ue_msgs/action/SimShutDown_FeedbackMessage";
}

template<>
struct has_fixed_size<ue_msgs::action::SimShutDown_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<ue_msgs::action::SimShutDown_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ue_msgs::action::SimShutDown_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<ue_msgs::action::SimShutDown_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ue_msgs::action::SimShutDown_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ue_msgs::action::SimShutDown>
  : std::true_type
{
};

template<>
struct is_action_goal<ue_msgs::action::SimShutDown_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ue_msgs::action::SimShutDown_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ue_msgs::action::SimShutDown_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // UE_MSGS__ACTION__DETAIL__SIM_SHUT_DOWN__TRAITS_HPP_
