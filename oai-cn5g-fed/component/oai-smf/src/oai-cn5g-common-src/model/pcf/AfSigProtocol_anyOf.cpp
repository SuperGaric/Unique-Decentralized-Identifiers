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

#include "AfSigProtocol_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::model::pcf {

AfSigProtocol_anyOf::AfSigProtocol_anyOf() {}

void AfSigProtocol_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool AfSigProtocol_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool AfSigProtocol_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "AfSigProtocol_anyOf" : pathPrefix;

  if (m_value == AfSigProtocol_anyOf::eAfSigProtocol_anyOf::
                     INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool AfSigProtocol_anyOf::operator==(const AfSigProtocol_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool AfSigProtocol_anyOf::operator!=(const AfSigProtocol_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AfSigProtocol_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case AfSigProtocol_anyOf::eAfSigProtocol_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case AfSigProtocol_anyOf::eAfSigProtocol_anyOf::NO_INFORMATION:
      j = "NO_INFORMATION";
      break;
    case AfSigProtocol_anyOf::eAfSigProtocol_anyOf::SIP:
      j = "SIP";
      break;
    case AfSigProtocol_anyOf::eAfSigProtocol_anyOf::NULL_VALUE:
      j = nullptr;
      break;
  }
}

void from_json(const nlohmann::json& j, AfSigProtocol_anyOf& o) {
  if (j.is_null()) {
    o.setValue(AfSigProtocol_anyOf::eAfSigProtocol_anyOf::NULL_VALUE);
    return;
  }

  auto s = j.get<std::string>();
  if (s == "NO_INFORMATION") {
    o.setValue(AfSigProtocol_anyOf::eAfSigProtocol_anyOf::NO_INFORMATION);
  } else if (s == "SIP") {
    o.setValue(AfSigProtocol_anyOf::eAfSigProtocol_anyOf::SIP);
  } else if (s == "null") {
    o.setValue(AfSigProtocol_anyOf::eAfSigProtocol_anyOf::NULL_VALUE);
  }

  else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " AfSigProtocol_anyOf::eAfSigProtocol_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

AfSigProtocol_anyOf::eAfSigProtocol_anyOf AfSigProtocol_anyOf::getValue()
    const {
  return m_value;
}
void AfSigProtocol_anyOf::setValue(
    AfSigProtocol_anyOf::eAfSigProtocol_anyOf value) {
  m_value = value;
}

}  // namespace oai::model::pcf
