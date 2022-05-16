// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

#ifndef _FASTRTPS_CONFIG_H_
#define _FASTRTPS_CONFIG_H_

#define FASTRTPS_VERSION_MAJOR 2
#define FASTRTPS_VERSION_MINOR 1
#define FASTRTPS_VERSION_MICRO 1
#define FASTRTPS_VERSION_STR "2.1.1"

#define GEN_API_VER 1

// C++14 support defines
#ifndef HAVE_CXX14
#define HAVE_CXX14 0
#endif

// C++1Y support defines
#ifndef HAVE_CXX1Y
#define HAVE_CXX1Y 0
#endif

// C++11 support defines
#ifndef HAVE_CXX11
#define HAVE_CXX11 1
#endif

// C++0x support defines
#ifndef HAVE_CXX0X
#define HAVE_CXX0X 1
#endif

// C++ constexpr support
#ifndef HAVE_CXX_CONSTEXPR
#define HAVE_CXX_CONSTEXPR 1
#endif

#if HAVE_CXX_CONSTEXPR
#define CONSTEXPR constexpr
#else
#define CONSTEXPR const
#endif

// Endianness defines
#ifndef FASTDDS_IS_BIG_ENDIAN_TARGET
#define FASTDDS_IS_BIG_ENDIAN_TARGET 0
#endif

// Security
#ifndef HAVE_SECURITY
#define HAVE_SECURITY 0
#endif

//Sqlite3 support
#ifndef HAVE_SQLITE3
#define HAVE_SQLITE3 1
#endif


// TLS support
#ifndef TLS_FOUND
#define TLS_FOUND 1
#endif

// Strict real-time
#ifndef HAVE_STRICT_REALTIME
#define HAVE_STRICT_REALTIME 0
#endif

// Deprecated macro
#if __cplusplus >= 201402L
#define FASTRTPS_DEPRECATED(msg) [[ deprecated(msg) ]]
#elif defined(__GNUC__) || defined(__clang__)
#define FASTRTPS_DEPRECATED(msg) __attribute__ ((deprecated(msg)))
#elif defined(_MSC_VER)
#define FASTRTPS_DEPRECATED(msg) __declspec(deprecated(msg))
#else
#define FASTRTPS_DEPRECATED(msg)
#endif

#endif // _FASTRTPS_CONFIG_H_
