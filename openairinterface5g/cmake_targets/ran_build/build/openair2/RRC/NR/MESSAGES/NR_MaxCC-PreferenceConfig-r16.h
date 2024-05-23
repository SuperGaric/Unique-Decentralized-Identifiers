/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MaxCC_PreferenceConfig_r16_H_
#define	_NR_MaxCC_PreferenceConfig_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MaxCC_PreferenceConfig_r16__maxCC_PreferenceProhibitTimer_r16 {
	NR_MaxCC_PreferenceConfig_r16__maxCC_PreferenceProhibitTimer_r16_s0	= 0,
	NR_MaxCC_PreferenceConfig_r16__maxCC_PreferenceProhibitTimer_r16_s0dot5	= 1,
	NR_MaxCC_PreferenceConfig_r16__maxCC_PreferenceProhibitTimer_r16_s1	= 2,
	NR_MaxCC_PreferenceConfig_r16__maxCC_PreferenceProhibitTimer_r16_s2	= 3,
	NR_MaxCC_PreferenceConfig_r16__maxCC_PreferenceProhibitTimer_r16_s3	= 4,
	NR_MaxCC_PreferenceConfig_r16__maxCC_PreferenceProhibitTimer_r16_s4	= 5,
	NR_MaxCC_PreferenceConfig_r16__maxCC_PreferenceProhibitTimer_r16_s5	= 6,
	NR_MaxCC_PreferenceConfig_r16__maxCC_PreferenceProhibitTimer_r16_s6	= 7,
	NR_MaxCC_PreferenceConfig_r16__maxCC_PreferenceProhibitTimer_r16_s7	= 8,
	NR_MaxCC_PreferenceConfig_r16__maxCC_PreferenceProhibitTimer_r16_s8	= 9,
	NR_MaxCC_PreferenceConfig_r16__maxCC_PreferenceProhibitTimer_r16_s9	= 10,
	NR_MaxCC_PreferenceConfig_r16__maxCC_PreferenceProhibitTimer_r16_s10	= 11,
	NR_MaxCC_PreferenceConfig_r16__maxCC_PreferenceProhibitTimer_r16_s20	= 12,
	NR_MaxCC_PreferenceConfig_r16__maxCC_PreferenceProhibitTimer_r16_s30	= 13,
	NR_MaxCC_PreferenceConfig_r16__maxCC_PreferenceProhibitTimer_r16_spare2	= 14,
	NR_MaxCC_PreferenceConfig_r16__maxCC_PreferenceProhibitTimer_r16_spare1	= 15
} e_NR_MaxCC_PreferenceConfig_r16__maxCC_PreferenceProhibitTimer_r16;

/* NR_MaxCC-PreferenceConfig-r16 */
typedef struct NR_MaxCC_PreferenceConfig_r16 {
	long	 maxCC_PreferenceProhibitTimer_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MaxCC_PreferenceConfig_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxCC_PreferenceProhibitTimer_r16_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_MaxCC_PreferenceConfig_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MaxCC_PreferenceConfig_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MaxCC_PreferenceConfig_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_MaxCC_PreferenceConfig_r16_H_ */
#include <asn_internal.h>
