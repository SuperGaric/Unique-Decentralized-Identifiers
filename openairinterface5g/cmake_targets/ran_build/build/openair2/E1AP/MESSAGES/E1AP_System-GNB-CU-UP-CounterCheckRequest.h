/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-PDU-Contents"
 * 	found in "/home/dmt/openairinterface5g/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#ifndef	_E1AP_System_GNB_CU_UP_CounterCheckRequest_H_
#define	_E1AP_System_GNB_CU_UP_CounterCheckRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E1AP_System_GNB_CU_UP_CounterCheckRequest_PR {
	E1AP_System_GNB_CU_UP_CounterCheckRequest_PR_NOTHING,	/* No components present */
	E1AP_System_GNB_CU_UP_CounterCheckRequest_PR_e_UTRAN_GNB_CU_UP_CounterCheckRequest,
	E1AP_System_GNB_CU_UP_CounterCheckRequest_PR_nG_RAN_GNB_CU_UP_CounterCheckRequest,
	E1AP_System_GNB_CU_UP_CounterCheckRequest_PR_choice_extension
} E1AP_System_GNB_CU_UP_CounterCheckRequest_PR;

/* Forward declarations */
struct E1AP_ProtocolIE_Container;
struct E1AP_ProtocolIE_SingleContainer;

/* E1AP_System-GNB-CU-UP-CounterCheckRequest */
typedef struct E1AP_System_GNB_CU_UP_CounterCheckRequest {
	E1AP_System_GNB_CU_UP_CounterCheckRequest_PR present;
	union E1AP_System_GNB_CU_UP_CounterCheckRequest_u {
		struct E1AP_ProtocolIE_Container	*e_UTRAN_GNB_CU_UP_CounterCheckRequest;
		struct E1AP_ProtocolIE_Container	*nG_RAN_GNB_CU_UP_CounterCheckRequest;
		struct E1AP_ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E1AP_System_GNB_CU_UP_CounterCheckRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E1AP_System_GNB_CU_UP_CounterCheckRequest;
extern asn_CHOICE_specifics_t asn_SPC_E1AP_System_GNB_CU_UP_CounterCheckRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_E1AP_System_GNB_CU_UP_CounterCheckRequest_1[3];
extern asn_per_constraints_t asn_PER_type_E1AP_System_GNB_CU_UP_CounterCheckRequest_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _E1AP_System_GNB_CU_UP_CounterCheckRequest_H_ */
#include <asn_internal.h>
