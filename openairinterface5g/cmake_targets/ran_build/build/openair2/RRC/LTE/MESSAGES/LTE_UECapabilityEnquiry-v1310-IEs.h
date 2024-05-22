/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_UECapabilityEnquiry_v1310_IEs_H_
#define	_LTE_UECapabilityEnquiry_v1310_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UECapabilityEnquiry_v1310_IEs__requestReducedFormat_r13 {
	LTE_UECapabilityEnquiry_v1310_IEs__requestReducedFormat_r13_true	= 0
} e_LTE_UECapabilityEnquiry_v1310_IEs__requestReducedFormat_r13;
typedef enum LTE_UECapabilityEnquiry_v1310_IEs__requestSkipFallbackComb_r13 {
	LTE_UECapabilityEnquiry_v1310_IEs__requestSkipFallbackComb_r13_true	= 0
} e_LTE_UECapabilityEnquiry_v1310_IEs__requestSkipFallbackComb_r13;
typedef enum LTE_UECapabilityEnquiry_v1310_IEs__requestReducedIntNonContComb_r13 {
	LTE_UECapabilityEnquiry_v1310_IEs__requestReducedIntNonContComb_r13_true	= 0
} e_LTE_UECapabilityEnquiry_v1310_IEs__requestReducedIntNonContComb_r13;

/* Forward declarations */
struct LTE_UECapabilityEnquiry_v1430_IEs;

/* LTE_UECapabilityEnquiry-v1310-IEs */
typedef struct LTE_UECapabilityEnquiry_v1310_IEs {
	long	*requestReducedFormat_r13;	/* OPTIONAL */
	long	*requestSkipFallbackComb_r13;	/* OPTIONAL */
	long	*requestedMaxCCsDL_r13;	/* OPTIONAL */
	long	*requestedMaxCCsUL_r13;	/* OPTIONAL */
	long	*requestReducedIntNonContComb_r13;	/* OPTIONAL */
	struct LTE_UECapabilityEnquiry_v1430_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UECapabilityEnquiry_v1310_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_requestReducedFormat_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_requestSkipFallbackComb_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_requestReducedIntNonContComb_r13_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UECapabilityEnquiry_v1310_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UECapabilityEnquiry_v1310_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UECapabilityEnquiry_v1310_IEs_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_UECapabilityEnquiry-v1430-IEs.h"

#endif	/* _LTE_UECapabilityEnquiry_v1310_IEs_H_ */
#include <asn_internal.h>
