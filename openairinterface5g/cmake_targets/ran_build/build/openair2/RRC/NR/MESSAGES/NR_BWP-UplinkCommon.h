/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_BWP_UplinkCommon_H_
#define	_NR_BWP_UplinkCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_BWP.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <BOOLEAN.h>
#include "NR_RSRP-Range.h"
#include "NR_NumberOfMsg3-Repetitions-r17.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_BWP_UplinkCommon__ext1__useInterlacePUCCH_PUSCH_r16 {
	NR_BWP_UplinkCommon__ext1__useInterlacePUCCH_PUSCH_r16_enabled	= 0
} e_NR_BWP_UplinkCommon__ext1__useInterlacePUCCH_PUSCH_r16;

/* Forward declarations */
struct NR_SetupRelease_RACH_ConfigCommon;
struct NR_SetupRelease_PUSCH_ConfigCommon;
struct NR_SetupRelease_PUCCH_ConfigCommon;
struct NR_SetupRelease_MsgA_ConfigCommon_r16;
struct NR_SetupRelease_AdditionalRACH_ConfigList_r17;

/* NR_BWP-UplinkCommon */
typedef struct NR_BWP_UplinkCommon {
	NR_BWP_t	 genericParameters;
	struct NR_SetupRelease_RACH_ConfigCommon	*rach_ConfigCommon;	/* OPTIONAL */
	struct NR_SetupRelease_PUSCH_ConfigCommon	*pusch_ConfigCommon;	/* OPTIONAL */
	struct NR_SetupRelease_PUCCH_ConfigCommon	*pucch_ConfigCommon;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_BWP_UplinkCommon__ext1 {
		struct NR_SetupRelease_RACH_ConfigCommon	*rach_ConfigCommonIAB_r16;	/* OPTIONAL */
		long	*useInterlacePUCCH_PUSCH_r16;	/* OPTIONAL */
		struct NR_SetupRelease_MsgA_ConfigCommon_r16	*msgA_ConfigCommon_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_BWP_UplinkCommon__ext2 {
		BOOLEAN_t	*enableRA_PrioritizationForSlicing_r17;	/* OPTIONAL */
		struct NR_SetupRelease_AdditionalRACH_ConfigList_r17	*additionalRACH_ConfigList_r17;	/* OPTIONAL */
		NR_RSRP_Range_t	*rsrp_ThresholdMsg3_r17;	/* OPTIONAL */
		struct NR_BWP_UplinkCommon__ext2__numberOfMsg3_RepetitionsList_r17 {
			A_SEQUENCE_OF(NR_NumberOfMsg3_Repetitions_r17_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *numberOfMsg3_RepetitionsList_r17;
		struct NR_BWP_UplinkCommon__ext2__mcs_Msg3_Repetitions_r17 {
			A_SEQUENCE_OF(long) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *mcs_Msg3_Repetitions_r17;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BWP_UplinkCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_useInterlacePUCCH_PUSCH_r16_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_BWP_UplinkCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_BWP_UplinkCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BWP_UplinkCommon_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SetupRelease.h"

#endif	/* _NR_BWP_UplinkCommon_H_ */
#include <asn_internal.h>
