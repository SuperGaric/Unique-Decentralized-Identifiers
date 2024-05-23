/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_VarMeasIdleConfig_r16_H_
#define	_LTE_VarMeasIdleConfig_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_NR_CarrierList_r16;
struct LTE_ValidityAreaList_r16;

/* LTE_VarMeasIdleConfig-r16 */
typedef struct LTE_VarMeasIdleConfig_r16 {
	struct LTE_NR_CarrierList_r16	*measIdleCarrierListNR_r16;	/* OPTIONAL */
	struct LTE_ValidityAreaList_r16	*validityAreaList_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_VarMeasIdleConfig_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_VarMeasIdleConfig_r16;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_NR-CarrierList-r16.h"
#include "LTE_ValidityAreaList-r16.h"

#endif	/* _LTE_VarMeasIdleConfig_r16_H_ */
#include <asn_internal.h>
