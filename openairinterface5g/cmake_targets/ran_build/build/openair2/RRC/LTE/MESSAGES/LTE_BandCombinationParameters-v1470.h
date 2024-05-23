/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_BandCombinationParameters_v1470_H_
#define	_LTE_BandCombinationParameters_v1470_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_BandParameters_v1470;

/* LTE_BandCombinationParameters-v1470 */
typedef struct LTE_BandCombinationParameters_v1470 {
	struct LTE_BandCombinationParameters_v1470__bandParameterList_v1470 {
		A_SEQUENCE_OF(struct LTE_BandParameters_v1470) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *bandParameterList_v1470;
	long	*srs_MaxSimultaneousCCs_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BandCombinationParameters_v1470_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BandCombinationParameters_v1470;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_BandCombinationParameters_v1470_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_BandCombinationParameters_v1470_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_BandParameters-v1470.h"

#endif	/* _LTE_BandCombinationParameters_v1470_H_ */
#include <asn_internal.h>
