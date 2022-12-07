// Copyright (c) 2020, Open Source Robotics Foundation, Inc.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//    * Redistributions of source code must retain the above copyright
//      notice, this list of conditions and the following disclaimer.
//
//    * Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in the
//      documentation and/or other materials provided with the distribution.
//
//    * Neither the name of the copyright holder nor the names of its
//      contributors may be used to endorse or promote products derived from
//      this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

#ifndef RCPPUTILS__ENV_HPP_
#define RCPPUTILS__ENV_HPP_

#include <string>

#include "rcpputils/visibility_control.hpp"

namespace rcpputils
{

/// Retrieve the value of the given environment variable if it exists, or "".
/*
 * \param[in] env_var the name of the environment variable
 * \return The value of the environment variable if it exists, or "".
 * \throws std::runtime_error on error
 */
RCPPUTILS_PUBLIC
std::string get_env_var(const char * env_var);

/// Set/un-set a process-scoped environment variable.
/*
 *  \param[in] env_var The name of the environment variable.
 *  \param[in] env_value Value to set the environment variable to, or `NULL`
 *    to un-set.
 *  \return Boolean representing whether the operation was successful.
 *  \throws std::runtime_error if env_name is invalid/NULL, or if setting
 *    the environment variable fails.
 *
 */
RCPPUTILS_PUBLIC
bool set_env_var(const char * env_var, const char * env_value);

}  // namespace rcpputils

#endif  // RCPPUTILS__ENV_HPP_
