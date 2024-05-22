/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_FeatureSetUL_PerCC_r15_H_
#define	_LTE_FeatureSetUL_PerCC_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MIMO-CapabilityUL-r10.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_FeatureSetUL_PerCC_r15__ul_256QAM_r15 {
	LTE_FeatureSetUL_PerCC_r15__ul_256QAM_r15_supported	= 0
} e_LTE_FeatureSetUL_PerCC_r15__ul_256QAM_r15;

/* LTE_FeatureSetUL-PerCC-r15 */
typedef struct LTE_FeatureSetUL_PerCC_r15 {
	LTE_MIMO_CapabilityUL_r10_t	*supportedMIMO_CapabilityUL_r15;	/* OPTIONAL */
	long	*ul_256QAM_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_FeatureSetUL_PerCC_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ul_256QAM_r15_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_FeatureSetUL_PerCC_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_FeatureSetUL_PerCC_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_FeatureSetUL_PerCC_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_FeatureSetUL_PerCC_r15_H_ */
#include <asn_internal.h>