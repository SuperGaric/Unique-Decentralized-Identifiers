/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2023, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.9
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "RequestedRuleDataType.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::pcf {

RequestedRuleDataType::RequestedRuleDataType() {}

void RequestedRuleDataType::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool RequestedRuleDataType::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool RequestedRuleDataType::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "RequestedRuleDataType" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool RequestedRuleDataType::operator==(const RequestedRuleDataType& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool RequestedRuleDataType::operator!=(const RequestedRuleDataType& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const RequestedRuleDataType& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, RequestedRuleDataType& o) {
  from_json(j, o.m_value);
}

RequestedRuleDataType_anyOf RequestedRuleDataType::getValue() const {
  return m_value;
}

void RequestedRuleDataType::setValue(RequestedRuleDataType_anyOf value) {
  m_value = value;
}

RequestedRuleDataType_anyOf::eRequestedRuleDataType_anyOf
RequestedRuleDataType::getEnumValue() const {
  return m_value.getValue();
}

void RequestedRuleDataType::setEnumValue(
    RequestedRuleDataType_anyOf::eRequestedRuleDataType_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::model::pcf
