/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MCCH_MessageType_r17_H_
#define	_NR_MCCH_MessageType_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MCCH_MessageType_r17_PR {
	NR_MCCH_MessageType_r17_PR_NOTHING,	/* No components present */
	NR_MCCH_MessageType_r17_PR_c1,
	NR_MCCH_MessageType_r17_PR_messageClassExtension
} NR_MCCH_MessageType_r17_PR;
typedef enum NR_MCCH_MessageType_r17__c1_PR {
	NR_MCCH_MessageType_r17__c1_PR_NOTHING,	/* No components present */
	NR_MCCH_MessageType_r17__c1_PR_mbsBroadcastConfiguration_r17,
	NR_MCCH_MessageType_r17__c1_PR_spare1
} NR_MCCH_MessageType_r17__c1_PR;

/* Forward declarations */
struct NR_MBSBroadcastConfiguration_r17;

/* NR_MCCH-MessageType-r17 */
typedef struct NR_MCCH_MessageType_r17 {
	NR_MCCH_MessageType_r17_PR present;
	union NR_MCCH_MessageType_r17_u {
		struct NR_MCCH_MessageType_r17__c1 {
			NR_MCCH_MessageType_r17__c1_PR present;
			union NR_MCCH_MessageType_r17__NR_c1_u {
				struct NR_MBSBroadcastConfiguration_r17	*mbsBroadcastConfiguration_r17;
				NULL_t	 spare1;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *c1;
		struct NR_MCCH_MessageType_r17__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MCCH_MessageType_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MCCH_MessageType_r17;
extern asn_CHOICE_specifics_t asn_SPC_NR_MCCH_MessageType_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MCCH_MessageType_r17_1[2];
extern asn_per_constraints_t asn_PER_type_NR_MCCH_MessageType_r17_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MBSBroadcastConfiguration-r17.h"

#endif	/* _NR_MCCH_MessageType_r17_H_ */
#include <asn_internal.h>