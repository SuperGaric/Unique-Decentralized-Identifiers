/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RRCConnectionReconfiguration_v8m0_IEs_H_
#define	_LTE_RRCConnectionReconfiguration_v8m0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_RRCConnectionReconfiguration_v10i0_IEs;

/* LTE_RRCConnectionReconfiguration-v8m0-IEs */
typedef struct LTE_RRCConnectionReconfiguration_v8m0_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct LTE_RRCConnectionReconfiguration_v10i0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionReconfiguration_v8m0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReconfiguration_v8m0_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RRCConnectionReconfiguration-v10i0-IEs.h"

#endif	/* _LTE_RRCConnectionReconfiguration_v8m0_IEs_H_ */
#include <asn_internal.h>
