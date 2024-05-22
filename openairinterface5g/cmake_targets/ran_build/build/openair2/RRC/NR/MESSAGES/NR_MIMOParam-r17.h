/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MIMOParam_r17_H_
#define	_NR_MIMOParam_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "NR_AdditionalPCIIndex-r17.h"
#include "NR_Uplink-powerControlId-r17.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MIMOParam_r17__unifiedTCI_StateType_r17 {
	NR_MIMOParam_r17__unifiedTCI_StateType_r17_separate	= 0,
	NR_MIMOParam_r17__unifiedTCI_StateType_r17_joint	= 1
} e_NR_MIMOParam_r17__unifiedTCI_StateType_r17;
typedef enum NR_MIMOParam_r17__sfnSchemePDCCH_r17 {
	NR_MIMOParam_r17__sfnSchemePDCCH_r17_sfnSchemeA	= 0,
	NR_MIMOParam_r17__sfnSchemePDCCH_r17_sfnSchemeB	= 1
} e_NR_MIMOParam_r17__sfnSchemePDCCH_r17;
typedef enum NR_MIMOParam_r17__sfnSchemePDSCH_r17 {
	NR_MIMOParam_r17__sfnSchemePDSCH_r17_sfnSchemeA	= 0,
	NR_MIMOParam_r17__sfnSchemePDSCH_r17_sfnSchemeB	= 1
} e_NR_MIMOParam_r17__sfnSchemePDSCH_r17;

/* Forward declarations */
struct NR_SSB_MTC_AdditionalPCI_r17;
struct NR_Uplink_powerControl_r17;

/* NR_MIMOParam-r17 */
typedef struct NR_MIMOParam_r17 {
	struct NR_MIMOParam_r17__additionalPCI_ToAddModList_r17 {
		A_SEQUENCE_OF(struct NR_SSB_MTC_AdditionalPCI_r17) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *additionalPCI_ToAddModList_r17;
	struct NR_MIMOParam_r17__additionalPCI_ToReleaseList_r17 {
		A_SEQUENCE_OF(NR_AdditionalPCIIndex_r17_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *additionalPCI_ToReleaseList_r17;
	long	*unifiedTCI_StateType_r17;	/* OPTIONAL */
	struct NR_MIMOParam_r17__uplink_PowerControlToAddModList_r17 {
		A_SEQUENCE_OF(struct NR_Uplink_powerControl_r17) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uplink_PowerControlToAddModList_r17;
	struct NR_MIMOParam_r17__uplink_PowerControlToReleaseList_r17 {
		A_SEQUENCE_OF(NR_Uplink_powerControlId_r17_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uplink_PowerControlToReleaseList_r17;
	long	*sfnSchemePDCCH_r17;	/* OPTIONAL */
	long	*sfnSchemePDSCH_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MIMOParam_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_unifiedTCI_StateType_r17_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sfnSchemePDCCH_r17_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sfnSchemePDSCH_r17_16;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_MIMOParam_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MIMOParam_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MIMOParam_r17_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SSB-MTC-AdditionalPCI-r17.h"
#include "NR_Uplink-powerControl-r17.h"

#endif	/* _NR_MIMOParam_r17_H_ */
#include <asn_internal.h>
