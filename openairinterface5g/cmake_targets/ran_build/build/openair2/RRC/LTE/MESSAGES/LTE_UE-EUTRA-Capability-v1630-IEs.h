/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_UE_EUTRA_Capability_v1630_IEs_H_
#define	_LTE_UE_EUTRA_Capability_v1630_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_MAC-Parameters-v1630.h"
#include "LTE_UE-EUTRA-CapabilityAddXDD-Mode-v1630.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UE_EUTRA_Capability_v1630_IEs__earlySecurityReactivation_r16 {
	LTE_UE_EUTRA_Capability_v1630_IEs__earlySecurityReactivation_r16_supported	= 0
} e_LTE_UE_EUTRA_Capability_v1630_IEs__earlySecurityReactivation_r16;

/* Forward declarations */
struct LTE_RF_Parameters_v1630;
struct LTE_SL_Parameters_v1630;
struct LTE_MeasParameters_v1630;
struct LTE_UE_EUTRA_Capability_v1650_IEs;

/* LTE_UE-EUTRA-Capability-v1630-IEs */
typedef struct LTE_UE_EUTRA_Capability_v1630_IEs {
	struct LTE_RF_Parameters_v1630	*rf_Parameters_v1630;	/* OPTIONAL */
	struct LTE_SL_Parameters_v1630	*sl_Parameters_v1630;	/* OPTIONAL */
	long	*earlySecurityReactivation_r16;	/* OPTIONAL */
	LTE_MAC_Parameters_v1630_t	 mac_Parameters_v1630;
	struct LTE_MeasParameters_v1630	*measParameters_v1630;	/* OPTIONAL */
	LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1630_t	 fdd_Add_UE_EUTRA_Capabilities_v1630;
	LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1630_t	 tdd_Add_UE_EUTRA_Capabilities_v1630;
	struct LTE_UE_EUTRA_Capability_v1650_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_EUTRA_Capability_v1630_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_earlySecurityReactivation_r16_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_Capability_v1630_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_Capability_v1630_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_Capability_v1630_IEs_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RF-Parameters-v1630.h"
#include "LTE_SL-Parameters-v1630.h"
#include "LTE_MeasParameters-v1630.h"
#include "LTE_UE-EUTRA-Capability-v1650-IEs.h"

#endif	/* _LTE_UE_EUTRA_Capability_v1630_IEs_H_ */
#include <asn_internal.h>