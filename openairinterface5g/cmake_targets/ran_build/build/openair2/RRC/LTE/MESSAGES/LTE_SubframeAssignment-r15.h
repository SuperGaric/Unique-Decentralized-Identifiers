/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SubframeAssignment_r15_H_
#define	_LTE_SubframeAssignment_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SubframeAssignment_r15 {
	LTE_SubframeAssignment_r15_sa0	= 0,
	LTE_SubframeAssignment_r15_sa1	= 1,
	LTE_SubframeAssignment_r15_sa2	= 2,
	LTE_SubframeAssignment_r15_sa3	= 3,
	LTE_SubframeAssignment_r15_sa4	= 4,
	LTE_SubframeAssignment_r15_sa5	= 5,
	LTE_SubframeAssignment_r15_sa6	= 6
} e_LTE_SubframeAssignment_r15;

/* LTE_SubframeAssignment-r15 */
typedef long	 LTE_SubframeAssignment_r15_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_SubframeAssignment_r15_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_SubframeAssignment_r15;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_SubframeAssignment_r15_specs_1;
asn_struct_free_f LTE_SubframeAssignment_r15_free;
asn_struct_print_f LTE_SubframeAssignment_r15_print;
asn_constr_check_f LTE_SubframeAssignment_r15_constraint;
xer_type_decoder_f LTE_SubframeAssignment_r15_decode_xer;
xer_type_encoder_f LTE_SubframeAssignment_r15_encode_xer;
per_type_decoder_f LTE_SubframeAssignment_r15_decode_uper;
per_type_encoder_f LTE_SubframeAssignment_r15_encode_uper;
per_type_decoder_f LTE_SubframeAssignment_r15_decode_aper;
per_type_encoder_f LTE_SubframeAssignment_r15_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SubframeAssignment_r15_H_ */
#include <asn_internal.h>
