/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_FeatureSetDownlinkId_H_
#define	_NR_FeatureSetDownlinkId_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_FeatureSetDownlinkId */
typedef long	 NR_FeatureSetDownlinkId_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NR_FeatureSetDownlinkId_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NR_FeatureSetDownlinkId;
asn_struct_free_f NR_FeatureSetDownlinkId_free;
asn_struct_print_f NR_FeatureSetDownlinkId_print;
asn_constr_check_f NR_FeatureSetDownlinkId_constraint;
xer_type_decoder_f NR_FeatureSetDownlinkId_decode_xer;
xer_type_encoder_f NR_FeatureSetDownlinkId_encode_xer;
per_type_decoder_f NR_FeatureSetDownlinkId_decode_uper;
per_type_encoder_f NR_FeatureSetDownlinkId_encode_uper;
per_type_decoder_f NR_FeatureSetDownlinkId_decode_aper;
per_type_encoder_f NR_FeatureSetDownlinkId_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_FeatureSetDownlinkId_H_ */
#include <asn_internal.h>
