﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Specifies a list of tags to return.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListTagsRequest">AWS
   * API Reference</a></p>
   */
  class ListTagsRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API ListTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTags"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies a list of trail, event data store, or channel ARNs whose tags will
     * be listed. The list has a limit of 20 ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIdList() const{ return m_resourceIdList; }

    /**
     * <p>Specifies a list of trail, event data store, or channel ARNs whose tags will
     * be listed. The list has a limit of 20 ARNs.</p>
     */
    inline bool ResourceIdListHasBeenSet() const { return m_resourceIdListHasBeenSet; }

    /**
     * <p>Specifies a list of trail, event data store, or channel ARNs whose tags will
     * be listed. The list has a limit of 20 ARNs.</p>
     */
    inline void SetResourceIdList(const Aws::Vector<Aws::String>& value) { m_resourceIdListHasBeenSet = true; m_resourceIdList = value; }

    /**
     * <p>Specifies a list of trail, event data store, or channel ARNs whose tags will
     * be listed. The list has a limit of 20 ARNs.</p>
     */
    inline void SetResourceIdList(Aws::Vector<Aws::String>&& value) { m_resourceIdListHasBeenSet = true; m_resourceIdList = std::move(value); }

    /**
     * <p>Specifies a list of trail, event data store, or channel ARNs whose tags will
     * be listed. The list has a limit of 20 ARNs.</p>
     */
    inline ListTagsRequest& WithResourceIdList(const Aws::Vector<Aws::String>& value) { SetResourceIdList(value); return *this;}

    /**
     * <p>Specifies a list of trail, event data store, or channel ARNs whose tags will
     * be listed. The list has a limit of 20 ARNs.</p>
     */
    inline ListTagsRequest& WithResourceIdList(Aws::Vector<Aws::String>&& value) { SetResourceIdList(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of trail, event data store, or channel ARNs whose tags will
     * be listed. The list has a limit of 20 ARNs.</p>
     */
    inline ListTagsRequest& AddResourceIdList(const Aws::String& value) { m_resourceIdListHasBeenSet = true; m_resourceIdList.push_back(value); return *this; }

    /**
     * <p>Specifies a list of trail, event data store, or channel ARNs whose tags will
     * be listed. The list has a limit of 20 ARNs.</p>
     */
    inline ListTagsRequest& AddResourceIdList(Aws::String&& value) { m_resourceIdListHasBeenSet = true; m_resourceIdList.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies a list of trail, event data store, or channel ARNs whose tags will
     * be listed. The list has a limit of 20 ARNs.</p>
     */
    inline ListTagsRequest& AddResourceIdList(const char* value) { m_resourceIdListHasBeenSet = true; m_resourceIdList.push_back(value); return *this; }


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListTagsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListTagsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListTagsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_resourceIdList;
    bool m_resourceIdListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
