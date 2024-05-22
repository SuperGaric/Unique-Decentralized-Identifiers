/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#ifndef	_E1AP_SecurityInformation_H_
#define	_E1AP_SecurityInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E1AP_SecurityAlgorithm.h"
#include "E1AP_UPSecuritykey.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E1AP_ProtocolExtensionContainer;

/* E1AP_SecurityInformation */
typedef struct E1AP_SecurityInformation {
	E1AP_SecurityAlgorithm_t	 securityAlgorithm;
	E1AP_UPSecuritykey_t	 uPSecuritykey;
	struct E1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E1AP_SecurityInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E1AP_SecurityInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_E1AP_SecurityInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_E1AP_SecurityInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _E1AP_SecurityInformation_H_ */
#include <asn_internal.h>