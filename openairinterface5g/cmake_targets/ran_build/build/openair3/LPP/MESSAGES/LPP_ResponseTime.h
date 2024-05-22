/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_ResponseTime_H_
#define	_LPP_ResponseTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_ResponseTime__ext2__unit_r15 {
	LPP_ResponseTime__ext2__unit_r15_ten_seconds	= 0
	/*
	 * Enumeration is extensible
	 */
} e_LPP_ResponseTime__ext2__unit_r15;

/* LPP_ResponseTime */
typedef struct LPP_ResponseTime {
	long	 time;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LPP_ResponseTime__ext1 {
		long	*responseTimeEarlyFix_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LPP_ResponseTime__ext2 {
		long	*unit_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_ResponseTime_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_unit_r15_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_ResponseTime;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_ResponseTime_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_ResponseTime_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_ResponseTime_H_ */
#include <asn_internal.h>
