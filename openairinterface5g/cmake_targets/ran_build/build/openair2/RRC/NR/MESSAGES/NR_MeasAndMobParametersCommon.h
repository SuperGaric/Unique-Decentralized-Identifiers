/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MeasAndMobParametersCommon_H_
#define	_NR_MeasAndMobParametersCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MeasAndMobParametersCommon__ssb_RLM {
	NR_MeasAndMobParametersCommon__ssb_RLM_supported	= 0
} e_NR_MeasAndMobParametersCommon__ssb_RLM;
typedef enum NR_MeasAndMobParametersCommon__ssb_AndCSI_RS_RLM {
	NR_MeasAndMobParametersCommon__ssb_AndCSI_RS_RLM_supported	= 0
} e_NR_MeasAndMobParametersCommon__ssb_AndCSI_RS_RLM;
typedef enum NR_MeasAndMobParametersCommon__ext1__eventB_MeasAndReport {
	NR_MeasAndMobParametersCommon__ext1__eventB_MeasAndReport_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext1__eventB_MeasAndReport;
typedef enum NR_MeasAndMobParametersCommon__ext1__handoverFDD_TDD {
	NR_MeasAndMobParametersCommon__ext1__handoverFDD_TDD_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext1__handoverFDD_TDD;
typedef enum NR_MeasAndMobParametersCommon__ext1__eutra_CGI_Reporting {
	NR_MeasAndMobParametersCommon__ext1__eutra_CGI_Reporting_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext1__eutra_CGI_Reporting;
typedef enum NR_MeasAndMobParametersCommon__ext1__nr_CGI_Reporting {
	NR_MeasAndMobParametersCommon__ext1__nr_CGI_Reporting_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext1__nr_CGI_Reporting;
typedef enum NR_MeasAndMobParametersCommon__ext2__independentGapConfig {
	NR_MeasAndMobParametersCommon__ext2__independentGapConfig_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext2__independentGapConfig;
typedef enum NR_MeasAndMobParametersCommon__ext2__periodicEUTRA_MeasAndReport {
	NR_MeasAndMobParametersCommon__ext2__periodicEUTRA_MeasAndReport_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext2__periodicEUTRA_MeasAndReport;
typedef enum NR_MeasAndMobParametersCommon__ext2__handoverFR1_FR2 {
	NR_MeasAndMobParametersCommon__ext2__handoverFR1_FR2_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext2__handoverFR1_FR2;
typedef enum NR_MeasAndMobParametersCommon__ext2__maxNumberCSI_RS_RRM_RS_SINR {
	NR_MeasAndMobParametersCommon__ext2__maxNumberCSI_RS_RRM_RS_SINR_n4	= 0,
	NR_MeasAndMobParametersCommon__ext2__maxNumberCSI_RS_RRM_RS_SINR_n8	= 1,
	NR_MeasAndMobParametersCommon__ext2__maxNumberCSI_RS_RRM_RS_SINR_n16	= 2,
	NR_MeasAndMobParametersCommon__ext2__maxNumberCSI_RS_RRM_RS_SINR_n32	= 3,
	NR_MeasAndMobParametersCommon__ext2__maxNumberCSI_RS_RRM_RS_SINR_n64	= 4,
	NR_MeasAndMobParametersCommon__ext2__maxNumberCSI_RS_RRM_RS_SINR_n96	= 5
} e_NR_MeasAndMobParametersCommon__ext2__maxNumberCSI_RS_RRM_RS_SINR;
typedef enum NR_MeasAndMobParametersCommon__ext3__nr_CGI_Reporting_ENDC {
	NR_MeasAndMobParametersCommon__ext3__nr_CGI_Reporting_ENDC_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext3__nr_CGI_Reporting_ENDC;
typedef enum NR_MeasAndMobParametersCommon__ext4__eutra_CGI_Reporting_NEDC {
	NR_MeasAndMobParametersCommon__ext4__eutra_CGI_Reporting_NEDC_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext4__eutra_CGI_Reporting_NEDC;
typedef enum NR_MeasAndMobParametersCommon__ext4__eutra_CGI_Reporting_NRDC {
	NR_MeasAndMobParametersCommon__ext4__eutra_CGI_Reporting_NRDC_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext4__eutra_CGI_Reporting_NRDC;
typedef enum NR_MeasAndMobParametersCommon__ext4__nr_CGI_Reporting_NEDC {
	NR_MeasAndMobParametersCommon__ext4__nr_CGI_Reporting_NEDC_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext4__nr_CGI_Reporting_NEDC;
typedef enum NR_MeasAndMobParametersCommon__ext4__nr_CGI_Reporting_NRDC {
	NR_MeasAndMobParametersCommon__ext4__nr_CGI_Reporting_NRDC_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext4__nr_CGI_Reporting_NRDC;
typedef enum NR_MeasAndMobParametersCommon__ext5__reportAddNeighMeasForPeriodic_r16 {
	NR_MeasAndMobParametersCommon__ext5__reportAddNeighMeasForPeriodic_r16_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext5__reportAddNeighMeasForPeriodic_r16;
typedef enum NR_MeasAndMobParametersCommon__ext5__condHandoverParametersCommon_r16__condHandoverFDD_TDD_r16 {
	NR_MeasAndMobParametersCommon__ext5__condHandoverParametersCommon_r16__condHandoverFDD_TDD_r16_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext5__condHandoverParametersCommon_r16__condHandoverFDD_TDD_r16;
typedef enum NR_MeasAndMobParametersCommon__ext5__condHandoverParametersCommon_r16__condHandoverFR1_FR2_r16 {
	NR_MeasAndMobParametersCommon__ext5__condHandoverParametersCommon_r16__condHandoverFR1_FR2_r16_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext5__condHandoverParametersCommon_r16__condHandoverFR1_FR2_r16;
typedef enum NR_MeasAndMobParametersCommon__ext5__nr_NeedForGap_Reporting_r16 {
	NR_MeasAndMobParametersCommon__ext5__nr_NeedForGap_Reporting_r16_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext5__nr_NeedForGap_Reporting_r16;
typedef enum NR_MeasAndMobParametersCommon__ext5__supportedGapPattern_NRonly_NEDC_r16 {
	NR_MeasAndMobParametersCommon__ext5__supportedGapPattern_NRonly_NEDC_r16_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext5__supportedGapPattern_NRonly_NEDC_r16;
typedef enum NR_MeasAndMobParametersCommon__ext5__maxNumberCLI_RSSI_r16 {
	NR_MeasAndMobParametersCommon__ext5__maxNumberCLI_RSSI_r16_n8	= 0,
	NR_MeasAndMobParametersCommon__ext5__maxNumberCLI_RSSI_r16_n16	= 1,
	NR_MeasAndMobParametersCommon__ext5__maxNumberCLI_RSSI_r16_n32	= 2,
	NR_MeasAndMobParametersCommon__ext5__maxNumberCLI_RSSI_r16_n64	= 3
} e_NR_MeasAndMobParametersCommon__ext5__maxNumberCLI_RSSI_r16;
typedef enum NR_MeasAndMobParametersCommon__ext5__maxNumberCLI_SRS_RSRP_r16 {
	NR_MeasAndMobParametersCommon__ext5__maxNumberCLI_SRS_RSRP_r16_n4	= 0,
	NR_MeasAndMobParametersCommon__ext5__maxNumberCLI_SRS_RSRP_r16_n8	= 1,
	NR_MeasAndMobParametersCommon__ext5__maxNumberCLI_SRS_RSRP_r16_n16	= 2,
	NR_MeasAndMobParametersCommon__ext5__maxNumberCLI_SRS_RSRP_r16_n32	= 3
} e_NR_MeasAndMobParametersCommon__ext5__maxNumberCLI_SRS_RSRP_r16;
typedef enum NR_MeasAndMobParametersCommon__ext5__maxNumberPerSlotCLI_SRS_RSRP_r16 {
	NR_MeasAndMobParametersCommon__ext5__maxNumberPerSlotCLI_SRS_RSRP_r16_n2	= 0,
	NR_MeasAndMobParametersCommon__ext5__maxNumberPerSlotCLI_SRS_RSRP_r16_n4	= 1,
	NR_MeasAndMobParametersCommon__ext5__maxNumberPerSlotCLI_SRS_RSRP_r16_n8	= 2
} e_NR_MeasAndMobParametersCommon__ext5__maxNumberPerSlotCLI_SRS_RSRP_r16;
typedef enum NR_MeasAndMobParametersCommon__ext5__mfbi_IAB_r16 {
	NR_MeasAndMobParametersCommon__ext5__mfbi_IAB_r16_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext5__mfbi_IAB_r16;
typedef enum NR_MeasAndMobParametersCommon__ext5__dummy {
	NR_MeasAndMobParametersCommon__ext5__dummy_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext5__dummy;
typedef enum NR_MeasAndMobParametersCommon__ext5__nr_CGI_Reporting_NPN_r16 {
	NR_MeasAndMobParametersCommon__ext5__nr_CGI_Reporting_NPN_r16_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext5__nr_CGI_Reporting_NPN_r16;
typedef enum NR_MeasAndMobParametersCommon__ext5__idleInactiveEUTRA_MeasReport_r16 {
	NR_MeasAndMobParametersCommon__ext5__idleInactiveEUTRA_MeasReport_r16_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext5__idleInactiveEUTRA_MeasReport_r16;
typedef enum NR_MeasAndMobParametersCommon__ext5__idleInactive_ValidityArea_r16 {
	NR_MeasAndMobParametersCommon__ext5__idleInactive_ValidityArea_r16_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext5__idleInactive_ValidityArea_r16;
typedef enum NR_MeasAndMobParametersCommon__ext5__eutra_AutonomousGaps_r16 {
	NR_MeasAndMobParametersCommon__ext5__eutra_AutonomousGaps_r16_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext5__eutra_AutonomousGaps_r16;
typedef enum NR_MeasAndMobParametersCommon__ext5__eutra_AutonomousGaps_NEDC_r16 {
	NR_MeasAndMobParametersCommon__ext5__eutra_AutonomousGaps_NEDC_r16_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext5__eutra_AutonomousGaps_NEDC_r16;
typedef enum NR_MeasAndMobParametersCommon__ext5__eutra_AutonomousGaps_NRDC_r16 {
	NR_MeasAndMobParametersCommon__ext5__eutra_AutonomousGaps_NRDC_r16_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext5__eutra_AutonomousGaps_NRDC_r16;
typedef enum NR_MeasAndMobParametersCommon__ext5__pcellT312_r16 {
	NR_MeasAndMobParametersCommon__ext5__pcellT312_r16_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext5__pcellT312_r16;
typedef enum NR_MeasAndMobParametersCommon__ext6__concurrentMeasGap_r17_PR {
	NR_MeasAndMobParametersCommon__ext6__concurrentMeasGap_r17_PR_NOTHING,	/* No components present */
	NR_MeasAndMobParametersCommon__ext6__concurrentMeasGap_r17_PR_concurrentPerUE_OnlyMeasGap_r17,
	NR_MeasAndMobParametersCommon__ext6__concurrentMeasGap_r17_PR_concurrentPerUE_PerFRCombMeasGap_r17
} NR_MeasAndMobParametersCommon__ext6__concurrentMeasGap_r17_PR;
typedef enum NR_MeasAndMobParametersCommon__ext6__concurrentMeasGap_r17__concurrentPerUE_OnlyMeasGap_r17 {
	NR_MeasAndMobParametersCommon__ext6__concurrentMeasGap_r17__concurrentPerUE_OnlyMeasGap_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext6__concurrentMeasGap_r17__concurrentPerUE_OnlyMeasGap_r17;
typedef enum NR_MeasAndMobParametersCommon__ext6__concurrentMeasGap_r17__concurrentPerUE_PerFRCombMeasGap_r17 {
	NR_MeasAndMobParametersCommon__ext6__concurrentMeasGap_r17__concurrentPerUE_PerFRCombMeasGap_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext6__concurrentMeasGap_r17__concurrentPerUE_PerFRCombMeasGap_r17;
typedef enum NR_MeasAndMobParametersCommon__ext6__nr_NeedForGapNCSG_Reporting_r17 {
	NR_MeasAndMobParametersCommon__ext6__nr_NeedForGapNCSG_Reporting_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext6__nr_NeedForGapNCSG_Reporting_r17;
typedef enum NR_MeasAndMobParametersCommon__ext6__eutra_NeedForGapNCSG_Reporting_r17 {
	NR_MeasAndMobParametersCommon__ext6__eutra_NeedForGapNCSG_Reporting_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext6__eutra_NeedForGapNCSG_Reporting_r17;
typedef enum NR_MeasAndMobParametersCommon__ext6__ncsg_MeasGapPerFR_r17 {
	NR_MeasAndMobParametersCommon__ext6__ncsg_MeasGapPerFR_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext6__ncsg_MeasGapPerFR_r17;
typedef enum NR_MeasAndMobParametersCommon__ext6__preconfiguredUE_AutonomousMeasGap_r17 {
	NR_MeasAndMobParametersCommon__ext6__preconfiguredUE_AutonomousMeasGap_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext6__preconfiguredUE_AutonomousMeasGap_r17;
typedef enum NR_MeasAndMobParametersCommon__ext6__preconfiguredNW_ControlledMeasGap_r17 {
	NR_MeasAndMobParametersCommon__ext6__preconfiguredNW_ControlledMeasGap_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext6__preconfiguredNW_ControlledMeasGap_r17;
typedef enum NR_MeasAndMobParametersCommon__ext6__handoverFR1_FR2_2_r17 {
	NR_MeasAndMobParametersCommon__ext6__handoverFR1_FR2_2_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext6__handoverFR1_FR2_2_r17;
typedef enum NR_MeasAndMobParametersCommon__ext6__handoverFR2_1_FR2_2_r17 {
	NR_MeasAndMobParametersCommon__ext6__handoverFR2_1_FR2_2_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext6__handoverFR2_1_FR2_2_r17;
typedef enum NR_MeasAndMobParametersCommon__ext6__independentGapConfigPRS_r17 {
	NR_MeasAndMobParametersCommon__ext6__independentGapConfigPRS_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext6__independentGapConfigPRS_r17;
typedef enum NR_MeasAndMobParametersCommon__ext6__rrm_RelaxationRRC_ConnectedRedCap_r17 {
	NR_MeasAndMobParametersCommon__ext6__rrm_RelaxationRRC_ConnectedRedCap_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext6__rrm_RelaxationRRC_ConnectedRedCap_r17;
typedef enum NR_MeasAndMobParametersCommon__ext6__parallelMeasurementGap_r17 {
	NR_MeasAndMobParametersCommon__ext6__parallelMeasurementGap_r17_n2	= 0
} e_NR_MeasAndMobParametersCommon__ext6__parallelMeasurementGap_r17;
typedef enum NR_MeasAndMobParametersCommon__ext6__condHandoverWithSCG_NRDC_r17 {
	NR_MeasAndMobParametersCommon__ext6__condHandoverWithSCG_NRDC_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext6__condHandoverWithSCG_NRDC_r17;
typedef enum NR_MeasAndMobParametersCommon__ext6__gNB_ID_LengthReporting_r17 {
	NR_MeasAndMobParametersCommon__ext6__gNB_ID_LengthReporting_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext6__gNB_ID_LengthReporting_r17;
typedef enum NR_MeasAndMobParametersCommon__ext6__gNB_ID_LengthReporting_ENDC_r17 {
	NR_MeasAndMobParametersCommon__ext6__gNB_ID_LengthReporting_ENDC_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext6__gNB_ID_LengthReporting_ENDC_r17;
typedef enum NR_MeasAndMobParametersCommon__ext6__gNB_ID_LengthReporting_NEDC_r17 {
	NR_MeasAndMobParametersCommon__ext6__gNB_ID_LengthReporting_NEDC_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext6__gNB_ID_LengthReporting_NEDC_r17;
typedef enum NR_MeasAndMobParametersCommon__ext6__gNB_ID_LengthReporting_NRDC_r17 {
	NR_MeasAndMobParametersCommon__ext6__gNB_ID_LengthReporting_NRDC_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext6__gNB_ID_LengthReporting_NRDC_r17;
typedef enum NR_MeasAndMobParametersCommon__ext6__gNB_ID_LengthReporting_NPN_r17 {
	NR_MeasAndMobParametersCommon__ext6__gNB_ID_LengthReporting_NPN_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext6__gNB_ID_LengthReporting_NPN_r17;
typedef enum NR_MeasAndMobParametersCommon__ext7__parallelSMTC_r17 {
	NR_MeasAndMobParametersCommon__ext7__parallelSMTC_r17_n4	= 0
} e_NR_MeasAndMobParametersCommon__ext7__parallelSMTC_r17;
typedef enum NR_MeasAndMobParametersCommon__ext7__concurrentMeasGapEUTRA_r17 {
	NR_MeasAndMobParametersCommon__ext7__concurrentMeasGapEUTRA_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext7__concurrentMeasGapEUTRA_r17;
typedef enum NR_MeasAndMobParametersCommon__ext7__serviceLinkPropDelayDiffReporting_r17 {
	NR_MeasAndMobParametersCommon__ext7__serviceLinkPropDelayDiffReporting_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext7__serviceLinkPropDelayDiffReporting_r17;
typedef enum NR_MeasAndMobParametersCommon__ext7__ncsg_SymbolLevelScheduleRestrictionInter_r17 {
	NR_MeasAndMobParametersCommon__ext7__ncsg_SymbolLevelScheduleRestrictionInter_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext7__ncsg_SymbolLevelScheduleRestrictionInter_r17;
typedef enum NR_MeasAndMobParametersCommon__ext8__eventD1_MeasReportTrigger_r17 {
	NR_MeasAndMobParametersCommon__ext8__eventD1_MeasReportTrigger_r17_supported	= 0
} e_NR_MeasAndMobParametersCommon__ext8__eventD1_MeasReportTrigger_r17;

/* NR_MeasAndMobParametersCommon */
typedef struct NR_MeasAndMobParametersCommon {
	BIT_STRING_t	*supportedGapPattern;	/* OPTIONAL */
	long	*ssb_RLM;	/* OPTIONAL */
	long	*ssb_AndCSI_RS_RLM;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_MeasAndMobParametersCommon__ext1 {
		long	*eventB_MeasAndReport;	/* OPTIONAL */
		long	*handoverFDD_TDD;	/* OPTIONAL */
		long	*eutra_CGI_Reporting;	/* OPTIONAL */
		long	*nr_CGI_Reporting;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_MeasAndMobParametersCommon__ext2 {
		long	*independentGapConfig;	/* OPTIONAL */
		long	*periodicEUTRA_MeasAndReport;	/* OPTIONAL */
		long	*handoverFR1_FR2;	/* OPTIONAL */
		long	*maxNumberCSI_RS_RRM_RS_SINR;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct NR_MeasAndMobParametersCommon__ext3 {
		long	*nr_CGI_Reporting_ENDC;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct NR_MeasAndMobParametersCommon__ext4 {
		long	*eutra_CGI_Reporting_NEDC;	/* OPTIONAL */
		long	*eutra_CGI_Reporting_NRDC;	/* OPTIONAL */
		long	*nr_CGI_Reporting_NEDC;	/* OPTIONAL */
		long	*nr_CGI_Reporting_NRDC;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct NR_MeasAndMobParametersCommon__ext5 {
		long	*reportAddNeighMeasForPeriodic_r16;	/* OPTIONAL */
		struct NR_MeasAndMobParametersCommon__ext5__condHandoverParametersCommon_r16 {
			long	*condHandoverFDD_TDD_r16;	/* OPTIONAL */
			long	*condHandoverFR1_FR2_r16;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *condHandoverParametersCommon_r16;
		long	*nr_NeedForGap_Reporting_r16;	/* OPTIONAL */
		BIT_STRING_t	*supportedGapPattern_NRonly_r16;	/* OPTIONAL */
		long	*supportedGapPattern_NRonly_NEDC_r16;	/* OPTIONAL */
		long	*maxNumberCLI_RSSI_r16;	/* OPTIONAL */
		long	*maxNumberCLI_SRS_RSRP_r16;	/* OPTIONAL */
		long	*maxNumberPerSlotCLI_SRS_RSRP_r16;	/* OPTIONAL */
		long	*mfbi_IAB_r16;	/* OPTIONAL */
		long	*dummy;	/* OPTIONAL */
		long	*nr_CGI_Reporting_NPN_r16;	/* OPTIONAL */
		long	*idleInactiveEUTRA_MeasReport_r16;	/* OPTIONAL */
		long	*idleInactive_ValidityArea_r16;	/* OPTIONAL */
		long	*eutra_AutonomousGaps_r16;	/* OPTIONAL */
		long	*eutra_AutonomousGaps_NEDC_r16;	/* OPTIONAL */
		long	*eutra_AutonomousGaps_NRDC_r16;	/* OPTIONAL */
		long	*pcellT312_r16;	/* OPTIONAL */
		BIT_STRING_t	*supportedGapPattern_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct NR_MeasAndMobParametersCommon__ext6 {
		struct NR_MeasAndMobParametersCommon__ext6__concurrentMeasGap_r17 {
			NR_MeasAndMobParametersCommon__ext6__concurrentMeasGap_r17_PR present;
			union NR_MeasAndMobParametersCommon__NR_ext6__NR_concurrentMeasGap_r17_u {
				long	 concurrentPerUE_OnlyMeasGap_r17;
				long	 concurrentPerUE_PerFRCombMeasGap_r17;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *concurrentMeasGap_r17;
		long	*nr_NeedForGapNCSG_Reporting_r17;	/* OPTIONAL */
		long	*eutra_NeedForGapNCSG_Reporting_r17;	/* OPTIONAL */
		long	*ncsg_MeasGapPerFR_r17;	/* OPTIONAL */
		BIT_STRING_t	*ncsg_MeasGapPatterns_r17;	/* OPTIONAL */
		BIT_STRING_t	*ncsg_MeasGapNR_Patterns_r17;	/* OPTIONAL */
		long	*preconfiguredUE_AutonomousMeasGap_r17;	/* OPTIONAL */
		long	*preconfiguredNW_ControlledMeasGap_r17;	/* OPTIONAL */
		long	*handoverFR1_FR2_2_r17;	/* OPTIONAL */
		long	*handoverFR2_1_FR2_2_r17;	/* OPTIONAL */
		long	*independentGapConfigPRS_r17;	/* OPTIONAL */
		long	*rrm_RelaxationRRC_ConnectedRedCap_r17;	/* OPTIONAL */
		long	*parallelMeasurementGap_r17;	/* OPTIONAL */
		long	*condHandoverWithSCG_NRDC_r17;	/* OPTIONAL */
		long	*gNB_ID_LengthReporting_r17;	/* OPTIONAL */
		long	*gNB_ID_LengthReporting_ENDC_r17;	/* OPTIONAL */
		long	*gNB_ID_LengthReporting_NEDC_r17;	/* OPTIONAL */
		long	*gNB_ID_LengthReporting_NRDC_r17;	/* OPTIONAL */
		long	*gNB_ID_LengthReporting_NPN_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	struct NR_MeasAndMobParametersCommon__ext7 {
		long	*parallelSMTC_r17;	/* OPTIONAL */
		long	*concurrentMeasGapEUTRA_r17;	/* OPTIONAL */
		long	*serviceLinkPropDelayDiffReporting_r17;	/* OPTIONAL */
		long	*ncsg_SymbolLevelScheduleRestrictionInter_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext7;
	struct NR_MeasAndMobParametersCommon__ext8 {
		long	*eventD1_MeasReportTrigger_r17;	/* OPTIONAL */
		struct NR_MeasAndMobParametersCommon__ext8__independentGapConfig_maxCC_r17 {
			long	*fr1_Only_r17;	/* OPTIONAL */
			long	*fr2_Only_r17;	/* OPTIONAL */
			long	*fr1_AndFR2_r17;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *independentGapConfig_maxCC_r17;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext8;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MeasAndMobParametersCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ssb_RLM_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ssb_AndCSI_RS_RLM_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eventB_MeasAndReport_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_handoverFDD_TDD_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_CGI_Reporting_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_nr_CGI_Reporting_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_independentGapConfig_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_periodicEUTRA_MeasAndReport_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_handoverFR1_FR2_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberCSI_RS_RRM_RS_SINR_24;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_nr_CGI_Reporting_ENDC_32;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_CGI_Reporting_NEDC_35;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_CGI_Reporting_NRDC_37;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_nr_CGI_Reporting_NEDC_39;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_nr_CGI_Reporting_NRDC_41;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_reportAddNeighMeasForPeriodic_r16_44;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_condHandoverFDD_TDD_r16_47;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_condHandoverFR1_FR2_r16_49;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_nr_NeedForGap_Reporting_r16_51;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_supportedGapPattern_NRonly_NEDC_r16_54;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberCLI_RSSI_r16_56;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberCLI_SRS_RSRP_r16_61;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberPerSlotCLI_SRS_RSRP_r16_66;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mfbi_IAB_r16_70;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dummy_72;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_nr_CGI_Reporting_NPN_r16_74;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_idleInactiveEUTRA_MeasReport_r16_76;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_idleInactive_ValidityArea_r16_78;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_AutonomousGaps_r16_80;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_AutonomousGaps_NEDC_r16_82;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_AutonomousGaps_NRDC_r16_84;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pcellT312_r16_86;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_concurrentPerUE_OnlyMeasGap_r17_91;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_concurrentPerUE_PerFRCombMeasGap_r17_93;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_nr_NeedForGapNCSG_Reporting_r17_95;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_NeedForGapNCSG_Reporting_r17_97;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ncsg_MeasGapPerFR_r17_99;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_preconfiguredUE_AutonomousMeasGap_r17_103;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_preconfiguredNW_ControlledMeasGap_r17_105;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_handoverFR1_FR2_2_r17_107;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_handoverFR2_1_FR2_2_r17_109;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_independentGapConfigPRS_r17_111;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rrm_RelaxationRRC_ConnectedRedCap_r17_113;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_parallelMeasurementGap_r17_115;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_condHandoverWithSCG_NRDC_r17_117;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_gNB_ID_LengthReporting_r17_119;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_gNB_ID_LengthReporting_ENDC_r17_121;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_gNB_ID_LengthReporting_NEDC_r17_123;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_gNB_ID_LengthReporting_NRDC_r17_125;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_gNB_ID_LengthReporting_NPN_r17_127;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_parallelSMTC_r17_130;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_concurrentMeasGapEUTRA_r17_132;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_serviceLinkPropDelayDiffReporting_r17_134;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ncsg_SymbolLevelScheduleRestrictionInter_r17_136;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eventD1_MeasReportTrigger_r17_139;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_MeasAndMobParametersCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MeasAndMobParametersCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MeasAndMobParametersCommon_1[11];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_MeasAndMobParametersCommon_H_ */
#include <asn_internal.h>