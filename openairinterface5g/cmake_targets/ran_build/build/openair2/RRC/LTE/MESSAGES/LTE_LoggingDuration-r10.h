/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_LoggingDuration_r10_H_
#define	_LTE_LoggingDuration_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_LoggingDuration_r10 {
	LTE_LoggingDuration_r10_min10	= 0,
	LTE_LoggingDuration_r10_min20	= 1,
	LTE_LoggingDuration_r10_min40	= 2,
	LTE_LoggingDuration_r10_min60	= 3,
	LTE_LoggingDuration_r10_min90	= 4,
	LTE_LoggingDuration_r10_min120	= 5,
	LTE_LoggingDuration_r10_spare2	= 6,
	LTE_LoggingDuration_r10_spare1	= 7
} e_LTE_LoggingDuration_r10;

/* LTE_LoggingDuration-r10 */
typedef long	 LTE_LoggingDuration_r10_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_LoggingDuration_r10_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_LoggingDuration_r10;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_LoggingDuration_r10_specs_1;
asn_struct_free_f LTE_LoggingDuration_r10_free;
asn_struct_print_f LTE_LoggingDuration_r10_print;
asn_constr_check_f LTE_LoggingDuration_r10_constraint;
xer_type_decoder_f LTE_LoggingDuration_r10_decode_xer;
xer_type_encoder_f LTE_LoggingDuration_r10_encode_xer;
per_type_decoder_f LTE_LoggingDuration_r10_decode_uper;
per_type_encoder_f LTE_LoggingDuration_r10_encode_uper;
per_type_decoder_f LTE_LoggingDuration_r10_decode_aper;
per_type_encoder_f LTE_LoggingDuration_r10_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_LoggingDuration_r10_H_ */
#include <asn_internal.h>
