/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#ifndef	_NGAP_UEIdentityIndexValue_H_
#define	_NGAP_UEIdentityIndexValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_UEIdentityIndexValue_PR {
	NGAP_UEIdentityIndexValue_PR_NOTHING,	/* No components present */
	NGAP_UEIdentityIndexValue_PR_indexLength10,
	NGAP_UEIdentityIndexValue_PR_choice_Extensions
} NGAP_UEIdentityIndexValue_PR;

/* Forward declarations */
struct NGAP_ProtocolIE_SingleContainer;

/* NGAP_UEIdentityIndexValue */
typedef struct NGAP_UEIdentityIndexValue {
	NGAP_UEIdentityIndexValue_PR present;
	union NGAP_UEIdentityIndexValue_u {
		BIT_STRING_t	 indexLength10;
		struct NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_UEIdentityIndexValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_UEIdentityIndexValue;
extern asn_CHOICE_specifics_t asn_SPC_NGAP_UEIdentityIndexValue_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_UEIdentityIndexValue_1[2];
extern asn_per_constraints_t asn_PER_type_NGAP_UEIdentityIndexValue_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_UEIdentityIndexValue_H_ */
#include <asn_internal.h>
