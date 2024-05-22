/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_SSR_CodeBiasSatElement_r15_H_
#define	_LPP_SSR_CodeBiasSatElement_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LPP_SV-ID.h"
#include "LPP_SSR-CodeBiasSignalList-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LPP_SSR-CodeBiasSatElement-r15 */
typedef struct LPP_SSR_CodeBiasSatElement_r15 {
	LPP_SV_ID_t	 svID_r15;
	LPP_SSR_CodeBiasSignalList_r15_t	 ssr_CodeBiasSignalList_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_SSR_CodeBiasSatElement_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_SSR_CodeBiasSatElement_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_SSR_CodeBiasSatElement_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_SSR_CodeBiasSatElement_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_SSR_CodeBiasSatElement_r15_H_ */
#include <asn_internal.h>
