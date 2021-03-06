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
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/Initiator.h>
#include <aws/s3/model/Owner.h>
#include <aws/s3/model/StorageClass.h>
#include <aws/s3/model/RequestCharged.h>
#include <aws/s3/model/Part.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_S3_API ListPartsResult
  {
  public:
    ListPartsResult();
    ListPartsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListPartsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /*
     Name of the bucket to which the multipart upload was initiated.
    */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /*
     Name of the bucket to which the multipart upload was initiated.
    */
    inline void SetBucket(const Aws::String& value) { m_bucket = value; }

    /*
     Name of the bucket to which the multipart upload was initiated.
    */
    inline void SetBucket(Aws::String&& value) { m_bucket = value; }

    /*
     Name of the bucket to which the multipart upload was initiated.
    */
    inline void SetBucket(const char* value) { m_bucket.assign(value); }

    /*
     Name of the bucket to which the multipart upload was initiated.
    */
    inline ListPartsResult& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /*
     Name of the bucket to which the multipart upload was initiated.
    */
    inline ListPartsResult& WithBucket(Aws::String&& value) { SetBucket(value); return *this;}

    /*
     Name of the bucket to which the multipart upload was initiated.
    */
    inline ListPartsResult& WithBucket(const char* value) { SetBucket(value); return *this;}

    /*
     Object key for which the multipart upload was initiated.
    */
    inline const Aws::String& GetKey() const{ return m_key; }

    /*
     Object key for which the multipart upload was initiated.
    */
    inline void SetKey(const Aws::String& value) { m_key = value; }

    /*
     Object key for which the multipart upload was initiated.
    */
    inline void SetKey(Aws::String&& value) { m_key = value; }

    /*
     Object key for which the multipart upload was initiated.
    */
    inline void SetKey(const char* value) { m_key.assign(value); }

    /*
     Object key for which the multipart upload was initiated.
    */
    inline ListPartsResult& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /*
     Object key for which the multipart upload was initiated.
    */
    inline ListPartsResult& WithKey(Aws::String&& value) { SetKey(value); return *this;}

    /*
     Object key for which the multipart upload was initiated.
    */
    inline ListPartsResult& WithKey(const char* value) { SetKey(value); return *this;}

    /*
     Upload ID identifying the multipart upload whose parts are being listed.
    */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /*
     Upload ID identifying the multipart upload whose parts are being listed.
    */
    inline void SetUploadId(const Aws::String& value) { m_uploadId = value; }

    /*
     Upload ID identifying the multipart upload whose parts are being listed.
    */
    inline void SetUploadId(Aws::String&& value) { m_uploadId = value; }

    /*
     Upload ID identifying the multipart upload whose parts are being listed.
    */
    inline void SetUploadId(const char* value) { m_uploadId.assign(value); }

    /*
     Upload ID identifying the multipart upload whose parts are being listed.
    */
    inline ListPartsResult& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /*
     Upload ID identifying the multipart upload whose parts are being listed.
    */
    inline ListPartsResult& WithUploadId(Aws::String&& value) { SetUploadId(value); return *this;}

    /*
     Upload ID identifying the multipart upload whose parts are being listed.
    */
    inline ListPartsResult& WithUploadId(const char* value) { SetUploadId(value); return *this;}

    /*
     Part number after which listing begins.
    */
    inline long GetPartNumberMarker() const{ return m_partNumberMarker; }

    /*
     Part number after which listing begins.
    */
    inline void SetPartNumberMarker(long value) { m_partNumberMarker = value; }

    /*
     Part number after which listing begins.
    */
    inline ListPartsResult& WithPartNumberMarker(long value) { SetPartNumberMarker(value); return *this;}

    /*
     When a list is truncated, this element specifies the last part in the list, as well as the value to use for the part-number-marker request parameter in a subsequent request.
    */
    inline long GetNextPartNumberMarker() const{ return m_nextPartNumberMarker; }

    /*
     When a list is truncated, this element specifies the last part in the list, as well as the value to use for the part-number-marker request parameter in a subsequent request.
    */
    inline void SetNextPartNumberMarker(long value) { m_nextPartNumberMarker = value; }

    /*
     When a list is truncated, this element specifies the last part in the list, as well as the value to use for the part-number-marker request parameter in a subsequent request.
    */
    inline ListPartsResult& WithNextPartNumberMarker(long value) { SetNextPartNumberMarker(value); return *this;}

    /*
     Maximum number of parts that were allowed in the response.
    */
    inline long GetMaxParts() const{ return m_maxParts; }

    /*
     Maximum number of parts that were allowed in the response.
    */
    inline void SetMaxParts(long value) { m_maxParts = value; }

    /*
     Maximum number of parts that were allowed in the response.
    */
    inline ListPartsResult& WithMaxParts(long value) { SetMaxParts(value); return *this;}

    /*
     Indicates whether the returned list of parts is truncated.
    */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /*
     Indicates whether the returned list of parts is truncated.
    */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /*
     Indicates whether the returned list of parts is truncated.
    */
    inline ListPartsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}

    
    inline const Aws::Vector<Part>& GetParts() const{ return m_parts; }

    
    inline void SetParts(const Aws::Vector<Part>& value) { m_parts = value; }

    
    inline void SetParts(Aws::Vector<Part>&& value) { m_parts = value; }

    
    inline ListPartsResult& WithParts(const Aws::Vector<Part>& value) { SetParts(value); return *this;}

    
    inline ListPartsResult& WithParts(Aws::Vector<Part>&& value) { SetParts(value); return *this;}

    
    inline ListPartsResult& AddParts(const Part& value) { m_parts.push_back(value); return *this; }

    
    inline ListPartsResult& AddParts(Part&& value) { m_parts.push_back(value); return *this; }

    /*
     Identifies who initiated the multipart upload.
    */
    inline const Initiator& GetInitiator() const{ return m_initiator; }

    /*
     Identifies who initiated the multipart upload.
    */
    inline void SetInitiator(const Initiator& value) { m_initiator = value; }

    /*
     Identifies who initiated the multipart upload.
    */
    inline void SetInitiator(Initiator&& value) { m_initiator = value; }

    /*
     Identifies who initiated the multipart upload.
    */
    inline ListPartsResult& WithInitiator(const Initiator& value) { SetInitiator(value); return *this;}

    /*
     Identifies who initiated the multipart upload.
    */
    inline ListPartsResult& WithInitiator(Initiator&& value) { SetInitiator(value); return *this;}

    
    inline const Owner& GetOwner() const{ return m_owner; }

    
    inline void SetOwner(const Owner& value) { m_owner = value; }

    
    inline void SetOwner(Owner&& value) { m_owner = value; }

    
    inline ListPartsResult& WithOwner(const Owner& value) { SetOwner(value); return *this;}

    
    inline ListPartsResult& WithOwner(Owner&& value) { SetOwner(value); return *this;}

    /*
     The class of storage used to store the object.
    */
    inline const StorageClass& GetStorageClass() const{ return m_storageClass; }

    /*
     The class of storage used to store the object.
    */
    inline void SetStorageClass(const StorageClass& value) { m_storageClass = value; }

    /*
     The class of storage used to store the object.
    */
    inline void SetStorageClass(StorageClass&& value) { m_storageClass = value; }

    /*
     The class of storage used to store the object.
    */
    inline ListPartsResult& WithStorageClass(const StorageClass& value) { SetStorageClass(value); return *this;}

    /*
     The class of storage used to store the object.
    */
    inline ListPartsResult& WithStorageClass(StorageClass&& value) { SetStorageClass(value); return *this;}

    
    inline const RequestCharged& GetRequestCharged() const{ return m_requestCharged; }

    
    inline void SetRequestCharged(const RequestCharged& value) { m_requestCharged = value; }

    
    inline void SetRequestCharged(RequestCharged&& value) { m_requestCharged = value; }

    
    inline ListPartsResult& WithRequestCharged(const RequestCharged& value) { SetRequestCharged(value); return *this;}

    
    inline ListPartsResult& WithRequestCharged(RequestCharged&& value) { SetRequestCharged(value); return *this;}

  private:
    Aws::String m_bucket;
    Aws::String m_key;
    Aws::String m_uploadId;
    long m_partNumberMarker;
    long m_nextPartNumberMarker;
    long m_maxParts;
    bool m_isTruncated;
    Aws::Vector<Part> m_parts;
    Initiator m_initiator;
    Owner m_owner;
    StorageClass m_storageClass;
    RequestCharged m_requestCharged;
  };

} // namespace Model
} // namespace S3
} // namespace Aws