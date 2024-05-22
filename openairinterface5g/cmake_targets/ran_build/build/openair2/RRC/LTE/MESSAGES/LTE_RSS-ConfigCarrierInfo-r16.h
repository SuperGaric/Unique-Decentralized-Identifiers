/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RSS_ConfigCarrierInfo_r16_H_
#define	_LTE_RSS_ConfigCarrierInfo_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RSS_ConfigCarrierInfo_r16__timeOffsetGranularity_r16 {
	LTE_RSS_ConfigCarrierInfo_r16__timeOffsetGranularity_r16_g1	= 0,
	LTE_RSS_ConfigCarrierInfo_r16__timeOffsetGranularity_r16_g2	= 1,
	LTE_RSS_ConfigCarrierInfo_r16__timeOffsetGranularity_r16_g4	= 2,
	LTE_RSS_ConfigCarrierInfo_r16__timeOffsetGranularity_r16_g8	= 3,
	LTE_RSS_ConfigCarrierInfo_r16__timeOffsetGranularity_r16_g16	= 4,
	LTE_RSS_ConfigCarrierInfo_r16__timeOffsetGranularity_r16_g32	= 5,
	LTE_RSS_ConfigCarrierInfo_r16__timeOffsetGranularity_r16_g64	= 6,
	LTE_RSS_ConfigCarrierInfo_r16__timeOffsetGranularity_r16_g128	= 7
} e_LTE_RSS_ConfigCarrierInfo_r16__timeOffsetGranularity_r16;

/* LTE_RSS-ConfigCarrierInfo-r16 */
typedef struct LTE_RSS_ConfigCarrierInfo_r16 {
	BIT_STRING_t	 narrowbandIndex_r16;
	long	 timeOffsetGranularity_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RSS_ConfigCarrierInfo_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_timeOffsetGranularity_r16_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RSS_ConfigCarrierInfo_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RSS_ConfigCarrierInfo_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RSS_ConfigCarrierInfo_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RSS_ConfigCarrierInfo_r16_H_ */
#include <asn_internal.h>