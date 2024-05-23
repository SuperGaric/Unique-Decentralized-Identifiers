/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_MBMS_Parameters_v1610_H_
#define	_LTE_MBMS_Parameters_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MBMS_Parameters_v1610__mbms_ScalingFactor2dot5_r16 {
	LTE_MBMS_Parameters_v1610__mbms_ScalingFactor2dot5_r16_n2	= 0,
	LTE_MBMS_Parameters_v1610__mbms_ScalingFactor2dot5_r16_n4	= 1,
	LTE_MBMS_Parameters_v1610__mbms_ScalingFactor2dot5_r16_n6	= 2,
	LTE_MBMS_Parameters_v1610__mbms_ScalingFactor2dot5_r16_n8	= 3
} e_LTE_MBMS_Parameters_v1610__mbms_ScalingFactor2dot5_r16;
typedef enum LTE_MBMS_Parameters_v1610__mbms_ScalingFactor0dot37_r16 {
	LTE_MBMS_Parameters_v1610__mbms_ScalingFactor0dot37_r16_n12	= 0,
	LTE_MBMS_Parameters_v1610__mbms_ScalingFactor0dot37_r16_n16	= 1,
	LTE_MBMS_Parameters_v1610__mbms_ScalingFactor0dot37_r16_n20	= 2,
	LTE_MBMS_Parameters_v1610__mbms_ScalingFactor0dot37_r16_n24	= 3
} e_LTE_MBMS_Parameters_v1610__mbms_ScalingFactor0dot37_r16;

/* Forward declarations */
struct LTE_MBMS_SupportedBandInfo_r16;

/* LTE_MBMS-Parameters-v1610 */
typedef struct LTE_MBMS_Parameters_v1610 {
	long	*mbms_ScalingFactor2dot5_r16;	/* OPTIONAL */
	long	*mbms_ScalingFactor0dot37_r16;	/* OPTIONAL */
	struct LTE_MBMS_Parameters_v1610__mbms_SupportedBandInfoList_r16 {
		A_SEQUENCE_OF(struct LTE_MBMS_SupportedBandInfo_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} mbms_SupportedBandInfoList_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MBMS_Parameters_v1610_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mbms_ScalingFactor2dot5_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mbms_ScalingFactor0dot37_r16_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MBMS_Parameters_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MBMS_Parameters_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MBMS_Parameters_v1610_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MBMS-SupportedBandInfo-r16.h"

#endif	/* _LTE_MBMS_Parameters_v1610_H_ */
#include <asn_internal.h>
