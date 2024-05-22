/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SchedulingInfo_v12j0_H_
#define	_LTE_SchedulingInfo_v12j0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_SIB_MappingInfo_v12j0;

/* LTE_SchedulingInfo-v12j0 */
typedef struct LTE_SchedulingInfo_v12j0 {
	struct LTE_SIB_MappingInfo_v12j0	*sib_MappingInfo_v12j0;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SchedulingInfo_v12j0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SchedulingInfo_v12j0;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SchedulingInfo_v12j0_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SchedulingInfo_v12j0_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SIB-MappingInfo-v12j0.h"

#endif	/* _LTE_SchedulingInfo_v12j0_H_ */
#include <asn_internal.h>