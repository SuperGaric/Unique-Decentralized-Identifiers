/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-Ies"
 * 	found in "/home/dmt/openairinterface5g/openair2/M2AP/MESSAGES/ASN1/m2ap-14.0.0.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/M2AP/MESSAGES`
 */

#ifndef	_M2AP_ENB_ID_H_
#define	_M2AP_ENB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M2AP_ENB_ID_PR {
	M2AP_ENB_ID_PR_NOTHING,	/* No components present */
	M2AP_ENB_ID_PR_macro_eNB_ID,
	/* Extensions may appear below */
	M2AP_ENB_ID_PR_short_Macro_eNB_ID,
	M2AP_ENB_ID_PR_long_Macro_eNB_ID
} M2AP_ENB_ID_PR;

/* M2AP_ENB-ID */
typedef struct M2AP_ENB_ID {
	M2AP_ENB_ID_PR present;
	union M2AP_ENB_ID_u {
		BIT_STRING_t	 macro_eNB_ID;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		BIT_STRING_t	 short_Macro_eNB_ID;
		BIT_STRING_t	 long_Macro_eNB_ID;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M2AP_ENB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M2AP_ENB_ID;
extern asn_CHOICE_specifics_t asn_SPC_M2AP_ENB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_M2AP_ENB_ID_1[3];
extern asn_per_constraints_t asn_PER_type_M2AP_ENB_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _M2AP_ENB_ID_H_ */
#include <asn_internal.h>
