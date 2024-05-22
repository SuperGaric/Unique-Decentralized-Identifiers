/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_IMS_ParametersCommon_H_
#define	_NR_IMS_ParametersCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_IMS_ParametersCommon__voiceOverEUTRA_5GC {
	NR_IMS_ParametersCommon__voiceOverEUTRA_5GC_supported	= 0
} e_NR_IMS_ParametersCommon__voiceOverEUTRA_5GC;
typedef enum NR_IMS_ParametersCommon__ext1__voiceOverSCG_BearerEUTRA_5GC {
	NR_IMS_ParametersCommon__ext1__voiceOverSCG_BearerEUTRA_5GC_supported	= 0
} e_NR_IMS_ParametersCommon__ext1__voiceOverSCG_BearerEUTRA_5GC;
typedef enum NR_IMS_ParametersCommon__ext2__voiceFallbackIndicationEPS_r16 {
	NR_IMS_ParametersCommon__ext2__voiceFallbackIndicationEPS_r16_supported	= 0
} e_NR_IMS_ParametersCommon__ext2__voiceFallbackIndicationEPS_r16;

/* NR_IMS-ParametersCommon */
typedef struct NR_IMS_ParametersCommon {
	long	*voiceOverEUTRA_5GC;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_IMS_ParametersCommon__ext1 {
		long	*voiceOverSCG_BearerEUTRA_5GC;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_IMS_ParametersCommon__ext2 {
		long	*voiceFallbackIndicationEPS_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_IMS_ParametersCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_voiceOverEUTRA_5GC_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_voiceOverSCG_BearerEUTRA_5GC_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_voiceFallbackIndicationEPS_r16_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_IMS_ParametersCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_IMS_ParametersCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_IMS_ParametersCommon_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_IMS_ParametersCommon_H_ */
#include <asn_internal.h>
