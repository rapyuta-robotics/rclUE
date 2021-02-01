// Copyright 2015 Open Source Robotics Foundation, Inc.
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

#ifndef RCL__TIME_H_
#define RCL__TIME_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "rcl/allocator.h"
#include "rcl/macros.h"
#include "rcl/types.h"
#include "rcl/visibility_control.h"
#include "rcutils/time.h"

/// Convenience macro to convert seconds to nanoseconds.
#define RCL_S_TO_NS RCUTILS_S_TO_NS
/// Convenience macro to convert milliseconds to nanoseconds.
#define RCL_MS_TO_NS RCUTILS_MS_TO_NS
/// Convenience macro to convert microseconds to nanoseconds.
#define RCL_US_TO_NS RCUTILS_US_TO_NS

/// Convenience macro to convert nanoseconds to seconds.
#define RCL_NS_TO_S RCUTILS_NS_TO_S
/// Convenience macro to convert nanoseconds to milliseconds.
#define RCL_NS_TO_MS RCUTILS_NS_TO_MS
/// Convenience macro to convert nanoseconds to microseconds.
#define RCL_NS_TO_US RCUTILS_NS_TO_US

/// A single point in time, measured in nanoseconds since the Unix epoch.
typedef rcutils_time_point_value_t rcl_time_point_value_t;
/// A duration of time, measured in nanoseconds.
typedef rcutils_duration_value_t rcl_duration_value_t;

/// Time source type, used to indicate the source of a time measurement.
typedef enum rcl_clock_type_t
{
  RCL_CLOCK_UNINITIALIZED = 0,
  RCL_ROS_TIME,
  RCL_SYSTEM_TIME,
  RCL_STEADY_TIME
} rcl_clock_type_t;

/// A duration of time, measured in nanoseconds and its source.
typedef struct rcl_duration_t
{
  rcl_duration_value_t nanoseconds;
} rcl_duration_t;

/// Enumeration to describe the type of time jump.
typedef enum rcl_clock_change_t
{
  /// The source before and after the jump is ROS_TIME.
  RCL_ROS_TIME_NO_CHANGE = 1,
  /// The source switched to ROS_TIME from SYSTEM_TIME.
  RCL_ROS_TIME_ACTIVATED = 2,
  /// The source switched to SYSTEM_TIME from ROS_TIME.
  RCL_ROS_TIME_DEACTIVATED = 3,
  /// The source before and after the jump is SYSTEM_TIME.
  RCL_SYSTEM_TIME_NO_CHANGE = 4
} rcl_clock_change_t;

/// Struct to describe a jump in time.
typedef struct rcl_time_jump_t
{
  /// Indicate whether or not the source of time changed.
  rcl_clock_change_t clock_change;
  /// The new time minus the last time before the jump.
  rcl_duration_t delta;
} rcl_time_jump_t;

/// Signature of a time jump callback.
/// \param[in] time_jump A description of the jump in time.
/// \param[in] before_jump Every jump callback is called twice: once before the clock changes and
/// once after. This is true the first call and false the second.
/// \param[in] user_data A pointer given at callback registration which is passed to the callback.
typedef void (* rcl_jump_callback_t)(
  const struct rcl_time_jump_t * time_jump,
  bool before_jump,
  void * user_data);

/// Describe the prerequisites for calling a time jump callback.
typedef struct rcl_jump_threshold_t
{
  /// True to call callback when the clock type changes.
  bool on_clock_change;
  /// A positive duration indicating the minimum jump forwards to be considered exceeded, or zero
  /// to disable.
  rcl_duration_t min_forward;
  /// A negative duration indicating the minimum jump backwards to be considered exceeded, or zero
  /// to disable.
  rcl_duration_t min_backward;
} rcl_jump_threshold_t;

/// Struct to describe an added callback.
typedef struct rcl_jump_callback_info_t
{
  rcl_jump_callback_t callback;
  rcl_jump_threshold_t threshold;
  void * user_data;
} rcl_jump_callback_info_t;

/// Encapsulation of a time source.
typedef struct rcl_clock_t
{
  enum rcl_clock_type_t type;
  /// An array of added jump callbacks.
  rcl_jump_callback_info_t * jump_callbacks;
  /// Number of callbacks in jump_callbacks.
  size_t num_jump_callbacks;
  rcl_ret_t (* get_now)(void * data, rcl_time_point_value_t * now);
  // void (*set_now) (rcl_time_point_value_t);
  void * data;
  rcl_allocator_t allocator;
} rcl_clock_t;

/// A single point in time, measured in nanoseconds, the reference point is based on the source.
typedef struct rcl_time_point_t
{
  rcl_time_point_value_t nanoseconds;
  rcl_clock_type_t clock_type;
} rcl_time_point_t;

// typedef struct rcl_rate_t
// {
//   rcl_time_point_value_t trigger_time;
//   int64_t period;
//   rcl_clock_type_t clock;;
// } rcl_rate_t;
// TODO(tfoote) integrate rate and timer implementations

/// Check if the clock has valid values.
/**
 * This function returns true if the time source appears to be valid.
 * It will check that the type is not uninitialized, and that pointers
 * are not invalid.
 * Note that if data is uninitialized it may give a false positive.
 *
 * \param[in] clock the handle to the clock which is being queried
 * \return true if the source is believed to be valid, otherwise return false.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
bool
rcl_clock_valid(rcl_clock_t * clock);

/// Initialize a clock based on the passed type.
/**
 * This will allocate all necessary internal structures, and initialize variables.
 *
 * \param[in] clock_type the type identifying the time source to provide
 * \param[in] clock the handle to the clock which is being initialized
 * \param[in] allocator The allocator to use for allocations
 * \return `RCL_RET_OK` if the time source was successfully initialized, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_ERROR` an unspecified error occur.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_clock_init(
  enum rcl_clock_type_t clock_type, rcl_clock_t * clock,
  rcl_allocator_t * allocator);

/// Finalize a clock.
/**
 * This will deallocate all necessary internal structures, and clean up any variables.
 * It can be combined with any of the init functions.
 *
 * Passing a clock with type RCL_CLOCK_UNINITIALIZED will result in
 * RCL_RET_INVALID_ARGUMENT being returned.
 *
 * \param[in] clock the handle to the clock which is being finalized
 * \return `RCL_RET_OK` if the time source was successfully finalized, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_ERROR` an unspecified error occur.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_clock_fini(
  rcl_clock_t * clock);

/// Initialize a clock as a RCL_ROS_TIME time source.
/**
 * This will allocate all necessary internal structures, and initialize variables.
 * It is specifically setting up a RCL_ROS_TIME time source.
 *
 * \param[in] clock the handle to the clock which is being initialized
 * \param[in] allocator The allocator to use for allocations
 * \return `RCL_RET_OK` if the time source was successfully initialized, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_ERROR` an unspecified error occur.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_ros_clock_init(
  rcl_clock_t * clock,
  rcl_allocator_t * allocator);

/// Finalize a clock as a `RCL_ROS_TIME` time source.
/**
 * This will deallocate all necessary internal structures, and clean up any variables.
 * It is specifically setting up a `RCL_ROS_TIME` time source. It is expected
 * to be paired with the init fuction.
 *
 * \param[in] clock the handle to the clock which is being initialized
 * \return `RCL_RET_OK` if the time source was successfully finalized, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_ERROR` an unspecified error occur.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_ros_clock_fini(
  rcl_clock_t * clock);

/// Initialize a clock as a `RCL_STEADY_TIME` time source.
/**
 * This will allocate all necessary internal structures, and initialize variables.
 * It is specifically setting up a `RCL_STEADY_TIME` time source.
 *
 * \param[in] clock the handle to the clock which is being initialized
 * \param[in] allocator The allocator to use for allocations
 * \return `RCL_RET_OK` if the time source was successfully initialized, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_ERROR` an unspecified error occur.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_steady_clock_init(
  rcl_clock_t * clock,
  rcl_allocator_t * allocator);

/// Finalize a clock as a `RCL_STEADY_TIME` time source.
/**
 * Finalize the clock as a `RCL_STEADY_TIME` time source.
 *
 * This will deallocate all necessary internal structures, and clean up any variables.
 * It is specifically setting up a steady time source. It is expected to be
 * paired with the init fuction.
 *
 * \param[in] clock the handle to the clock which is being initialized
 * \return `RCL_RET_OK` if the time source was successfully finalized, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_ERROR` an unspecified error occur.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_steady_clock_fini(
  rcl_clock_t * clock);

/// Initialize a clock as a `RCL_SYSTEM_TIME` time source.
/**
 * Initialize the clock as a `RCL_SYSTEM_TIME` time source.
 *
 * This will allocate all necessary internal structures, and initialize variables.
 * It is specifically setting up a system time source.
 *
 * \param[in] clock the handle to the clock which is being initialized
 * \param[in] allocator The allocator to use for allocations
 * \return `RCL_RET_OK` if the time source was successfully initialized, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_ERROR` an unspecified error occur.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_system_clock_init(
  rcl_clock_t * clock,
  rcl_allocator_t * allocator);

/// Finalize a clock as a `RCL_SYSTEM_TIME` time source.
/**
 * Finalize the clock as a `RCL_SYSTEM_TIME` time source.
 *
 * This will deallocate all necessary internal structures, and clean up any variables.
 * It is specifically setting up a system time source. It is expected to be paired with
 * the init fuction.
 *
 * \param[in] clock the handle to the clock which is being initialized.
 * \return `RCL_RET_OK` if the time source was successfully finalized, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_ERROR` an unspecified error occur.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_system_clock_fini(
  rcl_clock_t * clock);

/// Compute the difference between two time points
/**
 * This function takes two time points and computes the duration between them.
 * The two time points must be using the same time abstraction, and the
 * resultant duration will also be of the same abstraction.
 *
 * The value will be computed as duration = finish - start. If start is after
 * finish the duration will be negative.
 *
 * \param[in] start The time point for the start of the duration.
 * \param[in] finish The time point for the end of the duration.
 * \param[out] delta The duration between the start and finish.
 * \return `RCL_RET_OK` if the difference was computed successfully, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_ERROR` an unspecified error occur.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_difference_times(
  rcl_time_point_t * start, rcl_time_point_t * finish, rcl_duration_t * delta);

/// Fill the time point value with the current value of the associated clock.
/**
 * This function will populate the data of the time_point_value object with the
 * current value from it's associated time abstraction.
 * \param[in] clock The time source from which to set the value.
 * \param[out] time_point_value The time_point value to populate.
 * \return `RCL_RET_OK` if the last call time was retrieved successfully, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_ERROR` an unspecified error occur.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_clock_get_now(rcl_clock_t * clock, rcl_time_point_value_t * time_point_value);


/// Enable the ROS time abstraction override.
/**
 * This method will enable the ROS time abstraction override values,
 * such that the time source will report the set value instead of falling
 * back to system time.
 *
 * \param[in] clock The clock to enable.
 * \return `RCL_RET_OK` if the time source was enabled successfully, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_ERROR` an unspecified error occur.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_enable_ros_time_override(rcl_clock_t * clock);

/// Disable the ROS time abstraction override.
/**
 * This method will disable the `RCL_ROS_TIME` time abstraction override values,
 * such that the time source will report the system time even if a custom
 * value has been set.
 *
 * \param[in] clock The clock to disable.
 * \return `RCL_RET_OK` if the time source was disabled successfully, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_ERROR` an unspecified error occur.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_disable_ros_time_override(rcl_clock_t * clock);


/// Check if the `RCL_ROS_TIME` time source has the override enabled.
/**
 * This will populate the is_enabled object to indicate if the
 * time overide is enabled. If it is enabled, the set value will be returned.
 * Otherwise this time source will return the equivalent to system time abstraction.
 *
 * \param[in] clock The clock to query.
 * \param[out] is_enabled Whether the override is enabled..
 * \return `RCL_RET_OK` if the time source was queried successfully, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_ERROR` an unspecified error occur.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_is_enabled_ros_time_override(
  rcl_clock_t * clock, bool * is_enabled);

/// Set the current time for this `RCL_ROS_TIME` time source.
/**
 * This function will update the internal storage for the `RCL_ROS_TIME`
 * time source.
 * If queried and override enabled the time source will return this value,
 * otherwise it will return the system time.
 *
 * \param[in] clock The clock to update.
 * \param[in] time_value The new current time.
 * \return `RCL_RET_OK` if the time source was set successfully, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_ERROR` an unspecified error occur.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_set_ros_time_override(
  rcl_clock_t * clock, rcl_time_point_value_t time_value);

/// Add a callback to be called when a time jump exceeds a threshold.
/**
 * The callback is called twice when the threshold is exceeded: once before the clock is
 * updated, and once after.
 * The user_data pointer is passed to the callback as the last argument.
 * A callback and user_data pair must be unique among the callbacks added to a clock.
 *
 * \param[in] clock A clock to add a jump callback to.
 * \param[in] threshold Criteria indicating when to call the callback.
 * \param[in] callback A callback to call.
 * \param[in] user_data A pointer to be passed to the callback.
 * \return `RCL_RET_OK` if the callback was added successfully, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_ERROR` an unspecified error occurs.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_clock_add_jump_callback(
  rcl_clock_t * clock, rcl_jump_threshold_t threshold, rcl_jump_callback_t callback,
  void * user_data);

/// Remove a previously added time jump callback.
/**
 * \param[in] clock The clock to remove a jump callback from.
 * \param[in] threshold Criteria indicating when to call callback.
 * \param[in] callback The callback to call.
 * \param[in] user_data A pointer to be passed to the callback.
 * \return `RCL_RET_OK` if the callback was added successfully, or
 * \return `RCL_RET_INVALID_ARGUMENT` if any arguments are invalid, or
 * \return `RCL_RET_ERROR` the callback was not found or an unspecified error occurs.
 */
RCL_PUBLIC
RCL_WARN_UNUSED
rcl_ret_t
rcl_clock_remove_jump_callback(
  rcl_clock_t * clock, rcl_jump_callback_t callback, void * user_data);

#ifdef __cplusplus
}
#endif

#endif  // RCL__TIME_H_
