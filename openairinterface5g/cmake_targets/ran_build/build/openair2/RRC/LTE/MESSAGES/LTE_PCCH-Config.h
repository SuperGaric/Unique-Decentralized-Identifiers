/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_PCCH_Config_H_
#define	_LTE_PCCH_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PCCH_Config__defaultPagingCycle {
	LTE_PCCH_Config__defaultPagingCycle_rf32	= 0,
	LTE_PCCH_Config__defaultPagingCycle_rf64	= 1,
	LTE_PCCH_Config__defaultPagingCycle_rf128	= 2,
	LTE_PCCH_Config__defaultPagingCycle_rf256	= 3
} e_LTE_PCCH_Config__defaultPagingCycle;
typedef enum LTE_PCCH_Config__nB {
	LTE_PCCH_Config__nB_fourT	= 0,
	LTE_PCCH_Config__nB_twoT	= 1,
	LTE_PCCH_Config__nB_oneT	= 2,
	LTE_PCCH_Config__nB_halfT	= 3,
	LTE_PCCH_Config__nB_quarterT	= 4,
	LTE_PCCH_Config__nB_oneEighthT	= 5,
	LTE_PCCH_Config__nB_oneSixteenthT	= 6,
	LTE_PCCH_Config__nB_oneThirtySecondT	= 7
} e_LTE_PCCH_Config__nB;

/* LTE_PCCH-Config */
typedef struct LTE_PCCH_Config {
	long	 defaultPagingCycle;
	long	 nB;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PCCH_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_defaultPagingCycle_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_nB_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PCCH_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PCCH_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PCCH_Config_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PCCH_Config_H_ */
#include <asn_internal.h>
