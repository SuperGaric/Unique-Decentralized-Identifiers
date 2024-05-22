/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RAND_CDMA2000_H_
#define	_LTE_RAND_CDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_RAND-CDMA2000 */
typedef BIT_STRING_t	 LTE_RAND_CDMA2000_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_RAND_CDMA2000_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_RAND_CDMA2000;
asn_struct_free_f LTE_RAND_CDMA2000_free;
asn_struct_print_f LTE_RAND_CDMA2000_print;
asn_constr_check_f LTE_RAND_CDMA2000_constraint;
xer_type_decoder_f LTE_RAND_CDMA2000_decode_xer;
xer_type_encoder_f LTE_RAND_CDMA2000_encode_xer;
per_type_decoder_f LTE_RAND_CDMA2000_decode_uper;
per_type_encoder_f LTE_RAND_CDMA2000_encode_uper;
per_type_decoder_f LTE_RAND_CDMA2000_decode_aper;
per_type_encoder_f LTE_RAND_CDMA2000_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RAND_CDMA2000_H_ */
#include <asn_internal.h>