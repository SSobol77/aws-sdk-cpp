﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/LogicalResourceId.h>
#include <aws/resiliencehub/model/PhysicalResourceId.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AppComponent.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a physical resource. A physical resource is a resource that exists in
   * your account. It can be identified using an Amazon Resource Name (ARN) or an
   * Resilience Hub-native identifier. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/PhysicalResource">AWS
   * API Reference</a></p>
   */
  class PhysicalResource
  {
  public:
    AWS_RESILIENCEHUB_API PhysicalResource();
    AWS_RESILIENCEHUB_API PhysicalResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API PhysicalResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter accepts a key-value mapping
     * (in a string format) of only one failover region and one associated account.</p>
     * <p>Key: <code>"failover-regions"</code> </p> <p>Value:
     * <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAdditionalInfo() const{ return m_additionalInfo; }

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter accepts a key-value mapping
     * (in a string format) of only one failover region and one associated account.</p>
     * <p>Key: <code>"failover-regions"</code> </p> <p>Value:
     * <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter accepts a key-value mapping
     * (in a string format) of only one failover region and one associated account.</p>
     * <p>Key: <code>"failover-regions"</code> </p> <p>Value:
     * <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline void SetAdditionalInfo(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter accepts a key-value mapping
     * (in a string format) of only one failover region and one associated account.</p>
     * <p>Key: <code>"failover-regions"</code> </p> <p>Value:
     * <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline void SetAdditionalInfo(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::move(value); }

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter accepts a key-value mapping
     * (in a string format) of only one failover region and one associated account.</p>
     * <p>Key: <code>"failover-regions"</code> </p> <p>Value:
     * <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline PhysicalResource& WithAdditionalInfo(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetAdditionalInfo(value); return *this;}

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter accepts a key-value mapping
     * (in a string format) of only one failover region and one associated account.</p>
     * <p>Key: <code>"failover-regions"</code> </p> <p>Value:
     * <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline PhysicalResource& WithAdditionalInfo(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetAdditionalInfo(std::move(value)); return *this;}

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter accepts a key-value mapping
     * (in a string format) of only one failover region and one associated account.</p>
     * <p>Key: <code>"failover-regions"</code> </p> <p>Value:
     * <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline PhysicalResource& AddAdditionalInfo(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(key, value); return *this; }

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter accepts a key-value mapping
     * (in a string format) of only one failover region and one associated account.</p>
     * <p>Key: <code>"failover-regions"</code> </p> <p>Value:
     * <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline PhysicalResource& AddAdditionalInfo(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter accepts a key-value mapping
     * (in a string format) of only one failover region and one associated account.</p>
     * <p>Key: <code>"failover-regions"</code> </p> <p>Value:
     * <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline PhysicalResource& AddAdditionalInfo(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter accepts a key-value mapping
     * (in a string format) of only one failover region and one associated account.</p>
     * <p>Key: <code>"failover-regions"</code> </p> <p>Value:
     * <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline PhysicalResource& AddAdditionalInfo(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter accepts a key-value mapping
     * (in a string format) of only one failover region and one associated account.</p>
     * <p>Key: <code>"failover-regions"</code> </p> <p>Value:
     * <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline PhysicalResource& AddAdditionalInfo(const char* key, Aws::Vector<Aws::String>&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter accepts a key-value mapping
     * (in a string format) of only one failover region and one associated account.</p>
     * <p>Key: <code>"failover-regions"</code> </p> <p>Value:
     * <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p> 
     */
    inline PhysicalResource& AddAdditionalInfo(const char* key, const Aws::Vector<Aws::String>& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(key, value); return *this; }


    /**
     * <p>The application components that belong to this resource.</p>
     */
    inline const Aws::Vector<AppComponent>& GetAppComponents() const{ return m_appComponents; }

    /**
     * <p>The application components that belong to this resource.</p>
     */
    inline bool AppComponentsHasBeenSet() const { return m_appComponentsHasBeenSet; }

    /**
     * <p>The application components that belong to this resource.</p>
     */
    inline void SetAppComponents(const Aws::Vector<AppComponent>& value) { m_appComponentsHasBeenSet = true; m_appComponents = value; }

    /**
     * <p>The application components that belong to this resource.</p>
     */
    inline void SetAppComponents(Aws::Vector<AppComponent>&& value) { m_appComponentsHasBeenSet = true; m_appComponents = std::move(value); }

    /**
     * <p>The application components that belong to this resource.</p>
     */
    inline PhysicalResource& WithAppComponents(const Aws::Vector<AppComponent>& value) { SetAppComponents(value); return *this;}

    /**
     * <p>The application components that belong to this resource.</p>
     */
    inline PhysicalResource& WithAppComponents(Aws::Vector<AppComponent>&& value) { SetAppComponents(std::move(value)); return *this;}

    /**
     * <p>The application components that belong to this resource.</p>
     */
    inline PhysicalResource& AddAppComponents(const AppComponent& value) { m_appComponentsHasBeenSet = true; m_appComponents.push_back(value); return *this; }

    /**
     * <p>The application components that belong to this resource.</p>
     */
    inline PhysicalResource& AddAppComponents(AppComponent&& value) { m_appComponentsHasBeenSet = true; m_appComponents.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates if a resource is included or excluded from the assessment.</p>
     */
    inline bool GetExcluded() const{ return m_excluded; }

    /**
     * <p>Indicates if a resource is included or excluded from the assessment.</p>
     */
    inline bool ExcludedHasBeenSet() const { return m_excludedHasBeenSet; }

    /**
     * <p>Indicates if a resource is included or excluded from the assessment.</p>
     */
    inline void SetExcluded(bool value) { m_excludedHasBeenSet = true; m_excluded = value; }

    /**
     * <p>Indicates if a resource is included or excluded from the assessment.</p>
     */
    inline PhysicalResource& WithExcluded(bool value) { SetExcluded(value); return *this;}


    /**
     * <p>The logical identifier of the resource.</p>
     */
    inline const LogicalResourceId& GetLogicalResourceId() const{ return m_logicalResourceId; }

    /**
     * <p>The logical identifier of the resource.</p>
     */
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }

    /**
     * <p>The logical identifier of the resource.</p>
     */
    inline void SetLogicalResourceId(const LogicalResourceId& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }

    /**
     * <p>The logical identifier of the resource.</p>
     */
    inline void SetLogicalResourceId(LogicalResourceId&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::move(value); }

    /**
     * <p>The logical identifier of the resource.</p>
     */
    inline PhysicalResource& WithLogicalResourceId(const LogicalResourceId& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The logical identifier of the resource.</p>
     */
    inline PhysicalResource& WithLogicalResourceId(LogicalResourceId&& value) { SetLogicalResourceId(std::move(value)); return *this;}


    /**
     * <p>The physical identifier of the resource.</p>
     */
    inline const PhysicalResourceId& GetPhysicalResourceId() const{ return m_physicalResourceId; }

    /**
     * <p>The physical identifier of the resource.</p>
     */
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }

    /**
     * <p>The physical identifier of the resource.</p>
     */
    inline void SetPhysicalResourceId(const PhysicalResourceId& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }

    /**
     * <p>The physical identifier of the resource.</p>
     */
    inline void SetPhysicalResourceId(PhysicalResourceId&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::move(value); }

    /**
     * <p>The physical identifier of the resource.</p>
     */
    inline PhysicalResource& WithPhysicalResourceId(const PhysicalResourceId& value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>The physical identifier of the resource.</p>
     */
    inline PhysicalResource& WithPhysicalResourceId(PhysicalResourceId&& value) { SetPhysicalResourceId(std::move(value)); return *this;}


    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the resource.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline PhysicalResource& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline PhysicalResource& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline PhysicalResource& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The type of resource.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of resource.</p>
     */
    inline PhysicalResource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource.</p>
     */
    inline PhysicalResource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of resource.</p>
     */
    inline PhysicalResource& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_additionalInfo;
    bool m_additionalInfoHasBeenSet = false;

    Aws::Vector<AppComponent> m_appComponents;
    bool m_appComponentsHasBeenSet = false;

    bool m_excluded;
    bool m_excludedHasBeenSet = false;

    LogicalResourceId m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    PhysicalResourceId m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
