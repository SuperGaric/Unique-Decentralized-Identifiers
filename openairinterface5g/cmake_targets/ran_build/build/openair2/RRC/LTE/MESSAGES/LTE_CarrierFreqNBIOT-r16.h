/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CarrierFreqNBIOT_r16_H_
#define	_LTE_CarrierFreqNBIOT_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ARFCN-ValueEUTRA-r9.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16 {
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v_10	= 0,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v_9	= 1,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v_8dot5	= 2,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v_8	= 3,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v_7	= 4,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v_6	= 5,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v_5	= 6,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v_4dot5	= 7,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v_4	= 8,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v_3	= 9,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v_2	= 10,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v_1	= 11,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v_0dot5	= 12,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v0	= 13,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v1	= 14,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v2	= 15,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v3	= 16,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v3dot5	= 17,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v4	= 18,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v5	= 19,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v6	= 20,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v7	= 21,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v7dot5	= 22,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v8	= 23,
	LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16_v9	= 24
} e_LTE_CarrierFreqNBIOT_r16__carrierFreqOffset_r16;

/* LTE_CarrierFreqNBIOT-r16 */
typedef struct LTE_CarrierFreqNBIOT_r16 {
	LTE_ARFCN_ValueEUTRA_r9_t	 carrierFreq_r16;
	long	 carrierFreqOffset_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CarrierFreqNBIOT_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_carrierFreqOffset_r16_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CarrierFreqNBIOT_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CarrierFreqNBIOT_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CarrierFreqNBIOT_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CarrierFreqNBIOT_r16_H_ */
#include <asn_internal.h>
