/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#ifndef	_S1AP_SecondaryRATType_H_
#define	_S1AP_SecondaryRATType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_SecondaryRATType {
	S1AP_SecondaryRATType_nR	= 0,
	/*
	 * Enumeration is extensible
	 */
	S1AP_SecondaryRATType_unlicensed	= 1
} e_S1AP_SecondaryRATType;

/* S1AP_SecondaryRATType */
typedef long	 S1AP_SecondaryRATType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_SecondaryRATType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_SecondaryRATType;
extern const asn_INTEGER_specifics_t asn_SPC_S1AP_SecondaryRATType_specs_1;
asn_struct_free_f S1AP_SecondaryRATType_free;
asn_struct_print_f S1AP_SecondaryRATType_print;
asn_constr_check_f S1AP_SecondaryRATType_constraint;
xer_type_decoder_f S1AP_SecondaryRATType_decode_xer;
xer_type_encoder_f S1AP_SecondaryRATType_encode_xer;
per_type_decoder_f S1AP_SecondaryRATType_decode_uper;
per_type_encoder_f S1AP_SecondaryRATType_encode_uper;
per_type_decoder_f S1AP_SecondaryRATType_decode_aper;
per_type_encoder_f S1AP_SecondaryRATType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_SecondaryRATType_H_ */
#include <asn_internal.h>
