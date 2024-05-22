/**
 * Namf_Communication
 * AMF Communication Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AllowedSnssai.h
 *
 *
 */

#ifndef AllowedSnssai_H_
#define AllowedSnssai_H_

#include "NsiInformation.h"
#include "Snssai.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace oai {
namespace amf {
namespace model {

/// <summary>
///
/// </summary>
class AllowedSnssai {
 public:
  AllowedSnssai();
  virtual ~AllowedSnssai() = default;

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
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const AllowedSnssai& rhs) const;
  bool operator!=(const AllowedSnssai& rhs) const;

  /////////////////////////////////////////////
  /// AllowedSnssai members

  /// <summary>
  ///
  /// </summary>
  oai::model::common::Snssai getAllowedSnssai() const;
  void setAllowedSnssai(oai::model::common::Snssai const& value);
  /// <summary>
  ///
  /// </summary>
  std::vector<NsiInformation> getNsiInformationList() const;
  void setNsiInformationList(std::vector<NsiInformation> const& value);
  bool nsiInformationListIsSet() const;
  void unsetNsiInformationList();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Snssai getMappedHomeSnssai() const;
  void setMappedHomeSnssai(oai::model::common::Snssai const& value);
  bool mappedHomeSnssaiIsSet() const;
  void unsetMappedHomeSnssai();

  friend void to_json(nlohmann::json& j, const AllowedSnssai& o);
  friend void from_json(const nlohmann::json& j, AllowedSnssai& o);

 protected:
  oai::model::common::Snssai m_AllowedSnssai;

  std::vector<NsiInformation> m_NsiInformationList;
  bool m_NsiInformationListIsSet;
  oai::model::common::Snssai m_MappedHomeSnssai;
  bool m_MappedHomeSnssaiIsSet;
};

}  // namespace model
}  // namespace amf
}  // namespace oai

#endif /* AllowedSnssai_H_ */
