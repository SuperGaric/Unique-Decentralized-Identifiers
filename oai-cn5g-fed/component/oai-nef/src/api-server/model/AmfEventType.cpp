/**
 * Nnef_EventExposure
 * NEF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AmfEventType.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

AmfEventType::AmfEventType() {}

void AmfEventType::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool AmfEventType::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool AmfEventType::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "AmfEventType" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool AmfEventType::operator==(const AmfEventType& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool AmfEventType::operator!=(const AmfEventType& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AmfEventType& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, AmfEventType& o) {
  from_json(j, o.m_value);
}

AmfEventType_anyOf AmfEventType::getValue() const {
  return m_value;
}

void AmfEventType::setValue(AmfEventType_anyOf value) {
  m_value = value;
}

AmfEventType_anyOf::eAmfEventType_anyOf AmfEventType::getEnumValue() const {
  return m_value.getValue();
}

void AmfEventType::setEnumValue(AmfEventType_anyOf::eAmfEventType_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::nef::model
