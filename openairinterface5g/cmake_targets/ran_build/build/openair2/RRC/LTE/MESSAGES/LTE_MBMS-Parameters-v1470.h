/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_MBMS_Parameters_v1470_H_
#define	_LTE_MBMS_Parameters_v1470_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MBMS_Parameters_v1470__mbms_MaxBW_r14_PR {
	LTE_MBMS_Parameters_v1470__mbms_MaxBW_r14_PR_NOTHING,	/* No components present */
	LTE_MBMS_Parameters_v1470__mbms_MaxBW_r14_PR_implicitValue,
	LTE_MBMS_Parameters_v1470__mbms_MaxBW_r14_PR_explicitValue
} LTE_MBMS_Parameters_v1470__mbms_MaxBW_r14_PR;
typedef enum LTE_MBMS_Parameters_v1470__mbms_ScalingFactor1dot25_r14 {
	LTE_MBMS_Parameters_v1470__mbms_ScalingFactor1dot25_r14_n3	= 0,
	LTE_MBMS_Parameters_v1470__mbms_ScalingFactor1dot25_r14_n6	= 1,
	LTE_MBMS_Parameters_v1470__mbms_ScalingFactor1dot25_r14_n9	= 2,
	LTE_MBMS_Parameters_v1470__mbms_ScalingFactor1dot25_r14_n12	= 3
} e_LTE_MBMS_Parameters_v1470__mbms_ScalingFactor1dot25_r14;
typedef enum LTE_MBMS_Parameters_v1470__mbms_ScalingFactor7dot5_r14 {
	LTE_MBMS_Parameters_v1470__mbms_ScalingFactor7dot5_r14_n1	= 0,
	LTE_MBMS_Parameters_v1470__mbms_ScalingFactor7dot5_r14_n2	= 1,
	LTE_MBMS_Parameters_v1470__mbms_ScalingFactor7dot5_r14_n3	= 2,
	LTE_MBMS_Parameters_v1470__mbms_ScalingFactor7dot5_r14_n4	= 3
} e_LTE_MBMS_Parameters_v1470__mbms_ScalingFactor7dot5_r14;

/* LTE_MBMS-Parameters-v1470 */
typedef struct LTE_MBMS_Parameters_v1470 {
	struct LTE_MBMS_Parameters_v1470__mbms_MaxBW_r14 {
		LTE_MBMS_Parameters_v1470__mbms_MaxBW_r14_PR present;
		union LTE_MBMS_Parameters_v1470__LTE_mbms_MaxBW_r14_u {
			NULL_t	 implicitValue;
			long	 explicitValue;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} mbms_MaxBW_r14;
	long	*mbms_ScalingFactor1dot25_r14;	/* OPTIONAL */
	long	*mbms_ScalingFactor7dot5_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MBMS_Parameters_v1470_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mbms_ScalingFactor1dot25_r14_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mbms_ScalingFactor7dot5_r14_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MBMS_Parameters_v1470;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MBMS_Parameters_v1470_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MBMS_Parameters_v1470_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MBMS_Parameters_v1470_H_ */
#include <asn_internal.h>
