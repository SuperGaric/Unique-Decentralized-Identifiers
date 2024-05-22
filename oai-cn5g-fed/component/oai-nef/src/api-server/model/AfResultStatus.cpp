/**
 * 3gpp-traffic-influence
 * API for AF traffic influence © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AfResultStatus.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

AfResultStatus::AfResultStatus() {}

void AfResultStatus::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool AfResultStatus::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool AfResultStatus::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "AfResultStatus" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool AfResultStatus::operator==(const AfResultStatus& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool AfResultStatus::operator!=(const AfResultStatus& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AfResultStatus& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, AfResultStatus& o) {
  from_json(j, o.m_value);
}

AfResultStatus_anyOf AfResultStatus::getValue() const {
  return m_value;
}

void AfResultStatus::setValue(AfResultStatus_anyOf value) {
  m_value = value;
}

AfResultStatus_anyOf::eAfResultStatus_anyOf AfResultStatus::getEnumValue()
    const {
  return m_value.getValue();
}

void AfResultStatus::setEnumValue(
    AfResultStatus_anyOf::eAfResultStatus_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::nef::model