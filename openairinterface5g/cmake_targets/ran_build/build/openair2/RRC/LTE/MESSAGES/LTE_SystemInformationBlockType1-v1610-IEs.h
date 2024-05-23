/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SystemInformationBlockType1_v1610_IEs_H_
#define	_LTE_SystemInformationBlockType1_v1610_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformationBlockType1_v1610_IEs__eDRX_Allowed_5GC_r16 {
	LTE_SystemInformationBlockType1_v1610_IEs__eDRX_Allowed_5GC_r16_true	= 0
} e_LTE_SystemInformationBlockType1_v1610_IEs__eDRX_Allowed_5GC_r16;
typedef enum LTE_SystemInformationBlockType1_v1610_IEs__transmissionInControlChRegion_r16 {
	LTE_SystemInformationBlockType1_v1610_IEs__transmissionInControlChRegion_r16_true	= 0
} e_LTE_SystemInformationBlockType1_v1610_IEs__transmissionInControlChRegion_r16;
typedef enum LTE_SystemInformationBlockType1_v1610_IEs__campingAllowedInCE_r16 {
	LTE_SystemInformationBlockType1_v1610_IEs__campingAllowedInCE_r16_true	= 0
} e_LTE_SystemInformationBlockType1_v1610_IEs__campingAllowedInCE_r16;

/* Forward declarations */
struct LTE_PLMN_IdentityList_v1610;

/* LTE_SystemInformationBlockType1-v1610-IEs */
typedef struct LTE_SystemInformationBlockType1_v1610_IEs {
	long	*eDRX_Allowed_5GC_r16;	/* OPTIONAL */
	long	*transmissionInControlChRegion_r16;	/* OPTIONAL */
	long	*campingAllowedInCE_r16;	/* OPTIONAL */
	struct LTE_PLMN_IdentityList_v1610	*plmn_IdentityList_v1610;	/* OPTIONAL */
	struct LTE_SystemInformationBlockType1_v1610_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType1_v1610_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_eDRX_Allowed_5GC_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_transmissionInControlChRegion_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_campingAllowedInCE_r16_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType1_v1610_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType1_v1610_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType1_v1610_IEs_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PLMN-IdentityList-v1610.h"

#endif	/* _LTE_SystemInformationBlockType1_v1610_IEs_H_ */
#include <asn_internal.h>
