/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_STEC_ResidualSatElement_r16_H_
#define	_LPP_STEC_ResidualSatElement_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LPP_SV-ID.h"
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_STEC_ResidualSatElement_r16__stecResidualCorrection_r16_PR {
	LPP_STEC_ResidualSatElement_r16__stecResidualCorrection_r16_PR_NOTHING,	/* No components present */
	LPP_STEC_ResidualSatElement_r16__stecResidualCorrection_r16_PR_b7_r16,
	LPP_STEC_ResidualSatElement_r16__stecResidualCorrection_r16_PR_b16_r16
} LPP_STEC_ResidualSatElement_r16__stecResidualCorrection_r16_PR;

/* LPP_STEC-ResidualSatElement-r16 */
typedef struct LPP_STEC_ResidualSatElement_r16 {
	LPP_SV_ID_t	 svID_r16;
	struct LPP_STEC_ResidualSatElement_r16__stecResidualCorrection_r16 {
		LPP_STEC_ResidualSatElement_r16__stecResidualCorrection_r16_PR present;
		union LPP_STEC_ResidualSatElement_r16__LPP_stecResidualCorrection_r16_u {
			long	 b7_r16;
			long	 b16_r16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} stecResidualCorrection_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_STEC_ResidualSatElement_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_STEC_ResidualSatElement_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_STEC_ResidualSatElement_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_STEC_ResidualSatElement_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_STEC_ResidualSatElement_r16_H_ */
#include <asn_internal.h>