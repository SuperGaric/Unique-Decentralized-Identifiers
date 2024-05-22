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

#include "SteeringFunctionality_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::model::pcf {

SteeringFunctionality_anyOf::SteeringFunctionality_anyOf() {}

void SteeringFunctionality_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool SteeringFunctionality_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool SteeringFunctionality_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "SteeringFunctionality_anyOf" : pathPrefix;

  if (m_value == SteeringFunctionality_anyOf::eSteeringFunctionality_anyOf::
                     INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool SteeringFunctionality_anyOf::operator==(
    const SteeringFunctionality_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool SteeringFunctionality_anyOf::operator!=(
    const SteeringFunctionality_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SteeringFunctionality_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case SteeringFunctionality_anyOf::eSteeringFunctionality_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case SteeringFunctionality_anyOf::eSteeringFunctionality_anyOf::MPTCP:
      j = "MPTCP";
      break;
    case SteeringFunctionality_anyOf::eSteeringFunctionality_anyOf::ATSSS_LL:
      j = "ATSSS_LL";
      break;
  }
}

void from_json(const nlohmann::json& j, SteeringFunctionality_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "MPTCP") {
    o.setValue(
        SteeringFunctionality_anyOf::eSteeringFunctionality_anyOf::MPTCP);
  } else if (s == "ATSSS_LL") {
    o.setValue(
        SteeringFunctionality_anyOf::eSteeringFunctionality_anyOf::ATSSS_LL);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " SteeringFunctionality_anyOf::eSteeringFunctionality_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

SteeringFunctionality_anyOf::eSteeringFunctionality_anyOf
SteeringFunctionality_anyOf::getValue() const {
  return m_value;
}
void SteeringFunctionality_anyOf::setValue(
    SteeringFunctionality_anyOf::eSteeringFunctionality_anyOf value) {
  m_value = value;
}

}  // namespace oai::model::pcf
