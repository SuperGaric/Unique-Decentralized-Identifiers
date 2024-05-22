/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_V2X_BandParametersEUTRA_NR_r16_H_
#define	_LTE_V2X_BandParametersEUTRA_NR_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>
#include <OCTET_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_V2X_BandParametersEUTRA_NR_r16_PR {
	LTE_V2X_BandParametersEUTRA_NR_r16_PR_NOTHING,	/* No components present */
	LTE_V2X_BandParametersEUTRA_NR_r16_PR_eutra,
	LTE_V2X_BandParametersEUTRA_NR_r16_PR_nr
} LTE_V2X_BandParametersEUTRA_NR_r16_PR;

/* Forward declarations */
struct LTE_V2X_BandParameters_r14;
struct LTE_V2X_BandParameters_v1530;

/* LTE_V2X-BandParametersEUTRA-NR-r16 */
typedef struct LTE_V2X_BandParametersEUTRA_NR_r16 {
	LTE_V2X_BandParametersEUTRA_NR_r16_PR present;
	union LTE_V2X_BandParametersEUTRA_NR_r16_u {
		struct LTE_V2X_BandParametersEUTRA_NR_r16__eutra {
			struct LTE_V2X_BandParameters_r14	*v2x_BandParameters1_r16;	/* OPTIONAL */
			struct LTE_V2X_BandParameters_v1530	*v2x_BandParameters2_r16;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} eutra;
		struct LTE_V2X_BandParametersEUTRA_NR_r16__nr {
			OCTET_STRING_t	*v2x_BandParametersNR_r16;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} nr;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_V2X_BandParametersEUTRA_NR_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_V2X_BandParametersEUTRA_NR_r16;
extern asn_CHOICE_specifics_t asn_SPC_LTE_V2X_BandParametersEUTRA_NR_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_V2X_BandParametersEUTRA_NR_r16_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_V2X_BandParametersEUTRA_NR_r16_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_V2X-BandParameters-r14.h"
#include "LTE_V2X-BandParameters-v1530.h"

#endif	/* _LTE_V2X_BandParametersEUTRA_NR_r16_H_ */
#include <asn_internal.h>
