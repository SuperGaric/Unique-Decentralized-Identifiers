/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RRCConnectionReconfiguration_NB_H_
#define	_LTE_RRCConnectionReconfiguration_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RRC-TransactionIdentifier.h"
#include "LTE_RRCConnectionReconfiguration-NB-r13-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RRCConnectionReconfiguration_NB__criticalExtensions_PR {
	LTE_RRCConnectionReconfiguration_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_RRCConnectionReconfiguration_NB__criticalExtensions_PR_c1,
	LTE_RRCConnectionReconfiguration_NB__criticalExtensions_PR_criticalExtensionsFuture
} LTE_RRCConnectionReconfiguration_NB__criticalExtensions_PR;
typedef enum LTE_RRCConnectionReconfiguration_NB__criticalExtensions__c1_PR {
	LTE_RRCConnectionReconfiguration_NB__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	LTE_RRCConnectionReconfiguration_NB__criticalExtensions__c1_PR_rrcConnectionReconfiguration_r13,
	LTE_RRCConnectionReconfiguration_NB__criticalExtensions__c1_PR_spare1
} LTE_RRCConnectionReconfiguration_NB__criticalExtensions__c1_PR;

/* LTE_RRCConnectionReconfiguration-NB */
typedef struct LTE_RRCConnectionReconfiguration_NB {
	LTE_RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct LTE_RRCConnectionReconfiguration_NB__criticalExtensions {
		LTE_RRCConnectionReconfiguration_NB__criticalExtensions_PR present;
		union LTE_RRCConnectionReconfiguration_NB__LTE_criticalExtensions_u {
			struct LTE_RRCConnectionReconfiguration_NB__criticalExtensions__c1 {
				LTE_RRCConnectionReconfiguration_NB__criticalExtensions__c1_PR present;
				union LTE_RRCConnectionReconfiguration_NB__LTE_criticalExtensions__LTE_c1_u {
					LTE_RRCConnectionReconfiguration_NB_r13_IEs_t	 rrcConnectionReconfiguration_r13;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct LTE_RRCConnectionReconfiguration_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionReconfiguration_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReconfiguration_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionReconfiguration_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionReconfiguration_NB_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RRCConnectionReconfiguration_NB_H_ */
#include <asn_internal.h>
