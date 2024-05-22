/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/M3AP/MESSAGES/ASN1/m3ap-14.0.0.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/M3AP/MESSAGES`
 */

#ifndef	_M3AP_Reestablishment_H_
#define	_M3AP_Reestablishment_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M3AP_Reestablishment {
	M3AP_Reestablishment_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_M3AP_Reestablishment;

/* M3AP_Reestablishment */
typedef long	 M3AP_Reestablishment_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_M3AP_Reestablishment_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_M3AP_Reestablishment;
extern const asn_INTEGER_specifics_t asn_SPC_M3AP_Reestablishment_specs_1;
asn_struct_free_f M3AP_Reestablishment_free;
asn_struct_print_f M3AP_Reestablishment_print;
asn_constr_check_f M3AP_Reestablishment_constraint;
xer_type_decoder_f M3AP_Reestablishment_decode_xer;
xer_type_encoder_f M3AP_Reestablishment_encode_xer;
per_type_decoder_f M3AP_Reestablishment_decode_uper;
per_type_encoder_f M3AP_Reestablishment_encode_uper;
per_type_decoder_f M3AP_Reestablishment_decode_aper;
per_type_encoder_f M3AP_Reestablishment_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_Reestablishment_H_ */
#include <asn_internal.h>