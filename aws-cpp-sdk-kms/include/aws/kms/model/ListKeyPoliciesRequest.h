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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /*
  */
  class AWS_KMS_API ListKeyPoliciesRequest : public KMSRequest
  {
  public:
    ListKeyPoliciesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     <p>A unique identifier for the customer master key. This value can be a globally unique identifier, a fully specified ARN to either an alias or a key, or an alias name prefixed by "alias/". <ul> <li>Key ARN Example - arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li> <li>Alias ARN Example - arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</li> <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li> <li>Alias Name Example - alias/MyAliasName</li> </ul> </p>
    */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /*
     <p>A unique identifier for the customer master key. This value can be a globally unique identifier, a fully specified ARN to either an alias or a key, or an alias name prefixed by "alias/". <ul> <li>Key ARN Example - arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li> <li>Alias ARN Example - arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</li> <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li> <li>Alias Name Example - alias/MyAliasName</li> </ul> </p>
    */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /*
     <p>A unique identifier for the customer master key. This value can be a globally unique identifier, a fully specified ARN to either an alias or a key, or an alias name prefixed by "alias/". <ul> <li>Key ARN Example - arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li> <li>Alias ARN Example - arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</li> <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li> <li>Alias Name Example - alias/MyAliasName</li> </ul> </p>
    */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /*
     <p>A unique identifier for the customer master key. This value can be a globally unique identifier, a fully specified ARN to either an alias or a key, or an alias name prefixed by "alias/". <ul> <li>Key ARN Example - arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li> <li>Alias ARN Example - arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</li> <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li> <li>Alias Name Example - alias/MyAliasName</li> </ul> </p>
    */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /*
     <p>A unique identifier for the customer master key. This value can be a globally unique identifier, a fully specified ARN to either an alias or a key, or an alias name prefixed by "alias/". <ul> <li>Key ARN Example - arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li> <li>Alias ARN Example - arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</li> <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li> <li>Alias Name Example - alias/MyAliasName</li> </ul> </p>
    */
    inline ListKeyPoliciesRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /*
     <p>A unique identifier for the customer master key. This value can be a globally unique identifier, a fully specified ARN to either an alias or a key, or an alias name prefixed by "alias/". <ul> <li>Key ARN Example - arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li> <li>Alias ARN Example - arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</li> <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li> <li>Alias Name Example - alias/MyAliasName</li> </ul> </p>
    */
    inline ListKeyPoliciesRequest& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /*
     <p>A unique identifier for the customer master key. This value can be a globally unique identifier, a fully specified ARN to either an alias or a key, or an alias name prefixed by "alias/". <ul> <li>Key ARN Example - arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</li> <li>Alias ARN Example - arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</li> <li>Globally Unique Key ID Example - 12345678-1234-1234-1234-123456789012</li> <li>Alias Name Example - alias/MyAliasName</li> </ul> </p>
    */
    inline ListKeyPoliciesRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /*
     <p>Specify this parameter only when paginating results to indicate the maximum number of policies you want listed in the response. If there are additional policies beyond the maximum you specify, the <code>Truncated</code> response element will be set to <code>true.</code> </p>
    */
    inline long GetLimit() const{ return m_limit; }

    /*
     <p>Specify this parameter only when paginating results to indicate the maximum number of policies you want listed in the response. If there are additional policies beyond the maximum you specify, the <code>Truncated</code> response element will be set to <code>true.</code> </p>
    */
    inline void SetLimit(long value) { m_limitHasBeenSet = true; m_limit = value; }

    /*
     <p>Specify this parameter only when paginating results to indicate the maximum number of policies you want listed in the response. If there are additional policies beyond the maximum you specify, the <code>Truncated</code> response element will be set to <code>true.</code> </p>
    */
    inline ListKeyPoliciesRequest& WithLimit(long value) { SetLimit(value); return *this;}

    /*
     <p>Use this parameter only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>NextMarker</code> in the response you just received. </p>
    */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /*
     <p>Use this parameter only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>NextMarker</code> in the response you just received. </p>
    */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p>Use this parameter only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>NextMarker</code> in the response you just received. </p>
    */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p>Use this parameter only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>NextMarker</code> in the response you just received. </p>
    */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /*
     <p>Use this parameter only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>NextMarker</code> in the response you just received. </p>
    */
    inline ListKeyPoliciesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /*
     <p>Use this parameter only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>NextMarker</code> in the response you just received. </p>
    */
    inline ListKeyPoliciesRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /*
     <p>Use this parameter only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>NextMarker</code> in the response you just received. </p>
    */
    inline ListKeyPoliciesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
    long m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
