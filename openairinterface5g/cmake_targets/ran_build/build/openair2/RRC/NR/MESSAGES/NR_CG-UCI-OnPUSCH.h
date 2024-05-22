/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_CG_UCI_OnPUSCH_H_
#define	_NR_CG_UCI_OnPUSCH_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CG_UCI_OnPUSCH_PR {
	NR_CG_UCI_OnPUSCH_PR_NOTHING,	/* No components present */
	NR_CG_UCI_OnPUSCH_PR_dynamic,
	NR_CG_UCI_OnPUSCH_PR_semiStatic
} NR_CG_UCI_OnPUSCH_PR;

/* Forward declarations */
struct NR_BetaOffsets;

/* NR_CG-UCI-OnPUSCH */
typedef struct NR_CG_UCI_OnPUSCH {
	NR_CG_UCI_OnPUSCH_PR present;
	union NR_CG_UCI_OnPUSCH_u {
		struct NR_CG_UCI_OnPUSCH__dynamic {
			A_SEQUENCE_OF(struct NR_BetaOffsets) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *dynamic;
		struct NR_BetaOffsets	*semiStatic;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CG_UCI_OnPUSCH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_CG_UCI_OnPUSCH;
extern asn_CHOICE_specifics_t asn_SPC_NR_CG_UCI_OnPUSCH_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CG_UCI_OnPUSCH_1[2];
extern asn_per_constraints_t asn_PER_type_NR_CG_UCI_OnPUSCH_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_BetaOffsets.h"

#endif	/* _NR_CG_UCI_OnPUSCH_H_ */
#include <asn_internal.h>
