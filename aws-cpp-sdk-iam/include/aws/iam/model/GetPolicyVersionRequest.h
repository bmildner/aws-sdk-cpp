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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /*
  */
  class AWS_IAM_API GetPolicyVersionRequest : public IAMRequest
  {
  public:
    GetPolicyVersionRequest();
    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    
    inline GetPolicyVersionRequest& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    
    inline GetPolicyVersionRequest& WithPolicyArn(Aws::String&& value) { SetPolicyArn(value); return *this;}

    
    inline GetPolicyVersionRequest& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}

    /*
     <p>Identifies the policy version to retrieve.</p>
    */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /*
     <p>Identifies the policy version to retrieve.</p>
    */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /*
     <p>Identifies the policy version to retrieve.</p>
    */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /*
     <p>Identifies the policy version to retrieve.</p>
    */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /*
     <p>Identifies the policy version to retrieve.</p>
    */
    inline GetPolicyVersionRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /*
     <p>Identifies the policy version to retrieve.</p>
    */
    inline GetPolicyVersionRequest& WithVersionId(Aws::String&& value) { SetVersionId(value); return *this;}

    /*
     <p>Identifies the policy version to retrieve.</p>
    */
    inline GetPolicyVersionRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}

  private:
    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet;
    Aws::String m_versionId;
    bool m_versionIdHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
