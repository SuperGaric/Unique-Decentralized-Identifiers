/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_MBMS_ROM_Info_r16_H_
#define	_LTE_MBMS_ROM_Info_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ARFCN-ValueEUTRA-r9.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MBMS_ROM_Info_r16__mbms_ROM_SubcarrierSpacing_r16 {
	LTE_MBMS_ROM_Info_r16__mbms_ROM_SubcarrierSpacing_r16_kHz2dot5	= 0,
	LTE_MBMS_ROM_Info_r16__mbms_ROM_SubcarrierSpacing_r16_kHz0dot37	= 1
} e_LTE_MBMS_ROM_Info_r16__mbms_ROM_SubcarrierSpacing_r16;
typedef enum LTE_MBMS_ROM_Info_r16__mbms_Bandwidth_r16 {
	LTE_MBMS_ROM_Info_r16__mbms_Bandwidth_r16_n6	= 0,
	LTE_MBMS_ROM_Info_r16__mbms_Bandwidth_r16_n15	= 1,
	LTE_MBMS_ROM_Info_r16__mbms_Bandwidth_r16_n25	= 2,
	LTE_MBMS_ROM_Info_r16__mbms_Bandwidth_r16_n50	= 3,
	LTE_MBMS_ROM_Info_r16__mbms_Bandwidth_r16_n75	= 4,
	LTE_MBMS_ROM_Info_r16__mbms_Bandwidth_r16_n100	= 5
} e_LTE_MBMS_ROM_Info_r16__mbms_Bandwidth_r16;

/* LTE_MBMS-ROM-Info-r16 */
typedef struct LTE_MBMS_ROM_Info_r16 {
	LTE_ARFCN_ValueEUTRA_r9_t	 mbms_ROM_Freq_r16;
	long	 mbms_ROM_SubcarrierSpacing_r16;
	long	 mbms_Bandwidth_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MBMS_ROM_Info_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mbms_ROM_SubcarrierSpacing_r16_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mbms_Bandwidth_r16_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MBMS_ROM_Info_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MBMS_ROM_Info_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MBMS_ROM_Info_r16_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MBMS_ROM_Info_r16_H_ */
#include <asn_internal.h>
