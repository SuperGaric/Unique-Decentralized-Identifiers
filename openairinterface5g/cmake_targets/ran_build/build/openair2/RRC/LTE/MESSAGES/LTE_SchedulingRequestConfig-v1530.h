/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SchedulingRequestConfig_v1530_H_
#define	_LTE_SchedulingRequestConfig_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SchedulingRequestConfig_v1530_PR {
	LTE_SchedulingRequestConfig_v1530_PR_NOTHING,	/* No components present */
	LTE_SchedulingRequestConfig_v1530_PR_release,
	LTE_SchedulingRequestConfig_v1530_PR_setup
} LTE_SchedulingRequestConfig_v1530_PR;
typedef enum LTE_SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15 {
	LTE_SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15_n4	= 0,
	LTE_SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15_n8	= 1,
	LTE_SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15_n16	= 2,
	LTE_SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15_n32	= 3,
	LTE_SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15_n64	= 4,
	LTE_SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15_spare3	= 5,
	LTE_SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15_spare2	= 6,
	LTE_SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15_spare1	= 7
} e_LTE_SchedulingRequestConfig_v1530__setup__dssr_TransMax_r15;

/* Forward declarations */
struct LTE_SR_SubslotSPUCCH_ResourceList_r15;

/* LTE_SchedulingRequestConfig-v1530 */
typedef struct LTE_SchedulingRequestConfig_v1530 {
	LTE_SchedulingRequestConfig_v1530_PR present;
	union LTE_SchedulingRequestConfig_v1530_u {
		NULL_t	 release;
		struct LTE_SchedulingRequestConfig_v1530__setup {
			long	*sr_SlotSPUCCH_IndexFH_r15;	/* OPTIONAL */
			long	*sr_SlotSPUCCH_IndexNoFH_r15;	/* OPTIONAL */
			struct LTE_SR_SubslotSPUCCH_ResourceList_r15	*sr_SubslotSPUCCH_ResourceList_r15;	/* OPTIONAL */
			long	*sr_ConfigIndexSlot_r15;	/* OPTIONAL */
			long	*sr_ConfigIndexSubslot_r15;	/* OPTIONAL */
			long	 dssr_TransMax_r15;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SchedulingRequestConfig_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_dssr_TransMax_r15_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SchedulingRequestConfig_v1530;
extern asn_CHOICE_specifics_t asn_SPC_LTE_SchedulingRequestConfig_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SchedulingRequestConfig_v1530_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_SchedulingRequestConfig_v1530_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SR-SubslotSPUCCH-ResourceList-r15.h"

#endif	/* _LTE_SchedulingRequestConfig_v1530_H_ */
#include <asn_internal.h>
