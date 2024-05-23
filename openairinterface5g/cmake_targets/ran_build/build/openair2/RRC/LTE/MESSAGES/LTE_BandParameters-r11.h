/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_BandParameters_r11_H_
#define	_LTE_BandParameters_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_FreqBandIndicator-r11.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_BandParameters_r11__supportedCSI_Proc_r11 {
	LTE_BandParameters_r11__supportedCSI_Proc_r11_n1	= 0,
	LTE_BandParameters_r11__supportedCSI_Proc_r11_n3	= 1,
	LTE_BandParameters_r11__supportedCSI_Proc_r11_n4	= 2
} e_LTE_BandParameters_r11__supportedCSI_Proc_r11;

/* Forward declarations */
struct LTE_BandParametersUL_r10;
struct LTE_BandParametersDL_r10;

/* LTE_BandParameters-r11 */
typedef struct LTE_BandParameters_r11 {
	LTE_FreqBandIndicator_r11_t	 bandEUTRA_r11;
	struct LTE_BandParametersUL_r10	*bandParametersUL_r11;	/* OPTIONAL */
	struct LTE_BandParametersDL_r10	*bandParametersDL_r11;	/* OPTIONAL */
	long	*supportedCSI_Proc_r11;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BandParameters_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_supportedCSI_Proc_r11_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BandParameters_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_BandParameters_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_BandParameters_r11_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_BandParametersUL-r10.h"
#include "LTE_BandParametersDL-r10.h"

#endif	/* _LTE_BandParameters_r11_H_ */
#include <asn_internal.h>
