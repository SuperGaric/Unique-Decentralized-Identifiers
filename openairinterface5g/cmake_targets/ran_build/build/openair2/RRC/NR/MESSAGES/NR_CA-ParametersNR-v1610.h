/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_CA_ParametersNR_v1610_H_
#define	_NR_CA_ParametersNR_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CA_ParametersNR_v1610__parallelTxMsgA_SRS_PUCCH_PUSCH_r16 {
	NR_CA_ParametersNR_v1610__parallelTxMsgA_SRS_PUCCH_PUSCH_r16_supported	= 0
} e_NR_CA_ParametersNR_v1610__parallelTxMsgA_SRS_PUCCH_PUSCH_r16;
typedef enum NR_CA_ParametersNR_v1610__msgA_SUL_r16 {
	NR_CA_ParametersNR_v1610__msgA_SUL_r16_supported	= 0
} e_NR_CA_ParametersNR_v1610__msgA_SUL_r16;
typedef enum NR_CA_ParametersNR_v1610__jointSearchSpaceSwitchAcrossCells_r16 {
	NR_CA_ParametersNR_v1610__jointSearchSpaceSwitchAcrossCells_r16_supported	= 0
} e_NR_CA_ParametersNR_v1610__jointSearchSpaceSwitchAcrossCells_r16;
typedef enum NR_CA_ParametersNR_v1610__half_DuplexTDD_CA_SameSCS_r16 {
	NR_CA_ParametersNR_v1610__half_DuplexTDD_CA_SameSCS_r16_supported	= 0
} e_NR_CA_ParametersNR_v1610__half_DuplexTDD_CA_SameSCS_r16;
typedef enum NR_CA_ParametersNR_v1610__scellDormancyWithinActiveTime_r16 {
	NR_CA_ParametersNR_v1610__scellDormancyWithinActiveTime_r16_supported	= 0
} e_NR_CA_ParametersNR_v1610__scellDormancyWithinActiveTime_r16;
typedef enum NR_CA_ParametersNR_v1610__scellDormancyOutsideActiveTime_r16 {
	NR_CA_ParametersNR_v1610__scellDormancyOutsideActiveTime_r16_supported	= 0
} e_NR_CA_ParametersNR_v1610__scellDormancyOutsideActiveTime_r16;
typedef enum NR_CA_ParametersNR_v1610__crossCarrierA_CSI_trigDiffSCS_r16 {
	NR_CA_ParametersNR_v1610__crossCarrierA_CSI_trigDiffSCS_r16_higherA_CSI_SCS	= 0,
	NR_CA_ParametersNR_v1610__crossCarrierA_CSI_trigDiffSCS_r16_lowerA_CSI_SCS	= 1,
	NR_CA_ParametersNR_v1610__crossCarrierA_CSI_trigDiffSCS_r16_both	= 2
} e_NR_CA_ParametersNR_v1610__crossCarrierA_CSI_trigDiffSCS_r16;
typedef enum NR_CA_ParametersNR_v1610__defaultQCL_CrossCarrierA_CSI_Trig_r16 {
	NR_CA_ParametersNR_v1610__defaultQCL_CrossCarrierA_CSI_Trig_r16_diffOnly	= 0,
	NR_CA_ParametersNR_v1610__defaultQCL_CrossCarrierA_CSI_Trig_r16_both	= 1
} e_NR_CA_ParametersNR_v1610__defaultQCL_CrossCarrierA_CSI_Trig_r16;
typedef enum NR_CA_ParametersNR_v1610__interCA_NonAlignedFrame_r16 {
	NR_CA_ParametersNR_v1610__interCA_NonAlignedFrame_r16_supported	= 0
} e_NR_CA_ParametersNR_v1610__interCA_NonAlignedFrame_r16;
typedef enum NR_CA_ParametersNR_v1610__simul_SRS_Trans_BC_r16 {
	NR_CA_ParametersNR_v1610__simul_SRS_Trans_BC_r16_n2	= 0
} e_NR_CA_ParametersNR_v1610__simul_SRS_Trans_BC_r16;
typedef enum NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqAsyncDAPS_r16 {
	NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqAsyncDAPS_r16_supported	= 0
} e_NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqAsyncDAPS_r16;
typedef enum NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqDiffSCS_DAPS_r16 {
	NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqDiffSCS_DAPS_r16_supported	= 0
} e_NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqDiffSCS_DAPS_r16;
typedef enum NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqMultiUL_TransmissionDAPS_r16 {
	NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqMultiUL_TransmissionDAPS_r16_supported	= 0
} e_NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqMultiUL_TransmissionDAPS_r16;
typedef enum NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqSemiStaticPowerSharingDAPS_Mode1_r16 {
	NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqSemiStaticPowerSharingDAPS_Mode1_r16_supported	= 0
} e_NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqSemiStaticPowerSharingDAPS_Mode1_r16;
typedef enum NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqSemiStaticPowerSharingDAPS_Mode2_r16 {
	NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqSemiStaticPowerSharingDAPS_Mode2_r16_supported	= 0
} e_NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqSemiStaticPowerSharingDAPS_Mode2_r16;
typedef enum NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqDynamicPowerSharingDAPS_r16 {
	NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqDynamicPowerSharingDAPS_r16_short	= 0,
	NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqDynamicPowerSharingDAPS_r16_long	= 1
} e_NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqDynamicPowerSharingDAPS_r16;
typedef enum NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqUL_TransCancellationDAPS_r16 {
	NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqUL_TransCancellationDAPS_r16_supported	= 0
} e_NR_CA_ParametersNR_v1610__interFreqDAPS_r16__interFreqUL_TransCancellationDAPS_r16;
typedef enum NR_CA_ParametersNR_v1610__pdcch_MonitoringCA_r16__supportedSpanArrangement_r16 {
	NR_CA_ParametersNR_v1610__pdcch_MonitoringCA_r16__supportedSpanArrangement_r16_alignedOnly	= 0,
	NR_CA_ParametersNR_v1610__pdcch_MonitoringCA_r16__supportedSpanArrangement_r16_alignedAndNonAligned	= 1
} e_NR_CA_ParametersNR_v1610__pdcch_MonitoringCA_r16__supportedSpanArrangement_r16;
typedef enum NR_CA_ParametersNR_v1610__pdcch_BlindDetectionCA_Mixed_r16__supportedSpanArrangement_r16 {
	NR_CA_ParametersNR_v1610__pdcch_BlindDetectionCA_Mixed_r16__supportedSpanArrangement_r16_alignedOnly	= 0,
	NR_CA_ParametersNR_v1610__pdcch_BlindDetectionCA_Mixed_r16__supportedSpanArrangement_r16_alignedAndNonAligned	= 1
} e_NR_CA_ParametersNR_v1610__pdcch_BlindDetectionCA_Mixed_r16__supportedSpanArrangement_r16;
typedef enum NR_CA_ParametersNR_v1610__crossCarrierSchedulingDL_DiffSCS_r16 {
	NR_CA_ParametersNR_v1610__crossCarrierSchedulingDL_DiffSCS_r16_low_to_high	= 0,
	NR_CA_ParametersNR_v1610__crossCarrierSchedulingDL_DiffSCS_r16_high_to_low	= 1,
	NR_CA_ParametersNR_v1610__crossCarrierSchedulingDL_DiffSCS_r16_both	= 2
} e_NR_CA_ParametersNR_v1610__crossCarrierSchedulingDL_DiffSCS_r16;
typedef enum NR_CA_ParametersNR_v1610__crossCarrierSchedulingDefaultQCL_r16 {
	NR_CA_ParametersNR_v1610__crossCarrierSchedulingDefaultQCL_r16_diff_only	= 0,
	NR_CA_ParametersNR_v1610__crossCarrierSchedulingDefaultQCL_r16_both	= 1
} e_NR_CA_ParametersNR_v1610__crossCarrierSchedulingDefaultQCL_r16;
typedef enum NR_CA_ParametersNR_v1610__crossCarrierSchedulingUL_DiffSCS_r16 {
	NR_CA_ParametersNR_v1610__crossCarrierSchedulingUL_DiffSCS_r16_low_to_high	= 0,
	NR_CA_ParametersNR_v1610__crossCarrierSchedulingUL_DiffSCS_r16_high_to_low	= 1,
	NR_CA_ParametersNR_v1610__crossCarrierSchedulingUL_DiffSCS_r16_both	= 2
} e_NR_CA_ParametersNR_v1610__crossCarrierSchedulingUL_DiffSCS_r16;
typedef enum NR_CA_ParametersNR_v1610__simul_SRS_MIMO_Trans_BC_r16 {
	NR_CA_ParametersNR_v1610__simul_SRS_MIMO_Trans_BC_r16_n2	= 0
} e_NR_CA_ParametersNR_v1610__simul_SRS_MIMO_Trans_BC_r16;

/* Forward declarations */
struct NR_CodebookParameters_v1610;
struct NR_CodebookParametersAdditionPerBC_r16;
struct NR_CodebookComboParametersAdditionPerBC_r16;

/* NR_CA-ParametersNR-v1610 */
typedef struct NR_CA_ParametersNR_v1610 {
	long	*parallelTxMsgA_SRS_PUCCH_PUSCH_r16;	/* OPTIONAL */
	long	*msgA_SUL_r16;	/* OPTIONAL */
	long	*jointSearchSpaceSwitchAcrossCells_r16;	/* OPTIONAL */
	long	*half_DuplexTDD_CA_SameSCS_r16;	/* OPTIONAL */
	long	*scellDormancyWithinActiveTime_r16;	/* OPTIONAL */
	long	*scellDormancyOutsideActiveTime_r16;	/* OPTIONAL */
	long	*crossCarrierA_CSI_trigDiffSCS_r16;	/* OPTIONAL */
	long	*defaultQCL_CrossCarrierA_CSI_Trig_r16;	/* OPTIONAL */
	long	*interCA_NonAlignedFrame_r16;	/* OPTIONAL */
	long	*simul_SRS_Trans_BC_r16;	/* OPTIONAL */
	struct NR_CA_ParametersNR_v1610__interFreqDAPS_r16 {
		long	*interFreqAsyncDAPS_r16;	/* OPTIONAL */
		long	*interFreqDiffSCS_DAPS_r16;	/* OPTIONAL */
		long	*interFreqMultiUL_TransmissionDAPS_r16;	/* OPTIONAL */
		long	*interFreqSemiStaticPowerSharingDAPS_Mode1_r16;	/* OPTIONAL */
		long	*interFreqSemiStaticPowerSharingDAPS_Mode2_r16;	/* OPTIONAL */
		long	*interFreqDynamicPowerSharingDAPS_r16;	/* OPTIONAL */
		long	*interFreqUL_TransCancellationDAPS_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *interFreqDAPS_r16;
	struct NR_CodebookParameters_v1610	*codebookParametersPerBC_r16;	/* OPTIONAL */
	long	*blindDetectFactor_r16;	/* OPTIONAL */
	struct NR_CA_ParametersNR_v1610__pdcch_MonitoringCA_r16 {
		long	 maxNumberOfMonitoringCC_r16;
		long	 supportedSpanArrangement_r16;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pdcch_MonitoringCA_r16;
	struct NR_CA_ParametersNR_v1610__pdcch_BlindDetectionCA_Mixed_r16 {
		long	 pdcch_BlindDetectionCA1_r16;
		long	 pdcch_BlindDetectionCA2_r16;
		long	 supportedSpanArrangement_r16;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pdcch_BlindDetectionCA_Mixed_r16;
	long	*pdcch_BlindDetectionMCG_UE_r16;	/* OPTIONAL */
	long	*pdcch_BlindDetectionSCG_UE_r16;	/* OPTIONAL */
	struct NR_CA_ParametersNR_v1610__pdcch_BlindDetectionMCG_UE_Mixed_r16 {
		long	 pdcch_BlindDetectionMCG_UE1_r16;
		long	 pdcch_BlindDetectionMCG_UE2_r16;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pdcch_BlindDetectionMCG_UE_Mixed_r16;
	struct NR_CA_ParametersNR_v1610__pdcch_BlindDetectionSCG_UE_Mixed_r16 {
		long	 pdcch_BlindDetectionSCG_UE1_r16;
		long	 pdcch_BlindDetectionSCG_UE2_r16;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pdcch_BlindDetectionSCG_UE_Mixed_r16;
	long	*crossCarrierSchedulingDL_DiffSCS_r16;	/* OPTIONAL */
	long	*crossCarrierSchedulingDefaultQCL_r16;	/* OPTIONAL */
	long	*crossCarrierSchedulingUL_DiffSCS_r16;	/* OPTIONAL */
	long	*simul_SRS_MIMO_Trans_BC_r16;	/* OPTIONAL */
	struct NR_CodebookParametersAdditionPerBC_r16	*codebookParametersAdditionPerBC_r16;	/* OPTIONAL */
	struct NR_CodebookComboParametersAdditionPerBC_r16	*codebookComboParametersAdditionPerBC_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CA_ParametersNR_v1610_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_parallelTxMsgA_SRS_PUCCH_PUSCH_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_msgA_SUL_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_jointSearchSpaceSwitchAcrossCells_r16_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_half_DuplexTDD_CA_SameSCS_r16_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scellDormancyWithinActiveTime_r16_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scellDormancyOutsideActiveTime_r16_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_crossCarrierA_CSI_trigDiffSCS_r16_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_defaultQCL_CrossCarrierA_CSI_Trig_r16_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_interCA_NonAlignedFrame_r16_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_simul_SRS_Trans_BC_r16_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_interFreqAsyncDAPS_r16_26;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_interFreqDiffSCS_DAPS_r16_28;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_interFreqMultiUL_TransmissionDAPS_r16_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_interFreqSemiStaticPowerSharingDAPS_Mode1_r16_32;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_interFreqSemiStaticPowerSharingDAPS_Mode2_r16_34;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_interFreqDynamicPowerSharingDAPS_r16_36;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_interFreqUL_TransCancellationDAPS_r16_39;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_supportedSpanArrangement_r16_45;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_supportedSpanArrangement_r16_51;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_crossCarrierSchedulingDL_DiffSCS_r16_62;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_crossCarrierSchedulingDefaultQCL_r16_66;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_crossCarrierSchedulingUL_DiffSCS_r16_69;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_simul_SRS_MIMO_Trans_BC_r16_73;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_CA_ParametersNR_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CA_ParametersNR_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CA_ParametersNR_v1610_1[25];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_CodebookParameters-v1610.h"
#include "NR_CodebookParametersAdditionPerBC-r16.h"
#include "NR_CodebookComboParametersAdditionPerBC-r16.h"

#endif	/* _NR_CA_ParametersNR_v1610_H_ */
#include <asn_internal.h>
