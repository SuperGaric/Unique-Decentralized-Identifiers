/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CellSelectionInfoCE_v1530_H_
#define	_LTE_CellSelectionInfoCE_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CellSelectionInfoCE_v1530__powerClass14dBm_Offset_r15 {
	LTE_CellSelectionInfoCE_v1530__powerClass14dBm_Offset_r15_dB_6	= 0,
	LTE_CellSelectionInfoCE_v1530__powerClass14dBm_Offset_r15_dB_3	= 1,
	LTE_CellSelectionInfoCE_v1530__powerClass14dBm_Offset_r15_dB3	= 2,
	LTE_CellSelectionInfoCE_v1530__powerClass14dBm_Offset_r15_dB6	= 3,
	LTE_CellSelectionInfoCE_v1530__powerClass14dBm_Offset_r15_dB9	= 4,
	LTE_CellSelectionInfoCE_v1530__powerClass14dBm_Offset_r15_dB12	= 5
} e_LTE_CellSelectionInfoCE_v1530__powerClass14dBm_Offset_r15;

/* LTE_CellSelectionInfoCE-v1530 */
typedef struct LTE_CellSelectionInfoCE_v1530 {
	long	 powerClass14dBm_Offset_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CellSelectionInfoCE_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_powerClass14dBm_Offset_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CellSelectionInfoCE_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CellSelectionInfoCE_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CellSelectionInfoCE_v1530_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CellSelectionInfoCE_v1530_H_ */
#include <asn_internal.h>