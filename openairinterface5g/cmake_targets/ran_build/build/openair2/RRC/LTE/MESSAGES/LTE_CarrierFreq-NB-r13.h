/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CarrierFreq_NB_r13_H_
#define	_LTE_CarrierFreq_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ARFCN-ValueEUTRA-r9.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13 {
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v_10	= 0,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v_9	= 1,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v_8	= 2,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v_7	= 3,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v_6	= 4,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v_5	= 5,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v_4	= 6,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v_3	= 7,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v_2	= 8,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v_1	= 9,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v_0dot5	= 10,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v0	= 11,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v1	= 12,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v2	= 13,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v3	= 14,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v4	= 15,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v5	= 16,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v6	= 17,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v7	= 18,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v8	= 19,
	LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13_v9	= 20
} e_LTE_CarrierFreq_NB_r13__carrierFreqOffset_r13;

/* LTE_CarrierFreq-NB-r13 */
typedef struct LTE_CarrierFreq_NB_r13 {
	LTE_ARFCN_ValueEUTRA_r9_t	 carrierFreq_r13;
	long	*carrierFreqOffset_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CarrierFreq_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_carrierFreqOffset_r13_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CarrierFreq_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CarrierFreq_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CarrierFreq_NB_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CarrierFreq_NB_r13_H_ */
#include <asn_internal.h>
