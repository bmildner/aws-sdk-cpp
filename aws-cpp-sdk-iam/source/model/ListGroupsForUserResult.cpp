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
#include <aws/iam/model/ListGroupsForUserResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListGroupsForUserResult::ListGroupsForUserResult() : 
    m_isTruncated(false)
{
}

ListGroupsForUserResult::ListGroupsForUserResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_isTruncated(false)
{
  *this = result;
}

ListGroupsForUserResult& ListGroupsForUserResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("ListGroupsForUserResult");

  if(!resultNode.IsNull())
  {
    XmlNode groupsNode = resultNode.FirstChild("Groups");
    if(!groupsNode.IsNull())
    {
      XmlNode groupsMember = groupsNode.FirstChild("member");
      while(!groupsMember.IsNull())
      {
        m_groups.push_back(groupsMember);
        groupsMember = groupsMember.NextNode("member");
      }

    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(isTruncatedNode.IsNull())
    {
      isTruncatedNode = resultNode;
    }

    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(isTruncatedNode.GetText().c_str()).c_str());
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(markerNode.IsNull())
    {
      markerNode = resultNode;
    }

    if(!markerNode.IsNull())
    {
      m_marker = StringUtils::Trim(markerNode.GetText().c_str());
    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
