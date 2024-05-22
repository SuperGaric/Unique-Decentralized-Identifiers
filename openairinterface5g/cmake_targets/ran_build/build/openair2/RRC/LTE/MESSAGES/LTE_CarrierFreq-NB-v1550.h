/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CarrierFreq_NB_v1550_H_
#define	_LTE_CarrierFreq_NB_v1550_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CarrierFreq_NB_v1550__carrierFreqOffset_v1550 {
	LTE_CarrierFreq_NB_v1550__carrierFreqOffset_v1550_v_8dot5	= 0,
	LTE_CarrierFreq_NB_v1550__carrierFreqOffset_v1550_v_4dot5	= 1,
	LTE_CarrierFreq_NB_v1550__carrierFreqOffset_v1550_v3dot5	= 2,
	LTE_CarrierFreq_NB_v1550__carrierFreqOffset_v1550_v7dot5	= 3
} e_LTE_CarrierFreq_NB_v1550__carrierFreqOffset_v1550;

/* LTE_CarrierFreq-NB-v1550 */
typedef struct LTE_CarrierFreq_NB_v1550 {
	long	 carrierFreqOffset_v1550;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CarrierFreq_NB_v1550_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_carrierFreqOffset_v1550_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CarrierFreq_NB_v1550;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CarrierFreq_NB_v1550_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CarrierFreq_NB_v1550_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CarrierFreq_NB_v1550_H_ */
#include <asn_internal.h>