/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-CommonDataTypes"
 * 	found in "/home/dmt/openairinterface5g/openair2/M2AP/MESSAGES/ASN1/m2ap-14.0.0.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/M2AP/MESSAGES`
 */

#ifndef	_M2AP_Criticality_H_
#define	_M2AP_Criticality_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M2AP_Criticality {
	M2AP_Criticality_reject	= 0,
	M2AP_Criticality_ignore	= 1,
	M2AP_Criticality_notify	= 2
} e_M2AP_Criticality;

/* M2AP_Criticality */
typedef long	 M2AP_Criticality_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_M2AP_Criticality_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_M2AP_Criticality;
extern const asn_INTEGER_specifics_t asn_SPC_M2AP_Criticality_specs_1;
asn_struct_free_f M2AP_Criticality_free;
asn_struct_print_f M2AP_Criticality_print;
asn_constr_check_f M2AP_Criticality_constraint;
xer_type_decoder_f M2AP_Criticality_decode_xer;
xer_type_encoder_f M2AP_Criticality_encode_xer;
per_type_decoder_f M2AP_Criticality_decode_uper;
per_type_encoder_f M2AP_Criticality_encode_uper;
per_type_decoder_f M2AP_Criticality_decode_aper;
per_type_encoder_f M2AP_Criticality_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _M2AP_Criticality_H_ */
#include <asn_internal.h>
