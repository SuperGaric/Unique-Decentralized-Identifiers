/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_TimeToWait_H_
#define	_F1AP_TimeToWait_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_TimeToWait {
	F1AP_TimeToWait_v1s	= 0,
	F1AP_TimeToWait_v2s	= 1,
	F1AP_TimeToWait_v5s	= 2,
	F1AP_TimeToWait_v10s	= 3,
	F1AP_TimeToWait_v20s	= 4,
	F1AP_TimeToWait_v60s	= 5
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_TimeToWait;

/* F1AP_TimeToWait */
typedef long	 F1AP_TimeToWait_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_F1AP_TimeToWait_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_F1AP_TimeToWait;
extern const asn_INTEGER_specifics_t asn_SPC_F1AP_TimeToWait_specs_1;
asn_struct_free_f F1AP_TimeToWait_free;
asn_struct_print_f F1AP_TimeToWait_print;
asn_constr_check_f F1AP_TimeToWait_constraint;
xer_type_decoder_f F1AP_TimeToWait_decode_xer;
xer_type_encoder_f F1AP_TimeToWait_encode_xer;
per_type_decoder_f F1AP_TimeToWait_decode_uper;
per_type_encoder_f F1AP_TimeToWait_encode_uper;
per_type_decoder_f F1AP_TimeToWait_decode_aper;
per_type_encoder_f F1AP_TimeToWait_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_TimeToWait_H_ */
#include <asn_internal.h>
