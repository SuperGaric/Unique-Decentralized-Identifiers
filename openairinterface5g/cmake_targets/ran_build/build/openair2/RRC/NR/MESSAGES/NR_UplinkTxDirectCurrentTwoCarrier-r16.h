/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_UplinkTxDirectCurrentTwoCarrier_r16_H_
#define	_NR_UplinkTxDirectCurrentTwoCarrier_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_UplinkTxDirectCurrentCarrierInfo-r16.h"
#include "NR_UplinkTxDirectCurrentTwoCarrierInfo-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_UplinkTxDirectCurrentTwoCarrierInfo_r16;

/* NR_UplinkTxDirectCurrentTwoCarrier-r16 */
typedef struct NR_UplinkTxDirectCurrentTwoCarrier_r16 {
	NR_UplinkTxDirectCurrentCarrierInfo_r16_t	 carrierOneInfo_r16;
	NR_UplinkTxDirectCurrentCarrierInfo_r16_t	 carrierTwoInfo_r16;
	NR_UplinkTxDirectCurrentTwoCarrierInfo_r16_t	 singlePA_TxDirectCurrent_r16;
	struct NR_UplinkTxDirectCurrentTwoCarrierInfo_r16	*secondPA_TxDirectCurrent_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UplinkTxDirectCurrentTwoCarrier_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_UplinkTxDirectCurrentTwoCarrier_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_UplinkTxDirectCurrentTwoCarrier_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UplinkTxDirectCurrentTwoCarrier_r16_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_UplinkTxDirectCurrentTwoCarrierInfo-r16.h"

#endif	/* _NR_UplinkTxDirectCurrentTwoCarrier_r16_H_ */
#include <asn_internal.h>