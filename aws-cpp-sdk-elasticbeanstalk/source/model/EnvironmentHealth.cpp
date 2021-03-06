/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/elasticbeanstalk/model/EnvironmentHealth.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Green_HASH = HashingUtils::HashString("Green");
static const int Yellow_HASH = HashingUtils::HashString("Yellow");
static const int Red_HASH = HashingUtils::HashString("Red");
static const int Grey_HASH = HashingUtils::HashString("Grey");

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{
namespace EnvironmentHealthMapper
{
EnvironmentHealth GetEnvironmentHealthForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Green_HASH)
  {
    return EnvironmentHealth::Green;
  }
  else if (hashCode == Yellow_HASH)
  {
    return EnvironmentHealth::Yellow;
  }
  else if (hashCode == Red_HASH)
  {
    return EnvironmentHealth::Red;
  }
  else if (hashCode == Grey_HASH)
  {
    return EnvironmentHealth::Grey;
  }

  return EnvironmentHealth::NOT_SET;
}

Aws::String GetNameForEnvironmentHealth(EnvironmentHealth value)
{
  switch(value)
  {
  case EnvironmentHealth::Green:
    return "Green";
  case EnvironmentHealth::Yellow:
    return "Yellow";
  case EnvironmentHealth::Red:
    return "Red";
  case EnvironmentHealth::Grey:
    return "Grey";
  default:
    return "";
  }
}

} // namespace EnvironmentHealthMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
