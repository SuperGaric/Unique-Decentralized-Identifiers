/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SBCCH_SL_BCH_MessageType_H_
#define	_LTE_SBCCH_SL_BCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MasterInformationBlock-SL.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_SBCCH-SL-BCH-MessageType */
typedef LTE_MasterInformationBlock_SL_t	 LTE_SBCCH_SL_BCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SBCCH_SL_BCH_MessageType;
asn_struct_free_f LTE_SBCCH_SL_BCH_MessageType_free;
asn_struct_print_f LTE_SBCCH_SL_BCH_MessageType_print;
asn_constr_check_f LTE_SBCCH_SL_BCH_MessageType_constraint;
xer_type_decoder_f LTE_SBCCH_SL_BCH_MessageType_decode_xer;
xer_type_encoder_f LTE_SBCCH_SL_BCH_MessageType_encode_xer;
per_type_decoder_f LTE_SBCCH_SL_BCH_MessageType_decode_uper;
per_type_encoder_f LTE_SBCCH_SL_BCH_MessageType_encode_uper;
per_type_decoder_f LTE_SBCCH_SL_BCH_MessageType_decode_aper;
per_type_encoder_f LTE_SBCCH_SL_BCH_MessageType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SBCCH_SL_BCH_MessageType_H_ */
#include <asn_internal.h>
