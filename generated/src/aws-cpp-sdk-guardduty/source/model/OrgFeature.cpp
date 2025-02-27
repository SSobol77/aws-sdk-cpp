﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/OrgFeature.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace OrgFeatureMapper
      {

        static const int S3_DATA_EVENTS_HASH = HashingUtils::HashString("S3_DATA_EVENTS");
        static const int EKS_AUDIT_LOGS_HASH = HashingUtils::HashString("EKS_AUDIT_LOGS");
        static const int EBS_MALWARE_PROTECTION_HASH = HashingUtils::HashString("EBS_MALWARE_PROTECTION");
        static const int RDS_LOGIN_EVENTS_HASH = HashingUtils::HashString("RDS_LOGIN_EVENTS");


        OrgFeature GetOrgFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_DATA_EVENTS_HASH)
          {
            return OrgFeature::S3_DATA_EVENTS;
          }
          else if (hashCode == EKS_AUDIT_LOGS_HASH)
          {
            return OrgFeature::EKS_AUDIT_LOGS;
          }
          else if (hashCode == EBS_MALWARE_PROTECTION_HASH)
          {
            return OrgFeature::EBS_MALWARE_PROTECTION;
          }
          else if (hashCode == RDS_LOGIN_EVENTS_HASH)
          {
            return OrgFeature::RDS_LOGIN_EVENTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrgFeature>(hashCode);
          }

          return OrgFeature::NOT_SET;
        }

        Aws::String GetNameForOrgFeature(OrgFeature enumValue)
        {
          switch(enumValue)
          {
          case OrgFeature::S3_DATA_EVENTS:
            return "S3_DATA_EVENTS";
          case OrgFeature::EKS_AUDIT_LOGS:
            return "EKS_AUDIT_LOGS";
          case OrgFeature::EBS_MALWARE_PROTECTION:
            return "EBS_MALWARE_PROTECTION";
          case OrgFeature::RDS_LOGIN_EVENTS:
            return "RDS_LOGIN_EVENTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrgFeatureMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
