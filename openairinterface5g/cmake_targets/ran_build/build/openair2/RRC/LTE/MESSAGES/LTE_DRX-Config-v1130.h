/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_DRX_Config_v1130_H_
#define	_LTE_DRX_Config_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_DRX_Config_v1130__drx_RetransmissionTimer_v1130 {
	LTE_DRX_Config_v1130__drx_RetransmissionTimer_v1130_psf0_v1130	= 0
} e_LTE_DRX_Config_v1130__drx_RetransmissionTimer_v1130;
typedef enum LTE_DRX_Config_v1130__longDRX_CycleStartOffset_v1130_PR {
	LTE_DRX_Config_v1130__longDRX_CycleStartOffset_v1130_PR_NOTHING,	/* No components present */
	LTE_DRX_Config_v1130__longDRX_CycleStartOffset_v1130_PR_sf60_v1130,
	LTE_DRX_Config_v1130__longDRX_CycleStartOffset_v1130_PR_sf70_v1130
} LTE_DRX_Config_v1130__longDRX_CycleStartOffset_v1130_PR;
typedef enum LTE_DRX_Config_v1130__shortDRX_Cycle_v1130 {
	LTE_DRX_Config_v1130__shortDRX_Cycle_v1130_sf4_v1130	= 0
} e_LTE_DRX_Config_v1130__shortDRX_Cycle_v1130;

/* LTE_DRX-Config-v1130 */
typedef struct LTE_DRX_Config_v1130 {
	long	*drx_RetransmissionTimer_v1130;	/* OPTIONAL */
	struct LTE_DRX_Config_v1130__longDRX_CycleStartOffset_v1130 {
		LTE_DRX_Config_v1130__longDRX_CycleStartOffset_v1130_PR present;
		union LTE_DRX_Config_v1130__LTE_longDRX_CycleStartOffset_v1130_u {
			long	 sf60_v1130;
			long	 sf70_v1130;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *longDRX_CycleStartOffset_v1130;
	long	*shortDRX_Cycle_v1130;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_DRX_Config_v1130_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drx_RetransmissionTimer_v1130_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_shortDRX_Cycle_v1130_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_DRX_Config_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_DRX_Config_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_DRX_Config_v1130_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_DRX_Config_v1130_H_ */
#include <asn_internal.h>
