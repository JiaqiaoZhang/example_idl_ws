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
 * @file StringIdl.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "StringIdl.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

idl_msgs::idl::StringIdl::StringIdl()
{
    // m_msg_string com.eprosima.idl.parser.typecode.StringTypeCode@6d7b4f4c
    m_msg_string ="";

}

idl_msgs::idl::StringIdl::~StringIdl()
{
}

idl_msgs::idl::StringIdl::StringIdl(const StringIdl &x)
{
    m_msg_string = x.m_msg_string;
}

idl_msgs::idl::StringIdl::StringIdl(StringIdl &&x)
{
    m_msg_string = std::move(x.m_msg_string);
}

idl_msgs::idl::StringIdl& idl_msgs::idl::StringIdl::operator=(const StringIdl &x)
{

    m_msg_string = x.m_msg_string;

    return *this;
}

idl_msgs::idl::StringIdl& idl_msgs::idl::StringIdl::operator=(StringIdl &&x)
{

    m_msg_string = std::move(x.m_msg_string);

    return *this;
}

size_t idl_msgs::idl::StringIdl::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    return current_alignment - initial_alignment;
}

size_t idl_msgs::idl::StringIdl::getCdrSerializedSize(const idl_msgs::idl::StringIdl& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.msg_string().size() + 1;

    return current_alignment - initial_alignment;
}

void idl_msgs::idl::StringIdl::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_msg_string;
}

void idl_msgs::idl::StringIdl::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_msg_string;
}

/*!
 * @brief This function copies the value in member msg_string
 * @param _msg_string New value to be copied in member msg_string
 */
void idl_msgs::idl::StringIdl::msg_string(const std::string &_msg_string)
{
m_msg_string = _msg_string;
}

/*!
 * @brief This function moves the value in member msg_string
 * @param _msg_string New value to be moved in member msg_string
 */
void idl_msgs::idl::StringIdl::msg_string(std::string &&_msg_string)
{
m_msg_string = std::move(_msg_string);
}

/*!
 * @brief This function returns a constant reference to member msg_string
 * @return Constant reference to member msg_string
 */
const std::string& idl_msgs::idl::StringIdl::msg_string() const
{
    return m_msg_string;
}

/*!
 * @brief This function returns a reference to member msg_string
 * @return Reference to member msg_string
 */
std::string& idl_msgs::idl::StringIdl::msg_string()
{
    return m_msg_string;
}

size_t idl_msgs::idl::StringIdl::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool idl_msgs::idl::StringIdl::isKeyDefined()
{
   return false;
}

void idl_msgs::idl::StringIdl::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
}


