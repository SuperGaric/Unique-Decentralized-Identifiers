/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SL_PPPP_TxPreconfigIndex_v1530_H_
#define	_LTE_SL_PPPP_TxPreconfigIndex_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_MCS_PSSCH_Range_r15;

/* LTE_SL-PPPP-TxPreconfigIndex-v1530 */
typedef struct LTE_SL_PPPP_TxPreconfigIndex_v1530 {
	struct LTE_SL_PPPP_TxPreconfigIndex_v1530__mcs_PSSCH_Range_r15 {
		A_SEQUENCE_OF(struct LTE_MCS_PSSCH_Range_r15) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mcs_PSSCH_Range_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_PPPP_TxPreconfigIndex_v1530_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_PPPP_TxPreconfigIndex_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_PPPP_TxPreconfigIndex_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_PPPP_TxPreconfigIndex_v1530_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MCS-PSSCH-Range-r15.h"

#endif	/* _LTE_SL_PPPP_TxPreconfigIndex_v1530_H_ */
#include <asn_internal.h>
