/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SRS_PosResourceSP_r16_H_
#define	_NR_SRS_PosResourceSP_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_r16 {
	NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_r16_n1	= 0,
	NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_r16_n2	= 1,
	NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_r16_n4	= 2,
	NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_r16_n8	= 3,
	NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_r16_n16	= 4,
	NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_r16_n32	= 5,
	NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_r16_n64	= 6
} e_NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_r16;
typedef enum NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16 {
	NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n1	= 0,
	NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n2	= 1,
	NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n3	= 2,
	NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n4	= 3,
	NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n5	= 4,
	NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n6	= 5,
	NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n8	= 6,
	NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n10	= 7,
	NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n12	= 8,
	NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n14	= 9
} e_NR_SRS_PosResourceSP_r16__maxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16;

/* NR_SRS-PosResourceSP-r16 */
typedef struct NR_SRS_PosResourceSP_r16 {
	long	 maxNumberSP_SRS_PosResourcesPerBWP_r16;
	long	 maxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SRS_PosResourceSP_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberSP_SRS_PosResourcesPerBWP_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SRS_PosResourceSP_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SRS_PosResourceSP_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SRS_PosResourceSP_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SRS_PosResourceSP_r16_H_ */
#include <asn_internal.h>
