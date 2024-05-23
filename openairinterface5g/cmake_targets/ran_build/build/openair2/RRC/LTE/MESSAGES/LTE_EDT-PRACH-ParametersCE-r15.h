/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_EDT_PRACH_ParametersCE_r15_H_
#define	_LTE_EDT_PRACH_ParametersCE_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_EDT_PRACH_ParametersCE_r15__edt_PRACH_ParametersCE_r15__prach_StartingSubframe_r15 {
	LTE_EDT_PRACH_ParametersCE_r15__edt_PRACH_ParametersCE_r15__prach_StartingSubframe_r15_sf2	= 0,
	LTE_EDT_PRACH_ParametersCE_r15__edt_PRACH_ParametersCE_r15__prach_StartingSubframe_r15_sf4	= 1,
	LTE_EDT_PRACH_ParametersCE_r15__edt_PRACH_ParametersCE_r15__prach_StartingSubframe_r15_sf8	= 2,
	LTE_EDT_PRACH_ParametersCE_r15__edt_PRACH_ParametersCE_r15__prach_StartingSubframe_r15_sf16	= 3,
	LTE_EDT_PRACH_ParametersCE_r15__edt_PRACH_ParametersCE_r15__prach_StartingSubframe_r15_sf32	= 4,
	LTE_EDT_PRACH_ParametersCE_r15__edt_PRACH_ParametersCE_r15__prach_StartingSubframe_r15_sf64	= 5,
	LTE_EDT_PRACH_ParametersCE_r15__edt_PRACH_ParametersCE_r15__prach_StartingSubframe_r15_sf128	= 6,
	LTE_EDT_PRACH_ParametersCE_r15__edt_PRACH_ParametersCE_r15__prach_StartingSubframe_r15_sf256	= 7
} e_LTE_EDT_PRACH_ParametersCE_r15__edt_PRACH_ParametersCE_r15__prach_StartingSubframe_r15;

/* LTE_EDT-PRACH-ParametersCE-r15 */
typedef struct LTE_EDT_PRACH_ParametersCE_r15 {
	struct LTE_EDT_PRACH_ParametersCE_r15__edt_PRACH_ParametersCE_r15 {
		long	 prach_ConfigIndex_r15;
		long	 prach_FreqOffset_r15;
		long	*prach_StartingSubframe_r15;	/* OPTIONAL */
		struct LTE_EDT_PRACH_ParametersCE_r15__edt_PRACH_ParametersCE_r15__mpdcch_NarrowbandsToMonitor_r15 {
			A_SEQUENCE_OF(long) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} mpdcch_NarrowbandsToMonitor_r15;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *edt_PRACH_ParametersCE_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_EDT_PRACH_ParametersCE_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_prach_StartingSubframe_r15_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_EDT_PRACH_ParametersCE_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_EDT_PRACH_ParametersCE_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_EDT_PRACH_ParametersCE_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_EDT_PRACH_ParametersCE_r15_H_ */
#include <asn_internal.h>
