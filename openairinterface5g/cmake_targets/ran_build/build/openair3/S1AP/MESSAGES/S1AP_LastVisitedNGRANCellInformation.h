/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#ifndef	_S1AP_LastVisitedNGRANCellInformation_H_
#define	_S1AP_LastVisitedNGRANCellInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_LastVisitedNGRANCellInformation */
typedef OCTET_STRING_t	 S1AP_LastVisitedNGRANCellInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_LastVisitedNGRANCellInformation;
asn_struct_free_f S1AP_LastVisitedNGRANCellInformation_free;
asn_struct_print_f S1AP_LastVisitedNGRANCellInformation_print;
asn_constr_check_f S1AP_LastVisitedNGRANCellInformation_constraint;
xer_type_decoder_f S1AP_LastVisitedNGRANCellInformation_decode_xer;
xer_type_encoder_f S1AP_LastVisitedNGRANCellInformation_encode_xer;
per_type_decoder_f S1AP_LastVisitedNGRANCellInformation_decode_uper;
per_type_encoder_f S1AP_LastVisitedNGRANCellInformation_encode_uper;
per_type_decoder_f S1AP_LastVisitedNGRANCellInformation_decode_aper;
per_type_encoder_f S1AP_LastVisitedNGRANCellInformation_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_LastVisitedNGRANCellInformation_H_ */
#include <asn_internal.h>