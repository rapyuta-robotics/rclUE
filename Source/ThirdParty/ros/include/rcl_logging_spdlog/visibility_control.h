// Copyright 2019 Open Source Robotics Foundation, Inc.
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

#ifndef RCL_LOGGING_SPDLOG__VISIBILITY_CONTROL_H_
#define RCL_LOGGING_SPDLOG__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C" {
#endif

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define RCL_LOGGING_EXPORT __attribute__ ((dllexport))
    #define RCL_LOGGING_IMPORT __attribute__ ((dllimport))
  #else
    #define RCL_LOGGING_EXPORT __declspec(dllexport)
    #define RCL_LOGGING_IMPORT __declspec(dllimport)
  #endif
  #ifdef RCL_LOGGING_BUILDING_DLL
    #define RCL_LOGGING_PUBLIC RCL_LOGGING_EXPORT
  #else
    #define RCL_LOGGING_PUBLIC RCL_LOGGING_IMPORT
  #endif
  #define RCL_LOGGING_PUBLIC_TYPE RCL_LOGGING_PUBLIC
  #define RCL_LOGGING_LOCAL
#else
  #define RCL_LOGGING_EXPORT __attribute__ ((visibility("default")))
  #define RCL_LOGGING_IMPORT
  #if __GNUC__ >= 4
    #define RCL_LOGGING_PUBLIC __attribute__ ((visibility("default")))
    #define RCL_LOGGING_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define RCL_LOGGING_PUBLIC
    #define RCL_LOGGING_LOCAL
  #endif
  #define RCL_LOGGING_PUBLIC_TYPE
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif  // RCL_LOGGING_SPDLOG__VISIBILITY_CONTROL_H_
