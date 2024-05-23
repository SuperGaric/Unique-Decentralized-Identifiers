/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#ifndef	_X2AP_HandoverReportType_H_
#define	_X2AP_HandoverReportType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_HandoverReportType {
	X2AP_HandoverReportType_hoTooEarly	= 0,
	X2AP_HandoverReportType_hoToWrongCell	= 1,
	/*
	 * Enumeration is extensible
	 */
	X2AP_HandoverReportType_interRATpingpong	= 2
} e_X2AP_HandoverReportType;

/* X2AP_HandoverReportType */
typedef long	 X2AP_HandoverReportType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_HandoverReportType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_HandoverReportType;
extern const asn_INTEGER_specifics_t asn_SPC_X2AP_HandoverReportType_specs_1;
asn_struct_free_f X2AP_HandoverReportType_free;
asn_struct_print_f X2AP_HandoverReportType_print;
asn_constr_check_f X2AP_HandoverReportType_constraint;
xer_type_decoder_f X2AP_HandoverReportType_decode_xer;
xer_type_encoder_f X2AP_HandoverReportType_encode_xer;
per_type_decoder_f X2AP_HandoverReportType_decode_uper;
per_type_encoder_f X2AP_HandoverReportType_encode_uper;
per_type_decoder_f X2AP_HandoverReportType_decode_aper;
per_type_encoder_f X2AP_HandoverReportType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_HandoverReportType_H_ */
#include <asn_internal.h>
