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
#include <aws/email/model/ReceiptRuleSetMetadata.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SES::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ReceiptRuleSetMetadata::ReceiptRuleSetMetadata() : 
    m_nameHasBeenSet(false),
    m_createdTimestamp(0.0),
    m_createdTimestampHasBeenSet(false)
{
}

ReceiptRuleSetMetadata::ReceiptRuleSetMetadata(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_createdTimestamp(0.0),
    m_createdTimestampHasBeenSet(false)
{
  *this = xmlNode;
}

ReceiptRuleSetMetadata& ReceiptRuleSetMetadata::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(nameNode.IsNull())
    {
      nameNode = resultNode;
    }

    if(!nameNode.IsNull())
    {
      m_name = StringUtils::Trim(nameNode.GetText().c_str());
      m_nameHasBeenSet = true;
    }
    XmlNode createdTimestampNode = resultNode.FirstChild("CreatedTimestamp");
    if(createdTimestampNode.IsNull())
    {
      createdTimestampNode = resultNode;
    }

    if(!createdTimestampNode.IsNull())
    {
      m_createdTimestamp = StringUtils::ConvertToDouble(StringUtils::Trim(createdTimestampNode.GetText().c_str()).c_str());
      m_createdTimestampHasBeenSet = true;
    }
  }

  return *this;
}

void ReceiptRuleSetMetadata::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_createdTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedTimestamp=" << m_createdTimestamp << "&";
  }
}

void ReceiptRuleSetMetadata::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_createdTimestampHasBeenSet)
  {
      oStream << location << ".CreatedTimestamp=" << m_createdTimestamp << "&";
  }
}
