/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_MBMSInterestIndication_r11_H_
#define	_LTE_MBMSInterestIndication_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MBMSInterestIndication-r11-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MBMSInterestIndication_r11__criticalExtensions_PR {
	LTE_MBMSInterestIndication_r11__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_MBMSInterestIndication_r11__criticalExtensions_PR_c1,
	LTE_MBMSInterestIndication_r11__criticalExtensions_PR_criticalExtensionsFuture
} LTE_MBMSInterestIndication_r11__criticalExtensions_PR;
typedef enum LTE_MBMSInterestIndication_r11__criticalExtensions__c1_PR {
	LTE_MBMSInterestIndication_r11__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	LTE_MBMSInterestIndication_r11__criticalExtensions__c1_PR_interestIndication_r11,
	LTE_MBMSInterestIndication_r11__criticalExtensions__c1_PR_spare3,
	LTE_MBMSInterestIndication_r11__criticalExtensions__c1_PR_spare2,
	LTE_MBMSInterestIndication_r11__criticalExtensions__c1_PR_spare1
} LTE_MBMSInterestIndication_r11__criticalExtensions__c1_PR;

/* LTE_MBMSInterestIndication-r11 */
typedef struct LTE_MBMSInterestIndication_r11 {
	struct LTE_MBMSInterestIndication_r11__criticalExtensions {
		LTE_MBMSInterestIndication_r11__criticalExtensions_PR present;
		union LTE_MBMSInterestIndication_r11__LTE_criticalExtensions_u {
			struct LTE_MBMSInterestIndication_r11__criticalExtensions__c1 {
				LTE_MBMSInterestIndication_r11__criticalExtensions__c1_PR present;
				union LTE_MBMSInterestIndication_r11__LTE_criticalExtensions__LTE_c1_u {
					LTE_MBMSInterestIndication_r11_IEs_t	 interestIndication_r11;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct LTE_MBMSInterestIndication_r11__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MBMSInterestIndication_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MBMSInterestIndication_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MBMSInterestIndication_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MBMSInterestIndication_r11_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MBMSInterestIndication_r11_H_ */
#include <asn_internal.h>
