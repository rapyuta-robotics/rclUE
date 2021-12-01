// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from example_interfaces:action/Fibonacci.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__ACTION__DETAIL__FIBONACCI__STRUCT_HPP_
#define EXAMPLE_INTERFACES__ACTION__DETAIL__FIBONACCI__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__example_interfaces__action__Fibonacci_Goal __attribute__((deprecated))
#else
# define DEPRECATED__example_interfaces__action__Fibonacci_Goal __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Fibonacci_Goal_
{
  using Type = Fibonacci_Goal_<ContainerAllocator>;

  explicit Fibonacci_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order = 0l;
    }
  }

  explicit Fibonacci_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order = 0l;
    }
  }

  // field types and members
  using _order_type =
    int32_t;
  _order_type order;

  // setters for named parameter idiom
  Type & set__order(
    const int32_t & _arg)
  {
    this->order = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::action::Fibonacci_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::action::Fibonacci_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_interfaces__action__Fibonacci_Goal
    std::shared_ptr<example_interfaces::action::Fibonacci_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_interfaces__action__Fibonacci_Goal
    std::shared_ptr<example_interfaces::action::Fibonacci_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fibonacci_Goal_ & other) const
  {
    if (this->order != other.order) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fibonacci_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fibonacci_Goal_

// alias to use template instance with default allocator
using Fibonacci_Goal =
  example_interfaces::action::Fibonacci_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace example_interfaces


#ifndef _WIN32
# define DEPRECATED__example_interfaces__action__Fibonacci_Result __attribute__((deprecated))
#else
# define DEPRECATED__example_interfaces__action__Fibonacci_Result __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Fibonacci_Result_
{
  using Type = Fibonacci_Result_<ContainerAllocator>;

  explicit Fibonacci_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Fibonacci_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _sequence_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _sequence_type sequence;

  // setters for named parameter idiom
  Type & set__sequence(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->sequence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::action::Fibonacci_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::action::Fibonacci_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_interfaces__action__Fibonacci_Result
    std::shared_ptr<example_interfaces::action::Fibonacci_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_interfaces__action__Fibonacci_Result
    std::shared_ptr<example_interfaces::action::Fibonacci_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fibonacci_Result_ & other) const
  {
    if (this->sequence != other.sequence) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fibonacci_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fibonacci_Result_

// alias to use template instance with default allocator
using Fibonacci_Result =
  example_interfaces::action::Fibonacci_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace example_interfaces


#ifndef _WIN32
# define DEPRECATED__example_interfaces__action__Fibonacci_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__example_interfaces__action__Fibonacci_Feedback __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Fibonacci_Feedback_
{
  using Type = Fibonacci_Feedback_<ContainerAllocator>;

  explicit Fibonacci_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Fibonacci_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _sequence_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _sequence_type sequence;

  // setters for named parameter idiom
  Type & set__sequence(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->sequence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::action::Fibonacci_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::action::Fibonacci_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_interfaces__action__Fibonacci_Feedback
    std::shared_ptr<example_interfaces::action::Fibonacci_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_interfaces__action__Fibonacci_Feedback
    std::shared_ptr<example_interfaces::action::Fibonacci_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fibonacci_Feedback_ & other) const
  {
    if (this->sequence != other.sequence) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fibonacci_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fibonacci_Feedback_

// alias to use template instance with default allocator
using Fibonacci_Feedback =
  example_interfaces::action::Fibonacci_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace example_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "example_interfaces/action/detail/fibonacci__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__example_interfaces__action__Fibonacci_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__example_interfaces__action__Fibonacci_SendGoal_Request __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Fibonacci_SendGoal_Request_
{
  using Type = Fibonacci_SendGoal_Request_<ContainerAllocator>;

  explicit Fibonacci_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Fibonacci_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    example_interfaces::action::Fibonacci_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const example_interfaces::action::Fibonacci_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::action::Fibonacci_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::action::Fibonacci_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_interfaces__action__Fibonacci_SendGoal_Request
    std::shared_ptr<example_interfaces::action::Fibonacci_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_interfaces__action__Fibonacci_SendGoal_Request
    std::shared_ptr<example_interfaces::action::Fibonacci_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fibonacci_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fibonacci_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fibonacci_SendGoal_Request_

// alias to use template instance with default allocator
using Fibonacci_SendGoal_Request =
  example_interfaces::action::Fibonacci_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace example_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__example_interfaces__action__Fibonacci_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__example_interfaces__action__Fibonacci_SendGoal_Response __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Fibonacci_SendGoal_Response_
{
  using Type = Fibonacci_SendGoal_Response_<ContainerAllocator>;

  explicit Fibonacci_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Fibonacci_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::action::Fibonacci_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::action::Fibonacci_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_interfaces__action__Fibonacci_SendGoal_Response
    std::shared_ptr<example_interfaces::action::Fibonacci_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_interfaces__action__Fibonacci_SendGoal_Response
    std::shared_ptr<example_interfaces::action::Fibonacci_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fibonacci_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fibonacci_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fibonacci_SendGoal_Response_

// alias to use template instance with default allocator
using Fibonacci_SendGoal_Response =
  example_interfaces::action::Fibonacci_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace example_interfaces

namespace example_interfaces
{

namespace action
{

struct Fibonacci_SendGoal
{
  using Request = example_interfaces::action::Fibonacci_SendGoal_Request;
  using Response = example_interfaces::action::Fibonacci_SendGoal_Response;
};

}  // namespace action

}  // namespace example_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__example_interfaces__action__Fibonacci_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__example_interfaces__action__Fibonacci_GetResult_Request __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Fibonacci_GetResult_Request_
{
  using Type = Fibonacci_GetResult_Request_<ContainerAllocator>;

  explicit Fibonacci_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Fibonacci_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::action::Fibonacci_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::action::Fibonacci_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_interfaces__action__Fibonacci_GetResult_Request
    std::shared_ptr<example_interfaces::action::Fibonacci_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_interfaces__action__Fibonacci_GetResult_Request
    std::shared_ptr<example_interfaces::action::Fibonacci_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fibonacci_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fibonacci_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fibonacci_GetResult_Request_

// alias to use template instance with default allocator
using Fibonacci_GetResult_Request =
  example_interfaces::action::Fibonacci_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace example_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "example_interfaces/action/detail/fibonacci__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__example_interfaces__action__Fibonacci_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__example_interfaces__action__Fibonacci_GetResult_Response __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Fibonacci_GetResult_Response_
{
  using Type = Fibonacci_GetResult_Response_<ContainerAllocator>;

  explicit Fibonacci_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Fibonacci_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    example_interfaces::action::Fibonacci_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const example_interfaces::action::Fibonacci_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::action::Fibonacci_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::action::Fibonacci_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_interfaces__action__Fibonacci_GetResult_Response
    std::shared_ptr<example_interfaces::action::Fibonacci_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_interfaces__action__Fibonacci_GetResult_Response
    std::shared_ptr<example_interfaces::action::Fibonacci_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fibonacci_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fibonacci_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fibonacci_GetResult_Response_

// alias to use template instance with default allocator
using Fibonacci_GetResult_Response =
  example_interfaces::action::Fibonacci_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace example_interfaces

namespace example_interfaces
{

namespace action
{

struct Fibonacci_GetResult
{
  using Request = example_interfaces::action::Fibonacci_GetResult_Request;
  using Response = example_interfaces::action::Fibonacci_GetResult_Response;
};

}  // namespace action

}  // namespace example_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "example_interfaces/action/detail/fibonacci__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__example_interfaces__action__Fibonacci_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__example_interfaces__action__Fibonacci_FeedbackMessage __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Fibonacci_FeedbackMessage_
{
  using Type = Fibonacci_FeedbackMessage_<ContainerAllocator>;

  explicit Fibonacci_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Fibonacci_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    example_interfaces::action::Fibonacci_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const example_interfaces::action::Fibonacci_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::action::Fibonacci_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::action::Fibonacci_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::action::Fibonacci_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::action::Fibonacci_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::action::Fibonacci_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::action::Fibonacci_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_interfaces__action__Fibonacci_FeedbackMessage
    std::shared_ptr<example_interfaces::action::Fibonacci_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_interfaces__action__Fibonacci_FeedbackMessage
    std::shared_ptr<example_interfaces::action::Fibonacci_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fibonacci_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fibonacci_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fibonacci_FeedbackMessage_

// alias to use template instance with default allocator
using Fibonacci_FeedbackMessage =
  example_interfaces::action::Fibonacci_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace example_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace example_interfaces
{

namespace action
{

struct Fibonacci
{
  /// The goal message defined in the action definition.
  using Goal = example_interfaces::action::Fibonacci_Goal;
  /// The result message defined in the action definition.
  using Result = example_interfaces::action::Fibonacci_Result;
  /// The feedback message defined in the action definition.
  using Feedback = example_interfaces::action::Fibonacci_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = example_interfaces::action::Fibonacci_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = example_interfaces::action::Fibonacci_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = example_interfaces::action::Fibonacci_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Fibonacci Fibonacci;

}  // namespace action

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__ACTION__DETAIL__FIBONACCI__STRUCT_HPP_
