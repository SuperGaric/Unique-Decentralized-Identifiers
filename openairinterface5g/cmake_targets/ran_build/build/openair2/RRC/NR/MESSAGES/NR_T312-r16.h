/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_T312_r16_H_
#define	_NR_T312_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_T312_r16 {
	NR_T312_r16_ms0	= 0,
	NR_T312_r16_ms50	= 1,
	NR_T312_r16_ms100	= 2,
	NR_T312_r16_ms200	= 3,
	NR_T312_r16_ms300	= 4,
	NR_T312_r16_ms400	= 5,
	NR_T312_r16_ms500	= 6,
	NR_T312_r16_ms1000	= 7
} e_NR_T312_r16;

/* NR_T312-r16 */
typedef long	 NR_T312_r16_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NR_T312_r16_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NR_T312_r16;
extern const asn_INTEGER_specifics_t asn_SPC_NR_T312_r16_specs_1;
asn_struct_free_f NR_T312_r16_free;
asn_struct_print_f NR_T312_r16_print;
asn_constr_check_f NR_T312_r16_constraint;
xer_type_decoder_f NR_T312_r16_decode_xer;
xer_type_encoder_f NR_T312_r16_encode_xer;
per_type_decoder_f NR_T312_r16_decode_uper;
per_type_encoder_f NR_T312_r16_encode_uper;
per_type_decoder_f NR_T312_r16_decode_aper;
per_type_encoder_f NR_T312_r16_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_T312_r16_H_ */
#include <asn_internal.h>