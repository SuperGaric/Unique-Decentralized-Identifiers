/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SL_V2X_TxProfile_r15_H_
#define	_LTE_SL_V2X_TxProfile_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_V2X_TxProfile_r15 {
	LTE_SL_V2X_TxProfile_r15_rel14	= 0,
	LTE_SL_V2X_TxProfile_r15_rel15	= 1,
	LTE_SL_V2X_TxProfile_r15_spare6	= 2,
	LTE_SL_V2X_TxProfile_r15_spare5	= 3,
	LTE_SL_V2X_TxProfile_r15_spare4	= 4,
	LTE_SL_V2X_TxProfile_r15_spare3	= 5,
	LTE_SL_V2X_TxProfile_r15_spare2	= 6,
	LTE_SL_V2X_TxProfile_r15_spare1	= 7
	/*
	 * Enumeration is extensible
	 */
} e_LTE_SL_V2X_TxProfile_r15;

/* LTE_SL-V2X-TxProfile-r15 */
typedef long	 LTE_SL_V2X_TxProfile_r15_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_SL_V2X_TxProfile_r15_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_V2X_TxProfile_r15;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_SL_V2X_TxProfile_r15_specs_1;
asn_struct_free_f LTE_SL_V2X_TxProfile_r15_free;
asn_struct_print_f LTE_SL_V2X_TxProfile_r15_print;
asn_constr_check_f LTE_SL_V2X_TxProfile_r15_constraint;
xer_type_decoder_f LTE_SL_V2X_TxProfile_r15_decode_xer;
xer_type_encoder_f LTE_SL_V2X_TxProfile_r15_encode_xer;
per_type_decoder_f LTE_SL_V2X_TxProfile_r15_decode_uper;
per_type_encoder_f LTE_SL_V2X_TxProfile_r15_encode_uper;
per_type_decoder_f LTE_SL_V2X_TxProfile_r15_decode_aper;
per_type_encoder_f LTE_SL_V2X_TxProfile_r15_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SL_V2X_TxProfile_r15_H_ */
#include <asn_internal.h>
