/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_RRCContainer_RRCSetupComplete_H_
#define	_F1AP_RRCContainer_RRCSetupComplete_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* F1AP_RRCContainer-RRCSetupComplete */
typedef OCTET_STRING_t	 F1AP_RRCContainer_RRCSetupComplete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_RRCContainer_RRCSetupComplete;
asn_struct_free_f F1AP_RRCContainer_RRCSetupComplete_free;
asn_struct_print_f F1AP_RRCContainer_RRCSetupComplete_print;
asn_constr_check_f F1AP_RRCContainer_RRCSetupComplete_constraint;
xer_type_decoder_f F1AP_RRCContainer_RRCSetupComplete_decode_xer;
xer_type_encoder_f F1AP_RRCContainer_RRCSetupComplete_encode_xer;
per_type_decoder_f F1AP_RRCContainer_RRCSetupComplete_decode_uper;
per_type_encoder_f F1AP_RRCContainer_RRCSetupComplete_encode_uper;
per_type_decoder_f F1AP_RRCContainer_RRCSetupComplete_decode_aper;
per_type_encoder_f F1AP_RRCContainer_RRCSetupComplete_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_RRCContainer_RRCSetupComplete_H_ */
#include <asn_internal.h>
