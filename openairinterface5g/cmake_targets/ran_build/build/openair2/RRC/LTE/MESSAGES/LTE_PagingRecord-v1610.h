/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_PagingRecord_v1610_H_
#define	_LTE_PagingRecord_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PagingRecord_v1610__accessType_r16 {
	LTE_PagingRecord_v1610__accessType_r16_non3GPP	= 0
} e_LTE_PagingRecord_v1610__accessType_r16;
typedef enum LTE_PagingRecord_v1610__mt_EDT_r16 {
	LTE_PagingRecord_v1610__mt_EDT_r16_true	= 0
} e_LTE_PagingRecord_v1610__mt_EDT_r16;

/* LTE_PagingRecord-v1610 */
typedef struct LTE_PagingRecord_v1610 {
	long	*accessType_r16;	/* OPTIONAL */
	long	*mt_EDT_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PagingRecord_v1610_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_accessType_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mt_EDT_r16_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PagingRecord_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PagingRecord_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PagingRecord_v1610_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PagingRecord_v1610_H_ */
#include <asn_internal.h>
