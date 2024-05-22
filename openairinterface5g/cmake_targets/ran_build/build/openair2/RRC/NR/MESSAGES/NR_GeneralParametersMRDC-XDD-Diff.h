/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_GeneralParametersMRDC_XDD_Diff_H_
#define	_NR_GeneralParametersMRDC_XDD_Diff_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_GeneralParametersMRDC_XDD_Diff__splitSRB_WithOneUL_Path {
	NR_GeneralParametersMRDC_XDD_Diff__splitSRB_WithOneUL_Path_supported	= 0
} e_NR_GeneralParametersMRDC_XDD_Diff__splitSRB_WithOneUL_Path;
typedef enum NR_GeneralParametersMRDC_XDD_Diff__splitDRB_withUL_Both_MCG_SCG {
	NR_GeneralParametersMRDC_XDD_Diff__splitDRB_withUL_Both_MCG_SCG_supported	= 0
} e_NR_GeneralParametersMRDC_XDD_Diff__splitDRB_withUL_Both_MCG_SCG;
typedef enum NR_GeneralParametersMRDC_XDD_Diff__srb3 {
	NR_GeneralParametersMRDC_XDD_Diff__srb3_supported	= 0
} e_NR_GeneralParametersMRDC_XDD_Diff__srb3;
typedef enum NR_GeneralParametersMRDC_XDD_Diff__dummy {
	NR_GeneralParametersMRDC_XDD_Diff__dummy_supported	= 0
} e_NR_GeneralParametersMRDC_XDD_Diff__dummy;

/* NR_GeneralParametersMRDC-XDD-Diff */
typedef struct NR_GeneralParametersMRDC_XDD_Diff {
	long	*splitSRB_WithOneUL_Path;	/* OPTIONAL */
	long	*splitDRB_withUL_Both_MCG_SCG;	/* OPTIONAL */
	long	*srb3;	/* OPTIONAL */
	long	*dummy;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_GeneralParametersMRDC_XDD_Diff_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_splitSRB_WithOneUL_Path_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_splitDRB_withUL_Both_MCG_SCG_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_srb3_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dummy_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_GeneralParametersMRDC_XDD_Diff;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_GeneralParametersMRDC_XDD_Diff_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_GeneralParametersMRDC_XDD_Diff_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_GeneralParametersMRDC_XDD_Diff_H_ */
#include <asn_internal.h>
