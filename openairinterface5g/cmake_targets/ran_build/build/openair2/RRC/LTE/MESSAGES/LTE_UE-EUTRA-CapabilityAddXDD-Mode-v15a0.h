/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v15a0_H_
#define	_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v15a0_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_NeighCellSI-AcquisitionParameters-v15a0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_PhyLayerParameters_v1530;
struct LTE_PhyLayerParameters_v1540;
struct LTE_PhyLayerParameters_v1550;

/* LTE_UE-EUTRA-CapabilityAddXDD-Mode-v15a0 */
typedef struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v15a0 {
	struct LTE_PhyLayerParameters_v1530	*phyLayerParameters_v1530;	/* OPTIONAL */
	struct LTE_PhyLayerParameters_v1540	*phyLayerParameters_v1540;	/* OPTIONAL */
	struct LTE_PhyLayerParameters_v1550	*phyLayerParameters_v1550;	/* OPTIONAL */
	LTE_NeighCellSI_AcquisitionParameters_v15a0_t	 neighCellSI_AcquisitionParameters_v15a0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_EUTRA_CapabilityAddXDD_Mode_v15a0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v15a0;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v15a0_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v15a0_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PhyLayerParameters-v1530.h"
#include "LTE_PhyLayerParameters-v1540.h"
#include "LTE_PhyLayerParameters-v1550.h"

#endif	/* _LTE_UE_EUTRA_CapabilityAddXDD_Mode_v15a0_H_ */
#include <asn_internal.h>
