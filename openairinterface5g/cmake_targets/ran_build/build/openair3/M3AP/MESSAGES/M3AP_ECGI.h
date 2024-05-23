/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/M3AP/MESSAGES/ASN1/m3ap-14.0.0.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/M3AP/MESSAGES`
 */

#ifndef	_M3AP_ECGI_H_
#define	_M3AP_ECGI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M3AP_PLMN-Identity.h"
#include "M3AP_EUTRANCellIdentifier.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct M3AP_ProtocolExtensionContainer;

/* M3AP_ECGI */
typedef struct M3AP_ECGI {
	M3AP_PLMN_Identity_t	 pLMN_Identity;
	M3AP_EUTRANCellIdentifier_t	 eUTRANcellIdentifier;
	struct M3AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_ECGI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ECGI;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_ECGI_specs_1;
extern asn_TYPE_member_t asn_MBR_M3AP_ECGI_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_ECGI_H_ */
#include <asn_internal.h>
