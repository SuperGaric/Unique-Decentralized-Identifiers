/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SI_Periodicity_r12_H_
#define	_LTE_SI_Periodicity_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SI_Periodicity_r12 {
	LTE_SI_Periodicity_r12_rf8	= 0,
	LTE_SI_Periodicity_r12_rf16	= 1,
	LTE_SI_Periodicity_r12_rf32	= 2,
	LTE_SI_Periodicity_r12_rf64	= 3,
	LTE_SI_Periodicity_r12_rf128	= 4,
	LTE_SI_Periodicity_r12_rf256	= 5,
	LTE_SI_Periodicity_r12_rf512	= 6
} e_LTE_SI_Periodicity_r12;

/* LTE_SI-Periodicity-r12 */
typedef long	 LTE_SI_Periodicity_r12_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_SI_Periodicity_r12_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_SI_Periodicity_r12;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_SI_Periodicity_r12_specs_1;
asn_struct_free_f LTE_SI_Periodicity_r12_free;
asn_struct_print_f LTE_SI_Periodicity_r12_print;
asn_constr_check_f LTE_SI_Periodicity_r12_constraint;
xer_type_decoder_f LTE_SI_Periodicity_r12_decode_xer;
xer_type_encoder_f LTE_SI_Periodicity_r12_encode_xer;
per_type_decoder_f LTE_SI_Periodicity_r12_decode_uper;
per_type_encoder_f LTE_SI_Periodicity_r12_encode_uper;
per_type_decoder_f LTE_SI_Periodicity_r12_decode_aper;
per_type_encoder_f LTE_SI_Periodicity_r12_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SI_Periodicity_r12_H_ */
#include <asn_internal.h>
