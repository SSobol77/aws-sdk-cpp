﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>The structure that holds the settings for transmitting audio and video to the
   * Amazon S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/S3RecordingSinkConfiguration">AWS
   * API Reference</a></p>
   */
  class S3RecordingSinkConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API S3RecordingSinkConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API S3RecordingSinkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API S3RecordingSinkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL of the Amazon S3 bucket used as the recording sink.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The URL of the Amazon S3 bucket used as the recording sink.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The URL of the Amazon S3 bucket used as the recording sink.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The URL of the Amazon S3 bucket used as the recording sink.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The URL of the Amazon S3 bucket used as the recording sink.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The URL of the Amazon S3 bucket used as the recording sink.</p>
     */
    inline S3RecordingSinkConfiguration& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The URL of the Amazon S3 bucket used as the recording sink.</p>
     */
    inline S3RecordingSinkConfiguration& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The URL of the Amazon S3 bucket used as the recording sink.</p>
     */
    inline S3RecordingSinkConfiguration& WithDestination(const char* value) { SetDestination(value); return *this;}

  private:

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
