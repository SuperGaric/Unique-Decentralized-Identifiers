/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RF_Parameters_v1530_H_
#define	_LTE_RF_Parameters_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RF_Parameters_v1530__sTTI_SPT_Supported_r15 {
	LTE_RF_Parameters_v1530__sTTI_SPT_Supported_r15_supported	= 0
} e_LTE_RF_Parameters_v1530__sTTI_SPT_Supported_r15;
typedef enum LTE_RF_Parameters_v1530__powerClass_14dBm_r15 {
	LTE_RF_Parameters_v1530__powerClass_14dBm_r15_supported	= 0
} e_LTE_RF_Parameters_v1530__powerClass_14dBm_r15;

/* Forward declarations */
struct LTE_SupportedBandCombination_v1530;
struct LTE_SupportedBandCombinationAdd_v1530;
struct LTE_SupportedBandCombinationReduced_v1530;

/* LTE_RF-Parameters-v1530 */
typedef struct LTE_RF_Parameters_v1530 {
	long	*sTTI_SPT_Supported_r15;	/* OPTIONAL */
	struct LTE_SupportedBandCombination_v1530	*supportedBandCombination_v1530;	/* OPTIONAL */
	struct LTE_SupportedBandCombinationAdd_v1530	*supportedBandCombinationAdd_v1530;	/* OPTIONAL */
	struct LTE_SupportedBandCombinationReduced_v1530	*supportedBandCombinationReduced_v1530;	/* OPTIONAL */
	long	*powerClass_14dBm_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RF_Parameters_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sTTI_SPT_Supported_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_powerClass_14dBm_r15_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RF_Parameters_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RF_Parameters_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RF_Parameters_v1530_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SupportedBandCombination-v1530.h"
#include "LTE_SupportedBandCombinationAdd-v1530.h"
#include "LTE_SupportedBandCombinationReduced-v1530.h"

#endif	/* _LTE_RF_Parameters_v1530_H_ */
#include <asn_internal.h>
