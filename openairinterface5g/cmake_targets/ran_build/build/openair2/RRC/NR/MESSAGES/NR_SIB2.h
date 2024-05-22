/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SIB2_H_
#define	_NR_SIB2_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "NR_RangeToBestCell.h"
#include <NativeEnumerated.h>
#include "NR_MobilityStateParameters.h"
#include <constr_SEQUENCE.h>
#include "NR_ReselectionThreshold.h"
#include "NR_ReselectionThresholdQ.h"
#include "NR_CellReselectionPriority.h"
#include "NR_CellReselectionSubPriority.h"
#include "NR_Q-RxLevMin.h"
#include "NR_Q-QualMin.h"
#include "NR_T-Reselection.h"
#include "NR_P-Max.h"
#include <BOOLEAN.h>
#include "NR_SSB-PositionQCL-Relation-r16.h"
#include "NR_SSB-PositionQCL-Relation-r17.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SIB2__cellReselectionInfoCommon__q_Hyst {
	NR_SIB2__cellReselectionInfoCommon__q_Hyst_dB0	= 0,
	NR_SIB2__cellReselectionInfoCommon__q_Hyst_dB1	= 1,
	NR_SIB2__cellReselectionInfoCommon__q_Hyst_dB2	= 2,
	NR_SIB2__cellReselectionInfoCommon__q_Hyst_dB3	= 3,
	NR_SIB2__cellReselectionInfoCommon__q_Hyst_dB4	= 4,
	NR_SIB2__cellReselectionInfoCommon__q_Hyst_dB5	= 5,
	NR_SIB2__cellReselectionInfoCommon__q_Hyst_dB6	= 6,
	NR_SIB2__cellReselectionInfoCommon__q_Hyst_dB8	= 7,
	NR_SIB2__cellReselectionInfoCommon__q_Hyst_dB10	= 8,
	NR_SIB2__cellReselectionInfoCommon__q_Hyst_dB12	= 9,
	NR_SIB2__cellReselectionInfoCommon__q_Hyst_dB14	= 10,
	NR_SIB2__cellReselectionInfoCommon__q_Hyst_dB16	= 11,
	NR_SIB2__cellReselectionInfoCommon__q_Hyst_dB18	= 12,
	NR_SIB2__cellReselectionInfoCommon__q_Hyst_dB20	= 13,
	NR_SIB2__cellReselectionInfoCommon__q_Hyst_dB22	= 14,
	NR_SIB2__cellReselectionInfoCommon__q_Hyst_dB24	= 15
} e_NR_SIB2__cellReselectionInfoCommon__q_Hyst;
typedef enum NR_SIB2__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_Medium {
	NR_SIB2__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_Medium_dB_6	= 0,
	NR_SIB2__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_Medium_dB_4	= 1,
	NR_SIB2__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_Medium_dB_2	= 2,
	NR_SIB2__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_Medium_dB0	= 3
} e_NR_SIB2__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_Medium;
typedef enum NR_SIB2__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_High {
	NR_SIB2__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_High_dB_6	= 0,
	NR_SIB2__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_High_dB_4	= 1,
	NR_SIB2__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_High_dB_2	= 2,
	NR_SIB2__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_High_dB0	= 3
} e_NR_SIB2__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF__sf_High;
typedef enum NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__s_SearchDeltaP_r16 {
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__s_SearchDeltaP_r16_dB3	= 0,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__s_SearchDeltaP_r16_dB6	= 1,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__s_SearchDeltaP_r16_dB9	= 2,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__s_SearchDeltaP_r16_dB12	= 3,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__s_SearchDeltaP_r16_dB15	= 4,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__s_SearchDeltaP_r16_spare3	= 5,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__s_SearchDeltaP_r16_spare2	= 6,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__s_SearchDeltaP_r16_spare1	= 7
} e_NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__s_SearchDeltaP_r16;
typedef enum NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__t_SearchDeltaP_r16 {
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__t_SearchDeltaP_r16_s5	= 0,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__t_SearchDeltaP_r16_s10	= 1,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__t_SearchDeltaP_r16_s20	= 2,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__t_SearchDeltaP_r16_s30	= 3,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__t_SearchDeltaP_r16_s60	= 4,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__t_SearchDeltaP_r16_s120	= 5,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__t_SearchDeltaP_r16_s180	= 6,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__t_SearchDeltaP_r16_s240	= 7,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__t_SearchDeltaP_r16_s300	= 8,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__t_SearchDeltaP_r16_spare7	= 9,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__t_SearchDeltaP_r16_spare6	= 10,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__t_SearchDeltaP_r16_spare5	= 11,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__t_SearchDeltaP_r16_spare4	= 12,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__t_SearchDeltaP_r16_spare3	= 13,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__t_SearchDeltaP_r16_spare2	= 14,
	NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__t_SearchDeltaP_r16_spare1	= 15
} e_NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16__t_SearchDeltaP_r16;
typedef enum NR_SIB2__ext1__relaxedMeasurement_r16__combineRelaxedMeasCondition_r16 {
	NR_SIB2__ext1__relaxedMeasurement_r16__combineRelaxedMeasCondition_r16_true	= 0
} e_NR_SIB2__ext1__relaxedMeasurement_r16__combineRelaxedMeasCondition_r16;
typedef enum NR_SIB2__ext1__relaxedMeasurement_r16__highPriorityMeasRelax_r16 {
	NR_SIB2__ext1__relaxedMeasurement_r16__highPriorityMeasRelax_r16_true	= 0
} e_NR_SIB2__ext1__relaxedMeasurement_r16__highPriorityMeasRelax_r16;
typedef enum NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__s_SearchDeltaP_Stationary_r17 {
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__s_SearchDeltaP_Stationary_r17_dB2	= 0,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__s_SearchDeltaP_Stationary_r17_dB3	= 1,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__s_SearchDeltaP_Stationary_r17_dB6	= 2,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__s_SearchDeltaP_Stationary_r17_dB9	= 3,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__s_SearchDeltaP_Stationary_r17_dB12	= 4,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__s_SearchDeltaP_Stationary_r17_dB15	= 5,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__s_SearchDeltaP_Stationary_r17_spare2	= 6,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__s_SearchDeltaP_Stationary_r17_spare1	= 7
} e_NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__s_SearchDeltaP_Stationary_r17;
typedef enum NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__t_SearchDeltaP_Stationary_r17 {
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__t_SearchDeltaP_Stationary_r17_s5	= 0,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__t_SearchDeltaP_Stationary_r17_s10	= 1,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__t_SearchDeltaP_Stationary_r17_s20	= 2,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__t_SearchDeltaP_Stationary_r17_s30	= 3,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__t_SearchDeltaP_Stationary_r17_s60	= 4,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__t_SearchDeltaP_Stationary_r17_s120	= 5,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__t_SearchDeltaP_Stationary_r17_s180	= 6,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__t_SearchDeltaP_Stationary_r17_s240	= 7,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__t_SearchDeltaP_Stationary_r17_s300	= 8,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__t_SearchDeltaP_Stationary_r17_spare7	= 9,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__t_SearchDeltaP_Stationary_r17_spare6	= 10,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__t_SearchDeltaP_Stationary_r17_spare5	= 11,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__t_SearchDeltaP_Stationary_r17_spare4	= 12,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__t_SearchDeltaP_Stationary_r17_spare3	= 13,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__t_SearchDeltaP_Stationary_r17_spare2	= 14,
	NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__t_SearchDeltaP_Stationary_r17_spare1	= 15
} e_NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17__t_SearchDeltaP_Stationary_r17;
typedef enum NR_SIB2__ext2__relaxedMeasurement_r17__combineRelaxedMeasCondition2_r17 {
	NR_SIB2__ext2__relaxedMeasurement_r17__combineRelaxedMeasCondition2_r17_true	= 0
} e_NR_SIB2__ext2__relaxedMeasurement_r17__combineRelaxedMeasCondition2_r17;

/* Forward declarations */
struct NR_ThresholdNR;
struct NR_MultiFrequencyBandListNR_SIB;
struct NR_SSB_MTC;
struct NR_SS_RSSI_Measurement;
struct NR_SSB_ToMeasure;
struct NR_SpeedStateScaleFactors;
struct NR_SSB_MTC2_LP_r16;
struct NR_SSB_MTC4List_r17;

/* NR_SIB2 */
typedef struct NR_SIB2 {
	struct NR_SIB2__cellReselectionInfoCommon {
		long	*nrofSS_BlocksToAverage;	/* OPTIONAL */
		struct NR_ThresholdNR	*absThreshSS_BlocksConsolidation;	/* OPTIONAL */
		NR_RangeToBestCell_t	*rangeToBestCell;	/* OPTIONAL */
		long	 q_Hyst;
		struct NR_SIB2__cellReselectionInfoCommon__speedStateReselectionPars {
			NR_MobilityStateParameters_t	 mobilityStateParameters;
			struct NR_SIB2__cellReselectionInfoCommon__speedStateReselectionPars__q_HystSF {
				long	 sf_Medium;
				long	 sf_High;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} q_HystSF;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *speedStateReselectionPars;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cellReselectionInfoCommon;
	struct NR_SIB2__cellReselectionServingFreqInfo {
		NR_ReselectionThreshold_t	*s_NonIntraSearchP;	/* OPTIONAL */
		NR_ReselectionThresholdQ_t	*s_NonIntraSearchQ;	/* OPTIONAL */
		NR_ReselectionThreshold_t	 threshServingLowP;
		NR_ReselectionThresholdQ_t	*threshServingLowQ;	/* OPTIONAL */
		NR_CellReselectionPriority_t	 cellReselectionPriority;
		NR_CellReselectionSubPriority_t	*cellReselectionSubPriority;	/* OPTIONAL */
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cellReselectionServingFreqInfo;
	struct NR_SIB2__intraFreqCellReselectionInfo {
		NR_Q_RxLevMin_t	 q_RxLevMin;
		NR_Q_RxLevMin_t	*q_RxLevMinSUL;	/* OPTIONAL */
		NR_Q_QualMin_t	*q_QualMin;	/* OPTIONAL */
		NR_ReselectionThreshold_t	 s_IntraSearchP;
		NR_ReselectionThresholdQ_t	*s_IntraSearchQ;	/* OPTIONAL */
		NR_T_Reselection_t	 t_ReselectionNR;
		struct NR_MultiFrequencyBandListNR_SIB	*frequencyBandList;	/* OPTIONAL */
		struct NR_MultiFrequencyBandListNR_SIB	*frequencyBandListSUL;	/* OPTIONAL */
		NR_P_Max_t	*p_Max;	/* OPTIONAL */
		struct NR_SSB_MTC	*smtc;	/* OPTIONAL */
		struct NR_SS_RSSI_Measurement	*ss_RSSI_Measurement;	/* OPTIONAL */
		struct NR_SSB_ToMeasure	*ssb_ToMeasure;	/* OPTIONAL */
		BOOLEAN_t	 deriveSSB_IndexFromCell;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		struct NR_SIB2__intraFreqCellReselectionInfo__ext1 {
			struct NR_SpeedStateScaleFactors	*t_ReselectionNR_SF;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ext1;
		struct NR_SIB2__intraFreqCellReselectionInfo__ext2 {
			struct NR_SSB_MTC2_LP_r16	*smtc2_LP_r16;	/* OPTIONAL */
			NR_SSB_PositionQCL_Relation_r16_t	*ssb_PositionQCL_Common_r16;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ext2;
		struct NR_SIB2__intraFreqCellReselectionInfo__ext3 {
			NR_SSB_PositionQCL_Relation_r17_t	*ssb_PositionQCL_Common_r17;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ext3;
		struct NR_SIB2__intraFreqCellReselectionInfo__ext4 {
			struct NR_SSB_MTC4List_r17	*smtc4list_r17;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ext4;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} intraFreqCellReselectionInfo;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_SIB2__ext1 {
		struct NR_SIB2__ext1__relaxedMeasurement_r16 {
			struct NR_SIB2__ext1__relaxedMeasurement_r16__lowMobilityEvaluation_r16 {
				long	 s_SearchDeltaP_r16;
				long	 t_SearchDeltaP_r16;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *lowMobilityEvaluation_r16;
			struct NR_SIB2__ext1__relaxedMeasurement_r16__cellEdgeEvaluation_r16 {
				NR_ReselectionThreshold_t	 s_SearchThresholdP_r16;
				NR_ReselectionThresholdQ_t	*s_SearchThresholdQ_r16;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *cellEdgeEvaluation_r16;
			long	*combineRelaxedMeasCondition_r16;	/* OPTIONAL */
			long	*highPriorityMeasRelax_r16;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *relaxedMeasurement_r16;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_SIB2__ext2 {
		long	*cellEquivalentSize_r17;	/* OPTIONAL */
		struct NR_SIB2__ext2__relaxedMeasurement_r17 {
			struct NR_SIB2__ext2__relaxedMeasurement_r17__stationaryMobilityEvaluation_r17 {
				long	 s_SearchDeltaP_Stationary_r17;
				long	 t_SearchDeltaP_Stationary_r17;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} stationaryMobilityEvaluation_r17;
			struct NR_SIB2__ext2__relaxedMeasurement_r17__cellEdgeEvaluationWhileStationary_r17 {
				NR_ReselectionThreshold_t	 s_SearchThresholdP2_r17;
				NR_ReselectionThresholdQ_t	*s_SearchThresholdQ2_r17;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *cellEdgeEvaluationWhileStationary_r17;
			long	*combineRelaxedMeasCondition2_r17;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *relaxedMeasurement_r17;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SIB2_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_q_Hyst_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sf_Medium_26;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sf_High_31;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_s_SearchDeltaP_r16_73;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_t_SearchDeltaP_r16_82;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_combineRelaxedMeasCondition_r16_102;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_highPriorityMeasRelax_r16_104;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_s_SearchDeltaP_Stationary_r17_110;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_t_SearchDeltaP_Stationary_r17_119;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_combineRelaxedMeasCondition2_r17_139;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SIB2;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SIB2_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SIB2_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_ThresholdNR.h"
#include "NR_MultiFrequencyBandListNR-SIB.h"
#include "NR_SSB-MTC.h"
#include "NR_SS-RSSI-Measurement.h"
#include "NR_SSB-ToMeasure.h"
#include "NR_SpeedStateScaleFactors.h"
#include "NR_SSB-MTC2-LP-r16.h"
#include "NR_SSB-MTC4List-r17.h"

#endif	/* _NR_SIB2_H_ */
#include <asn_internal.h>
