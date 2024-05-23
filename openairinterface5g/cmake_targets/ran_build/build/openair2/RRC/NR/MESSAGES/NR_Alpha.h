/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_Alpha_H_
#define	_NR_Alpha_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_Alpha {
	NR_Alpha_alpha0	= 0,
	NR_Alpha_alpha04	= 1,
	NR_Alpha_alpha05	= 2,
	NR_Alpha_alpha06	= 3,
	NR_Alpha_alpha07	= 4,
	NR_Alpha_alpha08	= 5,
	NR_Alpha_alpha09	= 6,
	NR_Alpha_alpha1	= 7
} e_NR_Alpha;

/* NR_Alpha */
typedef long	 NR_Alpha_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NR_Alpha_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NR_Alpha;
extern const asn_INTEGER_specifics_t asn_SPC_NR_Alpha_specs_1;
asn_struct_free_f NR_Alpha_free;
asn_struct_print_f NR_Alpha_print;
asn_constr_check_f NR_Alpha_constraint;
xer_type_decoder_f NR_Alpha_decode_xer;
xer_type_encoder_f NR_Alpha_encode_xer;
per_type_decoder_f NR_Alpha_decode_uper;
per_type_encoder_f NR_Alpha_encode_uper;
per_type_decoder_f NR_Alpha_decode_aper;
per_type_encoder_f NR_Alpha_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_Alpha_H_ */
#include <asn_internal.h>
