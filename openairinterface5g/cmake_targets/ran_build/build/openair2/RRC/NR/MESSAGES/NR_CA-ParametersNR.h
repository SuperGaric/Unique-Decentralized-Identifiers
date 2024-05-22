/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_CA_ParametersNR_H_
#define	_NR_CA_ParametersNR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CA_ParametersNR__dummy {
	NR_CA_ParametersNR__dummy_supported	= 0
} e_NR_CA_ParametersNR__dummy;
typedef enum NR_CA_ParametersNR__parallelTxSRS_PUCCH_PUSCH {
	NR_CA_ParametersNR__parallelTxSRS_PUCCH_PUSCH_supported	= 0
} e_NR_CA_ParametersNR__parallelTxSRS_PUCCH_PUSCH;
typedef enum NR_CA_ParametersNR__parallelTxPRACH_SRS_PUCCH_PUSCH {
	NR_CA_ParametersNR__parallelTxPRACH_SRS_PUCCH_PUSCH_supported	= 0
} e_NR_CA_ParametersNR__parallelTxPRACH_SRS_PUCCH_PUSCH;
typedef enum NR_CA_ParametersNR__simultaneousRxTxInterBandCA {
	NR_CA_ParametersNR__simultaneousRxTxInterBandCA_supported	= 0
} e_NR_CA_ParametersNR__simultaneousRxTxInterBandCA;
typedef enum NR_CA_ParametersNR__simultaneousRxTxSUL {
	NR_CA_ParametersNR__simultaneousRxTxSUL_supported	= 0
} e_NR_CA_ParametersNR__simultaneousRxTxSUL;
typedef enum NR_CA_ParametersNR__diffNumerologyAcrossPUCCH_Group {
	NR_CA_ParametersNR__diffNumerologyAcrossPUCCH_Group_supported	= 0
} e_NR_CA_ParametersNR__diffNumerologyAcrossPUCCH_Group;
typedef enum NR_CA_ParametersNR__diffNumerologyWithinPUCCH_GroupSmallerSCS {
	NR_CA_ParametersNR__diffNumerologyWithinPUCCH_GroupSmallerSCS_supported	= 0
} e_NR_CA_ParametersNR__diffNumerologyWithinPUCCH_GroupSmallerSCS;
typedef enum NR_CA_ParametersNR__supportedNumberTAG {
	NR_CA_ParametersNR__supportedNumberTAG_n2	= 0,
	NR_CA_ParametersNR__supportedNumberTAG_n3	= 1,
	NR_CA_ParametersNR__supportedNumberTAG_n4	= 2
} e_NR_CA_ParametersNR__supportedNumberTAG;

/* NR_CA-ParametersNR */
typedef struct NR_CA_ParametersNR {
	long	*dummy;	/* OPTIONAL */
	long	*parallelTxSRS_PUCCH_PUSCH;	/* OPTIONAL */
	long	*parallelTxPRACH_SRS_PUCCH_PUSCH;	/* OPTIONAL */
	long	*simultaneousRxTxInterBandCA;	/* OPTIONAL */
	long	*simultaneousRxTxSUL;	/* OPTIONAL */
	long	*diffNumerologyAcrossPUCCH_Group;	/* OPTIONAL */
	long	*diffNumerologyWithinPUCCH_GroupSmallerSCS;	/* OPTIONAL */
	long	*supportedNumberTAG;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CA_ParametersNR_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dummy_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_parallelTxSRS_PUCCH_PUSCH_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_parallelTxPRACH_SRS_PUCCH_PUSCH_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_simultaneousRxTxInterBandCA_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_simultaneousRxTxSUL_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_diffNumerologyAcrossPUCCH_Group_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_diffNumerologyWithinPUCCH_GroupSmallerSCS_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_supportedNumberTAG_16;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_CA_ParametersNR;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CA_ParametersNR_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CA_ParametersNR_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_CA_ParametersNR_H_ */
#include <asn_internal.h>
