/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_LAA_Parameters_v1530_H_
#define	_LTE_LAA_Parameters_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_LAA_Parameters_v1530__aul_r15 {
	LTE_LAA_Parameters_v1530__aul_r15_supported	= 0
} e_LTE_LAA_Parameters_v1530__aul_r15;
typedef enum LTE_LAA_Parameters_v1530__laa_PUSCH_Mode1_r15 {
	LTE_LAA_Parameters_v1530__laa_PUSCH_Mode1_r15_supported	= 0
} e_LTE_LAA_Parameters_v1530__laa_PUSCH_Mode1_r15;
typedef enum LTE_LAA_Parameters_v1530__laa_PUSCH_Mode2_r15 {
	LTE_LAA_Parameters_v1530__laa_PUSCH_Mode2_r15_supported	= 0
} e_LTE_LAA_Parameters_v1530__laa_PUSCH_Mode2_r15;
typedef enum LTE_LAA_Parameters_v1530__laa_PUSCH_Mode3_r15 {
	LTE_LAA_Parameters_v1530__laa_PUSCH_Mode3_r15_supported	= 0
} e_LTE_LAA_Parameters_v1530__laa_PUSCH_Mode3_r15;

/* LTE_LAA-Parameters-v1530 */
typedef struct LTE_LAA_Parameters_v1530 {
	long	*aul_r15;	/* OPTIONAL */
	long	*laa_PUSCH_Mode1_r15;	/* OPTIONAL */
	long	*laa_PUSCH_Mode2_r15;	/* OPTIONAL */
	long	*laa_PUSCH_Mode3_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_LAA_Parameters_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_aul_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_laa_PUSCH_Mode1_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_laa_PUSCH_Mode2_r15_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_laa_PUSCH_Mode3_r15_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_LAA_Parameters_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_LAA_Parameters_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_LAA_Parameters_v1530_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_LAA_Parameters_v1530_H_ */
#include <asn_internal.h>
