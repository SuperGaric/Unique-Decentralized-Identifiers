/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_UEAssistanceInformation_v1610_IEs_H_
#define	_NR_UEAssistanceInformation_v1610_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_IDC_Assistance_r16;
struct NR_DRX_Preference_r16;
struct NR_MaxBW_Preference_r16;
struct NR_MaxCC_Preference_r16;
struct NR_MaxMIMO_LayerPreference_r16;
struct NR_MinSchedulingOffsetPreference_r16;
struct NR_ReleasePreference_r16;
struct NR_SL_UE_AssistanceInformationNR_r16;
struct NR_UEAssistanceInformation_v1700_IEs;

/* NR_UEAssistanceInformation-v1610-IEs */
typedef struct NR_UEAssistanceInformation_v1610_IEs {
	struct NR_IDC_Assistance_r16	*idc_Assistance_r16;	/* OPTIONAL */
	struct NR_DRX_Preference_r16	*drx_Preference_r16;	/* OPTIONAL */
	struct NR_MaxBW_Preference_r16	*maxBW_Preference_r16;	/* OPTIONAL */
	struct NR_MaxCC_Preference_r16	*maxCC_Preference_r16;	/* OPTIONAL */
	struct NR_MaxMIMO_LayerPreference_r16	*maxMIMO_LayerPreference_r16;	/* OPTIONAL */
	struct NR_MinSchedulingOffsetPreference_r16	*minSchedulingOffsetPreference_r16;	/* OPTIONAL */
	struct NR_ReleasePreference_r16	*releasePreference_r16;	/* OPTIONAL */
	struct NR_SL_UE_AssistanceInformationNR_r16	*sl_UE_AssistanceInformationNR_r16;	/* OPTIONAL */
	BOOLEAN_t	*referenceTimeInfoPreference_r16;	/* OPTIONAL */
	struct NR_UEAssistanceInformation_v1700_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UEAssistanceInformation_v1610_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_UEAssistanceInformation_v1610_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_UEAssistanceInformation_v1610_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UEAssistanceInformation_v1610_IEs_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_IDC-Assistance-r16.h"
#include "NR_DRX-Preference-r16.h"
#include "NR_MaxBW-Preference-r16.h"
#include "NR_MaxCC-Preference-r16.h"
#include "NR_MaxMIMO-LayerPreference-r16.h"
#include "NR_MinSchedulingOffsetPreference-r16.h"
#include "NR_ReleasePreference-r16.h"
#include "NR_SL-UE-AssistanceInformationNR-r16.h"
#include "NR_UEAssistanceInformation-v1700-IEs.h"

#endif	/* _NR_UEAssistanceInformation_v1610_IEs_H_ */
#include <asn_internal.h>
