// Copyright (c) 2019, Open Source Robotics Foundation, Inc.
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

// This file is originally from:
// https://github.com/ros/pluginlib/blob/1a4de29fa55173e9b897ca8ff57ebc88c047e0b3/pluginlib/include/pluginlib/impl/filesystem_helper.hpp

/*! \file filesystem_helper.hpp
 * \brief Cross-platform filesystem helper functions and additional emulation of [std::filesystem](https://en.cppreference.com/w/cpp/filesystem).
 *
 * Note: Once std::filesystem is supported on all ROS2 platforms, this class
 * can be deprecated/removed in favor of the built-in functionality.
 */

#ifndef RCPPUTILS__FILESYSTEM_HELPER_HPP_
#define RCPPUTILS__FILESYSTEM_HELPER_HPP_

#include <string>
#include <vector>

#include "rcpputils/visibility_control.hpp"

namespace rcpputils
{
namespace fs
{

#ifdef _WIN32
#  define RCPPUTILS_IMPL_OS_DIRSEP '\\'
#else
#  define RCPPUTILS_IMPL_OS_DIRSEP '/'
#endif

/**
 * \def kPreferredSeparator
 *
 * A definition for this platforms string path separator
 */
static constexpr const char kPreferredSeparator = RCPPUTILS_IMPL_OS_DIRSEP;

#undef RCPPUTILS_IMPL_OS_DIRSEP


/**
 * \brief Drop-in replacement for [std::filesystem::path](https://en.cppreference.com/w/cpp/filesystem/path).
 *
 * It must conform to the same standard described and cannot include methods that are not
 * incorporated there.
 */
class path
{
public:
  /**
    * \brief Constructs an empty path.
    */
  RCPPUTILS_PUBLIC
  path() = default;

  /**
   * \brief Conversion constructor from a std::string path.
   *
   * \param[in] p A string path split by the platform's string path separator.
   */
  RCPPUTILS_PUBLIC
  path(const std::string & p);  // NOLINT(runtime/explicit): this is a conversion constructor

  /**
    * \brief Copy constructor.
    */
  RCPPUTILS_PUBLIC path(const path & p) = default;

  /**
   * \brief Copy assignment operator.
   *
   * \return Reference to the copied path.
   */
  RCPPUTILS_PUBLIC path & operator=(const path &) = default;

  /**
   * \brief Get the path delimited using this system's path separator.
   *
   * \return The path as a string
   */
  RCPPUTILS_PUBLIC std::string string() const;

  /**
   * \brief Check if this path exists.
   *
   * \return True if the path exists, false otherwise.
   */
  RCPPUTILS_PUBLIC bool exists() const;

  /**
   * \brief Check if the path exists and it is a directory.
   *
   * \return True if the path is an existing directory, false otherwise.
   */
  RCPPUTILS_PUBLIC bool is_directory() const noexcept;

  /**
   * \brief Check if the path is a regular file.
   *
   * \return True if the file is an existing regular file, false otherwise.
   */
  RCPPUTILS_PUBLIC bool is_regular_file() const noexcept;

  /**
  * \brief Return the size of the file in bytes.
  *
  * \return size of file in bytes
  * \throws std::system_error
  */
  RCPPUTILS_PUBLIC uint64_t file_size() const;

  /**
  * \brief Check if the path is empty.
  *
  * \return True if the path is empty, false otherwise.
  */
  RCPPUTILS_PUBLIC bool empty() const;

  /**
  * \brief Check if the path is an absolute path.
  *
  * \return True if the path is absolute, false otherwise.
  */
  RCPPUTILS_PUBLIC bool is_absolute() const;

  /**
  * \brief Const iterator to first element of this path.
  *
  * \return A const iterator to the first element.
  */
  RCPPUTILS_PUBLIC std::vector<std::string>::const_iterator cbegin() const;

  /**
  * Const iterator to one past the last element of this path.
  *
  * return A const iterator to one past the last element of the path.
  */
  RCPPUTILS_PUBLIC std::vector<std::string>::const_iterator cend() const;

  /**
  * \brief Get the parent directory of this path.
  *
  * \return A path to the parent directory.
  */
  RCPPUTILS_PUBLIC path parent_path() const;

  /**
  * \brief Get the last element in this path.
  *
  * If this path points to a directory, it will return the directory name.
  *
  * \return The last element in this path
  */
  RCPPUTILS_PUBLIC path filename() const;

  /**
  * \brief Get a relative path to the component including and following the last '.'.
  *
  * \return The string extension
  */
  RCPPUTILS_PUBLIC path extension() const;

  /**
  * \brief Concatenate a path and a string into a single path.
  *
  * \param[in] other the string compnoent to concatenate
  * \return The combined path of this and other.
  */
  RCPPUTILS_PUBLIC path operator/(const std::string & other) const;

  /**
  * \brief Append a string component to this path.
  *
  * \param[in] other the string component to append
  * \return *this
  */
  RCPPUTILS_PUBLIC path & operator/=(const std::string & other);

  /**
  * \brief Concatenate two paths together.
  *
  * \param[in] other the path to append
  * \return The combined path.
  */
  RCPPUTILS_PUBLIC path operator/(const path & other) const;

  /**
  * \brief Append a string component to this path.
  *
  * \param[in] other the string component to append
  * \return *this
  */
  RCPPUTILS_PUBLIC path & operator/=(const path & other);

private:
  std::string path_;
  std::vector<std::string> path_as_vector_;
};

/**
 * \brief Check if the path is a regular file.
 *
 * \param[in] p The path to check
 * \return True if the path exists, false otherwise.
 */
RCPPUTILS_PUBLIC bool is_regular_file(const path & p) noexcept;

/**
 * \brief Check if the path is a directory.
 *
 * \param[in] p The path to check
 * \return True if the path is an existing directory, false otherwise.
 */
RCPPUTILS_PUBLIC bool is_directory(const path & p) noexcept;

/**
 * \brief Get the file size of the path.
 *
 * \param[in] p The path to get the file size of.
 * \return The file size in bytes.
 *
 * \throws std::sytem_error
 */
RCPPUTILS_PUBLIC uint64_t file_size(const path & p);

/**
 * \brief Check if a path exists.
 *
 * \param[in] path_to_check The path to check.
 * \return True if the path exists, false otherwise.
 */
RCPPUTILS_PUBLIC bool exists(const path & path_to_check);


/**
 * \brief Get a path to a location in the temporary directory, if it's available.
 *
 * This does not create any directories.
 * On Windows, this uses "GetTempPathA"
 * On non-Windows, this prefers the environment variable TMPDIR, falling back to /tmp
 *
 * \return A path to a directory for storing temporary files and directories.
 */
RCPPUTILS_PUBLIC path temp_directory_path();

/**
 * \brief Construct a uniquely named temporary directory, in "parent", with format base_nameXXXXXX
 *
 * The output, if successful, is guaranteed to be a newly-created directory.
 * The underlying implementation keeps generating paths until one that does not exist is found.
 * This guarantees that there will be no existing files in the returned directory.
 *
 * \param[in] base_name User-specified portion of the created directory
 * \param[in] parent_path The parent path of the directory that will be created
 * \return A path to a newly-created directory with base_name and a 6-character unique suffix
 *
 * \throws std::system_error If any OS APIs do not succeed.
 */
RCPPUTILS_PUBLIC path create_temp_directory(
  const std::string & base_name,
  const path & parent_path = temp_directory_path());

/**
 * \brief Return current working directory.
 *
 * \return The current working directory.
 *
 * \throws std::system_error
 */
RCPPUTILS_PUBLIC path current_path();

/**
 * \brief Create a directory with the given path p.
 *
 * This builds directories recursively and will skip directories if they are already created.
 * \param[in] p The path at which to create the directory.
 * \return Return true if the directory already exists or is created, false otherwise.
 */
RCPPUTILS_PUBLIC bool create_directories(const path & p);

/**
 * \brief Remove the file or directory at the path p.
 *
 * \param[in] p The path of the object to remove.
 * \return true if the file exists and it was successfully removed, false otherwise.
 */
RCPPUTILS_PUBLIC bool remove(const path & p);

/**
 * \brief Remove the directory at the path p and its content.
 *
 * Additionally to \sa remove, remove_all removes a directory and its containing files.
 *
 * \param[in] p The path of the directory to remove.
 * \return true if the directory exists and it was successfully removed, false otherwise.
 */
RCPPUTILS_PUBLIC bool remove_all(const path & p);

/**
 * \brief Remove extension(s) from a path.
 *
 * An extension is defined as text starting from the end of a path to the first period (.) character.
 *
 * \param[in] file_path The file path string.
 * \param[in] n_times The number of extensions to remove if there are multiple extensions.
 * \return The path object.
 */
RCPPUTILS_PUBLIC path remove_extension(const path & file_path, int n_times = 1);

/**
 * \brief Compare two paths for equality.
 *
 * \return True if both paths are equal as strings.
 */
RCPPUTILS_PUBLIC bool operator==(const path & a, const path & b);
RCPPUTILS_PUBLIC bool operator!=(const path & a, const path & b);

/**
* \brief Convert the path to a string for ostream usage, such as in logging or string formatting.
*
* \param[in] os The stream to send the path string to
* \param[in] p The path to stringify
* \return The ostream, for chaining
*/
RCPPUTILS_PUBLIC std::ostream & operator<<(std::ostream & os, const path & p);

}  // namespace fs
}  // namespace rcpputils

#endif  // RCPPUTILS__FILESYSTEM_HELPER_HPP_
