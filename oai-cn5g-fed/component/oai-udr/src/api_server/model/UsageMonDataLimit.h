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
 * UsageMonDataLimit.h
 *
 * Contains usage monitoring control data for a subscriber.
 */

#ifndef UsageMonDataLimit_H_
#define UsageMonDataLimit_H_

#include <map>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "UsageMonDataScope.h"
#include "UsageMonLevel.h"
#include "UsageThreshold.h"

namespace oai::udr::model {

/// <summary>
/// Contains usage monitoring control data for a subscriber.
/// </summary>
class UsageMonDataLimit {
 public:
  UsageMonDataLimit();
  virtual ~UsageMonDataLimit();

  void validate();

  /////////////////////////////////////////////
  /// UsageMonDataLimit members

  /// <summary>
  ///
  /// </summary>
  std::string getLimitId() const;
  void setLimitId(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::map<std::string, UsageMonDataScope>& getScopes();
  void setScopes(std::map<std::string, UsageMonDataScope> const& value);
  bool scopesIsSet() const;
  void unsetScopes();
  /// <summary>
  ///
  /// </summary>
  UsageMonLevel getUmLevel() const;
  void setUmLevel(UsageMonLevel const& value);
  bool umLevelIsSet() const;
  void unsetUmLevel();
  /// <summary>
  ///
  /// </summary>
  std::string getStartDate() const;
  void setStartDate(std::string const& value);
  bool startDateIsSet() const;
  void unsetStartDate();
  /// <summary>
  ///
  /// </summary>
  std::string getEndDate() const;
  void setEndDate(std::string const& value);
  bool endDateIsSet() const;
  void unsetEndDate();
  /// <summary>
  ///
  /// </summary>
  UsageThreshold getUsageLimit() const;
  void setUsageLimit(UsageThreshold const& value);
  bool usageLimitIsSet() const;
  void unsetUsageLimit();
  /// <summary>
  ///
  /// </summary>
  std::string getResetPeriod() const;
  void setResetPeriod(std::string const& value);
  bool resetPeriodIsSet() const;
  void unsetResetPeriod();

  friend void to_json(nlohmann::json& j, const UsageMonDataLimit& o);
  friend void from_json(const nlohmann::json& j, UsageMonDataLimit& o);

 protected:
  std::string m_LimitId;

  std::map<std::string, UsageMonDataScope> m_Scopes;
  bool m_ScopesIsSet;
  UsageMonLevel m_UmLevel;
  bool m_UmLevelIsSet;
  std::string m_StartDate;
  bool m_StartDateIsSet;
  std::string m_EndDate;
  bool m_EndDateIsSet;
  UsageThreshold m_UsageLimit;
  bool m_UsageLimitIsSet;
  std::string m_ResetPeriod;
  bool m_ResetPeriodIsSet;
};

}  // namespace oai::udr::model

#endif /* UsageMonDataLimit_H_ */