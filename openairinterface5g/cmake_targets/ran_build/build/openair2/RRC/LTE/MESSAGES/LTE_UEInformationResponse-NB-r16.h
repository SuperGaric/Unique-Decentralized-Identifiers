/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_UEInformationResponse_NB_r16_H_
#define	_LTE_UEInformationResponse_NB_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RRC-TransactionIdentifier.h"
#include "LTE_UEInformationResponse-NB-r16-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UEInformationResponse_NB_r16__criticalExtensions_PR {
	LTE_UEInformationResponse_NB_r16__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_UEInformationResponse_NB_r16__criticalExtensions_PR_ueInformationResponse_r16,
	LTE_UEInformationResponse_NB_r16__criticalExtensions_PR_criticalExtensionsFuture
} LTE_UEInformationResponse_NB_r16__criticalExtensions_PR;

/* LTE_UEInformationResponse-NB-r16 */
typedef struct LTE_UEInformationResponse_NB_r16 {
	LTE_RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct LTE_UEInformationResponse_NB_r16__criticalExtensions {
		LTE_UEInformationResponse_NB_r16__criticalExtensions_PR present;
		union LTE_UEInformationResponse_NB_r16__LTE_criticalExtensions_u {
			LTE_UEInformationResponse_NB_r16_IEs_t	 ueInformationResponse_r16;
			struct LTE_UEInformationResponse_NB_r16__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UEInformationResponse_NB_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UEInformationResponse_NB_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UEInformationResponse_NB_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UEInformationResponse_NB_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_UEInformationResponse_NB_r16_H_ */
#include <asn_internal.h>
