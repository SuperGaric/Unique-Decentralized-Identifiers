/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_UAC_Barring_NB_r16_H_
#define	_LTE_UAC_Barring_NB_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_UAC-AC1-SelectAssistInfo-r15.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_UAC_BarringPerCatList_NB_r16;

/* LTE_UAC-Barring-NB-r16 */
typedef struct LTE_UAC_Barring_NB_r16 {
	struct LTE_UAC_BarringPerCatList_NB_r16	*uac_BarringPerCatList_r16;	/* OPTIONAL */
	LTE_UAC_AC1_SelectAssistInfo_r15_t	*uac_AC1_SelectAssistInfo_r16;	/* OPTIONAL */
	BIT_STRING_t	 uac_BarringForAccessIdentity_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UAC_Barring_NB_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UAC_Barring_NB_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UAC_Barring_NB_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UAC_Barring_NB_r16_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_UAC-BarringPerCatList-NB-r16.h"

#endif	/* _LTE_UAC_Barring_NB_r16_H_ */
#include <asn_internal.h>
