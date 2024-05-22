/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_OtherConfig_v1700_H_
#define	_NR_OtherConfig_v1700_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_OtherConfig_v1700__ul_GapFR2_PreferenceConfig_r17 {
	NR_OtherConfig_v1700__ul_GapFR2_PreferenceConfig_r17_true	= 0
} e_NR_OtherConfig_v1700__ul_GapFR2_PreferenceConfig_r17;
typedef enum NR_OtherConfig_v1700__maxBW_PreferenceConfigFR2_2_r17 {
	NR_OtherConfig_v1700__maxBW_PreferenceConfigFR2_2_r17_true	= 0
} e_NR_OtherConfig_v1700__maxBW_PreferenceConfigFR2_2_r17;
typedef enum NR_OtherConfig_v1700__maxMIMO_LayerPreferenceConfigFR2_2_r17 {
	NR_OtherConfig_v1700__maxMIMO_LayerPreferenceConfigFR2_2_r17_true	= 0
} e_NR_OtherConfig_v1700__maxMIMO_LayerPreferenceConfigFR2_2_r17;
typedef enum NR_OtherConfig_v1700__minSchedulingOffsetPreferenceConfigExt_r17 {
	NR_OtherConfig_v1700__minSchedulingOffsetPreferenceConfigExt_r17_true	= 0
} e_NR_OtherConfig_v1700__minSchedulingOffsetPreferenceConfigExt_r17;

/* Forward declarations */
struct NR_SetupRelease_MUSIM_GapAssistanceConfig_r17;
struct NR_SetupRelease_MUSIM_LeaveAssistanceConfig_r17;
struct NR_SetupRelease_SuccessHO_Config_r17;
struct NR_SetupRelease_RLM_RelaxationReportingConfig_r17;
struct NR_SetupRelease_BFD_RelaxationReportingConfig_r17;
struct NR_SetupRelease_SCG_DeactivationPreferenceConfig_r17;
struct NR_SetupRelease_RRM_MeasRelaxationReportingConfig_r17;
struct NR_SetupRelease_PropDelayDiffReportConfig_r17;

/* NR_OtherConfig-v1700 */
typedef struct NR_OtherConfig_v1700 {
	long	*ul_GapFR2_PreferenceConfig_r17;	/* OPTIONAL */
	struct NR_SetupRelease_MUSIM_GapAssistanceConfig_r17	*musim_GapAssistanceConfig_r17;	/* OPTIONAL */
	struct NR_SetupRelease_MUSIM_LeaveAssistanceConfig_r17	*musim_LeaveAssistanceConfig_r17;	/* OPTIONAL */
	struct NR_SetupRelease_SuccessHO_Config_r17	*successHO_Config_r17;	/* OPTIONAL */
	long	*maxBW_PreferenceConfigFR2_2_r17;	/* OPTIONAL */
	long	*maxMIMO_LayerPreferenceConfigFR2_2_r17;	/* OPTIONAL */
	long	*minSchedulingOffsetPreferenceConfigExt_r17;	/* OPTIONAL */
	struct NR_SetupRelease_RLM_RelaxationReportingConfig_r17	*rlm_RelaxationReportingConfig_r17;	/* OPTIONAL */
	struct NR_SetupRelease_BFD_RelaxationReportingConfig_r17	*bfd_RelaxationReportingConfig_r17;	/* OPTIONAL */
	struct NR_SetupRelease_SCG_DeactivationPreferenceConfig_r17	*scg_DeactivationPreferenceConfig_r17;	/* OPTIONAL */
	struct NR_SetupRelease_RRM_MeasRelaxationReportingConfig_r17	*rrm_MeasRelaxationReportingConfig_r17;	/* OPTIONAL */
	struct NR_SetupRelease_PropDelayDiffReportConfig_r17	*propDelayDiffReportConfig_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_OtherConfig_v1700_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ul_GapFR2_PreferenceConfig_r17_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxBW_PreferenceConfigFR2_2_r17_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxMIMO_LayerPreferenceConfigFR2_2_r17_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_minSchedulingOffsetPreferenceConfigExt_r17_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_OtherConfig_v1700;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_OtherConfig_v1700_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_OtherConfig_v1700_1[12];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SetupRelease.h"

#endif	/* _NR_OtherConfig_v1700_H_ */
#include <asn_internal.h>
