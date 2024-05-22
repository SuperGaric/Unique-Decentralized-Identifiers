/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_PLMN_IdentityInfo_5GC_NB_r16_H_
#define	_LTE_PLMN_IdentityInfo_5GC_NB_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_PLMN-Identity.h"
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PLMN_IdentityInfo_5GC_NB_r16__plmn_Identity_5GC_r16_PR {
	LTE_PLMN_IdentityInfo_5GC_NB_r16__plmn_Identity_5GC_r16_PR_NOTHING,	/* No components present */
	LTE_PLMN_IdentityInfo_5GC_NB_r16__plmn_Identity_5GC_r16_PR_plmn_Identity_r16,
	LTE_PLMN_IdentityInfo_5GC_NB_r16__plmn_Identity_5GC_r16_PR_plmn_Index_r16
} LTE_PLMN_IdentityInfo_5GC_NB_r16__plmn_Identity_5GC_r16_PR;
typedef enum LTE_PLMN_IdentityInfo_5GC_NB_r16__cellReservedForOperatorUse_r16 {
	LTE_PLMN_IdentityInfo_5GC_NB_r16__cellReservedForOperatorUse_r16_reserved	= 0,
	LTE_PLMN_IdentityInfo_5GC_NB_r16__cellReservedForOperatorUse_r16_notReserved	= 1
} e_LTE_PLMN_IdentityInfo_5GC_NB_r16__cellReservedForOperatorUse_r16;
typedef enum LTE_PLMN_IdentityInfo_5GC_NB_r16__ng_U_DataTransfer_r16 {
	LTE_PLMN_IdentityInfo_5GC_NB_r16__ng_U_DataTransfer_r16_true	= 0
} e_LTE_PLMN_IdentityInfo_5GC_NB_r16__ng_U_DataTransfer_r16;
typedef enum LTE_PLMN_IdentityInfo_5GC_NB_r16__up_CIoT_5GS_Optimisation_r16 {
	LTE_PLMN_IdentityInfo_5GC_NB_r16__up_CIoT_5GS_Optimisation_r16_true	= 0
} e_LTE_PLMN_IdentityInfo_5GC_NB_r16__up_CIoT_5GS_Optimisation_r16;

/* LTE_PLMN-IdentityInfo-5GC-NB-r16 */
typedef struct LTE_PLMN_IdentityInfo_5GC_NB_r16 {
	struct LTE_PLMN_IdentityInfo_5GC_NB_r16__plmn_Identity_5GC_r16 {
		LTE_PLMN_IdentityInfo_5GC_NB_r16__plmn_Identity_5GC_r16_PR present;
		union LTE_PLMN_IdentityInfo_5GC_NB_r16__LTE_plmn_Identity_5GC_r16_u {
			LTE_PLMN_Identity_t	 plmn_Identity_r16;
			long	 plmn_Index_r16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} plmn_Identity_5GC_r16;
	long	 cellReservedForOperatorUse_r16;
	long	*ng_U_DataTransfer_r16;	/* OPTIONAL */
	long	*up_CIoT_5GS_Optimisation_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PLMN_IdentityInfo_5GC_NB_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_cellReservedForOperatorUse_r16_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ng_U_DataTransfer_r16_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_up_CIoT_5GS_Optimisation_r16_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PLMN_IdentityInfo_5GC_NB_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PLMN_IdentityInfo_5GC_NB_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PLMN_IdentityInfo_5GC_NB_r16_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PLMN_IdentityInfo_5GC_NB_r16_H_ */
#include <asn_internal.h>