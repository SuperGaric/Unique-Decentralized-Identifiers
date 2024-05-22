/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#ifndef	_E1AP_CauseProtocol_H_
#define	_E1AP_CauseProtocol_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E1AP_CauseProtocol {
	E1AP_CauseProtocol_transfer_syntax_error	= 0,
	E1AP_CauseProtocol_abstract_syntax_error_reject	= 1,
	E1AP_CauseProtocol_abstract_syntax_error_ignore_and_notify	= 2,
	E1AP_CauseProtocol_message_not_compatible_with_receiver_state	= 3,
	E1AP_CauseProtocol_semantic_error	= 4,
	E1AP_CauseProtocol_abstract_syntax_error_falsely_constructed_message	= 5,
	E1AP_CauseProtocol_unspecified	= 6
	/*
	 * Enumeration is extensible
	 */
} e_E1AP_CauseProtocol;

/* E1AP_CauseProtocol */
typedef long	 E1AP_CauseProtocol_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_E1AP_CauseProtocol_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_E1AP_CauseProtocol;
extern const asn_INTEGER_specifics_t asn_SPC_E1AP_CauseProtocol_specs_1;
asn_struct_free_f E1AP_CauseProtocol_free;
asn_struct_print_f E1AP_CauseProtocol_print;
asn_constr_check_f E1AP_CauseProtocol_constraint;
xer_type_decoder_f E1AP_CauseProtocol_decode_xer;
xer_type_encoder_f E1AP_CauseProtocol_encode_xer;
per_type_decoder_f E1AP_CauseProtocol_decode_uper;
per_type_encoder_f E1AP_CauseProtocol_encode_uper;
per_type_decoder_f E1AP_CauseProtocol_decode_aper;
per_type_encoder_f E1AP_CauseProtocol_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _E1AP_CauseProtocol_H_ */
#include <asn_internal.h>