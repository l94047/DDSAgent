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

/*!
 * @file HelloWorld.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#include <fastcdr/config.h>
#include "HelloWorldv1.h"

#if FASTCDR_VERSION_MAJOR > 1

#ifndef _FAST_DDS_GENERATED_HELLOWORLD_H_
#define _FAST_DDS_GENERATED_HELLOWORLD_H_

#include <array>
#include <bitset>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include <fastcdr/cdr/fixed_size_string.hpp>
#include <fastcdr/xcdr/external.hpp>
#include <fastcdr/xcdr/optional.hpp>



#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(HELLOWORLD_SOURCE)
#define HELLOWORLD_DllAPI __declspec( dllexport )
#else
#define HELLOWORLD_DllAPI __declspec( dllimport )
#endif // HELLOWORLD_SOURCE
#else
#define HELLOWORLD_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define HELLOWORLD_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;
} // namespace fastcdr
} // namespace eprosima





/*!
 * @brief This class represents the structure HelloWorld defined by the user in the IDL file.
 * @ingroup HelloWorld
 */
class HelloWorld
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport HelloWorld();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~HelloWorld();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object HelloWorld that will be copied.
     */
    eProsima_user_DllExport HelloWorld(
            const HelloWorld& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object HelloWorld that will be copied.
     */
    eProsima_user_DllExport HelloWorld(
            HelloWorld&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object HelloWorld that will be copied.
     */
    eProsima_user_DllExport HelloWorld& operator =(
            const HelloWorld& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object HelloWorld that will be copied.
     */
    eProsima_user_DllExport HelloWorld& operator =(
            HelloWorld&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x HelloWorld object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const HelloWorld& x) const;

    /*!
     * @brief Comparison operator.
     * @param x HelloWorld object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const HelloWorld& x) const;

    /*!
     * @brief This function sets a value in member index
     * @param _index New value for member index
     */
    eProsima_user_DllExport void index(
            uint32_t _index);

    /*!
     * @brief This function returns the value of member index
     * @return Value of member index
     */
    eProsima_user_DllExport uint32_t index() const;

    /*!
     * @brief This function returns a reference to member index
     * @return Reference to member index
     */
    eProsima_user_DllExport uint32_t& index();


    /*!
     * @brief This function copies the value in member message
     * @param _message New value to be copied in member message
     */
    eProsima_user_DllExport void message(
            const std::string& _message);

    /*!
     * @brief This function moves the value in member message
     * @param _message New value to be moved in member message
     */
    eProsima_user_DllExport void message(
            std::string&& _message);

    /*!
     * @brief This function returns a constant reference to member message
     * @return Constant reference to member message
     */
    eProsima_user_DllExport const std::string& message() const;

    /*!
     * @brief This function returns a reference to member message
     * @return Reference to member message
     */
    eProsima_user_DllExport std::string& message();

private:

    uint32_t m_index{0};
    std::string m_message;

};

#endif // _FAST_DDS_GENERATED_HELLOWORLD_H_



#endif // FASTCDR_VERSION_MAJOR > 1
