/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_ResumeCause_H_
#define	_NR_ResumeCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_ResumeCause {
	NR_ResumeCause_emergency	= 0,
	NR_ResumeCause_highPriorityAccess	= 1,
	NR_ResumeCause_mt_Access	= 2,
	NR_ResumeCause_mo_Signalling	= 3,
	NR_ResumeCause_mo_Data	= 4,
	NR_ResumeCause_mo_VoiceCall	= 5,
	NR_ResumeCause_mo_VideoCall	= 6,
	NR_ResumeCause_mo_SMS	= 7,
	NR_ResumeCause_rna_Update	= 8,
	NR_ResumeCause_mps_PriorityAccess	= 9,
	NR_ResumeCause_mcs_PriorityAccess	= 10,
	NR_ResumeCause_spare1	= 11,
	NR_ResumeCause_spare2	= 12,
	NR_ResumeCause_spare3	= 13,
	NR_ResumeCause_spare4	= 14,
	NR_ResumeCause_spare5	= 15
} e_NR_ResumeCause;

/* NR_ResumeCause */
typedef long	 NR_ResumeCause_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NR_ResumeCause_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NR_ResumeCause;
extern const asn_INTEGER_specifics_t asn_SPC_NR_ResumeCause_specs_1;
asn_struct_free_f NR_ResumeCause_free;
asn_struct_print_f NR_ResumeCause_print;
asn_constr_check_f NR_ResumeCause_constraint;
xer_type_decoder_f NR_ResumeCause_decode_xer;
xer_type_encoder_f NR_ResumeCause_encode_xer;
per_type_decoder_f NR_ResumeCause_decode_uper;
per_type_encoder_f NR_ResumeCause_encode_uper;
per_type_decoder_f NR_ResumeCause_decode_aper;
per_type_encoder_f NR_ResumeCause_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_ResumeCause_H_ */
#include <asn_internal.h>
