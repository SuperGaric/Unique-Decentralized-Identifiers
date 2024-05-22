/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -gen-PER -D src`
 */

#ifndef _Ngap_RRCContainer_H_
#define _Ngap_RRCContainer_H_

#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Ngap_RRCContainer */
typedef OCTET_STRING_t Ngap_RRCContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_RRCContainer;
asn_struct_free_f Ngap_RRCContainer_free;
asn_struct_print_f Ngap_RRCContainer_print;
asn_constr_check_f Ngap_RRCContainer_constraint;
ber_type_decoder_f Ngap_RRCContainer_decode_ber;
der_type_encoder_f Ngap_RRCContainer_encode_der;
xer_type_decoder_f Ngap_RRCContainer_decode_xer;
xer_type_encoder_f Ngap_RRCContainer_encode_xer;
oer_type_decoder_f Ngap_RRCContainer_decode_oer;
oer_type_encoder_f Ngap_RRCContainer_encode_oer;
per_type_decoder_f Ngap_RRCContainer_decode_uper;
per_type_encoder_f Ngap_RRCContainer_encode_uper;
per_type_decoder_f Ngap_RRCContainer_decode_aper;
per_type_encoder_f Ngap_RRCContainer_encode_aper;

#ifdef __cplusplus
}
#endif

#endif /* _Ngap_RRCContainer_H_ */
#include <asn_internal.h>