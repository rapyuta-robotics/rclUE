// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tf2_msgs:action/LookupTransform.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__ACTION__DETAIL__LOOKUP_TRANSFORM__BUILDER_HPP_
#define TF2_MSGS__ACTION__DETAIL__LOOKUP_TRANSFORM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tf2_msgs/action/detail/lookup_transform__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tf2_msgs
{

namespace action
{

namespace builder
{

class Init_LookupTransform_Goal_advanced
{
public:
  explicit Init_LookupTransform_Goal_advanced(::tf2_msgs::action::LookupTransform_Goal & msg)
  : msg_(msg)
  {}
  ::tf2_msgs::action::LookupTransform_Goal advanced(::tf2_msgs::action::LookupTransform_Goal::_advanced_type arg)
  {
    msg_.advanced = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf2_msgs::action::LookupTransform_Goal msg_;
};

class Init_LookupTransform_Goal_fixed_frame
{
public:
  explicit Init_LookupTransform_Goal_fixed_frame(::tf2_msgs::action::LookupTransform_Goal & msg)
  : msg_(msg)
  {}
  Init_LookupTransform_Goal_advanced fixed_frame(::tf2_msgs::action::LookupTransform_Goal::_fixed_frame_type arg)
  {
    msg_.fixed_frame = std::move(arg);
    return Init_LookupTransform_Goal_advanced(msg_);
  }

private:
  ::tf2_msgs::action::LookupTransform_Goal msg_;
};

class Init_LookupTransform_Goal_target_time
{
public:
  explicit Init_LookupTransform_Goal_target_time(::tf2_msgs::action::LookupTransform_Goal & msg)
  : msg_(msg)
  {}
  Init_LookupTransform_Goal_fixed_frame target_time(::tf2_msgs::action::LookupTransform_Goal::_target_time_type arg)
  {
    msg_.target_time = std::move(arg);
    return Init_LookupTransform_Goal_fixed_frame(msg_);
  }

private:
  ::tf2_msgs::action::LookupTransform_Goal msg_;
};

class Init_LookupTransform_Goal_timeout
{
public:
  explicit Init_LookupTransform_Goal_timeout(::tf2_msgs::action::LookupTransform_Goal & msg)
  : msg_(msg)
  {}
  Init_LookupTransform_Goal_target_time timeout(::tf2_msgs::action::LookupTransform_Goal::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_LookupTransform_Goal_target_time(msg_);
  }

private:
  ::tf2_msgs::action::LookupTransform_Goal msg_;
};

class Init_LookupTransform_Goal_source_time
{
public:
  explicit Init_LookupTransform_Goal_source_time(::tf2_msgs::action::LookupTransform_Goal & msg)
  : msg_(msg)
  {}
  Init_LookupTransform_Goal_timeout source_time(::tf2_msgs::action::LookupTransform_Goal::_source_time_type arg)
  {
    msg_.source_time = std::move(arg);
    return Init_LookupTransform_Goal_timeout(msg_);
  }

private:
  ::tf2_msgs::action::LookupTransform_Goal msg_;
};

class Init_LookupTransform_Goal_source_frame
{
public:
  explicit Init_LookupTransform_Goal_source_frame(::tf2_msgs::action::LookupTransform_Goal & msg)
  : msg_(msg)
  {}
  Init_LookupTransform_Goal_source_time source_frame(::tf2_msgs::action::LookupTransform_Goal::_source_frame_type arg)
  {
    msg_.source_frame = std::move(arg);
    return Init_LookupTransform_Goal_source_time(msg_);
  }

private:
  ::tf2_msgs::action::LookupTransform_Goal msg_;
};

class Init_LookupTransform_Goal_target_frame
{
public:
  Init_LookupTransform_Goal_target_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LookupTransform_Goal_source_frame target_frame(::tf2_msgs::action::LookupTransform_Goal::_target_frame_type arg)
  {
    msg_.target_frame = std::move(arg);
    return Init_LookupTransform_Goal_source_frame(msg_);
  }

private:
  ::tf2_msgs::action::LookupTransform_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_msgs::action::LookupTransform_Goal>()
{
  return tf2_msgs::action::builder::Init_LookupTransform_Goal_target_frame();
}

}  // namespace tf2_msgs


namespace tf2_msgs
{

namespace action
{

namespace builder
{

class Init_LookupTransform_Result_error
{
public:
  explicit Init_LookupTransform_Result_error(::tf2_msgs::action::LookupTransform_Result & msg)
  : msg_(msg)
  {}
  ::tf2_msgs::action::LookupTransform_Result error(::tf2_msgs::action::LookupTransform_Result::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf2_msgs::action::LookupTransform_Result msg_;
};

class Init_LookupTransform_Result_transform
{
public:
  Init_LookupTransform_Result_transform()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LookupTransform_Result_error transform(::tf2_msgs::action::LookupTransform_Result::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return Init_LookupTransform_Result_error(msg_);
  }

private:
  ::tf2_msgs::action::LookupTransform_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_msgs::action::LookupTransform_Result>()
{
  return tf2_msgs::action::builder::Init_LookupTransform_Result_transform();
}

}  // namespace tf2_msgs


namespace tf2_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_msgs::action::LookupTransform_Feedback>()
{
  return ::tf2_msgs::action::LookupTransform_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace tf2_msgs


namespace tf2_msgs
{

namespace action
{

namespace builder
{

class Init_LookupTransform_SendGoal_Request_goal
{
public:
  explicit Init_LookupTransform_SendGoal_Request_goal(::tf2_msgs::action::LookupTransform_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::tf2_msgs::action::LookupTransform_SendGoal_Request goal(::tf2_msgs::action::LookupTransform_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf2_msgs::action::LookupTransform_SendGoal_Request msg_;
};

class Init_LookupTransform_SendGoal_Request_goal_id
{
public:
  Init_LookupTransform_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LookupTransform_SendGoal_Request_goal goal_id(::tf2_msgs::action::LookupTransform_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LookupTransform_SendGoal_Request_goal(msg_);
  }

private:
  ::tf2_msgs::action::LookupTransform_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_msgs::action::LookupTransform_SendGoal_Request>()
{
  return tf2_msgs::action::builder::Init_LookupTransform_SendGoal_Request_goal_id();
}

}  // namespace tf2_msgs


namespace tf2_msgs
{

namespace action
{

namespace builder
{

class Init_LookupTransform_SendGoal_Response_stamp
{
public:
  explicit Init_LookupTransform_SendGoal_Response_stamp(::tf2_msgs::action::LookupTransform_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::tf2_msgs::action::LookupTransform_SendGoal_Response stamp(::tf2_msgs::action::LookupTransform_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf2_msgs::action::LookupTransform_SendGoal_Response msg_;
};

class Init_LookupTransform_SendGoal_Response_accepted
{
public:
  Init_LookupTransform_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LookupTransform_SendGoal_Response_stamp accepted(::tf2_msgs::action::LookupTransform_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_LookupTransform_SendGoal_Response_stamp(msg_);
  }

private:
  ::tf2_msgs::action::LookupTransform_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_msgs::action::LookupTransform_SendGoal_Response>()
{
  return tf2_msgs::action::builder::Init_LookupTransform_SendGoal_Response_accepted();
}

}  // namespace tf2_msgs


namespace tf2_msgs
{

namespace action
{

namespace builder
{

class Init_LookupTransform_GetResult_Request_goal_id
{
public:
  Init_LookupTransform_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tf2_msgs::action::LookupTransform_GetResult_Request goal_id(::tf2_msgs::action::LookupTransform_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf2_msgs::action::LookupTransform_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_msgs::action::LookupTransform_GetResult_Request>()
{
  return tf2_msgs::action::builder::Init_LookupTransform_GetResult_Request_goal_id();
}

}  // namespace tf2_msgs


namespace tf2_msgs
{

namespace action
{

namespace builder
{

class Init_LookupTransform_GetResult_Response_result
{
public:
  explicit Init_LookupTransform_GetResult_Response_result(::tf2_msgs::action::LookupTransform_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::tf2_msgs::action::LookupTransform_GetResult_Response result(::tf2_msgs::action::LookupTransform_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf2_msgs::action::LookupTransform_GetResult_Response msg_;
};

class Init_LookupTransform_GetResult_Response_status
{
public:
  Init_LookupTransform_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LookupTransform_GetResult_Response_result status(::tf2_msgs::action::LookupTransform_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LookupTransform_GetResult_Response_result(msg_);
  }

private:
  ::tf2_msgs::action::LookupTransform_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_msgs::action::LookupTransform_GetResult_Response>()
{
  return tf2_msgs::action::builder::Init_LookupTransform_GetResult_Response_status();
}

}  // namespace tf2_msgs


namespace tf2_msgs
{

namespace action
{

namespace builder
{

class Init_LookupTransform_FeedbackMessage_feedback
{
public:
  explicit Init_LookupTransform_FeedbackMessage_feedback(::tf2_msgs::action::LookupTransform_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::tf2_msgs::action::LookupTransform_FeedbackMessage feedback(::tf2_msgs::action::LookupTransform_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf2_msgs::action::LookupTransform_FeedbackMessage msg_;
};

class Init_LookupTransform_FeedbackMessage_goal_id
{
public:
  Init_LookupTransform_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LookupTransform_FeedbackMessage_feedback goal_id(::tf2_msgs::action::LookupTransform_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LookupTransform_FeedbackMessage_feedback(msg_);
  }

private:
  ::tf2_msgs::action::LookupTransform_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_msgs::action::LookupTransform_FeedbackMessage>()
{
  return tf2_msgs::action::builder::Init_LookupTransform_FeedbackMessage_goal_id();
}

}  // namespace tf2_msgs

#endif  // TF2_MSGS__ACTION__DETAIL__LOOKUP_TRANSFORM__BUILDER_HPP_
