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

#ifndef RMW_DDS_COMMON__SECURITY_HPP_
#define RMW_DDS_COMMON__SECURITY_HPP_

#include <string>
#include <unordered_map>

#include "rmw_dds_common/visibility_control.h"

namespace rmw_dds_common
{

/// Get the set of security files in a security enclave.
/**
 * This function will look through the passed in 'secure root'
 * for a set of required filenames that must be in the enclave.
 * If any of the required filenames are missing, the 'result'
 * will be empty and the function will return false.
 * If all of the required filenames are present, then this function
 * will fill in the 'result' map with a key-value pair of
 * friendy name -> filename.  If the prefix is not empty, then
 * the prefix will be applied to the filename.
 *
 * The friendly names that this function will currently fill in are:
 *   IDENTITY_CA
 *   CERTIFICATE
 *   PRIVATE_KEY
 *   PERMISSIONS_CA
 *   GOVERNANCE
 *   PERMISSIONS
 *
 * \param[in]  prefix An optional prefix to apply to the filenames when storing them.
 * \param[in]  secure_root The path to the security enclave to look at.
 * \param[out] result The map where the friendly name -> filename pairs are stored.
 * \return `true` if all required files exist in the security enclave, `false` otherwise.
 */
RMW_DDS_COMMON_PUBLIC
bool get_security_files(
  const std::string & prefix, const std::string & secure_root,
  std::unordered_map<std::string, std::string> & result);

}  // namespace rmw_dds_common

#endif  // RMW_DDS_COMMON__SECURITY_HPP_
