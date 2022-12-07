// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tf2_msgs:action/LookupTransform.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__ACTION__DETAIL__LOOKUP_TRANSFORM__STRUCT_HPP_
#define TF2_MSGS__ACTION__DETAIL__LOOKUP_TRANSFORM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'source_time'
// Member 'target_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tf2_msgs__action__LookupTransform_Goal __attribute__((deprecated))
#else
# define DEPRECATED__tf2_msgs__action__LookupTransform_Goal __declspec(deprecated)
#endif

namespace tf2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LookupTransform_Goal_
{
  using Type = LookupTransform_Goal_<ContainerAllocator>;

  explicit LookupTransform_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source_time(_init),
    timeout(_init),
    target_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_frame = "";
      this->source_frame = "";
      this->fixed_frame = "";
      this->advanced = false;
    }
  }

  explicit LookupTransform_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_frame(_alloc),
    source_frame(_alloc),
    source_time(_alloc, _init),
    timeout(_alloc, _init),
    target_time(_alloc, _init),
    fixed_frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_frame = "";
      this->source_frame = "";
      this->fixed_frame = "";
      this->advanced = false;
    }
  }

  // field types and members
  using _target_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_frame_type target_frame;
  using _source_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_frame_type source_frame;
  using _source_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _source_time_type source_time;
  using _timeout_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _timeout_type timeout;
  using _target_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _target_time_type target_time;
  using _fixed_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fixed_frame_type fixed_frame;
  using _advanced_type =
    bool;
  _advanced_type advanced;

  // setters for named parameter idiom
  Type & set__target_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_frame = _arg;
    return *this;
  }
  Type & set__source_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source_frame = _arg;
    return *this;
  }
  Type & set__source_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->source_time = _arg;
    return *this;
  }
  Type & set__timeout(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->timeout = _arg;
    return *this;
  }
  Type & set__target_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->target_time = _arg;
    return *this;
  }
  Type & set__fixed_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fixed_frame = _arg;
    return *this;
  }
  Type & set__advanced(
    const bool & _arg)
  {
    this->advanced = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tf2_msgs::action::LookupTransform_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_msgs::action::LookupTransform_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_msgs::action::LookupTransform_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_msgs::action::LookupTransform_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::action::LookupTransform_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::action::LookupTransform_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::action::LookupTransform_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::action::LookupTransform_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_msgs::action::LookupTransform_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_msgs::action::LookupTransform_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_msgs__action__LookupTransform_Goal
    std::shared_ptr<tf2_msgs::action::LookupTransform_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_msgs__action__LookupTransform_Goal
    std::shared_ptr<tf2_msgs::action::LookupTransform_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LookupTransform_Goal_ & other) const
  {
    if (this->target_frame != other.target_frame) {
      return false;
    }
    if (this->source_frame != other.source_frame) {
      return false;
    }
    if (this->source_time != other.source_time) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->target_time != other.target_time) {
      return false;
    }
    if (this->fixed_frame != other.fixed_frame) {
      return false;
    }
    if (this->advanced != other.advanced) {
      return false;
    }
    return true;
  }
  bool operator!=(const LookupTransform_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LookupTransform_Goal_

// alias to use template instance with default allocator
using LookupTransform_Goal =
  tf2_msgs::action::LookupTransform_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tf2_msgs


// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform_stamped__struct.hpp"
// Member 'error'
#include "tf2_msgs/msg/detail/tf2_error__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tf2_msgs__action__LookupTransform_Result __attribute__((deprecated))
#else
# define DEPRECATED__tf2_msgs__action__LookupTransform_Result __declspec(deprecated)
#endif

namespace tf2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LookupTransform_Result_
{
  using Type = LookupTransform_Result_<ContainerAllocator>;

  explicit LookupTransform_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : transform(_init),
    error(_init)
  {
    (void)_init;
  }

  explicit LookupTransform_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : transform(_alloc, _init),
    error(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _transform_type =
    geometry_msgs::msg::TransformStamped_<ContainerAllocator>;
  _transform_type transform;
  using _error_type =
    tf2_msgs::msg::TF2Error_<ContainerAllocator>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__transform(
    const geometry_msgs::msg::TransformStamped_<ContainerAllocator> & _arg)
  {
    this->transform = _arg;
    return *this;
  }
  Type & set__error(
    const tf2_msgs::msg::TF2Error_<ContainerAllocator> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tf2_msgs::action::LookupTransform_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_msgs::action::LookupTransform_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_msgs::action::LookupTransform_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_msgs::action::LookupTransform_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::action::LookupTransform_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::action::LookupTransform_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::action::LookupTransform_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::action::LookupTransform_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_msgs::action::LookupTransform_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_msgs::action::LookupTransform_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_msgs__action__LookupTransform_Result
    std::shared_ptr<tf2_msgs::action::LookupTransform_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_msgs__action__LookupTransform_Result
    std::shared_ptr<tf2_msgs::action::LookupTransform_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LookupTransform_Result_ & other) const
  {
    if (this->transform != other.transform) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const LookupTransform_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LookupTransform_Result_

// alias to use template instance with default allocator
using LookupTransform_Result =
  tf2_msgs::action::LookupTransform_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tf2_msgs


#ifndef _WIN32
# define DEPRECATED__tf2_msgs__action__LookupTransform_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__tf2_msgs__action__LookupTransform_Feedback __declspec(deprecated)
#endif

namespace tf2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LookupTransform_Feedback_
{
  using Type = LookupTransform_Feedback_<ContainerAllocator>;

  explicit LookupTransform_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit LookupTransform_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    tf2_msgs::action::LookupTransform_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_msgs::action::LookupTransform_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_msgs::action::LookupTransform_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_msgs::action::LookupTransform_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::action::LookupTransform_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::action::LookupTransform_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::action::LookupTransform_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::action::LookupTransform_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_msgs::action::LookupTransform_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_msgs::action::LookupTransform_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_msgs__action__LookupTransform_Feedback
    std::shared_ptr<tf2_msgs::action::LookupTransform_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_msgs__action__LookupTransform_Feedback
    std::shared_ptr<tf2_msgs::action::LookupTransform_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LookupTransform_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const LookupTransform_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LookupTransform_Feedback_

// alias to use template instance with default allocator
using LookupTransform_Feedback =
  tf2_msgs::action::LookupTransform_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tf2_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "tf2_msgs/action/detail/lookup_transform__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tf2_msgs__action__LookupTransform_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__tf2_msgs__action__LookupTransform_SendGoal_Request __declspec(deprecated)
#endif

namespace tf2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LookupTransform_SendGoal_Request_
{
  using Type = LookupTransform_SendGoal_Request_<ContainerAllocator>;

  explicit LookupTransform_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit LookupTransform_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    tf2_msgs::action::LookupTransform_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const tf2_msgs::action::LookupTransform_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tf2_msgs::action::LookupTransform_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_msgs::action::LookupTransform_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_msgs::action::LookupTransform_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_msgs::action::LookupTransform_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::action::LookupTransform_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::action::LookupTransform_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::action::LookupTransform_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::action::LookupTransform_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_msgs::action::LookupTransform_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_msgs::action::LookupTransform_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_msgs__action__LookupTransform_SendGoal_Request
    std::shared_ptr<tf2_msgs::action::LookupTransform_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_msgs__action__LookupTransform_SendGoal_Request
    std::shared_ptr<tf2_msgs::action::LookupTransform_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LookupTransform_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const LookupTransform_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LookupTransform_SendGoal_Request_

// alias to use template instance with default allocator
using LookupTransform_SendGoal_Request =
  tf2_msgs::action::LookupTransform_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tf2_msgs


// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tf2_msgs__action__LookupTransform_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__tf2_msgs__action__LookupTransform_SendGoal_Response __declspec(deprecated)
#endif

namespace tf2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LookupTransform_SendGoal_Response_
{
  using Type = LookupTransform_SendGoal_Response_<ContainerAllocator>;

  explicit LookupTransform_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit LookupTransform_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    tf2_msgs::action::LookupTransform_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_msgs::action::LookupTransform_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_msgs::action::LookupTransform_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_msgs::action::LookupTransform_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::action::LookupTransform_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::action::LookupTransform_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::action::LookupTransform_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::action::LookupTransform_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_msgs::action::LookupTransform_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_msgs::action::LookupTransform_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_msgs__action__LookupTransform_SendGoal_Response
    std::shared_ptr<tf2_msgs::action::LookupTransform_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_msgs__action__LookupTransform_SendGoal_Response
    std::shared_ptr<tf2_msgs::action::LookupTransform_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LookupTransform_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const LookupTransform_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LookupTransform_SendGoal_Response_

// alias to use template instance with default allocator
using LookupTransform_SendGoal_Response =
  tf2_msgs::action::LookupTransform_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tf2_msgs

namespace tf2_msgs
{

namespace action
{

struct LookupTransform_SendGoal
{
  using Request = tf2_msgs::action::LookupTransform_SendGoal_Request;
  using Response = tf2_msgs::action::LookupTransform_SendGoal_Response;
};

}  // namespace action

}  // namespace tf2_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tf2_msgs__action__LookupTransform_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__tf2_msgs__action__LookupTransform_GetResult_Request __declspec(deprecated)
#endif

namespace tf2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LookupTransform_GetResult_Request_
{
  using Type = LookupTransform_GetResult_Request_<ContainerAllocator>;

  explicit LookupTransform_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit LookupTransform_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    tf2_msgs::action::LookupTransform_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_msgs::action::LookupTransform_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_msgs::action::LookupTransform_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_msgs::action::LookupTransform_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::action::LookupTransform_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::action::LookupTransform_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::action::LookupTransform_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::action::LookupTransform_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_msgs::action::LookupTransform_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_msgs::action::LookupTransform_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_msgs__action__LookupTransform_GetResult_Request
    std::shared_ptr<tf2_msgs::action::LookupTransform_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_msgs__action__LookupTransform_GetResult_Request
    std::shared_ptr<tf2_msgs::action::LookupTransform_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LookupTransform_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const LookupTransform_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LookupTransform_GetResult_Request_

// alias to use template instance with default allocator
using LookupTransform_GetResult_Request =
  tf2_msgs::action::LookupTransform_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tf2_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "tf2_msgs/action/detail/lookup_transform__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tf2_msgs__action__LookupTransform_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__tf2_msgs__action__LookupTransform_GetResult_Response __declspec(deprecated)
#endif

namespace tf2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LookupTransform_GetResult_Response_
{
  using Type = LookupTransform_GetResult_Response_<ContainerAllocator>;

  explicit LookupTransform_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit LookupTransform_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    tf2_msgs::action::LookupTransform_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const tf2_msgs::action::LookupTransform_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tf2_msgs::action::LookupTransform_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_msgs::action::LookupTransform_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_msgs::action::LookupTransform_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_msgs::action::LookupTransform_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::action::LookupTransform_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::action::LookupTransform_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::action::LookupTransform_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::action::LookupTransform_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_msgs::action::LookupTransform_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_msgs::action::LookupTransform_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_msgs__action__LookupTransform_GetResult_Response
    std::shared_ptr<tf2_msgs::action::LookupTransform_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_msgs__action__LookupTransform_GetResult_Response
    std::shared_ptr<tf2_msgs::action::LookupTransform_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LookupTransform_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const LookupTransform_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LookupTransform_GetResult_Response_

// alias to use template instance with default allocator
using LookupTransform_GetResult_Response =
  tf2_msgs::action::LookupTransform_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tf2_msgs

namespace tf2_msgs
{

namespace action
{

struct LookupTransform_GetResult
{
  using Request = tf2_msgs::action::LookupTransform_GetResult_Request;
  using Response = tf2_msgs::action::LookupTransform_GetResult_Response;
};

}  // namespace action

}  // namespace tf2_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "tf2_msgs/action/detail/lookup_transform__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tf2_msgs__action__LookupTransform_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__tf2_msgs__action__LookupTransform_FeedbackMessage __declspec(deprecated)
#endif

namespace tf2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LookupTransform_FeedbackMessage_
{
  using Type = LookupTransform_FeedbackMessage_<ContainerAllocator>;

  explicit LookupTransform_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit LookupTransform_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    tf2_msgs::action::LookupTransform_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const tf2_msgs::action::LookupTransform_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tf2_msgs::action::LookupTransform_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_msgs::action::LookupTransform_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_msgs::action::LookupTransform_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_msgs::action::LookupTransform_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::action::LookupTransform_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::action::LookupTransform_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_msgs::action::LookupTransform_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_msgs::action::LookupTransform_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_msgs::action::LookupTransform_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_msgs::action::LookupTransform_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_msgs__action__LookupTransform_FeedbackMessage
    std::shared_ptr<tf2_msgs::action::LookupTransform_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_msgs__action__LookupTransform_FeedbackMessage
    std::shared_ptr<tf2_msgs::action::LookupTransform_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LookupTransform_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const LookupTransform_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LookupTransform_FeedbackMessage_

// alias to use template instance with default allocator
using LookupTransform_FeedbackMessage =
  tf2_msgs::action::LookupTransform_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tf2_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace tf2_msgs
{

namespace action
{

struct LookupTransform
{
  /// The goal message defined in the action definition.
  using Goal = tf2_msgs::action::LookupTransform_Goal;
  /// The result message defined in the action definition.
  using Result = tf2_msgs::action::LookupTransform_Result;
  /// The feedback message defined in the action definition.
  using Feedback = tf2_msgs::action::LookupTransform_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = tf2_msgs::action::LookupTransform_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = tf2_msgs::action::LookupTransform_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = tf2_msgs::action::LookupTransform_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct LookupTransform LookupTransform;

}  // namespace action

}  // namespace tf2_msgs

#endif  // TF2_MSGS__ACTION__DETAIL__LOOKUP_TRANSFORM__STRUCT_HPP_
