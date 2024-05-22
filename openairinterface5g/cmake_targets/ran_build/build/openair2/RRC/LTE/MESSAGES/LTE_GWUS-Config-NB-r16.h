/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_GWUS_Config_NB_r16_H_
#define	_LTE_GWUS_Config_NB_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_GWUS-ResourceConfig-NB-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_GWUS_Config_NB_r16__groupAlternation_r16 {
	LTE_GWUS_Config_NB_r16__groupAlternation_r16_true	= 0
} e_LTE_GWUS_Config_NB_r16__groupAlternation_r16;
typedef enum LTE_GWUS_Config_NB_r16__commonSequence_r16 {
	LTE_GWUS_Config_NB_r16__commonSequence_r16_g0	= 0,
	LTE_GWUS_Config_NB_r16__commonSequence_r16_g126	= 1
} e_LTE_GWUS_Config_NB_r16__commonSequence_r16;

/* Forward declarations */
struct LTE_WUS_Config_NB_r15;
struct LTE_GWUS_ResourceConfig_NB_r16;
struct LTE_GWUS_ProbThreshList_NB_r16;

/* LTE_GWUS-Config-NB-r16 */
typedef struct LTE_GWUS_Config_NB_r16 {
	long	*groupAlternation_r16;	/* OPTIONAL */
	long	*commonSequence_r16;	/* OPTIONAL */
	struct LTE_WUS_Config_NB_r15	*timeParameters_r16;	/* OPTIONAL */
	LTE_GWUS_ResourceConfig_NB_r16_t	 resourceConfigDRX_r16;
	struct LTE_GWUS_ResourceConfig_NB_r16	*resourceConfig_eDRX_Short_r16;	/* OPTIONAL */
	struct LTE_GWUS_ResourceConfig_NB_r16	*resourceConfig_eDRX_Long_r16;	/* OPTIONAL */
	struct LTE_GWUS_ProbThreshList_NB_r16	*probThreshList_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_GWUS_Config_NB_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_groupAlternation_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_commonSequence_r16_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_GWUS_Config_NB_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_GWUS_Config_NB_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_GWUS_Config_NB_r16_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_WUS-Config-NB-r15.h"
#include "LTE_GWUS-ResourceConfig-NB-r16.h"
#include "LTE_GWUS-ProbThreshList-NB-r16.h"

#endif	/* _LTE_GWUS_Config_NB_r16_H_ */
#include <asn_internal.h>