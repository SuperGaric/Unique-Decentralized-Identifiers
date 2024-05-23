/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CSI_RS_ConfigNonPrecoded_v1530_H_
#define	_LTE_CSI_RS_ConfigNonPrecoded_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_P_C_AndCBSR_Pair_r15;

/* LTE_CSI-RS-ConfigNonPrecoded-v1530 */
typedef struct LTE_CSI_RS_ConfigNonPrecoded_v1530 {
	struct LTE_P_C_AndCBSR_Pair_r15	*p_C_AndCBSRList_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CSI_RS_ConfigNonPrecoded_v1530_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CSI_RS_ConfigNonPrecoded_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CSI_RS_ConfigNonPrecoded_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CSI_RS_ConfigNonPrecoded_v1530_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_P-C-AndCBSR-Pair-r15.h"

#endif	/* _LTE_CSI_RS_ConfigNonPrecoded_v1530_H_ */
#include <asn_internal.h>
