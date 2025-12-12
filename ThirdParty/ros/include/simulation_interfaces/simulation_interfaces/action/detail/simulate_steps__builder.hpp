// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simulation_interfaces:action/SimulateSteps.idl
// generated code does not contain a copyright notice

#ifndef SIMULATION_INTERFACES__ACTION__DETAIL__SIMULATE_STEPS__BUILDER_HPP_
#define SIMULATION_INTERFACES__ACTION__DETAIL__SIMULATE_STEPS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simulation_interfaces/action/detail/simulate_steps__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simulation_interfaces
{

namespace action
{

namespace builder
{

class Init_SimulateSteps_Goal_steps
{
public:
  Init_SimulateSteps_Goal_steps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::action::SimulateSteps_Goal steps(::simulation_interfaces::action::SimulateSteps_Goal::_steps_type arg)
  {
    msg_.steps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::action::SimulateSteps_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::action::SimulateSteps_Goal>()
{
  return simulation_interfaces::action::builder::Init_SimulateSteps_Goal_steps();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace action
{

namespace builder
{

class Init_SimulateSteps_Result_result
{
public:
  Init_SimulateSteps_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::action::SimulateSteps_Result result(::simulation_interfaces::action::SimulateSteps_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::action::SimulateSteps_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::action::SimulateSteps_Result>()
{
  return simulation_interfaces::action::builder::Init_SimulateSteps_Result_result();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace action
{

namespace builder
{

class Init_SimulateSteps_Feedback_remaining_steps
{
public:
  explicit Init_SimulateSteps_Feedback_remaining_steps(::simulation_interfaces::action::SimulateSteps_Feedback & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::action::SimulateSteps_Feedback remaining_steps(::simulation_interfaces::action::SimulateSteps_Feedback::_remaining_steps_type arg)
  {
    msg_.remaining_steps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::action::SimulateSteps_Feedback msg_;
};

class Init_SimulateSteps_Feedback_completed_steps
{
public:
  Init_SimulateSteps_Feedback_completed_steps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimulateSteps_Feedback_remaining_steps completed_steps(::simulation_interfaces::action::SimulateSteps_Feedback::_completed_steps_type arg)
  {
    msg_.completed_steps = std::move(arg);
    return Init_SimulateSteps_Feedback_remaining_steps(msg_);
  }

private:
  ::simulation_interfaces::action::SimulateSteps_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::action::SimulateSteps_Feedback>()
{
  return simulation_interfaces::action::builder::Init_SimulateSteps_Feedback_completed_steps();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace action
{

namespace builder
{

class Init_SimulateSteps_SendGoal_Request_goal
{
public:
  explicit Init_SimulateSteps_SendGoal_Request_goal(::simulation_interfaces::action::SimulateSteps_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::action::SimulateSteps_SendGoal_Request goal(::simulation_interfaces::action::SimulateSteps_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::action::SimulateSteps_SendGoal_Request msg_;
};

class Init_SimulateSteps_SendGoal_Request_goal_id
{
public:
  Init_SimulateSteps_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimulateSteps_SendGoal_Request_goal goal_id(::simulation_interfaces::action::SimulateSteps_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SimulateSteps_SendGoal_Request_goal(msg_);
  }

private:
  ::simulation_interfaces::action::SimulateSteps_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::action::SimulateSteps_SendGoal_Request>()
{
  return simulation_interfaces::action::builder::Init_SimulateSteps_SendGoal_Request_goal_id();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace action
{

namespace builder
{

class Init_SimulateSteps_SendGoal_Response_stamp
{
public:
  explicit Init_SimulateSteps_SendGoal_Response_stamp(::simulation_interfaces::action::SimulateSteps_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::action::SimulateSteps_SendGoal_Response stamp(::simulation_interfaces::action::SimulateSteps_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::action::SimulateSteps_SendGoal_Response msg_;
};

class Init_SimulateSteps_SendGoal_Response_accepted
{
public:
  Init_SimulateSteps_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimulateSteps_SendGoal_Response_stamp accepted(::simulation_interfaces::action::SimulateSteps_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SimulateSteps_SendGoal_Response_stamp(msg_);
  }

private:
  ::simulation_interfaces::action::SimulateSteps_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::action::SimulateSteps_SendGoal_Response>()
{
  return simulation_interfaces::action::builder::Init_SimulateSteps_SendGoal_Response_accepted();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace action
{

namespace builder
{

class Init_SimulateSteps_GetResult_Request_goal_id
{
public:
  Init_SimulateSteps_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simulation_interfaces::action::SimulateSteps_GetResult_Request goal_id(::simulation_interfaces::action::SimulateSteps_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::action::SimulateSteps_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::action::SimulateSteps_GetResult_Request>()
{
  return simulation_interfaces::action::builder::Init_SimulateSteps_GetResult_Request_goal_id();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace action
{

namespace builder
{

class Init_SimulateSteps_GetResult_Response_result
{
public:
  explicit Init_SimulateSteps_GetResult_Response_result(::simulation_interfaces::action::SimulateSteps_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::action::SimulateSteps_GetResult_Response result(::simulation_interfaces::action::SimulateSteps_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::action::SimulateSteps_GetResult_Response msg_;
};

class Init_SimulateSteps_GetResult_Response_status
{
public:
  Init_SimulateSteps_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimulateSteps_GetResult_Response_result status(::simulation_interfaces::action::SimulateSteps_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SimulateSteps_GetResult_Response_result(msg_);
  }

private:
  ::simulation_interfaces::action::SimulateSteps_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::action::SimulateSteps_GetResult_Response>()
{
  return simulation_interfaces::action::builder::Init_SimulateSteps_GetResult_Response_status();
}

}  // namespace simulation_interfaces


namespace simulation_interfaces
{

namespace action
{

namespace builder
{

class Init_SimulateSteps_FeedbackMessage_feedback
{
public:
  explicit Init_SimulateSteps_FeedbackMessage_feedback(::simulation_interfaces::action::SimulateSteps_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::simulation_interfaces::action::SimulateSteps_FeedbackMessage feedback(::simulation_interfaces::action::SimulateSteps_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simulation_interfaces::action::SimulateSteps_FeedbackMessage msg_;
};

class Init_SimulateSteps_FeedbackMessage_goal_id
{
public:
  Init_SimulateSteps_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimulateSteps_FeedbackMessage_feedback goal_id(::simulation_interfaces::action::SimulateSteps_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SimulateSteps_FeedbackMessage_feedback(msg_);
  }

private:
  ::simulation_interfaces::action::SimulateSteps_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::simulation_interfaces::action::SimulateSteps_FeedbackMessage>()
{
  return simulation_interfaces::action::builder::Init_SimulateSteps_FeedbackMessage_goal_id();
}

}  // namespace simulation_interfaces

#endif  // SIMULATION_INTERFACES__ACTION__DETAIL__SIMULATE_STEPS__BUILDER_HPP_
