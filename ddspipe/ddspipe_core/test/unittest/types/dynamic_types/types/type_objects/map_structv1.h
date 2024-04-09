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
 * @file map_struct.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#include <fastcdr/config.h>

#if FASTCDR_VERSION_MAJOR == 1

#ifndef _FAST_DDS_GENERATED_MAP_STRUCT_H_
#define _FAST_DDS_GENERATED_MAP_STRUCT_H_


#include <fastrtps/utils/fixed_size_string.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

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
#if defined(MAP_STRUCT_SOURCE)
#define MAP_STRUCT_DllAPI __declspec( dllexport )
#else
#define MAP_STRUCT_DllAPI __declspec( dllimport )
#endif // MAP_STRUCT_SOURCE
#else
#define MAP_STRUCT_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define MAP_STRUCT_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima







/*!
 * @brief This class represents the structure map_struct defined by the user in the IDL file.
 * @ingroup map_struct
 */
class map_struct
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport map_struct();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~map_struct();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object map_struct that will be copied.
     */
    eProsima_user_DllExport map_struct(
            const map_struct& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object map_struct that will be copied.
     */
    eProsima_user_DllExport map_struct(
            map_struct&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object map_struct that will be copied.
     */
    eProsima_user_DllExport map_struct& operator =(
            const map_struct& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object map_struct that will be copied.
     */
    eProsima_user_DllExport map_struct& operator =(
            map_struct&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x map_struct object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const map_struct& x) const;

    /*!
     * @brief Comparison operator.
     * @param x map_struct object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const map_struct& x) const;

    /*!
     * @brief This function copies the value in member my_map
     * @param _my_map New value to be copied in member my_map
     */
    eProsima_user_DllExport void my_map(
            const std::map<std::string, bool>& _my_map);

    /*!
     * @brief This function moves the value in member my_map
     * @param _my_map New value to be moved in member my_map
     */
    eProsima_user_DllExport void my_map(
            std::map<std::string, bool>&& _my_map);

    /*!
     * @brief This function returns a constant reference to member my_map
     * @return Constant reference to member my_map
     */
    eProsima_user_DllExport const std::map<std::string, bool>& my_map() const;

    /*!
     * @brief This function returns a reference to member my_map
     * @return Reference to member my_map
     */
    eProsima_user_DllExport std::map<std::string, bool>& my_map();


    /*!
    * @brief This function returns the maximum serialized size of an object
    * depending on the buffer alignment.
    * @param current_alignment Buffer alignment.
    * @return Maximum serialized size.
    */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const map_struct& data,
            size_t current_alignment = 0);



    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);




    /*!
    * @brief This function tells you if the Key has been defined for this type
    */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
    * @brief This function serializes the key members of an object using CDR serialization.
    * @param cdr CDR serialization object.
    */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;


private:

    std::map<std::string, bool> m_my_map;

};


#endif // _FAST_DDS_GENERATED_MAP_STRUCT_H_



#endif // FASTCDR_VERSION_MAJOR == 1
