/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_UE_EUTRA_Capability_v1650_IEs_H_
#define	_LTE_UE_EUTRA_Capability_v1650_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_Other_Parameters_v1650;
struct LTE_UE_EUTRA_Capability_v1660_IEs;

/* LTE_UE-EUTRA-Capability-v1650-IEs */
typedef struct LTE_UE_EUTRA_Capability_v1650_IEs {
	struct LTE_Other_Parameters_v1650	*otherParameters_v1650;	/* OPTIONAL */
	struct LTE_UE_EUTRA_Capability_v1660_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_EUTRA_Capability_v1650_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_Capability_v1650_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_Capability_v1650_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_Capability_v1650_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_Other-Parameters-v1650.h"
#include "LTE_UE-EUTRA-Capability-v1660-IEs.h"

#endif	/* _LTE_UE_EUTRA_Capability_v1650_IEs_H_ */
#include <asn_internal.h>
