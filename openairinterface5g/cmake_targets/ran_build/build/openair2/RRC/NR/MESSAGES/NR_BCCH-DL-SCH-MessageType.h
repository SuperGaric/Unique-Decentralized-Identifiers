/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_BCCH_DL_SCH_MessageType_H_
#define	_NR_BCCH_DL_SCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_BCCH_DL_SCH_MessageType_PR {
	NR_BCCH_DL_SCH_MessageType_PR_NOTHING,	/* No components present */
	NR_BCCH_DL_SCH_MessageType_PR_c1,
	NR_BCCH_DL_SCH_MessageType_PR_messageClassExtension
} NR_BCCH_DL_SCH_MessageType_PR;
typedef enum NR_BCCH_DL_SCH_MessageType__c1_PR {
	NR_BCCH_DL_SCH_MessageType__c1_PR_NOTHING,	/* No components present */
	NR_BCCH_DL_SCH_MessageType__c1_PR_systemInformation,
	NR_BCCH_DL_SCH_MessageType__c1_PR_systemInformationBlockType1
} NR_BCCH_DL_SCH_MessageType__c1_PR;

/* Forward declarations */
struct NR_SystemInformation;
struct NR_SIB1;

/* NR_BCCH-DL-SCH-MessageType */
typedef struct NR_BCCH_DL_SCH_MessageType {
	NR_BCCH_DL_SCH_MessageType_PR present;
	union NR_BCCH_DL_SCH_MessageType_u {
		struct NR_BCCH_DL_SCH_MessageType__c1 {
			NR_BCCH_DL_SCH_MessageType__c1_PR present;
			union NR_BCCH_DL_SCH_MessageType__NR_c1_u {
				struct NR_SystemInformation	*systemInformation;
				struct NR_SIB1	*systemInformationBlockType1;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *c1;
		struct NR_BCCH_DL_SCH_MessageType__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BCCH_DL_SCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_BCCH_DL_SCH_MessageType;
extern asn_CHOICE_specifics_t asn_SPC_NR_BCCH_DL_SCH_MessageType_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BCCH_DL_SCH_MessageType_1[2];
extern asn_per_constraints_t asn_PER_type_NR_BCCH_DL_SCH_MessageType_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SystemInformation.h"
#include "NR_SIB1.h"

#endif	/* _NR_BCCH_DL_SCH_MessageType_H_ */
#include <asn_internal.h>
