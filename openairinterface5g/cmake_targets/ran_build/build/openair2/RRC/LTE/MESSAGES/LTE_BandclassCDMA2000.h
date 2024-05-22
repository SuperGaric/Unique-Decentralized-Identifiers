/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_BandclassCDMA2000_H_
#define	_LTE_BandclassCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_BandclassCDMA2000 {
	LTE_BandclassCDMA2000_bc0	= 0,
	LTE_BandclassCDMA2000_bc1	= 1,
	LTE_BandclassCDMA2000_bc2	= 2,
	LTE_BandclassCDMA2000_bc3	= 3,
	LTE_BandclassCDMA2000_bc4	= 4,
	LTE_BandclassCDMA2000_bc5	= 5,
	LTE_BandclassCDMA2000_bc6	= 6,
	LTE_BandclassCDMA2000_bc7	= 7,
	LTE_BandclassCDMA2000_bc8	= 8,
	LTE_BandclassCDMA2000_bc9	= 9,
	LTE_BandclassCDMA2000_bc10	= 10,
	LTE_BandclassCDMA2000_bc11	= 11,
	LTE_BandclassCDMA2000_bc12	= 12,
	LTE_BandclassCDMA2000_bc13	= 13,
	LTE_BandclassCDMA2000_bc14	= 14,
	LTE_BandclassCDMA2000_bc15	= 15,
	LTE_BandclassCDMA2000_bc16	= 16,
	LTE_BandclassCDMA2000_bc17	= 17,
	LTE_BandclassCDMA2000_bc18_v9a0	= 18,
	LTE_BandclassCDMA2000_bc19_v9a0	= 19,
	LTE_BandclassCDMA2000_bc20_v9a0	= 20,
	LTE_BandclassCDMA2000_bc21_v9a0	= 21,
	LTE_BandclassCDMA2000_spare10	= 22,
	LTE_BandclassCDMA2000_spare9	= 23,
	LTE_BandclassCDMA2000_spare8	= 24,
	LTE_BandclassCDMA2000_spare7	= 25,
	LTE_BandclassCDMA2000_spare6	= 26,
	LTE_BandclassCDMA2000_spare5	= 27,
	LTE_BandclassCDMA2000_spare4	= 28,
	LTE_BandclassCDMA2000_spare3	= 29,
	LTE_BandclassCDMA2000_spare2	= 30,
	LTE_BandclassCDMA2000_spare1	= 31
	/*
	 * Enumeration is extensible
	 */
} e_LTE_BandclassCDMA2000;

/* LTE_BandclassCDMA2000 */
typedef long	 LTE_BandclassCDMA2000_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_BandclassCDMA2000_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_BandclassCDMA2000;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_BandclassCDMA2000_specs_1;
asn_struct_free_f LTE_BandclassCDMA2000_free;
asn_struct_print_f LTE_BandclassCDMA2000_print;
asn_constr_check_f LTE_BandclassCDMA2000_constraint;
xer_type_decoder_f LTE_BandclassCDMA2000_decode_xer;
xer_type_encoder_f LTE_BandclassCDMA2000_encode_xer;
per_type_decoder_f LTE_BandclassCDMA2000_decode_uper;
per_type_encoder_f LTE_BandclassCDMA2000_encode_uper;
per_type_decoder_f LTE_BandclassCDMA2000_decode_aper;
per_type_encoder_f LTE_BandclassCDMA2000_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_BandclassCDMA2000_H_ */
#include <asn_internal.h>