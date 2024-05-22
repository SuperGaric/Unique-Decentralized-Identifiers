/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2022, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.7
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * Ipv6Addr.h
 *
 *
 */

#ifndef Ipv6Addr_H_
#define Ipv6Addr_H_

#include <nlohmann/json.hpp>

namespace oai::model::common {

/// <summary>
///
/// </summary>
class Ipv6Addr {
 public:
  Ipv6Addr();
  virtual ~Ipv6Addr() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  virtual bool validate(
      std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const Ipv6Addr& rhs) const;
  bool operator!=(const Ipv6Addr& rhs) const;

  /////////////////////////////////////////////
  /// Ipv6Addr members

  friend void to_json(nlohmann::json& j, const Ipv6Addr& o);
  friend void from_json(const nlohmann::json& j, Ipv6Addr& o);

  std::string getIpv6Addr() const;
  void setIpv6Addr(std::string const& value);

 protected:
  std::string m_Ipv6Addr;
};

}  // namespace oai::model::common

#endif /* Ipv6Addr_H_ */