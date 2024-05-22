/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#ifndef	_S1AP_RIMRoutingAddress_H_
#define	_S1AP_RIMRoutingAddress_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_GERAN-Cell-ID.h"
#include "S1AP_TargetRNC-ID.h"
#include <OCTET_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_RIMRoutingAddress_PR {
	S1AP_RIMRoutingAddress_PR_NOTHING,	/* No components present */
	S1AP_RIMRoutingAddress_PR_gERAN_Cell_ID,
	/* Extensions may appear below */
	S1AP_RIMRoutingAddress_PR_targetRNC_ID,
	S1AP_RIMRoutingAddress_PR_eHRPD_Sector_ID
} S1AP_RIMRoutingAddress_PR;

/* S1AP_RIMRoutingAddress */
typedef struct S1AP_RIMRoutingAddress {
	S1AP_RIMRoutingAddress_PR present;
	union S1AP_RIMRoutingAddress_u {
		S1AP_GERAN_Cell_ID_t	 gERAN_Cell_ID;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		S1AP_TargetRNC_ID_t	 targetRNC_ID;
		OCTET_STRING_t	 eHRPD_Sector_ID;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_RIMRoutingAddress_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_RIMRoutingAddress;
extern asn_CHOICE_specifics_t asn_SPC_S1AP_RIMRoutingAddress_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_RIMRoutingAddress_1[3];
extern asn_per_constraints_t asn_PER_type_S1AP_RIMRoutingAddress_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_RIMRoutingAddress_H_ */
#include <asn_internal.h>