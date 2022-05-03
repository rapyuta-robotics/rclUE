// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from example_interfaces:action/Fibonacci.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_
#define EXAMPLE_INTERFACES__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_

#include "example_interfaces/action/detail/fibonacci__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace example_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Goal_order
{
public:
  Init_Fibonacci_Goal_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::example_interfaces::action::Fibonacci_Goal order(::example_interfaces::action::Fibonacci_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::action::Fibonacci_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::action::Fibonacci_Goal>()
{
  return example_interfaces::action::builder::Init_Fibonacci_Goal_order();
}

}  // namespace example_interfaces


namespace example_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Result_sequence
{
public:
  Init_Fibonacci_Result_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::example_interfaces::action::Fibonacci_Result sequence(::example_interfaces::action::Fibonacci_Result::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::action::Fibonacci_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::action::Fibonacci_Result>()
{
  return example_interfaces::action::builder::Init_Fibonacci_Result_sequence();
}

}  // namespace example_interfaces


namespace example_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Feedback_sequence
{
public:
  Init_Fibonacci_Feedback_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::example_interfaces::action::Fibonacci_Feedback sequence(::example_interfaces::action::Fibonacci_Feedback::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::action::Fibonacci_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::action::Fibonacci_Feedback>()
{
  return example_interfaces::action::builder::Init_Fibonacci_Feedback_sequence();
}

}  // namespace example_interfaces


namespace example_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibonacci_SendGoal_Request_goal
{
public:
  explicit Init_Fibonacci_SendGoal_Request_goal(::example_interfaces::action::Fibonacci_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::example_interfaces::action::Fibonacci_SendGoal_Request goal(::example_interfaces::action::Fibonacci_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::action::Fibonacci_SendGoal_Request msg_;
};

class Init_Fibonacci_SendGoal_Request_goal_id
{
public:
  Init_Fibonacci_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_SendGoal_Request_goal goal_id(::example_interfaces::action::Fibonacci_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Fibonacci_SendGoal_Request_goal(msg_);
  }

private:
  ::example_interfaces::action::Fibonacci_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::action::Fibonacci_SendGoal_Request>()
{
  return example_interfaces::action::builder::Init_Fibonacci_SendGoal_Request_goal_id();
}

}  // namespace example_interfaces


namespace example_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibonacci_SendGoal_Response_stamp
{
public:
  explicit Init_Fibonacci_SendGoal_Response_stamp(::example_interfaces::action::Fibonacci_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::example_interfaces::action::Fibonacci_SendGoal_Response stamp(::example_interfaces::action::Fibonacci_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::action::Fibonacci_SendGoal_Response msg_;
};

class Init_Fibonacci_SendGoal_Response_accepted
{
public:
  Init_Fibonacci_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_SendGoal_Response_stamp accepted(::example_interfaces::action::Fibonacci_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Fibonacci_SendGoal_Response_stamp(msg_);
  }

private:
  ::example_interfaces::action::Fibonacci_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::action::Fibonacci_SendGoal_Response>()
{
  return example_interfaces::action::builder::Init_Fibonacci_SendGoal_Response_accepted();
}

}  // namespace example_interfaces


namespace example_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibonacci_GetResult_Request_goal_id
{
public:
  Init_Fibonacci_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::example_interfaces::action::Fibonacci_GetResult_Request goal_id(::example_interfaces::action::Fibonacci_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::action::Fibonacci_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::action::Fibonacci_GetResult_Request>()
{
  return example_interfaces::action::builder::Init_Fibonacci_GetResult_Request_goal_id();
}

}  // namespace example_interfaces


namespace example_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibonacci_GetResult_Response_result
{
public:
  explicit Init_Fibonacci_GetResult_Response_result(::example_interfaces::action::Fibonacci_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::example_interfaces::action::Fibonacci_GetResult_Response result(::example_interfaces::action::Fibonacci_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::action::Fibonacci_GetResult_Response msg_;
};

class Init_Fibonacci_GetResult_Response_status
{
public:
  Init_Fibonacci_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_GetResult_Response_result status(::example_interfaces::action::Fibonacci_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Fibonacci_GetResult_Response_result(msg_);
  }

private:
  ::example_interfaces::action::Fibonacci_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::action::Fibonacci_GetResult_Response>()
{
  return example_interfaces::action::builder::Init_Fibonacci_GetResult_Response_status();
}

}  // namespace example_interfaces


namespace example_interfaces
{

namespace action
{

namespace builder
{

class Init_Fibonacci_FeedbackMessage_feedback
{
public:
  explicit Init_Fibonacci_FeedbackMessage_feedback(::example_interfaces::action::Fibonacci_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::example_interfaces::action::Fibonacci_FeedbackMessage feedback(::example_interfaces::action::Fibonacci_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::action::Fibonacci_FeedbackMessage msg_;
};

class Init_Fibonacci_FeedbackMessage_goal_id
{
public:
  Init_Fibonacci_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_FeedbackMessage_feedback goal_id(::example_interfaces::action::Fibonacci_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Fibonacci_FeedbackMessage_feedback(msg_);
  }

private:
  ::example_interfaces::action::Fibonacci_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::action::Fibonacci_FeedbackMessage>()
{
  return example_interfaces::action::builder::Init_Fibonacci_FeedbackMessage_goal_id();
}

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_
