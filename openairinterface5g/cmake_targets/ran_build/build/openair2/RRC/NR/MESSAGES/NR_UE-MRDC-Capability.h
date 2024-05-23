/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_UE_MRDC_Capability_H_
#define	_NR_UE_MRDC_Capability_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_RF-ParametersMRDC.h"
#include <OCTET_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_MeasAndMobParametersMRDC;
struct NR_Phy_ParametersMRDC;
struct NR_GeneralParametersMRDC_XDD_Diff;
struct NR_UE_MRDC_CapabilityAddXDD_Mode;
struct NR_UE_MRDC_CapabilityAddFRX_Mode;
struct NR_PDCP_ParametersMRDC;
struct NR_UE_MRDC_Capability_v1560;
struct NR_FeatureSetCombination;

/* NR_UE-MRDC-Capability */
typedef struct NR_UE_MRDC_Capability {
	struct NR_MeasAndMobParametersMRDC	*measAndMobParametersMRDC;	/* OPTIONAL */
	struct NR_Phy_ParametersMRDC	*phy_ParametersMRDC_v1530;	/* OPTIONAL */
	NR_RF_ParametersMRDC_t	 rf_ParametersMRDC;
	struct NR_GeneralParametersMRDC_XDD_Diff	*generalParametersMRDC;	/* OPTIONAL */
	struct NR_UE_MRDC_CapabilityAddXDD_Mode	*fdd_Add_UE_MRDC_Capabilities;	/* OPTIONAL */
	struct NR_UE_MRDC_CapabilityAddXDD_Mode	*tdd_Add_UE_MRDC_Capabilities;	/* OPTIONAL */
	struct NR_UE_MRDC_CapabilityAddFRX_Mode	*fr1_Add_UE_MRDC_Capabilities;	/* OPTIONAL */
	struct NR_UE_MRDC_CapabilityAddFRX_Mode	*fr2_Add_UE_MRDC_Capabilities;	/* OPTIONAL */
	struct NR_UE_MRDC_Capability__featureSetCombinations {
		A_SEQUENCE_OF(struct NR_FeatureSetCombination) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *featureSetCombinations;
	struct NR_PDCP_ParametersMRDC	*pdcp_ParametersMRDC_v1530;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct NR_UE_MRDC_Capability_v1560	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UE_MRDC_Capability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_UE_MRDC_Capability;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MeasAndMobParametersMRDC.h"
#include "NR_Phy-ParametersMRDC.h"
#include "NR_GeneralParametersMRDC-XDD-Diff.h"
#include "NR_UE-MRDC-CapabilityAddXDD-Mode.h"
#include "NR_UE-MRDC-CapabilityAddFRX-Mode.h"
#include "NR_PDCP-ParametersMRDC.h"
#include "NR_UE-MRDC-Capability-v1560.h"
#include "NR_FeatureSetCombination.h"

#endif	/* _NR_UE_MRDC_Capability_H_ */
#include <asn_internal.h>
