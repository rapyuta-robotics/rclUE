// Copyright 2021 Open Source Robotics Foundation, Inc.
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

#ifndef RCPPUTILS__TIME_HPP_
#define RCPPUTILS__TIME_HPP_

#include <chrono>

#include "rcutils/time.h"

namespace rcpputils
{

/// Convert to std::chrono::nanoseconds.
/**
 * This function help to convert from std::chrono::duration to std::chrono::nanoseconds and throw
 * exception if overflow occurs while coverting.
 *
 * \param[in] time The time to be converted to std::chrono::nanoseconds.
 * \return std::chrono::nanoseconds.
 * \throws std::invalid_argument if time is bigger than std::chrono::nanoseconds::max() or less than
 * std::chrono::nanoseconds::min().
 */
template<typename DurationRepT, typename DurationT>
std::chrono::nanoseconds convert_to_nanoseconds(
  const std::chrono::duration<DurationRepT, DurationT> & time)
{
  constexpr auto ns_max_as_double =
    std::chrono::duration_cast<std::chrono::duration<double, std::chrono::nanoseconds::period>>(
    std::chrono::nanoseconds::max());
  if (time > ns_max_as_double) {
    throw std::invalid_argument{
            "time must be less than std::chrono::nanoseconds::max()"};
  }

  constexpr auto ns_min_as_double =
    std::chrono::duration_cast<std::chrono::duration<double, std::chrono::nanoseconds::period>>(
    std::chrono::nanoseconds::min());
  if (time < ns_min_as_double) {
    throw std::invalid_argument{
            "time must be bigger than std::chrono::nanoseconds::min()"};
  }

  return std::chrono::duration_cast<std::chrono::nanoseconds>(time);
}

}  // namespace rcpputils

#endif  // RCPPUTILS__TIME_HPP_
