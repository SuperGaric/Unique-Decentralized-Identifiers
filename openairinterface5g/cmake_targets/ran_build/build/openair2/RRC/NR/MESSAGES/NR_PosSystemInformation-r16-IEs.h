/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_PosSystemInformation_r16_IEs_H_
#define	_NR_PosSystemInformation_r16_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR {
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_NOTHING,	/* No components present */
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib1_1_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib1_2_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib1_3_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib1_4_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib1_5_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib1_6_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib1_7_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib1_8_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_1_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_2_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_3_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_4_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_5_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_6_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_7_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_8_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_9_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_10_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_11_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_12_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_13_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_14_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_15_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_16_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_17_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_18_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_19_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_20_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_21_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_22_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_23_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib3_1_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib4_1_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib5_1_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib6_1_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib6_2_r16,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib6_3_r16,
	/* Extensions may appear below */
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib1_9_v1700,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib1_10_v1700,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_24_v1700,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib2_25_v1700,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib6_4_v1700,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib6_5_v1700,
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR_posSib6_6_v1700
} NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR;

/* Forward declarations */
struct NR_SIBpos_r16;

/* Forward definitions */
typedef struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member {
	NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member_PR present;
	union NR_PosSystemInformation_r16_IEs__NR_posSIB_TypeAndInfo_r16__NR_Member_u {
		struct NR_SIBpos_r16	*posSib1_1_r16;
		struct NR_SIBpos_r16	*posSib1_2_r16;
		struct NR_SIBpos_r16	*posSib1_3_r16;
		struct NR_SIBpos_r16	*posSib1_4_r16;
		struct NR_SIBpos_r16	*posSib1_5_r16;
		struct NR_SIBpos_r16	*posSib1_6_r16;
		struct NR_SIBpos_r16	*posSib1_7_r16;
		struct NR_SIBpos_r16	*posSib1_8_r16;
		struct NR_SIBpos_r16	*posSib2_1_r16;
		struct NR_SIBpos_r16	*posSib2_2_r16;
		struct NR_SIBpos_r16	*posSib2_3_r16;
		struct NR_SIBpos_r16	*posSib2_4_r16;
		struct NR_SIBpos_r16	*posSib2_5_r16;
		struct NR_SIBpos_r16	*posSib2_6_r16;
		struct NR_SIBpos_r16	*posSib2_7_r16;
		struct NR_SIBpos_r16	*posSib2_8_r16;
		struct NR_SIBpos_r16	*posSib2_9_r16;
		struct NR_SIBpos_r16	*posSib2_10_r16;
		struct NR_SIBpos_r16	*posSib2_11_r16;
		struct NR_SIBpos_r16	*posSib2_12_r16;
		struct NR_SIBpos_r16	*posSib2_13_r16;
		struct NR_SIBpos_r16	*posSib2_14_r16;
		struct NR_SIBpos_r16	*posSib2_15_r16;
		struct NR_SIBpos_r16	*posSib2_16_r16;
		struct NR_SIBpos_r16	*posSib2_17_r16;
		struct NR_SIBpos_r16	*posSib2_18_r16;
		struct NR_SIBpos_r16	*posSib2_19_r16;
		struct NR_SIBpos_r16	*posSib2_20_r16;
		struct NR_SIBpos_r16	*posSib2_21_r16;
		struct NR_SIBpos_r16	*posSib2_22_r16;
		struct NR_SIBpos_r16	*posSib2_23_r16;
		struct NR_SIBpos_r16	*posSib3_1_r16;
		struct NR_SIBpos_r16	*posSib4_1_r16;
		struct NR_SIBpos_r16	*posSib5_1_r16;
		struct NR_SIBpos_r16	*posSib6_1_r16;
		struct NR_SIBpos_r16	*posSib6_2_r16;
		struct NR_SIBpos_r16	*posSib6_3_r16;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		struct NR_SIBpos_r16	*posSib1_9_v1700;
		struct NR_SIBpos_r16	*posSib1_10_v1700;
		struct NR_SIBpos_r16	*posSib2_24_v1700;
		struct NR_SIBpos_r16	*posSib2_25_v1700;
		struct NR_SIBpos_r16	*posSib6_4_v1700;
		struct NR_SIBpos_r16	*posSib6_5_v1700;
		struct NR_SIBpos_r16	*posSib6_6_v1700;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member;

/* NR_PosSystemInformation-r16-IEs */
typedef struct NR_PosSystemInformation_r16_IEs {
	struct NR_PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16 {
		A_SEQUENCE_OF(PosSystemInformation_r16_IEs__posSIB_TypeAndInfo_r16__Member) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} posSIB_TypeAndInfo_r16;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct NR_PosSystemInformation_r16_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PosSystemInformation_r16_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_PosSystemInformation_r16_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PosSystemInformation_r16_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PosSystemInformation_r16_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SIBpos-r16.h"

#endif	/* _NR_PosSystemInformation_r16_IEs_H_ */
#include <asn_internal.h>
