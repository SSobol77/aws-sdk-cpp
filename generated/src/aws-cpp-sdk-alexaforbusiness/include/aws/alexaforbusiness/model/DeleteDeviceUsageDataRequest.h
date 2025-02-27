﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/DeviceUsageType.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class DeleteDeviceUsageDataRequest : public AlexaForBusinessRequest
  {
  public:
    AWS_ALEXAFORBUSINESS_API DeleteDeviceUsageDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDeviceUsageData"; }

    AWS_ALEXAFORBUSINESS_API Aws::String SerializePayload() const override;

    AWS_ALEXAFORBUSINESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the device.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }

    /**
     * <p>The ARN of the device.</p>
     */
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }

    /**
     * <p>The ARN of the device.</p>
     */
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArnHasBeenSet = true; m_deviceArn = value; }

    /**
     * <p>The ARN of the device.</p>
     */
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::move(value); }

    /**
     * <p>The ARN of the device.</p>
     */
    inline void SetDeviceArn(const char* value) { m_deviceArnHasBeenSet = true; m_deviceArn.assign(value); }

    /**
     * <p>The ARN of the device.</p>
     */
    inline DeleteDeviceUsageDataRequest& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}

    /**
     * <p>The ARN of the device.</p>
     */
    inline DeleteDeviceUsageDataRequest& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the device.</p>
     */
    inline DeleteDeviceUsageDataRequest& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}


    /**
     * <p>The type of usage data to delete.</p>
     */
    inline const DeviceUsageType& GetDeviceUsageType() const{ return m_deviceUsageType; }

    /**
     * <p>The type of usage data to delete.</p>
     */
    inline bool DeviceUsageTypeHasBeenSet() const { return m_deviceUsageTypeHasBeenSet; }

    /**
     * <p>The type of usage data to delete.</p>
     */
    inline void SetDeviceUsageType(const DeviceUsageType& value) { m_deviceUsageTypeHasBeenSet = true; m_deviceUsageType = value; }

    /**
     * <p>The type of usage data to delete.</p>
     */
    inline void SetDeviceUsageType(DeviceUsageType&& value) { m_deviceUsageTypeHasBeenSet = true; m_deviceUsageType = std::move(value); }

    /**
     * <p>The type of usage data to delete.</p>
     */
    inline DeleteDeviceUsageDataRequest& WithDeviceUsageType(const DeviceUsageType& value) { SetDeviceUsageType(value); return *this;}

    /**
     * <p>The type of usage data to delete.</p>
     */
    inline DeleteDeviceUsageDataRequest& WithDeviceUsageType(DeviceUsageType&& value) { SetDeviceUsageType(std::move(value)); return *this;}

  private:

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;

    DeviceUsageType m_deviceUsageType;
    bool m_deviceUsageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
