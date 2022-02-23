// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ue_msgs:action/SimShutDown.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__ACTION__DETAIL__SIM_SHUT_DOWN__BUILDER_HPP_
#define UE_MSGS__ACTION__DETAIL__SIM_SHUT_DOWN__BUILDER_HPP_

#include "ue_msgs/action/detail/sim_shut_down__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ue_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::action::SimShutDown_Goal>()
{
  return ::ue_msgs::action::SimShutDown_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ue_msgs


namespace ue_msgs
{

namespace action
{

namespace builder
{

class Init_SimShutDown_Result_success
{
public:
  Init_SimShutDown_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ue_msgs::action::SimShutDown_Result success(::ue_msgs::action::SimShutDown_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::action::SimShutDown_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::action::SimShutDown_Result>()
{
  return ue_msgs::action::builder::Init_SimShutDown_Result_success();
}

}  // namespace ue_msgs


namespace ue_msgs
{

namespace action
{

namespace builder
{

class Init_SimShutDown_Feedback_done
{
public:
  Init_SimShutDown_Feedback_done()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ue_msgs::action::SimShutDown_Feedback done(::ue_msgs::action::SimShutDown_Feedback::_done_type arg)
  {
    msg_.done = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::action::SimShutDown_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::action::SimShutDown_Feedback>()
{
  return ue_msgs::action::builder::Init_SimShutDown_Feedback_done();
}

}  // namespace ue_msgs


namespace ue_msgs
{

namespace action
{

namespace builder
{

class Init_SimShutDown_SendGoal_Request_goal
{
public:
  explicit Init_SimShutDown_SendGoal_Request_goal(::ue_msgs::action::SimShutDown_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ue_msgs::action::SimShutDown_SendGoal_Request goal(::ue_msgs::action::SimShutDown_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::action::SimShutDown_SendGoal_Request msg_;
};

class Init_SimShutDown_SendGoal_Request_goal_id
{
public:
  Init_SimShutDown_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimShutDown_SendGoal_Request_goal goal_id(::ue_msgs::action::SimShutDown_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SimShutDown_SendGoal_Request_goal(msg_);
  }

private:
  ::ue_msgs::action::SimShutDown_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::action::SimShutDown_SendGoal_Request>()
{
  return ue_msgs::action::builder::Init_SimShutDown_SendGoal_Request_goal_id();
}

}  // namespace ue_msgs


namespace ue_msgs
{

namespace action
{

namespace builder
{

class Init_SimShutDown_SendGoal_Response_stamp
{
public:
  explicit Init_SimShutDown_SendGoal_Response_stamp(::ue_msgs::action::SimShutDown_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ue_msgs::action::SimShutDown_SendGoal_Response stamp(::ue_msgs::action::SimShutDown_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::action::SimShutDown_SendGoal_Response msg_;
};

class Init_SimShutDown_SendGoal_Response_accepted
{
public:
  Init_SimShutDown_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimShutDown_SendGoal_Response_stamp accepted(::ue_msgs::action::SimShutDown_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SimShutDown_SendGoal_Response_stamp(msg_);
  }

private:
  ::ue_msgs::action::SimShutDown_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::action::SimShutDown_SendGoal_Response>()
{
  return ue_msgs::action::builder::Init_SimShutDown_SendGoal_Response_accepted();
}

}  // namespace ue_msgs


namespace ue_msgs
{

namespace action
{

namespace builder
{

class Init_SimShutDown_GetResult_Request_goal_id
{
public:
  Init_SimShutDown_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ue_msgs::action::SimShutDown_GetResult_Request goal_id(::ue_msgs::action::SimShutDown_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::action::SimShutDown_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::action::SimShutDown_GetResult_Request>()
{
  return ue_msgs::action::builder::Init_SimShutDown_GetResult_Request_goal_id();
}

}  // namespace ue_msgs


namespace ue_msgs
{

namespace action
{

namespace builder
{

class Init_SimShutDown_GetResult_Response_result
{
public:
  explicit Init_SimShutDown_GetResult_Response_result(::ue_msgs::action::SimShutDown_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ue_msgs::action::SimShutDown_GetResult_Response result(::ue_msgs::action::SimShutDown_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::action::SimShutDown_GetResult_Response msg_;
};

class Init_SimShutDown_GetResult_Response_status
{
public:
  Init_SimShutDown_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimShutDown_GetResult_Response_result status(::ue_msgs::action::SimShutDown_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SimShutDown_GetResult_Response_result(msg_);
  }

private:
  ::ue_msgs::action::SimShutDown_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::action::SimShutDown_GetResult_Response>()
{
  return ue_msgs::action::builder::Init_SimShutDown_GetResult_Response_status();
}

}  // namespace ue_msgs


namespace ue_msgs
{

namespace action
{

namespace builder
{

class Init_SimShutDown_FeedbackMessage_feedback
{
public:
  explicit Init_SimShutDown_FeedbackMessage_feedback(::ue_msgs::action::SimShutDown_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ue_msgs::action::SimShutDown_FeedbackMessage feedback(::ue_msgs::action::SimShutDown_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ue_msgs::action::SimShutDown_FeedbackMessage msg_;
};

class Init_SimShutDown_FeedbackMessage_goal_id
{
public:
  Init_SimShutDown_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimShutDown_FeedbackMessage_feedback goal_id(::ue_msgs::action::SimShutDown_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SimShutDown_FeedbackMessage_feedback(msg_);
  }

private:
  ::ue_msgs::action::SimShutDown_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ue_msgs::action::SimShutDown_FeedbackMessage>()
{
  return ue_msgs::action::builder::Init_SimShutDown_FeedbackMessage_goal_id();
}

}  // namespace ue_msgs

#endif  // UE_MSGS__ACTION__DETAIL__SIM_SHUT_DOWN__BUILDER_HPP_
