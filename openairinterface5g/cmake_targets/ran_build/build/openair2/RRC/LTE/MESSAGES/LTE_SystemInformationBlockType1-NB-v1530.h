/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SystemInformationBlockType1_NB_v1530_H_
#define	_LTE_SystemInformationBlockType1_NB_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_TDD-Config-NB-r15.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformationBlockType1_NB_v1530__tdd_Parameters_r15__tdd_SI_CarrierInfo_r15 {
	LTE_SystemInformationBlockType1_NB_v1530__tdd_Parameters_r15__tdd_SI_CarrierInfo_r15_anchor	= 0,
	LTE_SystemInformationBlockType1_NB_v1530__tdd_Parameters_r15__tdd_SI_CarrierInfo_r15_non_anchor	= 1
} e_LTE_SystemInformationBlockType1_NB_v1530__tdd_Parameters_r15__tdd_SI_CarrierInfo_r15;

/* Forward declarations */
struct LTE_SchedulingInfoList_NB_v1530;
struct LTE_SystemInformationBlockType1_NB_v1610;
struct LTE_DL_Bitmap_NB_r13;

/* LTE_SystemInformationBlockType1-NB-v1530 */
typedef struct LTE_SystemInformationBlockType1_NB_v1530 {
	struct LTE_SystemInformationBlockType1_NB_v1530__tdd_Parameters_r15 {
		LTE_TDD_Config_NB_r15_t	 tdd_Config_r15;
		long	 tdd_SI_CarrierInfo_r15;
		struct LTE_DL_Bitmap_NB_r13	*tdd_SI_SubframesBitmap_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tdd_Parameters_r15;
	struct LTE_SchedulingInfoList_NB_v1530	*schedulingInfoList_v1530;	/* OPTIONAL */
	struct LTE_SystemInformationBlockType1_NB_v1610	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType1_NB_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_tdd_SI_CarrierInfo_r15_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType1_NB_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType1_NB_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType1_NB_v1530_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SchedulingInfoList-NB-v1530.h"
#include "LTE_SystemInformationBlockType1-NB-v1610.h"
#include "LTE_DL-Bitmap-NB-r13.h"

#endif	/* _LTE_SystemInformationBlockType1_NB_v1530_H_ */
#include <asn_internal.h>
