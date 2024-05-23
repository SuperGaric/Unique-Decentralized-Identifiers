/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_RxTxReportInterval_r17_H_
#define	_NR_RxTxReportInterval_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_RxTxReportInterval_r17 {
	NR_RxTxReportInterval_r17_ms80	= 0,
	NR_RxTxReportInterval_r17_ms120	= 1,
	NR_RxTxReportInterval_r17_ms160	= 2,
	NR_RxTxReportInterval_r17_ms240	= 3,
	NR_RxTxReportInterval_r17_ms320	= 4,
	NR_RxTxReportInterval_r17_ms480	= 5,
	NR_RxTxReportInterval_r17_ms640	= 6,
	NR_RxTxReportInterval_r17_ms1024	= 7,
	NR_RxTxReportInterval_r17_ms1280	= 8,
	NR_RxTxReportInterval_r17_ms2048	= 9,
	NR_RxTxReportInterval_r17_ms2560	= 10,
	NR_RxTxReportInterval_r17_ms5120	= 11,
	NR_RxTxReportInterval_r17_spare4	= 12,
	NR_RxTxReportInterval_r17_spare3	= 13,
	NR_RxTxReportInterval_r17_spare2	= 14,
	NR_RxTxReportInterval_r17_spare1	= 15
} e_NR_RxTxReportInterval_r17;

/* NR_RxTxReportInterval-r17 */
typedef long	 NR_RxTxReportInterval_r17_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NR_RxTxReportInterval_r17_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NR_RxTxReportInterval_r17;
extern const asn_INTEGER_specifics_t asn_SPC_NR_RxTxReportInterval_r17_specs_1;
asn_struct_free_f NR_RxTxReportInterval_r17_free;
asn_struct_print_f NR_RxTxReportInterval_r17_print;
asn_constr_check_f NR_RxTxReportInterval_r17_constraint;
xer_type_decoder_f NR_RxTxReportInterval_r17_decode_xer;
xer_type_encoder_f NR_RxTxReportInterval_r17_encode_xer;
per_type_decoder_f NR_RxTxReportInterval_r17_decode_uper;
per_type_encoder_f NR_RxTxReportInterval_r17_encode_uper;
per_type_decoder_f NR_RxTxReportInterval_r17_decode_aper;
per_type_encoder_f NR_RxTxReportInterval_r17_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_RxTxReportInterval_r17_H_ */
#include <asn_internal.h>
