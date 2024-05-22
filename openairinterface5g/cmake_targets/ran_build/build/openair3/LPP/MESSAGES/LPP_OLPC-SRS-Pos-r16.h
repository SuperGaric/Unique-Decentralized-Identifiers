/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_OLPC_SRS_Pos_r16_H_
#define	_LPP_OLPC_SRS_Pos_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_OLPC_SRS_Pos_r16__olpc_SRS_PosBasedOnPRS_Serving_r16 {
	LPP_OLPC_SRS_Pos_r16__olpc_SRS_PosBasedOnPRS_Serving_r16_supported	= 0
} e_LPP_OLPC_SRS_Pos_r16__olpc_SRS_PosBasedOnPRS_Serving_r16;
typedef enum LPP_OLPC_SRS_Pos_r16__olpc_SRS_PosBasedOnSSB_Neigh_r16 {
	LPP_OLPC_SRS_Pos_r16__olpc_SRS_PosBasedOnSSB_Neigh_r16_supported	= 0
} e_LPP_OLPC_SRS_Pos_r16__olpc_SRS_PosBasedOnSSB_Neigh_r16;
typedef enum LPP_OLPC_SRS_Pos_r16__olpc_SRS_PosBasedOnPRS_Neigh_r16 {
	LPP_OLPC_SRS_Pos_r16__olpc_SRS_PosBasedOnPRS_Neigh_r16_supported	= 0
} e_LPP_OLPC_SRS_Pos_r16__olpc_SRS_PosBasedOnPRS_Neigh_r16;
typedef enum LPP_OLPC_SRS_Pos_r16__maxNumberPathLossEstimatePerServing_r16 {
	LPP_OLPC_SRS_Pos_r16__maxNumberPathLossEstimatePerServing_r16_n1	= 0,
	LPP_OLPC_SRS_Pos_r16__maxNumberPathLossEstimatePerServing_r16_n4	= 1,
	LPP_OLPC_SRS_Pos_r16__maxNumberPathLossEstimatePerServing_r16_n8	= 2,
	LPP_OLPC_SRS_Pos_r16__maxNumberPathLossEstimatePerServing_r16_n16	= 3
} e_LPP_OLPC_SRS_Pos_r16__maxNumberPathLossEstimatePerServing_r16;

/* LPP_OLPC-SRS-Pos-r16 */
typedef struct LPP_OLPC_SRS_Pos_r16 {
	long	*olpc_SRS_PosBasedOnPRS_Serving_r16;	/* OPTIONAL */
	long	*olpc_SRS_PosBasedOnSSB_Neigh_r16;	/* OPTIONAL */
	long	*olpc_SRS_PosBasedOnPRS_Neigh_r16;	/* OPTIONAL */
	long	*maxNumberPathLossEstimatePerServing_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_OLPC_SRS_Pos_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_olpc_SRS_PosBasedOnPRS_Serving_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_olpc_SRS_PosBasedOnSSB_Neigh_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_olpc_SRS_PosBasedOnPRS_Neigh_r16_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_maxNumberPathLossEstimatePerServing_r16_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_OLPC_SRS_Pos_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_OLPC_SRS_Pos_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_OLPC_SRS_Pos_r16_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_OLPC_SRS_Pos_r16_H_ */
#include <asn_internal.h>