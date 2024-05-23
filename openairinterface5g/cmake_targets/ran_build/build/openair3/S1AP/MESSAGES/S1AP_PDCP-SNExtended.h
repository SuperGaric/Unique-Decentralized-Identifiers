/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#ifndef	_S1AP_PDCP_SNExtended_H_
#define	_S1AP_PDCP_SNExtended_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_PDCP-SNExtended */
typedef long	 S1AP_PDCP_SNExtended_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_PDCP_SNExtended_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_PDCP_SNExtended;
asn_struct_free_f S1AP_PDCP_SNExtended_free;
asn_struct_print_f S1AP_PDCP_SNExtended_print;
asn_constr_check_f S1AP_PDCP_SNExtended_constraint;
xer_type_decoder_f S1AP_PDCP_SNExtended_decode_xer;
xer_type_encoder_f S1AP_PDCP_SNExtended_encode_xer;
per_type_decoder_f S1AP_PDCP_SNExtended_decode_uper;
per_type_encoder_f S1AP_PDCP_SNExtended_encode_uper;
per_type_decoder_f S1AP_PDCP_SNExtended_decode_aper;
per_type_encoder_f S1AP_PDCP_SNExtended_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_PDCP_SNExtended_H_ */
#include <asn_internal.h>
