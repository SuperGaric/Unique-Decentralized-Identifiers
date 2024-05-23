/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_Environment_H_
#define	_LPP_Environment_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_Environment {
	LPP_Environment_badArea	= 0,
	LPP_Environment_notBadArea	= 1,
	LPP_Environment_mixedArea	= 2
	/*
	 * Enumeration is extensible
	 */
} e_LPP_Environment;

/* LPP_Environment */
typedef long	 LPP_Environment_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LPP_Environment_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LPP_Environment;
extern const asn_INTEGER_specifics_t asn_SPC_LPP_Environment_specs_1;
asn_struct_free_f LPP_Environment_free;
asn_struct_print_f LPP_Environment_print;
asn_constr_check_f LPP_Environment_constraint;
xer_type_decoder_f LPP_Environment_decode_xer;
xer_type_encoder_f LPP_Environment_encode_xer;
per_type_decoder_f LPP_Environment_decode_uper;
per_type_encoder_f LPP_Environment_encode_uper;
per_type_decoder_f LPP_Environment_decode_aper;
per_type_encoder_f LPP_Environment_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_Environment_H_ */
#include <asn_internal.h>
