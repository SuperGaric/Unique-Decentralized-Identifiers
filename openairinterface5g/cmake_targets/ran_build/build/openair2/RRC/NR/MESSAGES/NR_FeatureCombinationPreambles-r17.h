/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_FeatureCombinationPreambles_r17_H_
#define	_NR_FeatureCombinationPreambles_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_FeatureCombination-r17.h"
#include <NativeInteger.h>
#include "NR_RSRP-Range.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__ra_SizeGroupA_r17 {
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__ra_SizeGroupA_r17_b56	= 0,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__ra_SizeGroupA_r17_b144	= 1,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__ra_SizeGroupA_r17_b208	= 2,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__ra_SizeGroupA_r17_b256	= 3,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__ra_SizeGroupA_r17_b282	= 4,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__ra_SizeGroupA_r17_b480	= 5,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__ra_SizeGroupA_r17_b640	= 6,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__ra_SizeGroupA_r17_b800	= 7,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__ra_SizeGroupA_r17_b1000	= 8,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__ra_SizeGroupA_r17_b72	= 9,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__ra_SizeGroupA_r17_spare6	= 10,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__ra_SizeGroupA_r17_spare5	= 11,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__ra_SizeGroupA_r17_spare4	= 12,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__ra_SizeGroupA_r17_spare3	= 13,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__ra_SizeGroupA_r17_spare2	= 14,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__ra_SizeGroupA_r17_spare1	= 15
} e_NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__ra_SizeGroupA_r17;
typedef enum NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__messagePowerOffsetGroupB_r17 {
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__messagePowerOffsetGroupB_r17_minusinfinity	= 0,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__messagePowerOffsetGroupB_r17_dB0	= 1,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__messagePowerOffsetGroupB_r17_dB5	= 2,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__messagePowerOffsetGroupB_r17_dB8	= 3,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__messagePowerOffsetGroupB_r17_dB10	= 4,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__messagePowerOffsetGroupB_r17_dB12	= 5,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__messagePowerOffsetGroupB_r17_dB15	= 6,
	NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__messagePowerOffsetGroupB_r17_dB18	= 7
} e_NR_FeatureCombinationPreambles_r17__groupBconfigured_r17__messagePowerOffsetGroupB_r17;

/* Forward declarations */
struct NR_MsgA_PUSCH_Config_r16;

/* NR_FeatureCombinationPreambles-r17 */
typedef struct NR_FeatureCombinationPreambles_r17 {
	NR_FeatureCombination_r17_t	 featureCombination_r17;
	long	 startPreambleForThisPartition_r17;
	long	 numberOfPreamblesPerSSB_ForThisPartition_r17;
	long	*ssb_SharedRO_MaskIndex_r17;	/* OPTIONAL */
	struct NR_FeatureCombinationPreambles_r17__groupBconfigured_r17 {
		long	 ra_SizeGroupA_r17;
		long	 messagePowerOffsetGroupB_r17;
		long	 numberOfRA_PreamblesGroupA_r17;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *groupBconfigured_r17;
	struct NR_MsgA_PUSCH_Config_r16	*separateMsgA_PUSCH_Config_r17;	/* OPTIONAL */
	NR_RSRP_Range_t	*msgA_RSRP_Threshold_r17;	/* OPTIONAL */
	NR_RSRP_Range_t	*rsrp_ThresholdSSB_r17;	/* OPTIONAL */
	long	*deltaPreamble_r17;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_FeatureCombinationPreambles_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ra_SizeGroupA_r17_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_messagePowerOffsetGroupB_r17_24;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_FeatureCombinationPreambles_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_FeatureCombinationPreambles_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_FeatureCombinationPreambles_r17_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MsgA-PUSCH-Config-r16.h"

#endif	/* _NR_FeatureCombinationPreambles_r17_H_ */
#include <asn_internal.h>
