/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1130_H_
#define	_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_PhyLayerParameters_v1130;
struct LTE_MeasParameters_v1130;
struct LTE_Other_Parameters_r11;

/* LTE_UE-EUTRA-CapabilityAddXDD-Mode-v1130 */
typedef struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1130 {
	struct LTE_PhyLayerParameters_v1130	*phyLayerParameters_v1130;	/* OPTIONAL */
	struct LTE_MeasParameters_v1130	*measParameters_v1130;	/* OPTIONAL */
	struct LTE_Other_Parameters_r11	*otherParameters_r11;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1130_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1130_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PhyLayerParameters-v1130.h"
#include "LTE_MeasParameters-v1130.h"
#include "LTE_Other-Parameters-r11.h"

#endif	/* _LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1130_H_ */
#include <asn_internal.h>
