/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#ifndef	_E1AP_GNB_CU_UP_Name_H_
#define	_E1AP_GNB_CU_UP_Name_H_


#include <asn_application.h>

/* Including external dependencies */
#include <PrintableString.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E1AP_GNB-CU-UP-Name */
typedef PrintableString_t	 E1AP_GNB_CU_UP_Name_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_E1AP_GNB_CU_UP_Name_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_E1AP_GNB_CU_UP_Name;
asn_struct_free_f E1AP_GNB_CU_UP_Name_free;
asn_struct_print_f E1AP_GNB_CU_UP_Name_print;
asn_constr_check_f E1AP_GNB_CU_UP_Name_constraint;
xer_type_decoder_f E1AP_GNB_CU_UP_Name_decode_xer;
xer_type_encoder_f E1AP_GNB_CU_UP_Name_encode_xer;
per_type_decoder_f E1AP_GNB_CU_UP_Name_decode_uper;
per_type_encoder_f E1AP_GNB_CU_UP_Name_encode_uper;
per_type_decoder_f E1AP_GNB_CU_UP_Name_decode_aper;
per_type_encoder_f E1AP_GNB_CU_UP_Name_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _E1AP_GNB_CU_UP_Name_H_ */
#include <asn_internal.h>