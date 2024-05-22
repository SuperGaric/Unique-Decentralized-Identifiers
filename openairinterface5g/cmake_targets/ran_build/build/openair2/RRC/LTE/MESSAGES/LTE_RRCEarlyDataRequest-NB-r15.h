/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RRCEarlyDataRequest_NB_r15_H_
#define	_LTE_RRCEarlyDataRequest_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RRCEarlyDataRequest-NB-r15-IEs.h"
#include "LTE_RRCEarlyDataRequest-5GC-NB-r16-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RRCEarlyDataRequest_NB_r15__criticalExtensions_PR {
	LTE_RRCEarlyDataRequest_NB_r15__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_RRCEarlyDataRequest_NB_r15__criticalExtensions_PR_rrcEarlyDataRequest_r15,
	LTE_RRCEarlyDataRequest_NB_r15__criticalExtensions_PR_later
} LTE_RRCEarlyDataRequest_NB_r15__criticalExtensions_PR;
typedef enum LTE_RRCEarlyDataRequest_NB_r15__criticalExtensions__later_PR {
	LTE_RRCEarlyDataRequest_NB_r15__criticalExtensions__later_PR_NOTHING,	/* No components present */
	LTE_RRCEarlyDataRequest_NB_r15__criticalExtensions__later_PR_rrcEarlyDataRequest_r16,
	LTE_RRCEarlyDataRequest_NB_r15__criticalExtensions__later_PR_criticalExtensionsFuture
} LTE_RRCEarlyDataRequest_NB_r15__criticalExtensions__later_PR;

/* LTE_RRCEarlyDataRequest-NB-r15 */
typedef struct LTE_RRCEarlyDataRequest_NB_r15 {
	struct LTE_RRCEarlyDataRequest_NB_r15__criticalExtensions {
		LTE_RRCEarlyDataRequest_NB_r15__criticalExtensions_PR present;
		union LTE_RRCEarlyDataRequest_NB_r15__LTE_criticalExtensions_u {
			LTE_RRCEarlyDataRequest_NB_r15_IEs_t	 rrcEarlyDataRequest_r15;
			struct LTE_RRCEarlyDataRequest_NB_r15__criticalExtensions__later {
				LTE_RRCEarlyDataRequest_NB_r15__criticalExtensions__later_PR present;
				union LTE_RRCEarlyDataRequest_NB_r15__LTE_criticalExtensions__LTE_later_u {
					LTE_RRCEarlyDataRequest_5GC_NB_r16_IEs_t	 rrcEarlyDataRequest_r16;
					struct LTE_RRCEarlyDataRequest_NB_r15__criticalExtensions__later__criticalExtensionsFuture {
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} criticalExtensionsFuture;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} later;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCEarlyDataRequest_NB_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCEarlyDataRequest_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCEarlyDataRequest_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCEarlyDataRequest_NB_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RRCEarlyDataRequest_NB_r15_H_ */
#include <asn_internal.h>
