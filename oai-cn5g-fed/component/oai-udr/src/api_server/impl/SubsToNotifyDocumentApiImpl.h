/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * SubsToNotifyDocumentApiImpl.h
 *
 *
 */

#ifndef SUBS_TO_NOTIFY_DOCUMENT_API_IMPL_H_
#define SUBS_TO_NOTIFY_DOCUMENT_API_IMPL_H_

#include <SubsToNotifyDocumentApi.h>
#include <pistache/http.h>
#include <pistache/optional.h>

#include <vector>

#include "PatchItem.h"
#include "udr_app.hpp"

namespace oai::udr::api {

class SubsToNotifyDocumentApiImpl
    : public oai::udr::api::SubsToNotifyDocumentApi {
 private:
  oai::udr::app::udr_app* m_udr_app;
  std::string m_address;

 public:
  SubsToNotifyDocumentApiImpl(
      std::shared_ptr<Pistache::Rest::Router>,
      oai::udr::app::udr_app* udr_app_inst, std::string address);
  ~SubsToNotifyDocumentApiImpl() {}

  void modifysubscription_data_subscription(
      const std::string& subsId,
      const std::vector<oai::model::common::PatchItem>& patchItem,
      const Pistache::Optional<std::string>& supportedFeatures,
      Pistache::Http::ResponseWriter& response);
  void query_subscription_data_subscriptions(
      const std::string& subsId, Pistache::Http::ResponseWriter& response);
  void removesubscription_data_subscriptions(
      const std::string& subsId, Pistache::Http::ResponseWriter& response);
};

}  // namespace oai::udr::api

#endif
