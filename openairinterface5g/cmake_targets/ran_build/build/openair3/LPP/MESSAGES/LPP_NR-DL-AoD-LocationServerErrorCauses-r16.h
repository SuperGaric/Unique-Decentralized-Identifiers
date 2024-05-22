/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_NR_DL_AoD_LocationServerErrorCauses_r16_H_
#define	_LPP_NR_DL_AoD_LocationServerErrorCauses_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_NR_DL_AoD_LocationServerErrorCauses_r16__cause_r16 {
	LPP_NR_DL_AoD_LocationServerErrorCauses_r16__cause_r16_undefined	= 0,
	LPP_NR_DL_AoD_LocationServerErrorCauses_r16__cause_r16_assistanceDataNotSupportedByServer	= 1,
	LPP_NR_DL_AoD_LocationServerErrorCauses_r16__cause_r16_assistanceDataSupportedButCurrentlyNotAvailableByServer	= 2,
	LPP_NR_DL_AoD_LocationServerErrorCauses_r16__cause_r16_notProvidedAssistanceDataNotSupportedByServer	= 3
	/*
	 * Enumeration is extensible
	 */
} e_LPP_NR_DL_AoD_LocationServerErrorCauses_r16__cause_r16;

/* LPP_NR-DL-AoD-LocationServerErrorCauses-r16 */
typedef struct LPP_NR_DL_AoD_LocationServerErrorCauses_r16 {
	long	 cause_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_NR_DL_AoD_LocationServerErrorCauses_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_cause_r16_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_NR_DL_AoD_LocationServerErrorCauses_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_NR_DL_AoD_LocationServerErrorCauses_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_NR_DL_AoD_LocationServerErrorCauses_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_NR_DL_AoD_LocationServerErrorCauses_r16_H_ */
#include <asn_internal.h>
