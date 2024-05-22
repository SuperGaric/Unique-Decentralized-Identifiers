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

#include "SubscriptionsCollectionApiImpl.h"

#include "3gpp_29.500.h"
#include "ProblemDetails.h"
#include "logger.hpp"
#include "nef_app.hpp"
#include "nef_config.hpp"

extern oai::nef::app::nef_config nef_cfg;

namespace oai {
namespace nef {
namespace api {

using namespace oai::nef::model;

SubscriptionsCollectionApiImpl::SubscriptionsCollectionApiImpl(
    const std::shared_ptr<Pistache::Rest::Router>& rtr,
    oai::nef::app::nef_app* nef_app_inst, std::string address)
    : SubscriptionsCollectionApi(rtr),
      m_nef_app(nef_app_inst),
      m_address(address) {}

void SubscriptionsCollectionApiImpl::create_individual_subcription(
    const NefEventExposureSubsc& nefEventExposureSubsc,
    Pistache::Http::ResponseWriter& response) {
  Logger::nef_sbi().info("Got a request to create an individual subscription");

  int http_code                  = 0;
  ProblemDetails problem_details = {};
  std::string sub_id             = {};
  uint8_t http_version           = 1;

  NefEventExposureSubsc created_ev_sub = {};
  m_nef_app->handle_create_individual_subscription(
      sub_id, nefEventExposureSubsc, created_ev_sub, http_version, http_code,
      problem_details);

  nlohmann::json json_data = {};
  std::string content_type = "application/json";

  if (http_code != HTTP_STATUS_CODE_201_CREATED) {
    to_json(json_data, problem_details);
    content_type = "application/problem+json";
  } else {
    to_json(json_data, created_ev_sub);
    json_data["subscriptionId"] = sub_id;
    // Location header
    response.headers().add<Pistache::Http::Header::Location>(
        m_address + base + nef_cfg.sbi.api_version + "/subscriptions/" +
        sub_id);
  }

  // Content type
  response.headers().add<Pistache::Http::Header::ContentType>(
      Pistache::Http::Mime::MediaType(content_type));
  response.send(Pistache::Http::Code(http_code), json_data.dump().c_str());
}

}  // namespace api
}  // namespace nef
}  // namespace oai
