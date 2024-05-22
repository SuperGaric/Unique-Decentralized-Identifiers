/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/dmt/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#ifndef	_X2AP_E_RABs_ToBeReleased_RelConfItem_H_
#define	_X2AP_E_RABs_ToBeReleased_RelConfItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_E-RABs-ToBeReleased-RelConfItem-SCG-Bearer.h"
#include "X2AP_E-RABs-ToBeReleased-RelConfItem-Split-Bearer.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_E_RABs_ToBeReleased_RelConfItem_PR {
	X2AP_E_RABs_ToBeReleased_RelConfItem_PR_NOTHING,	/* No components present */
	X2AP_E_RABs_ToBeReleased_RelConfItem_PR_sCG_Bearer,
	X2AP_E_RABs_ToBeReleased_RelConfItem_PR_split_Bearer
	/* Extensions may appear below */
	
} X2AP_E_RABs_ToBeReleased_RelConfItem_PR;

/* X2AP_E-RABs-ToBeReleased-RelConfItem */
typedef struct X2AP_E_RABs_ToBeReleased_RelConfItem {
	X2AP_E_RABs_ToBeReleased_RelConfItem_PR present;
	union X2AP_E_RABs_ToBeReleased_RelConfItem_u {
		X2AP_E_RABs_ToBeReleased_RelConfItem_SCG_Bearer_t	 sCG_Bearer;
		X2AP_E_RABs_ToBeReleased_RelConfItem_Split_Bearer_t	 split_Bearer;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_E_RABs_ToBeReleased_RelConfItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_E_RABs_ToBeReleased_RelConfItem;
extern asn_CHOICE_specifics_t asn_SPC_X2AP_E_RABs_ToBeReleased_RelConfItem_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_E_RABs_ToBeReleased_RelConfItem_1[2];
extern asn_per_constraints_t asn_PER_type_X2AP_E_RABs_ToBeReleased_RelConfItem_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_E_RABs_ToBeReleased_RelConfItem_H_ */
#include <asn_internal.h>
