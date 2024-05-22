/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_RemoteUEInformationSidelink_r17_H_
#define	_NR_RemoteUEInformationSidelink_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_RemoteUEInformationSidelink_r17__criticalExtensions_PR {
	NR_RemoteUEInformationSidelink_r17__criticalExtensions_PR_NOTHING,	/* No components present */
	NR_RemoteUEInformationSidelink_r17__criticalExtensions_PR_remoteUEInformationSidelink_r17,
	NR_RemoteUEInformationSidelink_r17__criticalExtensions_PR_criticalExtensionsFuture
} NR_RemoteUEInformationSidelink_r17__criticalExtensions_PR;

/* Forward declarations */
struct NR_RemoteUEInformationSidelink_r17_IEs;

/* NR_RemoteUEInformationSidelink-r17 */
typedef struct NR_RemoteUEInformationSidelink_r17 {
	struct NR_RemoteUEInformationSidelink_r17__criticalExtensions {
		NR_RemoteUEInformationSidelink_r17__criticalExtensions_PR present;
		union NR_RemoteUEInformationSidelink_r17__NR_criticalExtensions_u {
			struct NR_RemoteUEInformationSidelink_r17_IEs	*remoteUEInformationSidelink_r17;
			struct NR_RemoteUEInformationSidelink_r17__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RemoteUEInformationSidelink_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_RemoteUEInformationSidelink_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RemoteUEInformationSidelink_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RemoteUEInformationSidelink_r17_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_RemoteUEInformationSidelink-r17-IEs.h"

#endif	/* _NR_RemoteUEInformationSidelink_r17_H_ */
#include <asn_internal.h>
