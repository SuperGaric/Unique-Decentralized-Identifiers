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

#include "PointAltitude_allOf.h"

namespace oai::udr::model {

PointAltitude_allOf::PointAltitude_allOf() {
  m_Altitude = 0.0;
}

PointAltitude_allOf::~PointAltitude_allOf() {}

void PointAltitude_allOf::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const PointAltitude_allOf& o) {
  j             = nlohmann::json();
  j["point"]    = o.m_Point;
  j["altitude"] = o.m_Altitude;
}

void from_json(const nlohmann::json& j, PointAltitude_allOf& o) {
  j.at("point").get_to(o.m_Point);
  j.at("altitude").get_to(o.m_Altitude);
}

GeographicalCoordinates PointAltitude_allOf::getPoint() const {
  return m_Point;
}
void PointAltitude_allOf::setPoint(GeographicalCoordinates const& value) {
  m_Point = value;
}
double PointAltitude_allOf::getAltitude() const {
  return m_Altitude;
}
void PointAltitude_allOf::setAltitude(double const value) {
  m_Altitude = value;
}

}  // namespace oai::udr::model