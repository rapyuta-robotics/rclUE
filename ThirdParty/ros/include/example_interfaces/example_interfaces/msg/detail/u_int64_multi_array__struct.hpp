// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from example_interfaces:msg/UInt64MultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__U_INT64_MULTI_ARRAY__STRUCT_HPP_
#define EXAMPLE_INTERFACES__MSG__DETAIL__U_INT64_MULTI_ARRAY__STRUCT_HPP_

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/detail/multi_array_layout__struct.hpp"

#ifndef _WIN32
#define DEPRECATED__example_interfaces__msg__UInt64MultiArray __attribute__((deprecated))
#else
#define DEPRECATED__example_interfaces__msg__UInt64MultiArray __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UInt64MultiArray_
{
    using Type = UInt64MultiArray_<ContainerAllocator>;

    explicit UInt64MultiArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
        : layout(_init)
    {
        (void)_init;
    }

    explicit UInt64MultiArray_(const ContainerAllocator& _alloc,
                               rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
        : layout(_alloc, _init)
    {
        (void)_init;
    }

    // field types and members
    using _layout_type = example_interfaces::msg::MultiArrayLayout_<ContainerAllocator>;
    _layout_type layout;
    using _data_type = std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
    _data_type data;

    // setters for named parameter idiom
    Type& set__layout(const example_interfaces::msg::MultiArrayLayout_<ContainerAllocator>& _arg)
    {
        this->layout = _arg;
        return *this;
    }
    Type& set__data(
        const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>& _arg)
    {
        this->data = _arg;
        return *this;
    }

    // constant declarations

    // pointer types
    using RawPtr = example_interfaces::msg::UInt64MultiArray_<ContainerAllocator>*;
    using ConstRawPtr = const example_interfaces::msg::UInt64MultiArray_<ContainerAllocator>*;
    using SharedPtr = std::shared_ptr<example_interfaces::msg::UInt64MultiArray_<ContainerAllocator>>;
    using ConstSharedPtr = std::shared_ptr<example_interfaces::msg::UInt64MultiArray_<ContainerAllocator> const>;

    template<typename Deleter = std::default_delete<example_interfaces::msg::UInt64MultiArray_<ContainerAllocator>>>
    using UniquePtrWithDeleter = std::unique_ptr<example_interfaces::msg::UInt64MultiArray_<ContainerAllocator>, Deleter>;

    using UniquePtr = UniquePtrWithDeleter<>;

    template<typename Deleter = std::default_delete<example_interfaces::msg::UInt64MultiArray_<ContainerAllocator>>>
    using ConstUniquePtrWithDeleter =
        std::unique_ptr<example_interfaces::msg::UInt64MultiArray_<ContainerAllocator> const, Deleter>;
    using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

    using WeakPtr = std::weak_ptr<example_interfaces::msg::UInt64MultiArray_<ContainerAllocator>>;
    using ConstWeakPtr = std::weak_ptr<example_interfaces::msg::UInt64MultiArray_<ContainerAllocator> const>;

    // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
    // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
    typedef DEPRECATED__example_interfaces__msg__UInt64MultiArray
        std::shared_ptr<example_interfaces::msg::UInt64MultiArray_<ContainerAllocator>>
            Ptr;
    typedef DEPRECATED__example_interfaces__msg__UInt64MultiArray
        std::shared_ptr<example_interfaces::msg::UInt64MultiArray_<ContainerAllocator> const>
            ConstPtr;

    // comparison operators
    bool operator==(const UInt64MultiArray_& other) const
    {
        if (this->layout != other.layout)
        {
            return false;
        }
        if (this->data != other.data)
        {
            return false;
        }
        return true;
    }
    bool operator!=(const UInt64MultiArray_& other) const
    {
        return !this->operator==(other);
    }
};    // struct UInt64MultiArray_

// alias to use template instance with default allocator
using UInt64MultiArray = example_interfaces::msg::UInt64MultiArray_<std::allocator<void>>;

// constant definitions

}    // namespace msg

}    // namespace example_interfaces

#endif    // EXAMPLE_INTERFACES__MSG__DETAIL__U_INT64_MULTI_ARRAY__STRUCT_HPP_
