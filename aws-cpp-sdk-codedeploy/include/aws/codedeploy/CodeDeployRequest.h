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
#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/http/HttpRequest.h>

namespace Aws
{
namespace CodeDeploy
{
  class AWS_CODEDEPLOY_API CodeDeployRequest : public AmazonSerializableWebServiceRequest
  {
  public:
    virtual ~CodeDeployRequest () {}
    virtual Aws::String SerializePayload() const override = 0;

    void AddParametersToRequest(Aws::Http::HttpRequest& httpRequest) const { AWS_UNREFERENCED_PARAM(httpRequest); }

    inline Aws::Http::HeaderValueCollection GetHeaders() const override
    {
      auto headers = GetRequestSpecificHeaders();
      headers.insert(Aws::Http::HeaderValuePair(Aws::Http::CONTENT_TYPE_HEADER, AMZN_JSON_CONTENT_TYPE_1_1 ));
      return std::move(headers);
    }

  protected:
    virtual Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const { return Aws::Http::HeaderValueCollection(); }

  };


} // namespace CodeDeploy
} // namespace Aws
