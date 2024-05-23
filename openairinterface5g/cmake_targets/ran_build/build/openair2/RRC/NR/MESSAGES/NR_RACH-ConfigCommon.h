/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_RACH_ConfigCommon_H_
#define	_NR_RACH_ConfigCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_RACH-ConfigGeneric.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include "NR_RSRP-Range.h"
#include "NR_SubcarrierSpacing.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>
#include "NR_RA-Prioritization.h"
#include <BIT_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB_PR {
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB_PR_NOTHING,	/* No components present */
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB_PR_oneEighth,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB_PR_oneFourth,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB_PR_oneHalf,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB_PR_one,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB_PR_two,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB_PR_four,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB_PR_eight,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB_PR_sixteen
} NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB_PR;
typedef enum NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneEighth {
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneEighth_n4	= 0,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneEighth_n8	= 1,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneEighth_n12	= 2,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneEighth_n16	= 3,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneEighth_n20	= 4,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneEighth_n24	= 5,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneEighth_n28	= 6,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneEighth_n32	= 7,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneEighth_n36	= 8,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneEighth_n40	= 9,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneEighth_n44	= 10,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneEighth_n48	= 11,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneEighth_n52	= 12,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneEighth_n56	= 13,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneEighth_n60	= 14,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneEighth_n64	= 15
} e_NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneEighth;
typedef enum NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneFourth {
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneFourth_n4	= 0,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneFourth_n8	= 1,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneFourth_n12	= 2,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneFourth_n16	= 3,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneFourth_n20	= 4,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneFourth_n24	= 5,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneFourth_n28	= 6,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneFourth_n32	= 7,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneFourth_n36	= 8,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneFourth_n40	= 9,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneFourth_n44	= 10,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneFourth_n48	= 11,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneFourth_n52	= 12,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneFourth_n56	= 13,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneFourth_n60	= 14,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneFourth_n64	= 15
} e_NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneFourth;
typedef enum NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneHalf {
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneHalf_n4	= 0,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneHalf_n8	= 1,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneHalf_n12	= 2,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneHalf_n16	= 3,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneHalf_n20	= 4,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneHalf_n24	= 5,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneHalf_n28	= 6,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneHalf_n32	= 7,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneHalf_n36	= 8,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneHalf_n40	= 9,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneHalf_n44	= 10,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneHalf_n48	= 11,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneHalf_n52	= 12,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneHalf_n56	= 13,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneHalf_n60	= 14,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneHalf_n64	= 15
} e_NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__oneHalf;
typedef enum NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__one {
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__one_n4	= 0,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__one_n8	= 1,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__one_n12	= 2,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__one_n16	= 3,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__one_n20	= 4,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__one_n24	= 5,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__one_n28	= 6,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__one_n32	= 7,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__one_n36	= 8,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__one_n40	= 9,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__one_n44	= 10,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__one_n48	= 11,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__one_n52	= 12,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__one_n56	= 13,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__one_n60	= 14,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__one_n64	= 15
} e_NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__one;
typedef enum NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__two {
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__two_n4	= 0,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__two_n8	= 1,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__two_n12	= 2,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__two_n16	= 3,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__two_n20	= 4,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__two_n24	= 5,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__two_n28	= 6,
	NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__two_n32	= 7
} e_NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB__two;
typedef enum NR_RACH_ConfigCommon__groupBconfigured__ra_Msg3SizeGroupA {
	NR_RACH_ConfigCommon__groupBconfigured__ra_Msg3SizeGroupA_b56	= 0,
	NR_RACH_ConfigCommon__groupBconfigured__ra_Msg3SizeGroupA_b144	= 1,
	NR_RACH_ConfigCommon__groupBconfigured__ra_Msg3SizeGroupA_b208	= 2,
	NR_RACH_ConfigCommon__groupBconfigured__ra_Msg3SizeGroupA_b256	= 3,
	NR_RACH_ConfigCommon__groupBconfigured__ra_Msg3SizeGroupA_b282	= 4,
	NR_RACH_ConfigCommon__groupBconfigured__ra_Msg3SizeGroupA_b480	= 5,
	NR_RACH_ConfigCommon__groupBconfigured__ra_Msg3SizeGroupA_b640	= 6,
	NR_RACH_ConfigCommon__groupBconfigured__ra_Msg3SizeGroupA_b800	= 7,
	NR_RACH_ConfigCommon__groupBconfigured__ra_Msg3SizeGroupA_b1000	= 8,
	NR_RACH_ConfigCommon__groupBconfigured__ra_Msg3SizeGroupA_b72	= 9,
	NR_RACH_ConfigCommon__groupBconfigured__ra_Msg3SizeGroupA_spare6	= 10,
	NR_RACH_ConfigCommon__groupBconfigured__ra_Msg3SizeGroupA_spare5	= 11,
	NR_RACH_ConfigCommon__groupBconfigured__ra_Msg3SizeGroupA_spare4	= 12,
	NR_RACH_ConfigCommon__groupBconfigured__ra_Msg3SizeGroupA_spare3	= 13,
	NR_RACH_ConfigCommon__groupBconfigured__ra_Msg3SizeGroupA_spare2	= 14,
	NR_RACH_ConfigCommon__groupBconfigured__ra_Msg3SizeGroupA_spare1	= 15
} e_NR_RACH_ConfigCommon__groupBconfigured__ra_Msg3SizeGroupA;
typedef enum NR_RACH_ConfigCommon__groupBconfigured__messagePowerOffsetGroupB {
	NR_RACH_ConfigCommon__groupBconfigured__messagePowerOffsetGroupB_minusinfinity	= 0,
	NR_RACH_ConfigCommon__groupBconfigured__messagePowerOffsetGroupB_dB0	= 1,
	NR_RACH_ConfigCommon__groupBconfigured__messagePowerOffsetGroupB_dB5	= 2,
	NR_RACH_ConfigCommon__groupBconfigured__messagePowerOffsetGroupB_dB8	= 3,
	NR_RACH_ConfigCommon__groupBconfigured__messagePowerOffsetGroupB_dB10	= 4,
	NR_RACH_ConfigCommon__groupBconfigured__messagePowerOffsetGroupB_dB12	= 5,
	NR_RACH_ConfigCommon__groupBconfigured__messagePowerOffsetGroupB_dB15	= 6,
	NR_RACH_ConfigCommon__groupBconfigured__messagePowerOffsetGroupB_dB18	= 7
} e_NR_RACH_ConfigCommon__groupBconfigured__messagePowerOffsetGroupB;
typedef enum NR_RACH_ConfigCommon__ra_ContentionResolutionTimer {
	NR_RACH_ConfigCommon__ra_ContentionResolutionTimer_sf8	= 0,
	NR_RACH_ConfigCommon__ra_ContentionResolutionTimer_sf16	= 1,
	NR_RACH_ConfigCommon__ra_ContentionResolutionTimer_sf24	= 2,
	NR_RACH_ConfigCommon__ra_ContentionResolutionTimer_sf32	= 3,
	NR_RACH_ConfigCommon__ra_ContentionResolutionTimer_sf40	= 4,
	NR_RACH_ConfigCommon__ra_ContentionResolutionTimer_sf48	= 5,
	NR_RACH_ConfigCommon__ra_ContentionResolutionTimer_sf56	= 6,
	NR_RACH_ConfigCommon__ra_ContentionResolutionTimer_sf64	= 7
} e_NR_RACH_ConfigCommon__ra_ContentionResolutionTimer;
typedef enum NR_RACH_ConfigCommon__prach_RootSequenceIndex_PR {
	NR_RACH_ConfigCommon__prach_RootSequenceIndex_PR_NOTHING,	/* No components present */
	NR_RACH_ConfigCommon__prach_RootSequenceIndex_PR_l839,
	NR_RACH_ConfigCommon__prach_RootSequenceIndex_PR_l139
} NR_RACH_ConfigCommon__prach_RootSequenceIndex_PR;
typedef enum NR_RACH_ConfigCommon__restrictedSetConfig {
	NR_RACH_ConfigCommon__restrictedSetConfig_unrestrictedSet	= 0,
	NR_RACH_ConfigCommon__restrictedSetConfig_restrictedSetTypeA	= 1,
	NR_RACH_ConfigCommon__restrictedSetConfig_restrictedSetTypeB	= 2
} e_NR_RACH_ConfigCommon__restrictedSetConfig;
typedef enum NR_RACH_ConfigCommon__msg3_transformPrecoder {
	NR_RACH_ConfigCommon__msg3_transformPrecoder_enabled	= 0
} e_NR_RACH_ConfigCommon__msg3_transformPrecoder;
typedef enum NR_RACH_ConfigCommon__ext1__prach_RootSequenceIndex_r16_PR {
	NR_RACH_ConfigCommon__ext1__prach_RootSequenceIndex_r16_PR_NOTHING,	/* No components present */
	NR_RACH_ConfigCommon__ext1__prach_RootSequenceIndex_r16_PR_l571,
	NR_RACH_ConfigCommon__ext1__prach_RootSequenceIndex_r16_PR_l1151
} NR_RACH_ConfigCommon__ext1__prach_RootSequenceIndex_r16_PR;

/* Forward declarations */
struct NR_RA_PrioritizationForSlicing_r17;
struct NR_FeatureCombinationPreambles_r17;

/* NR_RACH-ConfigCommon */
typedef struct NR_RACH_ConfigCommon {
	NR_RACH_ConfigGeneric_t	 rach_ConfigGeneric;
	long	*totalNumberOfRA_Preambles;	/* OPTIONAL */
	struct NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB {
		NR_RACH_ConfigCommon__ssb_perRACH_OccasionAndCB_PreamblesPerSSB_PR present;
		union NR_RACH_ConfigCommon__NR_ssb_perRACH_OccasionAndCB_PreamblesPerSSB_u {
			long	 oneEighth;
			long	 oneFourth;
			long	 oneHalf;
			long	 one;
			long	 two;
			long	 four;
			long	 eight;
			long	 sixteen;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ssb_perRACH_OccasionAndCB_PreamblesPerSSB;
	struct NR_RACH_ConfigCommon__groupBconfigured {
		long	 ra_Msg3SizeGroupA;
		long	 messagePowerOffsetGroupB;
		long	 numberOfRA_PreamblesGroupA;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *groupBconfigured;
	long	 ra_ContentionResolutionTimer;
	NR_RSRP_Range_t	*rsrp_ThresholdSSB;	/* OPTIONAL */
	NR_RSRP_Range_t	*rsrp_ThresholdSSB_SUL;	/* OPTIONAL */
	struct NR_RACH_ConfigCommon__prach_RootSequenceIndex {
		NR_RACH_ConfigCommon__prach_RootSequenceIndex_PR present;
		union NR_RACH_ConfigCommon__NR_prach_RootSequenceIndex_u {
			long	 l839;
			long	 l139;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} prach_RootSequenceIndex;
	NR_SubcarrierSpacing_t	*msg1_SubcarrierSpacing;	/* OPTIONAL */
	long	 restrictedSetConfig;
	long	*msg3_transformPrecoder;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_RACH_ConfigCommon__ext1 {
		struct NR_RACH_ConfigCommon__ext1__ra_PrioritizationForAccessIdentity_r16 {
			NR_RA_Prioritization_t	 ra_Prioritization_r16;
			BIT_STRING_t	 ra_PrioritizationForAI_r16;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ra_PrioritizationForAccessIdentity_r16;
		struct NR_RACH_ConfigCommon__ext1__prach_RootSequenceIndex_r16 {
			NR_RACH_ConfigCommon__ext1__prach_RootSequenceIndex_r16_PR present;
			union NR_RACH_ConfigCommon__NR_ext1__NR_prach_RootSequenceIndex_r16_u {
				long	 l571;
				long	 l1151;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *prach_RootSequenceIndex_r16;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_RACH_ConfigCommon__ext2 {
		struct NR_RA_PrioritizationForSlicing_r17	*ra_PrioritizationForSlicing_r17;	/* OPTIONAL */
		struct NR_RACH_ConfigCommon__ext2__featureCombinationPreamblesList_r17 {
			A_SEQUENCE_OF(struct NR_FeatureCombinationPreambles_r17) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *featureCombinationPreamblesList_r17;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RACH_ConfigCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_oneEighth_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_oneFourth_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_oneHalf_39;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_one_56;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_two_73;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ra_Msg3SizeGroupA_86;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_messagePowerOffsetGroupB_103;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ra_ContentionResolutionTimer_113;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_restrictedSetConfig_128;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_msg3_transformPrecoder_132;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_RACH_ConfigCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RACH_ConfigCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RACH_ConfigCommon_1[13];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_RA-PrioritizationForSlicing-r17.h"
#include "NR_FeatureCombinationPreambles-r17.h"

#endif	/* _NR_RACH_ConfigCommon_H_ */
#include <asn_internal.h>
