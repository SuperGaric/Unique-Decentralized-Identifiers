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

#include "NonUEN2MessagesSubscriptionsCollectionDocumentApi.h"
#include "Helpers.h"
#include "amf_config.hpp"

extern oai::config::amf_config amf_cfg;

namespace oai {
namespace amf {
namespace api {

using namespace oai::model::common::helpers;
using namespace oai::amf::model;

NonUEN2MessagesSubscriptionsCollectionDocumentApi::
    NonUEN2MessagesSubscriptionsCollectionDocumentApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void NonUEN2MessagesSubscriptionsCollectionDocumentApi::init() {
  setupRoutes();
}

void NonUEN2MessagesSubscriptionsCollectionDocumentApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Post(
      *router,
      base + amf_cfg.sbi.api_version.value_or(DEFAULT_SBI_API_VERSION) +
          "/non-ue-n2-messages/subscriptions",
      Routes::bind(
          &NonUEN2MessagesSubscriptionsCollectionDocumentApi::
              non_ue_n2_info_subscribe_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &NonUEN2MessagesSubscriptionsCollectionDocumentApi::
          non_uen2_messages_subscriptions_collection_document_api_default_handler,
      this));
}

void NonUEN2MessagesSubscriptionsCollectionDocumentApi::
    non_ue_n2_info_subscribe_handler(
        const Pistache::Rest::Request& request,
        Pistache::Http::ResponseWriter response) {
  // Getting the body param

  NonUeN2InfoSubscriptionCreateData nonUeN2InfoSubscriptionCreateData;

  try {
    nlohmann::json::parse(request.body())
        .get_to(nonUeN2InfoSubscriptionCreateData);
    this->non_ue_n2_info_subscribe(nonUeN2InfoSubscriptionCreateData, response);
  } catch (nlohmann::detail::exception& e) {
    // send a 400 error
    response.send(Pistache::Http::Code::Bad_Request, e.what());
    return;
  } catch (std::exception& e) {
    // send a 500 error
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    return;
  }
}

void NonUEN2MessagesSubscriptionsCollectionDocumentApi::
    non_uen2_messages_subscriptions_collection_document_api_default_handler(
        const Pistache::Rest::Request&,
        Pistache::Http::ResponseWriter response) {
  response.send(
      Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}  // namespace api
}  // namespace amf
}  // namespace oai
