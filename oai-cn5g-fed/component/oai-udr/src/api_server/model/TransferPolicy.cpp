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

#include "TransferPolicy.h"

namespace oai::udr::model {

TransferPolicy::TransferPolicy() {
  m_MaxBitRateDl      = "";
  m_MaxBitRateDlIsSet = false;
  m_MaxBitRateUl      = "";
  m_MaxBitRateUlIsSet = false;
  m_RatingGroup       = 0;
  m_TransPolicyId     = 0;
}

TransferPolicy::~TransferPolicy() {}

void TransferPolicy::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const TransferPolicy& o) {
  j = nlohmann::json();
  if (o.maxBitRateDlIsSet()) j["maxBitRateDl"] = o.m_MaxBitRateDl;
  if (o.maxBitRateUlIsSet()) j["maxBitRateUl"] = o.m_MaxBitRateUl;
  j["ratingGroup"]   = o.m_RatingGroup;
  j["recTimeInt"]    = o.m_RecTimeInt;
  j["transPolicyId"] = o.m_TransPolicyId;
}

void from_json(const nlohmann::json& j, TransferPolicy& o) {
  if (j.find("maxBitRateDl") != j.end()) {
    j.at("maxBitRateDl").get_to(o.m_MaxBitRateDl);
    o.m_MaxBitRateDlIsSet = true;
  }
  if (j.find("maxBitRateUl") != j.end()) {
    j.at("maxBitRateUl").get_to(o.m_MaxBitRateUl);
    o.m_MaxBitRateUlIsSet = true;
  }
  j.at("ratingGroup").get_to(o.m_RatingGroup);
  j.at("recTimeInt").get_to(o.m_RecTimeInt);
  j.at("transPolicyId").get_to(o.m_TransPolicyId);
}

std::string TransferPolicy::getMaxBitRateDl() const {
  return m_MaxBitRateDl;
}
void TransferPolicy::setMaxBitRateDl(std::string const& value) {
  m_MaxBitRateDl      = value;
  m_MaxBitRateDlIsSet = true;
}
bool TransferPolicy::maxBitRateDlIsSet() const {
  return m_MaxBitRateDlIsSet;
}
void TransferPolicy::unsetMaxBitRateDl() {
  m_MaxBitRateDlIsSet = false;
}
std::string TransferPolicy::getMaxBitRateUl() const {
  return m_MaxBitRateUl;
}
void TransferPolicy::setMaxBitRateUl(std::string const& value) {
  m_MaxBitRateUl      = value;
  m_MaxBitRateUlIsSet = true;
}
bool TransferPolicy::maxBitRateUlIsSet() const {
  return m_MaxBitRateUlIsSet;
}
void TransferPolicy::unsetMaxBitRateUl() {
  m_MaxBitRateUlIsSet = false;
}
int32_t TransferPolicy::getRatingGroup() const {
  return m_RatingGroup;
}
void TransferPolicy::setRatingGroup(int32_t const value) {
  m_RatingGroup = value;
}
TimeWindow TransferPolicy::getRecTimeInt() const {
  return m_RecTimeInt;
}
void TransferPolicy::setRecTimeInt(TimeWindow const& value) {
  m_RecTimeInt = value;
}
int32_t TransferPolicy::getTransPolicyId() const {
  return m_TransPolicyId;
}
void TransferPolicy::setTransPolicyId(int32_t const value) {
  m_TransPolicyId = value;
}

}  // namespace oai::udr::model
