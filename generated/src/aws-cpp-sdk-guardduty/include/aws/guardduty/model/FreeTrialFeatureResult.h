﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class FreeTrialFeatureResult
  {
    NOT_SET,
    FLOW_LOGS,
    CLOUD_TRAIL,
    DNS_LOGS,
    S3_DATA_EVENTS,
    EKS_AUDIT_LOGS,
    EBS_MALWARE_PROTECTION,
    RDS_LOGIN_EVENTS
  };

namespace FreeTrialFeatureResultMapper
{
AWS_GUARDDUTY_API FreeTrialFeatureResult GetFreeTrialFeatureResultForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForFreeTrialFeatureResult(FreeTrialFeatureResult value);
} // namespace FreeTrialFeatureResultMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
