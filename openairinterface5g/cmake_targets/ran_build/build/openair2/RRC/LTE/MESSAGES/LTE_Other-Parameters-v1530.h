/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_Other_Parameters_v1530_H_
#define	_LTE_Other_Parameters_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_Other_Parameters_v1530__assistInfoBitForLC_r15 {
	LTE_Other_Parameters_v1530__assistInfoBitForLC_r15_supported	= 0
} e_LTE_Other_Parameters_v1530__assistInfoBitForLC_r15;
typedef enum LTE_Other_Parameters_v1530__timeReferenceProvision_r15 {
	LTE_Other_Parameters_v1530__timeReferenceProvision_r15_supported	= 0
} e_LTE_Other_Parameters_v1530__timeReferenceProvision_r15;
typedef enum LTE_Other_Parameters_v1530__flightPathPlan_r15 {
	LTE_Other_Parameters_v1530__flightPathPlan_r15_supported	= 0
} e_LTE_Other_Parameters_v1530__flightPathPlan_r15;

/* LTE_Other-Parameters-v1530 */
typedef struct LTE_Other_Parameters_v1530 {
	long	*assistInfoBitForLC_r15;	/* OPTIONAL */
	long	*timeReferenceProvision_r15;	/* OPTIONAL */
	long	*flightPathPlan_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_Other_Parameters_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_assistInfoBitForLC_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_timeReferenceProvision_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_flightPathPlan_r15_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_Other_Parameters_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_Other_Parameters_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_Other_Parameters_v1530_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_Other_Parameters_v1530_H_ */
#include <asn_internal.h>
