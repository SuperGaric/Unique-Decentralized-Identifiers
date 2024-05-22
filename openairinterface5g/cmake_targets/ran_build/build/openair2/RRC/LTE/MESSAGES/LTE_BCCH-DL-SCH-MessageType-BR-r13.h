/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_BCCH_DL_SCH_MessageType_BR_r13_H_
#define	_LTE_BCCH_DL_SCH_MessageType_BR_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SystemInformation-BR-r13.h"
#include "LTE_SystemInformationBlockType1-BR-r13.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_BCCH_DL_SCH_MessageType_BR_r13_PR {
	LTE_BCCH_DL_SCH_MessageType_BR_r13_PR_NOTHING,	/* No components present */
	LTE_BCCH_DL_SCH_MessageType_BR_r13_PR_c1,
	LTE_BCCH_DL_SCH_MessageType_BR_r13_PR_messageClassExtension
} LTE_BCCH_DL_SCH_MessageType_BR_r13_PR;
typedef enum LTE_BCCH_DL_SCH_MessageType_BR_r13__c1_PR {
	LTE_BCCH_DL_SCH_MessageType_BR_r13__c1_PR_NOTHING,	/* No components present */
	LTE_BCCH_DL_SCH_MessageType_BR_r13__c1_PR_systemInformation_BR_r13,
	LTE_BCCH_DL_SCH_MessageType_BR_r13__c1_PR_systemInformationBlockType1_BR_r13
} LTE_BCCH_DL_SCH_MessageType_BR_r13__c1_PR;

/* LTE_BCCH-DL-SCH-MessageType-BR-r13 */
typedef struct LTE_BCCH_DL_SCH_MessageType_BR_r13 {
	LTE_BCCH_DL_SCH_MessageType_BR_r13_PR present;
	union LTE_BCCH_DL_SCH_MessageType_BR_r13_u {
		struct LTE_BCCH_DL_SCH_MessageType_BR_r13__c1 {
			LTE_BCCH_DL_SCH_MessageType_BR_r13__c1_PR present;
			union LTE_BCCH_DL_SCH_MessageType_BR_r13__LTE_c1_u {
				LTE_SystemInformation_BR_r13_t	 systemInformation_BR_r13;
				LTE_SystemInformationBlockType1_BR_r13_t	 systemInformationBlockType1_BR_r13;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct LTE_BCCH_DL_SCH_MessageType_BR_r13__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BCCH_DL_SCH_MessageType_BR_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BCCH_DL_SCH_MessageType_BR_r13;
extern asn_CHOICE_specifics_t asn_SPC_LTE_BCCH_DL_SCH_MessageType_BR_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_BCCH_DL_SCH_MessageType_BR_r13_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_BCCH_DL_SCH_MessageType_BR_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_BCCH_DL_SCH_MessageType_BR_r13_H_ */
#include <asn_internal.h>