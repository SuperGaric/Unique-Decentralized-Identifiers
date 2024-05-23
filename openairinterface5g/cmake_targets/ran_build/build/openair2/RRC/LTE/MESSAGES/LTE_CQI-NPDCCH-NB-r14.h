/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CQI_NPDCCH_NB_r14_H_
#define	_LTE_CQI_NPDCCH_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CQI_NPDCCH_NB_r14 {
	LTE_CQI_NPDCCH_NB_r14_noMeasurements	= 0,
	LTE_CQI_NPDCCH_NB_r14_candidateRep_A	= 1,
	LTE_CQI_NPDCCH_NB_r14_candidateRep_B	= 2,
	LTE_CQI_NPDCCH_NB_r14_candidateRep_C	= 3,
	LTE_CQI_NPDCCH_NB_r14_candidateRep_D	= 4,
	LTE_CQI_NPDCCH_NB_r14_candidateRep_E	= 5,
	LTE_CQI_NPDCCH_NB_r14_candidateRep_F	= 6,
	LTE_CQI_NPDCCH_NB_r14_candidateRep_G	= 7,
	LTE_CQI_NPDCCH_NB_r14_candidateRep_H	= 8,
	LTE_CQI_NPDCCH_NB_r14_candidateRep_I	= 9,
	LTE_CQI_NPDCCH_NB_r14_candidateRep_J	= 10,
	LTE_CQI_NPDCCH_NB_r14_candidateRep_K	= 11,
	LTE_CQI_NPDCCH_NB_r14_candidateRep_L	= 12
} e_LTE_CQI_NPDCCH_NB_r14;

/* LTE_CQI-NPDCCH-NB-r14 */
typedef long	 LTE_CQI_NPDCCH_NB_r14_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_CQI_NPDCCH_NB_r14_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_CQI_NPDCCH_NB_r14;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_CQI_NPDCCH_NB_r14_specs_1;
asn_struct_free_f LTE_CQI_NPDCCH_NB_r14_free;
asn_struct_print_f LTE_CQI_NPDCCH_NB_r14_print;
asn_constr_check_f LTE_CQI_NPDCCH_NB_r14_constraint;
xer_type_decoder_f LTE_CQI_NPDCCH_NB_r14_decode_xer;
xer_type_encoder_f LTE_CQI_NPDCCH_NB_r14_encode_xer;
per_type_decoder_f LTE_CQI_NPDCCH_NB_r14_decode_uper;
per_type_encoder_f LTE_CQI_NPDCCH_NB_r14_encode_uper;
per_type_decoder_f LTE_CQI_NPDCCH_NB_r14_decode_aper;
per_type_encoder_f LTE_CQI_NPDCCH_NB_r14_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CQI_NPDCCH_NB_r14_H_ */
#include <asn_internal.h>
