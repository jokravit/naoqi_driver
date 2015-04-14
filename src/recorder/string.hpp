/*
 * Copyright 2015 Aldebaran
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#ifndef STRING_RECORDER_HPP
#define STRING_RECORDER_HPP

#include <ros/ros.h>
#include <std_msgs/String.h>

#include "recorderbase.hpp"
#include <qi/anyobject.hpp>

namespace alros
{
namespace recorder
{

class StringRecorder : public BaseRecorder<StringRecorder>
{

public:
  StringRecorder( const std::string& topic );

  void write( const std_msgs::String& msg );

  void reset( boost::shared_ptr<alros::recorder::GlobalRecorder> gr );

private:
  boost::shared_ptr<alros::recorder::GlobalRecorder> gr_;

}; // class

} //publisher
} // alros

#endif