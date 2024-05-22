/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_Candidate_SpCell_Item_H_
#define	_F1AP_Candidate_SpCell_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "F1AP_NRCGI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct F1AP_ProtocolExtensionContainer;

/* F1AP_Candidate-SpCell-Item */
typedef struct F1AP_Candidate_SpCell_Item {
	F1AP_NRCGI_t	 candidate_SpCell_ID;
	struct F1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_Candidate_SpCell_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_Candidate_SpCell_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_Candidate_SpCell_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_Candidate_SpCell_Item_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_Candidate_SpCell_Item_H_ */
#include <asn_internal.h>
