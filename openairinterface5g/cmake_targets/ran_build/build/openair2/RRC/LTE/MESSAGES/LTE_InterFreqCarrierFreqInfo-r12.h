/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_InterFreqCarrierFreqInfo_r12_H_
#define	_LTE_InterFreqCarrierFreqInfo_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ARFCN-ValueEUTRA-r9.h"
#include "LTE_Q-RxLevMin.h"
#include "LTE_P-Max.h"
#include "LTE_T-Reselection.h"
#include "LTE_ReselectionThreshold.h"
#include "LTE_AllowedMeasBandwidth.h"
#include "LTE_PresenceAntennaPort1.h"
#include "LTE_CellReselectionPriority.h"
#include "LTE_NeighCellConfig.h"
#include "LTE_Q-OffsetRange.h"
#include "LTE_Q-QualMin-r9.h"
#include <NativeEnumerated.h>
#include "LTE_ReselectionThresholdQ-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_InterFreqCarrierFreqInfo_r12__reducedMeasPerformance_r12 {
	LTE_InterFreqCarrierFreqInfo_r12__reducedMeasPerformance_r12_true	= 0
} e_LTE_InterFreqCarrierFreqInfo_r12__reducedMeasPerformance_r12;

/* Forward declarations */
struct LTE_SpeedStateScaleFactors;
struct LTE_InterFreqNeighCellList;
struct LTE_InterFreqBlackCellList;
struct LTE_MultiBandInfoList_r11;

/* LTE_InterFreqCarrierFreqInfo-r12 */
typedef struct LTE_InterFreqCarrierFreqInfo_r12 {
	LTE_ARFCN_ValueEUTRA_r9_t	 dl_CarrierFreq_r12;
	LTE_Q_RxLevMin_t	 q_RxLevMin_r12;
	LTE_P_Max_t	*p_Max_r12;	/* OPTIONAL */
	LTE_T_Reselection_t	 t_ReselectionEUTRA_r12;
	struct LTE_SpeedStateScaleFactors	*t_ReselectionEUTRA_SF_r12;	/* OPTIONAL */
	LTE_ReselectionThreshold_t	 threshX_High_r12;
	LTE_ReselectionThreshold_t	 threshX_Low_r12;
	LTE_AllowedMeasBandwidth_t	 allowedMeasBandwidth_r12;
	LTE_PresenceAntennaPort1_t	 presenceAntennaPort1_r12;
	LTE_CellReselectionPriority_t	*cellReselectionPriority_r12;	/* OPTIONAL */
	LTE_NeighCellConfig_t	 neighCellConfig_r12;
	LTE_Q_OffsetRange_t	*q_OffsetFreq_r12;	/* DEFAULT 15 */
	struct LTE_InterFreqNeighCellList	*interFreqNeighCellList_r12;	/* OPTIONAL */
	struct LTE_InterFreqBlackCellList	*interFreqBlackCellList_r12;	/* OPTIONAL */
	LTE_Q_QualMin_r9_t	*q_QualMin_r12;	/* OPTIONAL */
	struct LTE_InterFreqCarrierFreqInfo_r12__threshX_Q_r12 {
		LTE_ReselectionThresholdQ_r9_t	 threshX_HighQ_r12;
		LTE_ReselectionThresholdQ_r9_t	 threshX_LowQ_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *threshX_Q_r12;
	LTE_Q_QualMin_r9_t	*q_QualMinWB_r12;	/* OPTIONAL */
	struct LTE_MultiBandInfoList_r11	*multiBandInfoList_r12;	/* OPTIONAL */
	long	*reducedMeasPerformance_r12;	/* OPTIONAL */
	LTE_Q_QualMin_r9_t	*q_QualMinRSRQ_OnAllSymbols_r12;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_InterFreqCarrierFreqInfo_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_reducedMeasPerformance_r12_22;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_InterFreqCarrierFreqInfo_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_InterFreqCarrierFreqInfo_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_InterFreqCarrierFreqInfo_r12_1[20];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SpeedStateScaleFactors.h"
#include "LTE_InterFreqNeighCellList.h"
#include "LTE_InterFreqBlackCellList.h"
#include "LTE_MultiBandInfoList-r11.h"

#endif	/* _LTE_InterFreqCarrierFreqInfo_r12_H_ */
#include <asn_internal.h>
