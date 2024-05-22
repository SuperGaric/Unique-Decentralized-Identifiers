/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RRCConnectionReestablishmentComplete_v1020_IEs_H_
#define	_LTE_RRCConnectionReestablishmentComplete_v1020_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RRCConnectionReestablishmentComplete_v1020_IEs__logMeasAvailable_r10 {
	LTE_RRCConnectionReestablishmentComplete_v1020_IEs__logMeasAvailable_r10_true	= 0
} e_LTE_RRCConnectionReestablishmentComplete_v1020_IEs__logMeasAvailable_r10;

/* Forward declarations */
struct LTE_RRCConnectionReestablishmentComplete_v1130_IEs;

/* LTE_RRCConnectionReestablishmentComplete-v1020-IEs */
typedef struct LTE_RRCConnectionReestablishmentComplete_v1020_IEs {
	long	*logMeasAvailable_r10;	/* OPTIONAL */
	struct LTE_RRCConnectionReestablishmentComplete_v1130_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionReestablishmentComplete_v1020_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_logMeasAvailable_r10_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReestablishmentComplete_v1020_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionReestablishmentComplete_v1020_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionReestablishmentComplete_v1020_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RRCConnectionReestablishmentComplete-v1130-IEs.h"

#endif	/* _LTE_RRCConnectionReestablishmentComplete_v1020_IEs_H_ */
#include <asn_internal.h>
