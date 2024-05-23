/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_ReportingPeriodicity_H_
#define	_F1AP_ReportingPeriodicity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_ReportingPeriodicity {
	F1AP_ReportingPeriodicity_ms500	= 0,
	F1AP_ReportingPeriodicity_ms1000	= 1,
	F1AP_ReportingPeriodicity_ms2000	= 2,
	F1AP_ReportingPeriodicity_ms5000	= 3,
	F1AP_ReportingPeriodicity_ms10000	= 4
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_ReportingPeriodicity;

/* F1AP_ReportingPeriodicity */
typedef long	 F1AP_ReportingPeriodicity_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_F1AP_ReportingPeriodicity_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_F1AP_ReportingPeriodicity;
extern const asn_INTEGER_specifics_t asn_SPC_F1AP_ReportingPeriodicity_specs_1;
asn_struct_free_f F1AP_ReportingPeriodicity_free;
asn_struct_print_f F1AP_ReportingPeriodicity_print;
asn_constr_check_f F1AP_ReportingPeriodicity_constraint;
xer_type_decoder_f F1AP_ReportingPeriodicity_decode_xer;
xer_type_encoder_f F1AP_ReportingPeriodicity_encode_xer;
per_type_decoder_f F1AP_ReportingPeriodicity_decode_uper;
per_type_encoder_f F1AP_ReportingPeriodicity_encode_uper;
per_type_decoder_f F1AP_ReportingPeriodicity_decode_aper;
per_type_encoder_f F1AP_ReportingPeriodicity_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_ReportingPeriodicity_H_ */
#include <asn_internal.h>
