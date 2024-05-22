/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -no-gen-example -gen-APER -gen-UPER -no-gen-JER -gen-BER -D src`
 */

#ifndef _Ngap_MeasurementThresholdL1LoggedMDT_H_
#define _Ngap_MeasurementThresholdL1LoggedMDT_H_

#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_Threshold-RSRP.h"
#include "Ngap_Threshold-RSRQ.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_MeasurementThresholdL1LoggedMDT_PR {
  Ngap_MeasurementThresholdL1LoggedMDT_PR_NOTHING, /* No components present */
  Ngap_MeasurementThresholdL1LoggedMDT_PR_threshold_RSRP,
  Ngap_MeasurementThresholdL1LoggedMDT_PR_threshold_RSRQ,
  Ngap_MeasurementThresholdL1LoggedMDT_PR_choice_Extensions
} Ngap_MeasurementThresholdL1LoggedMDT_PR;

/* Forward declarations */
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_MeasurementThresholdL1LoggedMDT */
typedef struct Ngap_MeasurementThresholdL1LoggedMDT {
  Ngap_MeasurementThresholdL1LoggedMDT_PR present;
  union Ngap_MeasurementThresholdL1LoggedMDT_u {
    Ngap_Threshold_RSRP_t threshold_RSRP;
    Ngap_Threshold_RSRQ_t threshold_RSRQ;
    struct Ngap_ProtocolIE_SingleContainer* choice_Extensions;
  } choice;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} Ngap_MeasurementThresholdL1LoggedMDT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_MeasurementThresholdL1LoggedMDT;
extern asn_CHOICE_specifics_t
    asn_SPC_Ngap_MeasurementThresholdL1LoggedMDT_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_MeasurementThresholdL1LoggedMDT_1[3];
extern asn_per_constraints_t
    asn_PER_type_Ngap_MeasurementThresholdL1LoggedMDT_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _Ngap_MeasurementThresholdL1LoggedMDT_H_ */
#include <asn_internal.h>
