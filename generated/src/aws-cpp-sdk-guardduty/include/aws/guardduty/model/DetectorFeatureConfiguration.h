﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/DetectorFeature.h>
#include <aws/guardduty/model/FeatureStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about a GuardDuty feature.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DetectorFeatureConfiguration">AWS
   * API Reference</a></p>
   */
  class DetectorFeatureConfiguration
  {
  public:
    AWS_GUARDDUTY_API DetectorFeatureConfiguration();
    AWS_GUARDDUTY_API DetectorFeatureConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API DetectorFeatureConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the feature.</p>
     */
    inline const DetectorFeature& GetName() const{ return m_name; }

    /**
     * <p>The name of the feature.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the feature.</p>
     */
    inline void SetName(const DetectorFeature& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the feature.</p>
     */
    inline void SetName(DetectorFeature&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the feature.</p>
     */
    inline DetectorFeatureConfiguration& WithName(const DetectorFeature& value) { SetName(value); return *this;}

    /**
     * <p>The name of the feature.</p>
     */
    inline DetectorFeatureConfiguration& WithName(DetectorFeature&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The status of the feature.</p>
     */
    inline const FeatureStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the feature.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the feature.</p>
     */
    inline void SetStatus(const FeatureStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the feature.</p>
     */
    inline void SetStatus(FeatureStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the feature.</p>
     */
    inline DetectorFeatureConfiguration& WithStatus(const FeatureStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the feature.</p>
     */
    inline DetectorFeatureConfiguration& WithStatus(FeatureStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    DetectorFeature m_name;
    bool m_nameHasBeenSet = false;

    FeatureStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
