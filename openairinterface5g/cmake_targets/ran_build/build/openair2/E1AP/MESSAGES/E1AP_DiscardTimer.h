/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#ifndef	_E1AP_DiscardTimer_H_
#define	_E1AP_DiscardTimer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E1AP_DiscardTimer {
	E1AP_DiscardTimer_ms10	= 0,
	E1AP_DiscardTimer_ms20	= 1,
	E1AP_DiscardTimer_ms30	= 2,
	E1AP_DiscardTimer_ms40	= 3,
	E1AP_DiscardTimer_ms50	= 4,
	E1AP_DiscardTimer_ms60	= 5,
	E1AP_DiscardTimer_ms75	= 6,
	E1AP_DiscardTimer_ms100	= 7,
	E1AP_DiscardTimer_ms150	= 8,
	E1AP_DiscardTimer_ms200	= 9,
	E1AP_DiscardTimer_ms250	= 10,
	E1AP_DiscardTimer_ms300	= 11,
	E1AP_DiscardTimer_ms500	= 12,
	E1AP_DiscardTimer_ms750	= 13,
	E1AP_DiscardTimer_ms1500	= 14,
	E1AP_DiscardTimer_infinity	= 15
} e_E1AP_DiscardTimer;

/* E1AP_DiscardTimer */
typedef long	 E1AP_DiscardTimer_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_E1AP_DiscardTimer_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_E1AP_DiscardTimer;
extern const asn_INTEGER_specifics_t asn_SPC_E1AP_DiscardTimer_specs_1;
asn_struct_free_f E1AP_DiscardTimer_free;
asn_struct_print_f E1AP_DiscardTimer_print;
asn_constr_check_f E1AP_DiscardTimer_constraint;
xer_type_decoder_f E1AP_DiscardTimer_decode_xer;
xer_type_encoder_f E1AP_DiscardTimer_encode_xer;
per_type_decoder_f E1AP_DiscardTimer_decode_uper;
per_type_encoder_f E1AP_DiscardTimer_encode_uper;
per_type_decoder_f E1AP_DiscardTimer_decode_aper;
per_type_encoder_f E1AP_DiscardTimer_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _E1AP_DiscardTimer_H_ */
#include <asn_internal.h>