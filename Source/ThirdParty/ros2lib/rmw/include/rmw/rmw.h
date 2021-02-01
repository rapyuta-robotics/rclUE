// Copyright 2014-2017 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/** \mainpage rmw: ROS Middleware Abstraction Interface
 *
 * `rmw` defines an interface of middleware primitives that are used by the higher level ROS API's.
 * It consists of these main components:
 *
 * - Initialization and Shutdown:
 *   - rmw/init.h
 * - Nodes
 *   - rmw/rmw.h
 * - Publisher
 *   - rmw/rmw.h
 * - Subscription
 *   - rmw/rmw.h
 * - Service Client
 *   - rmw/rmw.h
 * - Service Server
 *   - rmw/rmw.h
 *
 * There are some common utility functions in combination with "Topics" or "Services":
 * - A function to validate a fully qualified topic or service name
 *   - rmw_validate_full_topic_name()
 *   - rmw/validate_full_topic_name.h
 * - A function to validate a node's namespace
 *   - rmw_validate_namespace()
 *   - rmw/validate_namespace.h
 * - A function to validate a node's name
 *   - rmw_validate_node_name()
 *   - rmw/validate_node_name.h
 *
 * It also has some machinery that is necessary to wait on and act on these concepts:
 *
 * - Initialization and shutdown management (global for now)
 *   - rmw/rmw.h
 * - Wait sets for waiting on messages and service requests / responses to be ready
 *   - rmw/rmw.h
 * - Guard conditions for waking up wait sets asynchronously
 *   - rmw/rmw.h
 * - Introspection of the ROS graph
 *   - rmw_names_and_types_t
 *   - rmw_get_topic_names_and_types()
 *   - rmw_get_service_names_and_types()
 *   - rmw/names_and_types.h
 *   - rmw/get_topic_names_and_types.h
 *   - rmw/get_service_names_and_types.h
 *
 * Further still there are some useful abstractions and utilities:
 *
 * - Allocator functions for various types
 *   - rmw/allocators.h
 * - Error handling functionality (C style)
 *   - rmw/error_handling.h
 * - Macros
 *   - rmw/macros.h
 * - Return code types and other utility types
 *   - rmw/types.h
 * - Sanity checks for some of the types
 *   - rmw/sanity_checks.h
 * - Macros for controlling symbol visibility on the library
 *   - rmw/visibility_control.h
 * - Utility function to demangle a type to a human readable string (C++ specific):
 *   - rmw/impl/cpp/demangle.hpp
 */

#ifndef RMW__RMW_H_
#define RMW__RMW_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rcutils/types.h"

#include "rosidl_generator_c/message_bounds_struct.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_generator_c/service_type_support_struct.h"

#include "rmw/init.h"
#include "rmw/macros.h"
#include "rmw/qos_profiles.h"
#include "rmw/subscription_options.h"
#include "rmw/types.h"
#include "rmw/visibility_control.h"

RMW_PUBLIC
RMW_WARN_UNUSED
const char *
rmw_get_implementation_identifier(void);

/// Get the unique serialization format for this middleware.
/**
 * Return the format in which binary data is serialized.
 * One middleware can only have one encoding.
 * In contrast to the implementation identifier, the serialization format can be equal between
 * multiple RMW implementations.
 * This means, that the same binary messages can be deserialized by RMW implementations with the
 * same format.
 * \sa rmw_serialize
 * \sa rmw_deserialize
 * \return serialization format
 */
RMW_PUBLIC
RMW_WARN_UNUSED
const char *
rmw_get_serialization_format(void);

// TODO(wjwwood): refactor this API to return a return code when updated to use an allocator
/// Create a node and return a handle to that node.
/**
 * This function can fail, and therefore return `NULL`, if:
 *   - context, name, namespace_, or security_options is `NULL`
 *   - context, security_options is invalid
 *   - memory allocation fails during node creation
 *   - an unspecified error occurs
 *
 * The context must be non-null and valid, i.e. it has been initialized
 * by `rmw_init()` and has not been finalized by `rmw_shutdown()`.
 *
 * The name and namespace_ should be valid node name and namespace,
 * and this should be asserted by the caller (e.g. `rcl`).
 *
 * The domain ID should be used to physically separate nodes at the
 * communication graph level by the middleware.
 * For RTPS/DDS this maps naturally to their concept of domain id.
 *
 * The security options should always be non-null and encapsulate the
 * essential security configurations for the node and its entities.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | Yes
 * Thread-Safe        | No
 * Uses Atomics       | No [1]
 * Lock-Free          | No [1]
 * <i>[1] rmw implementation defined, check the implementation documentation</i>
 *
 * This should be defined by the rmw implementation.
 *
 * \param[in] context init context that this node should be associated with
 * \param[in] name the node name
 * \param[in] namespace_ the node namespace
 * \param[in] domain_id the id of the domain that the node should join
 * \param[in] security_options the security configurations for the node
 * \param[in] localhost_only whenever to use loopback only for communication or default
 * network interfaces.
 * \return rmw node handle or `NULL` if there was an error
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_node_t *
rmw_create_node(
  rmw_context_t * context,
  const char * name,
  const char * namespace_,
  size_t domain_id,
  const rmw_node_security_options_t * security_options,
  bool localhost_only);

/// Finalize a given node handle, reclaim the resources, and deallocate the node handle.
/**
 * \param node the node handle to be destroyed
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_INVALID_ARGUMENT` if node is null, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_destroy_node(rmw_node_t * node);

/// Manually assert that this node is alive (for RMW_QOS_POLICY_LIVELINESS_MANUAL_BY_NODE)
/**
 * If the rmw Liveliness policy is set to RMW_QOS_POLICY_LIVELINESS_MANUAL_BY_NODE, the creator of
 * this node may manually call `assert_liveliness` at some point in time to signal to the rest
 * of the system that this Node is still alive.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | Yes
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param[in] node handle to the node that needs liveliness to be asserted
 * \return `RMW_RET_OK` if the liveliness assertion was completed successfully, or
 * \return `RMW_RET_ERROR` if an unspecified error occurs, or
 * \return `RMW_RET_UNSUPPORTED` if the rmw implementation does not support asserting liveliness.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_node_assert_liveliness(const rmw_node_t * node);

/// Return a guard condition which is triggered when the ROS graph changes.
/**
 * The handle returned is a pointer to an internally held rmw guard condition.
 * This function can fail, and therefore return `NULL`, if:
 *   - node is `NULL`
 *   - node is invalid
 *
 * The returned handle is made invalid if the node is destroyed or if
 * rmw_shutdown() is called.
 *
 * The guard condition will be triggered anytime a change to the ROS graph
 * occurs.
 * A ROS graph change includes things like (but not limited to) a new publisher
 * advertises, a new subscription is created, a new service becomes available,
 * a subscription is canceled, etc.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | Yes
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param[in] node pointer to the rmw node
 * \return rmw guard condition handle if successful, otherwise `NULL`
 */
RMW_PUBLIC
RMW_WARN_UNUSED
const rmw_guard_condition_t *
rmw_node_get_graph_guard_condition(const rmw_node_t * node);

/// Initialize a publisher allocation to be used with later publications.
/**
 * This creates an allocation object that can be used in conjunction with
 * the rmw_publish method to perform more carefully control memory allocations.
 *
 * This will allow the middleware to preallocate the correct amount of memory
 * for a given message type and message bounds.
 * As allocation is performed in this method, it will not be necessary to allocate
 * in the `rmw_publish` method.
 *
 * \param[in] type_support Type support of the message to be preallocated.
 * \param[in] message_bounds Bounds structure of the message to be preallocated.
 * \param[out] allocation Allocation structure to be passed to `rmw_publish`.
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_INVALID_ARGUMENT` if an argument is null, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_init_publisher_allocation(
  const rosidl_message_type_support_t * type_support,
  const rosidl_message_bounds_t * message_bounds,
  rmw_publisher_allocation_t * allocation);

/// Destroy a publisher allocation object.
/**
 * This deallocates any memory allocated by `rmw_init_publisher_allocation`.
 *
 * \param[in] allocation Allocation object to be destroyed.
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_INVALID_ARGUMENT` if argument is null, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_fini_publisher_allocation(
  rmw_publisher_allocation_t * allocation);

/// Return a rmw_publisher_options_t initialized with default values.
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_publisher_options_t
rmw_get_default_publisher_options(void);

/// Create and return an rmw publisher.
/**
 * \TODO(wjwwood): add detailed documentation, adding a not about one of the
 *   arguments for now.
 *
 * The argument `publisher_options` must not be nullptr.
 *
 * \param[in] publisher_options options for configuring the publisher
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_publisher_t *
rmw_create_publisher(
  const rmw_node_t * node,
  const rosidl_message_type_support_t * type_support,
  const char * topic_name,
  const rmw_qos_profile_t * qos_policies,
  const rmw_publisher_options_t * publisher_options);

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_destroy_publisher(rmw_node_t * node, rmw_publisher_t * publisher);

/// Borrow a loaned message.
/**
 * The memory allocated for the ros message belongs to the middleware and must not be deallocated.
 * A call to \sa rmw_publish_loned_message as well as \sa rmw_return_loaned_message_from_publisher`
 * will return ownership of the loaned message back to the middleware.
 *
 * In order to react to failures, the ros message is passed by pointer as an output parameter.
 * Therefore, the pointer to the ros message has to be `null` and not previously allocated or
 * else that memory is lost.
 *
 * \param[in] publisher Publisher to which the allocated message is associated.
 * \param[in] type_support Typesupport to which the internal ros message is allocated.
 * \param[out] ros_message The pointer to be filled with a valid ros message by the middleware.
 * \return RMW_RET_OK if the ros message was correctly initialized, or
 * \return RMW_RET_INVALID_ARGUMENT if an argument other than the ros message is null, or
 * \return RMW_RET_BAD_ALLOC if the ros message could not be correctly created, or
 * \return RMW_RET_ERROR if an unexpected error occured.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_borrow_loaned_message(
  const rmw_publisher_t * publisher,
  const rosidl_message_type_support_t * type_support,
  void ** ros_message);

/// Return a loaned message previously borrow from a publisher.
/**
 * The ownership of the passed in ros message will be transferred back to the middleware.
 * The middleware might deallocate and destroy the message so that the pointer is no longer
 * guaranteed to be valid after this call.
 *
 * \param[in] publisher Publisher to which the loaned message is associated.
 * \param[in] loaned_message Loaned message to be returned.
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_INVALID_ARGUMENT` if an argument is null, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs and no message can be initialized.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_return_loaned_message_from_publisher(
  const rmw_publisher_t * publisher,
  void * loaned_message);

/// Publish a given ros_message
/**
 * Publish a given ROS message via a publisher.
 *
 * \param[in] publisher Publisher to be used to send message.
 * \param[in] ros_message Message to be sent.
 * \param[in] allocation Specify preallocated memory to use (may be NULL).
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_INVALID_ARGUMENT` if publisher or ros_message is null, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_publish(
  const rmw_publisher_t * publisher,
  const void * ros_message,
  rmw_publisher_allocation_t * allocation);

/// Publish a loaned ros_message.
/**
 * Publish a loaned ROS message via a publisher and return ownership of the loaned message
 * back to the middleware.
 *
 * In contrast to \sa `rmw_publish` the ownership of the ros message is being transferred to the
 * middleware which might deallocate the memory for it.
 * Similar to \sa `rmw_return_loaned_message_from_publisher` the passed in ros message might
 * not be valid after this call and thus should only be called with messages previously loaned with
 * a call to \sa `rmw_borrow_loaned_message`.
 *
 * \param[in] publisher Publisher to be used to send message.
 * \param[in] ros_message Message to be sent.
 * \param[in] allocation Specify preallocated memory to use (may be NULL).
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_INVALID_ARGUMENT` if publisher or ros_message is null, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_publish_loaned_message(
  const rmw_publisher_t * publisher,
  void * ros_message,
  rmw_publisher_allocation_t * allocation);

/// Retrieve the number of matched subscriptions to a publisher.
/**
 * Query the underlying middleware to determine how many subscriptions are
 * matched to a given publisher.
 *
 * \param[in] publisher the publisher object to inspect
 * \param[out] subscription_count the number of subscriptions matched
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_INVALID_ARGUMENT` if either argument is null, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_publisher_count_matched_subscriptions(
  const rmw_publisher_t * publisher,
  size_t * subscription_count);

/// Retrieve the actual qos settings of the publisher.
/**
 * Query the underlying middleware to determine the qos settings
 * of the publisher.
 * The actual configuration applied when using RMW_*_SYSTEM_DEFAULT
 * can only be resolved after the creation of the publisher, and it
 * depends on the underlying rmw implementation.
 * If the underlying setting in use can't be represented in ROS terms,
 * it will be set to RMW_*_UNKNOWN.
 * The value of avoid_ros_namespace_conventions field is not resolved
 * with this function. The rcl function rcl_publisher_get_actual_qos
 * resolves it.
 *
 * \param[in] publisher the publisher object to inspect
 * \param[out] qos the actual qos settings
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_INVALID_ARGUMENT` if either argument is null, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_publisher_get_actual_qos(
  const rmw_publisher_t * publisher,
  rmw_qos_profile_t * qos);

/// Publish an already serialized message.
/**
 * The publisher must already be registered with the correct message type
 * support so that it can send serialized data corresponding to that type.
 * This function sends the serialized byte stream directly over the wire without
 * having to serialize the message first.
 * A ROS message can be serialized manually using the rmw_serialize() function.
 *
 * \param[in] publisher The publisher object registered to send the message.
 * \param[in] serialized_message The serialized message holding the byte stream.
 * \param[in] allocation Specify preallocated memory to use (may be NULL).
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_publish_serialized_message(
  const rmw_publisher_t * publisher,
  const rmw_serialized_message_t * serialized_message,
  rmw_publisher_allocation_t * allocation);

/// Compute the size of a serialized message.
/**
 * Given a message definition and bounds, compute the serialized size.
 *
 * \param[in] type_support The type support of the message to compute.
 * \param[in] bounds Artifical bounds to use on unbounded fields.
 * \param[out] size The computed size of the serialized message.
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_INVALID_ARGUMENT` if either argument is null, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_get_serialized_message_size(
  const rosidl_message_type_support_t * type_support,
  const rosidl_message_bounds_t * message_bounds,
  size_t * size);

/// Manually assert that this Publisher is alive (for RMW_QOS_POLICY_LIVELINESS_MANUAL_BY_TOPIC)
/**
 * If the rmw Liveliness policy is set to RMW_QOS_POLICY_LIVELINESS_MANUAL_BY_TOPIC, the creator of
 * this publisher may manually call `assert_liveliness` at some point in time to signal to the rest
 * of the system that this Node is still alive.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | Yes
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param[in] publisher handle to the publisher that needs liveliness to be asserted
 * \return `RMW_RET_OK` if the liveliness assertion was completed successfully, or
 * \return `RMW_RET_ERROR` if an unspecified error occurs, or
 * \return `RMW_RET_UNSUPPORTED` if the rmw implementation does not support asserting liveliness.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_publisher_assert_liveliness(const rmw_publisher_t * publisher);

/// Serialize a ROS message into a rmw_serialized_message_t.
/**
 * The ROS message is serialized into a byte stream contained within the
 * rmw_serialized_message_t structure.
 * The serialization format depends on the underlying middleware.
 *
 * \param ros_message the typed ROS message
 * \param type_support the typesupport for the ROS message
 * \param serialized_message the destination for the serialize ROS message
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_BAD_ALLOC` if memory allocation failed, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_serialize(
  const void * ros_message,
  const rosidl_message_type_support_t * type_support,
  rmw_serialized_message_t * serialized_message);

/// Deserialize a ROS message.
/**
 * The given rmw_serialized_message_t's internal byte stream buffer is deserialized
 * into the given ROS message.
 * The ROS message must already be allocated and initialized, and must match
 * the given typesupport structure.
 * The serialization format expected in the rmw_serialized_message_t depends on the
 * underlying middleware.
 *
 * \param serialized_message the serialized message holding the byte stream
 * \param type_support the typesupport for the typed ros message
 * \param ros_message destination for the deserialized ROS message
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_BAD_ALLOC` if memory allocation failed, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_deserialize(
  const rmw_serialized_message_t * serialized_message,
  const rosidl_message_type_support_t * type_support,
  void * ros_message);

/// Initialize a subscription allocation to be used with later `take`s.
/**
 * This creates an allocation object that can be used in conjunction with
 * the rmw_take method to perform more carefully control memory allocations.
 *
 * This will allow the middleware to preallocate the correct amount of memory
 * for a given message type and message bounds.
 * As allocation is performed in this method, it will not be necessary to allocate
 * in the `rmw_take` method.
 *
 * \param[in] type_support Type support of the message to be preallocated.
 * \param[in] message_bounds Bounds structure of the message to be preallocated.
 * \param[out] allocation Allocation structure to be passed to `rmw_take`.
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_INVALID_ARGUMENT` if an argument is null, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_init_subscription_allocation(
  const rosidl_message_type_support_t * type_support,
  const rosidl_message_bounds_t * message_bounds,
  rmw_subscription_allocation_t * allocation);

/// Destroy a publisher allocation object.
/**
 * This deallocates memory allocated by `rmw_init_subscription_allocation`.
 *
 * \param[in] allocation Allocation object to be destroyed.
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_INVALID_ARGUMENT` if argument is null, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_fini_subscription_allocation(
  rmw_subscription_allocation_t * allocation);

/// Create and return an rmw subscription.
/**
 * \TODO(wjwwood): add detailed documentation, adding a not about one of the
 *   arguments for now.
 *
 * The argument `subscription_options` must not be nullptr.
 *
 * \param[in] subscription_options options for configuring the subscription
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_subscription_t *
rmw_create_subscription(
  const rmw_node_t * node,
  const rosidl_message_type_support_t * type_support,
  const char * topic_name,
  const rmw_qos_profile_t * qos_policies,
  const rmw_subscription_options_t * subscription_options);

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_destroy_subscription(rmw_node_t * node, rmw_subscription_t * subscription);

/// Retrieve the number of matched publishers to a subscription.
/**
 * Query the underlying middleware to determine how many publishers are
 * matched to a given subscription.
 *
 * \param[in] subscription the subscription object to inspect
 * \param[out] publisher_count the number of publishers matched
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_INVALID_ARGUMENT` if either argument is null, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_subscription_count_matched_publishers(
  const rmw_subscription_t * subscription,
  size_t * publisher_count);

/// Retrieve the actual qos settings of the subscription.
/**
 * Query the underlying middleware to determine the qos settings
 * of the subscription.
 * The actual configuration applied when using RMW_*_SYSTEM_DEFAULT
 * can only be resolved after the creation of the subscription, and it
 * depends on the underlying rmw implementation.
 * If the underlying setting in use can't be represented in ROS terms,
 * it will be set to RMW_*_UNKNOWN.
 * The value of avoid_ros_namespace_conventions field is not resolved
 * with this function. The rcl function rcl_subscription_get_actual_qos
 * resolves it.
 *
 * \param[in] subscription the subscription object to inspect
 * \param[out] qos the actual qos settings
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_INVALID_ARGUMENT` if either argument is null, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_subscription_get_actual_qos(
  const rmw_subscription_t * subscription,
  rmw_qos_profile_t * qos);

/// Take an incoming message from a subscription.
/**
 * Take an incoming ROS message from a given subscription.
 *
 * \param[in] subscription The subscription object to take from.
 * \param[out] ros_message The ROS message data on success.
 * \param[out] taken Boolean flag indicating if a message was taken or not.
 * \param[in] allocation Preallocated buffer to use (may be NULL).
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_take(
  const rmw_subscription_t * subscription,
  void * ros_message,
  bool * taken,
  rmw_subscription_allocation_t * allocation);

/// Take an incoming message from a subscription with additional metadata.
/**
 * Take an incoming ROS message from a given subscription.
 *
 * \param[in] subscription The subscription object to take from.
 * \param[out] ros_message The ROS message data on success.
 * \param[out] taken Boolean flag indicating if a message was taken or not.
 * \param[out] message_info Additional message metadata.
 * \param[in] allocation Preallocated buffer to use (may be NULL).
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_take_with_info(
  const rmw_subscription_t * subscription,
  void * ros_message,
  bool * taken,
  rmw_message_info_t * message_info,
  rmw_subscription_allocation_t * allocation);

/// Take a message without deserializing it.
/**
 * The message is taken in its serialized form. In contrast to rmw_take, the message
 * is not deserialized in its ROS type but rather returned as a byte stream.
 * The subscriber has to be registered for a specific type. But instead of receiving
 * the message as its corresponding message type, it is taken as a byte stream.
 * If needed, this byte stream can then be deserialized in a ROS message with a call to
 * rmw_deserialize.
 *
 * \param[in] subscription Subscription object to take from.
 * \param[out] serialized_message The destination in which to store the serialized message.
 * \param[out] taken Boolean flag indicating if a message was taken or not.
 * \param[in] allocation Preallocated buffer to use (may be NULL).
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_BAD_ALLOC` if memory allocation failed, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_take_serialized_message(
  const rmw_subscription_t * subscription,
  rmw_serialized_message_t * serialized_message,
  bool * taken,
  rmw_subscription_allocation_t * allocation);

/// Take a message without deserializing it and with its additional message information.
/**
 * The same as rmw_take_serialized_message(), except it also includes the
 * rmw_message_info_t.
 *
 * \param[in] subscription Subscription object to take from.
 * \param[out] serialized_message The destination in which to store the serialized message.
 * \param[out] taken Boolean flag indicating if a message was taken or not.
 * \param[out] message_info A structure containing meta information about the taken message.
 * \param[in] allocation Preallocated buffer to use (may be NULL).
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_BAD_ALLOC` if memory allocation failed, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_take_serialized_message_with_info(
  const rmw_subscription_t * subscription,
  rmw_serialized_message_t * serialized_message,
  bool * taken,
  rmw_message_info_t * message_info,
  rmw_subscription_allocation_t * allocation);

/// Take a loaned message.
/**
 * If capable, the middleware can loan messages containing incoming messages.
 * The message is owned by the middleware and thus has to be returned
 * with a call to \sa rmw_return_loaned_message_from_subscription.
 *
 * \param[in] subscription Subscription object to take from.
 * \param[inout] loaned_message The destination in which to store the loaned message.
 * \param[out] taken Boolean flag indicating if a message was taken or not.
 * \param[in] allocation Preallocated buffer to use (may be NULL).
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_BAD_ALLOC` if memory allocation failed, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_take_loaned_message(
  const rmw_subscription_t * subscription,
  void ** loaned_message,
  bool * taken,
  rmw_subscription_allocation_t * allocation);

/// Take a loaned message and with its additional message information.
/**
 * If capable, the middleware can loan messages containing incoming messages.
 * The message is owned by the middleware and thus has to be returned
 * with a call to \sa rmw_release_loaned_message.
 *
 * \param[in] subscription Subscription object to take from.
 * \param[inout] loaned_message The destination in which to store the loaned message.
 * \param[out] taken Boolean flag indicating if a message was taken or not.
 * \param[out] message_info A structure containing meta information about the taken message.
 * \param[in] allocation Preallocated buffer to use (may be NULL).
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_BAD_ALLOC` if memory allocation failed, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_take_loaned_message_with_info(
  const rmw_subscription_t * subscription,
  void ** loaned_message,
  bool * taken,
  rmw_message_info_t * message_info,
  rmw_subscription_allocation_t * allocation);

/// Return a loaned message previously taken from a subscription.
/**
 * After the taking a loaned message from the middleware, the middleware has to keep the memory
 * for the loaned message alive and valid as long as the user is working with that loan.
 * In order to indicate that the loaned message is no longer needed, the call to
 * \sa rmw_return_loaned_message_from_subscription tells the middleware that memory can be
 * deallocated/destroyed.
 *
 * \param[in] subscription The subscription instance which loaned the message.
 * \param[in] loaned_message The message to be released.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_return_loaned_message_from_subscription(
  const rmw_subscription_t * subscription,
  void * loaned_message);

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_client_t *
rmw_create_client(
  const rmw_node_t * node,
  const rosidl_service_type_support_t * type_support,
  const char * service_name,
  const rmw_qos_profile_t * qos_policies);

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_destroy_client(rmw_node_t * node, rmw_client_t * client);

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_send_request(
  const rmw_client_t * client,
  const void * ros_request,
  int64_t * sequence_id);

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_take_response(
  const rmw_client_t * client,
  rmw_request_id_t * request_header,
  void * ros_response,
  bool * taken);

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_service_t *
rmw_create_service(
  const rmw_node_t * node,
  const rosidl_service_type_support_t * type_support,
  const char * service_name,
  const rmw_qos_profile_t * qos_policies);

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_destroy_service(rmw_node_t * node, rmw_service_t * service);

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_take_request(
  const rmw_service_t * service,
  rmw_request_id_t * request_header,
  void * ros_request,
  bool * taken);

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_send_response(
  const rmw_service_t * service,
  rmw_request_id_t * request_header,
  void * ros_response);

// TODO(wjwwood): refactor this API to return a return code when updated to use an allocator
/// Create a guard condition and return a handle to that guard condition.
/**
 * This function can fail, and therefore return `NULL`, if:
 *   - context is `NULL`
 *   - context is invalid
 *   - memory allocation fails during guard condition creation
 *   - an unspecified error occurs
 *
 * The context must be non-null and valid, i.e. it has been initialized
 * by `rmw_init()` and has not been finalized by `rmw_shutdown()`.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | Yes
 * Thread-Safe        | No
 * Uses Atomics       | No [1]
 * Lock-Free          | No [1]
 * <i>[1] rmw implementation defined, check the implementation documentation</i>
 *
 * This should be defined by the rmw implementation.
 *
 * \param[in] context init context that this node should be associated with
 * \return rmw guard condition handle or `NULL` if there was an error
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_guard_condition_t *
rmw_create_guard_condition(rmw_context_t * context);


/// Finalize a given guard condition handle, reclaim the resources, and deallocate the handle.
/**
 * \param guard_condition the guard condition handle to be destroyed
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_INVALID_ARGUMENT` if guard_condition is null, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_destroy_guard_condition(rmw_guard_condition_t * guard_condition);

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_trigger_guard_condition(const rmw_guard_condition_t * guard_condition);

/// Create a wait set to store conditions that the middleware will block on.
/**
 * This function can fail, and therefore return `NULL`, if:
 *   - context is `NULL`
 *   - context is invalid
 *   - memory allocation fails during wait set creation
 *   - an unspecified error occurs
 *
 * If `max_conditions` is `0`, the wait set can store an unbounded number of
 * conditions to wait on.
 * If `max_conditions` is greater than `0`, the number of conditions that can
 * be attached to the wait set is bounded at `max_conditions`.
 *
 * \param[in] context init context that this node should be associated with
 * \param[in] max_conditions
 *   The maximum number of conditions that can be attached to the wait set.
 * \return A pointer to the created wait set, `NULL` if an error occurred.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_wait_set_t *
rmw_create_wait_set(rmw_context_t * context, size_t max_conditions);

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_destroy_wait_set(rmw_wait_set_t * wait_set);

/// Waits on sets of different waitable entities and returns when one is ready.
/**
 * Add conditions to the wait set and wait until a response comes in, or until
 * the timeout is reached.
 * The arrays contain type-erased representations of waitable entities.
 * This function casts the pointers to middleware-specific conditions and adds
 * them to the wait set.
 *
 * The count variables in the arrays represents the number of valid pointers
 * in the array.
 * `NULL` pointers are in the array considered invalid.
 * If they are encountered, an error is returned.
 *
 * The array structs are allocated and deallocated outside of this function.
 * They do not have any information about how much memory is allocated for the
 * arrays.
 *
 * After the wait wakes up, the entries in each array that correspond to
 * conditions that were not triggered are set to `NULL`.
 *
 * \param subscriptions Array of subscriptions to wait on
 * \param guard_conditions Array of guard conditions to wait on
 * \param services Array of services to wait on
 * \param clients Array of clients to wait on
 * \param wait_set Storage for the wait set
 * \param wait_timeout
 *   If NULL, block until a condition is ready.
 *   If zero, check only for immediately available conditions and don't block.
 *   Else, this represents the maximum time to wait for a response from the
 *   wait set.
 * \return `RMW_RET_OK` if success, or
 * \return `RMW_RET_ERROR` if error, or
 * \return `RMW_RET_TIMEOUT` if wait timed out.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_wait(
  rmw_subscriptions_t * subscriptions,
  rmw_guard_conditions_t * guard_conditions,
  rmw_services_t * services,
  rmw_clients_t * clients,
  rmw_events_t * events,
  rmw_wait_set_t * wait_set,
  const rmw_time_t * wait_timeout);

/// Return a list of node name and namespaces discovered via a node.
/**
 * This function will return a list of node names and a list of node namespaces
 * that are discovered via the middleware.
 * The two lists represent pairs of namespace and name for each discovered
 * node.
 * The lists will be the same length and the same position will refer to the
 * same node across lists.
 *
 * The node parameter must not be `NULL`, and must point to a valid node.
 *
 * The node_names parameter must not be `NULL`, and must point to a valid
 * string array.
 *
 * The node_namespaces parameter must not be `NULL`, and must point to a
 * valid string array.
 *
 * This function does manipulate heap memory.
 * This function is not thread-safe.
 * This function is lock-free.
 *
 * \param[in] node the handle to the node being used to query the ROS graph
 * \param[out] node_names a list of discovered node names
 * \param[out] node_namespaces a list of discovered node namespaces
 * \return `RMW_RET_OK` if node the query was made successfully, or
 * \return `RMW_RET_ERROR` if an unspecified error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_get_node_names(
  const rmw_node_t * node,
  rcutils_string_array_t * node_names,
  rcutils_string_array_t * node_namespaces);

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_count_publishers(
  const rmw_node_t * node,
  const char * topic_name,
  size_t * count);

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_count_subscribers(
  const rmw_node_t * node,
  const char * topic_name,
  size_t * count);

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_get_gid_for_publisher(const rmw_publisher_t * publisher, rmw_gid_t * gid);

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_compare_gids_equal(const rmw_gid_t * gid1, const rmw_gid_t * gid2, bool * result);

/// Check if a service server is available for the given service client.
/**
 * This function will return true for `is_available` if there is a service
 * server available for the given client.
 *
 * The node parameter must not be `NULL`, and must point to a valid node.
 *
 * The client parameter must not be `NULL`, and must point to a valid client.
 *
 * The given client and node must match, i.e. the client must have been created
 * using the given node.
 *
 * The is_available parameter must not be `NULL`, and must point to a bool
 * variable.
 * The result of the check will be stored in the is_available parameter.
 *
 * This function does manipulate heap memory.
 * This function is not thread-safe.
 * This function is lock-free.
 *
 * \param[in] node the handle to the node being used to query the ROS graph
 * \param[in] client the handle to the service client being queried
 * \param[out] is_available
 *   set to true if there is a service server available, else false
 * \return `RMW_RET_OK` if node the check was made successfully, or
 * \return `RMW_RET_ERROR` if an unspecified error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_service_server_is_available(
  const rmw_node_t * node,
  const rmw_client_t * client,
  bool * is_available);

RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_set_log_severity(rmw_log_severity_t severity);

#ifdef __cplusplus
}
#endif

#endif  // RMW__RMW_H_
