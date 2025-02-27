﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/VideoJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/VideoMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/ContentModerationDetection.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{
  class GetContentModerationResult
  {
  public:
    AWS_REKOGNITION_API GetContentModerationResult();
    AWS_REKOGNITION_API GetContentModerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetContentModerationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current status of the content moderation analysis job.</p>
     */
    inline const VideoJobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The current status of the content moderation analysis job.</p>
     */
    inline void SetJobStatus(const VideoJobStatus& value) { m_jobStatus = value; }

    /**
     * <p>The current status of the content moderation analysis job.</p>
     */
    inline void SetJobStatus(VideoJobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>The current status of the content moderation analysis job.</p>
     */
    inline GetContentModerationResult& WithJobStatus(const VideoJobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The current status of the content moderation analysis job.</p>
     */
    inline GetContentModerationResult& WithJobStatus(VideoJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetContentModerationResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetContentModerationResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetContentModerationResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Information about a video that Amazon Rekognition analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * <code>GetContentModeration</code>. </p>
     */
    inline const VideoMetadata& GetVideoMetadata() const{ return m_videoMetadata; }

    /**
     * <p>Information about a video that Amazon Rekognition analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * <code>GetContentModeration</code>. </p>
     */
    inline void SetVideoMetadata(const VideoMetadata& value) { m_videoMetadata = value; }

    /**
     * <p>Information about a video that Amazon Rekognition analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * <code>GetContentModeration</code>. </p>
     */
    inline void SetVideoMetadata(VideoMetadata&& value) { m_videoMetadata = std::move(value); }

    /**
     * <p>Information about a video that Amazon Rekognition analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * <code>GetContentModeration</code>. </p>
     */
    inline GetContentModerationResult& WithVideoMetadata(const VideoMetadata& value) { SetVideoMetadata(value); return *this;}

    /**
     * <p>Information about a video that Amazon Rekognition analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * <code>GetContentModeration</code>. </p>
     */
    inline GetContentModerationResult& WithVideoMetadata(VideoMetadata&& value) { SetVideoMetadata(std::move(value)); return *this;}


    /**
     * <p>The detected inappropriate, unwanted, or offensive content moderation labels
     * and the time(s) they were detected.</p>
     */
    inline const Aws::Vector<ContentModerationDetection>& GetModerationLabels() const{ return m_moderationLabels; }

    /**
     * <p>The detected inappropriate, unwanted, or offensive content moderation labels
     * and the time(s) they were detected.</p>
     */
    inline void SetModerationLabels(const Aws::Vector<ContentModerationDetection>& value) { m_moderationLabels = value; }

    /**
     * <p>The detected inappropriate, unwanted, or offensive content moderation labels
     * and the time(s) they were detected.</p>
     */
    inline void SetModerationLabels(Aws::Vector<ContentModerationDetection>&& value) { m_moderationLabels = std::move(value); }

    /**
     * <p>The detected inappropriate, unwanted, or offensive content moderation labels
     * and the time(s) they were detected.</p>
     */
    inline GetContentModerationResult& WithModerationLabels(const Aws::Vector<ContentModerationDetection>& value) { SetModerationLabels(value); return *this;}

    /**
     * <p>The detected inappropriate, unwanted, or offensive content moderation labels
     * and the time(s) they were detected.</p>
     */
    inline GetContentModerationResult& WithModerationLabels(Aws::Vector<ContentModerationDetection>&& value) { SetModerationLabels(std::move(value)); return *this;}

    /**
     * <p>The detected inappropriate, unwanted, or offensive content moderation labels
     * and the time(s) they were detected.</p>
     */
    inline GetContentModerationResult& AddModerationLabels(const ContentModerationDetection& value) { m_moderationLabels.push_back(value); return *this; }

    /**
     * <p>The detected inappropriate, unwanted, or offensive content moderation labels
     * and the time(s) they were detected.</p>
     */
    inline GetContentModerationResult& AddModerationLabels(ContentModerationDetection&& value) { m_moderationLabels.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of content
     * moderation labels. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of content
     * moderation labels. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of content
     * moderation labels. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of content
     * moderation labels. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of content
     * moderation labels. </p>
     */
    inline GetContentModerationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of content
     * moderation labels. </p>
     */
    inline GetContentModerationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of content
     * moderation labels. </p>
     */
    inline GetContentModerationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Version number of the moderation detection model that was used to detect
     * inappropriate, unwanted, or offensive content.</p>
     */
    inline const Aws::String& GetModerationModelVersion() const{ return m_moderationModelVersion; }

    /**
     * <p>Version number of the moderation detection model that was used to detect
     * inappropriate, unwanted, or offensive content.</p>
     */
    inline void SetModerationModelVersion(const Aws::String& value) { m_moderationModelVersion = value; }

    /**
     * <p>Version number of the moderation detection model that was used to detect
     * inappropriate, unwanted, or offensive content.</p>
     */
    inline void SetModerationModelVersion(Aws::String&& value) { m_moderationModelVersion = std::move(value); }

    /**
     * <p>Version number of the moderation detection model that was used to detect
     * inappropriate, unwanted, or offensive content.</p>
     */
    inline void SetModerationModelVersion(const char* value) { m_moderationModelVersion.assign(value); }

    /**
     * <p>Version number of the moderation detection model that was used to detect
     * inappropriate, unwanted, or offensive content.</p>
     */
    inline GetContentModerationResult& WithModerationModelVersion(const Aws::String& value) { SetModerationModelVersion(value); return *this;}

    /**
     * <p>Version number of the moderation detection model that was used to detect
     * inappropriate, unwanted, or offensive content.</p>
     */
    inline GetContentModerationResult& WithModerationModelVersion(Aws::String&& value) { SetModerationModelVersion(std::move(value)); return *this;}

    /**
     * <p>Version number of the moderation detection model that was used to detect
     * inappropriate, unwanted, or offensive content.</p>
     */
    inline GetContentModerationResult& WithModerationModelVersion(const char* value) { SetModerationModelVersion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetContentModerationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetContentModerationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetContentModerationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VideoJobStatus m_jobStatus;

    Aws::String m_statusMessage;

    VideoMetadata m_videoMetadata;

    Aws::Vector<ContentModerationDetection> m_moderationLabels;

    Aws::String m_nextToken;

    Aws::String m_moderationModelVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
