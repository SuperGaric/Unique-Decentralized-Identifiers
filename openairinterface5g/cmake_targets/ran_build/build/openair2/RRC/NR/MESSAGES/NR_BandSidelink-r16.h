/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_BandSidelink_r16_H_
#define	_NR_BandSidelink_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_FreqBandIndicatorNR.h"
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_BandSidelink_r16__sl_Reception_r16__harq_RxProcessSidelink_r16 {
	NR_BandSidelink_r16__sl_Reception_r16__harq_RxProcessSidelink_r16_n16	= 0,
	NR_BandSidelink_r16__sl_Reception_r16__harq_RxProcessSidelink_r16_n24	= 1,
	NR_BandSidelink_r16__sl_Reception_r16__harq_RxProcessSidelink_r16_n32	= 2,
	NR_BandSidelink_r16__sl_Reception_r16__harq_RxProcessSidelink_r16_n48	= 3,
	NR_BandSidelink_r16__sl_Reception_r16__harq_RxProcessSidelink_r16_n64	= 4
} e_NR_BandSidelink_r16__sl_Reception_r16__harq_RxProcessSidelink_r16;
typedef enum NR_BandSidelink_r16__sl_Reception_r16__pscch_RxSidelink_r16 {
	NR_BandSidelink_r16__sl_Reception_r16__pscch_RxSidelink_r16_value1	= 0,
	NR_BandSidelink_r16__sl_Reception_r16__pscch_RxSidelink_r16_value2	= 1
} e_NR_BandSidelink_r16__sl_Reception_r16__pscch_RxSidelink_r16;
typedef enum NR_BandSidelink_r16__sl_Reception_r16__scs_CP_PatternRxSidelink_r16_PR {
	NR_BandSidelink_r16__sl_Reception_r16__scs_CP_PatternRxSidelink_r16_PR_NOTHING,	/* No components present */
	NR_BandSidelink_r16__sl_Reception_r16__scs_CP_PatternRxSidelink_r16_PR_fr1_r16,
	NR_BandSidelink_r16__sl_Reception_r16__scs_CP_PatternRxSidelink_r16_PR_fr2_r16
} NR_BandSidelink_r16__sl_Reception_r16__scs_CP_PatternRxSidelink_r16_PR;
typedef enum NR_BandSidelink_r16__sl_Reception_r16__extendedCP_RxSidelink_r16 {
	NR_BandSidelink_r16__sl_Reception_r16__extendedCP_RxSidelink_r16_supported	= 0
} e_NR_BandSidelink_r16__sl_Reception_r16__extendedCP_RxSidelink_r16;
typedef enum NR_BandSidelink_r16__sl_TransmissionMode1_r16__harq_TxProcessModeOneSidelink_r16 {
	NR_BandSidelink_r16__sl_TransmissionMode1_r16__harq_TxProcessModeOneSidelink_r16_n8	= 0,
	NR_BandSidelink_r16__sl_TransmissionMode1_r16__harq_TxProcessModeOneSidelink_r16_n16	= 1
} e_NR_BandSidelink_r16__sl_TransmissionMode1_r16__harq_TxProcessModeOneSidelink_r16;
typedef enum NR_BandSidelink_r16__sl_TransmissionMode1_r16__scs_CP_PatternTxSidelinkModeOne_r16_PR {
	NR_BandSidelink_r16__sl_TransmissionMode1_r16__scs_CP_PatternTxSidelinkModeOne_r16_PR_NOTHING,	/* No components present */
	NR_BandSidelink_r16__sl_TransmissionMode1_r16__scs_CP_PatternTxSidelinkModeOne_r16_PR_fr1_r16,
	NR_BandSidelink_r16__sl_TransmissionMode1_r16__scs_CP_PatternTxSidelinkModeOne_r16_PR_fr2_r16
} NR_BandSidelink_r16__sl_TransmissionMode1_r16__scs_CP_PatternTxSidelinkModeOne_r16_PR;
typedef enum NR_BandSidelink_r16__sl_TransmissionMode1_r16__extendedCP_TxSidelink_r16 {
	NR_BandSidelink_r16__sl_TransmissionMode1_r16__extendedCP_TxSidelink_r16_supported	= 0
} e_NR_BandSidelink_r16__sl_TransmissionMode1_r16__extendedCP_TxSidelink_r16;
typedef enum NR_BandSidelink_r16__sl_TransmissionMode1_r16__harq_ReportOnPUCCH_r16 {
	NR_BandSidelink_r16__sl_TransmissionMode1_r16__harq_ReportOnPUCCH_r16_supported	= 0
} e_NR_BandSidelink_r16__sl_TransmissionMode1_r16__harq_ReportOnPUCCH_r16;
typedef enum NR_BandSidelink_r16__sync_Sidelink_r16__gNB_Sync_r16 {
	NR_BandSidelink_r16__sync_Sidelink_r16__gNB_Sync_r16_supported	= 0
} e_NR_BandSidelink_r16__sync_Sidelink_r16__gNB_Sync_r16;
typedef enum NR_BandSidelink_r16__sync_Sidelink_r16__gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r16 {
	NR_BandSidelink_r16__sync_Sidelink_r16__gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r16_supported	= 0
} e_NR_BandSidelink_r16__sync_Sidelink_r16__gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r16;
typedef enum NR_BandSidelink_r16__sync_Sidelink_r16__gNB_GNSS_UE_SyncWithPriorityOnGNSS_r16 {
	NR_BandSidelink_r16__sync_Sidelink_r16__gNB_GNSS_UE_SyncWithPriorityOnGNSS_r16_supported	= 0
} e_NR_BandSidelink_r16__sync_Sidelink_r16__gNB_GNSS_UE_SyncWithPriorityOnGNSS_r16;
typedef enum NR_BandSidelink_r16__sl_Tx_256QAM_r16 {
	NR_BandSidelink_r16__sl_Tx_256QAM_r16_supported	= 0
} e_NR_BandSidelink_r16__sl_Tx_256QAM_r16;
typedef enum NR_BandSidelink_r16__psfch_FormatZeroSidelink_r16__psfch_RxNumber {
	NR_BandSidelink_r16__psfch_FormatZeroSidelink_r16__psfch_RxNumber_n5	= 0,
	NR_BandSidelink_r16__psfch_FormatZeroSidelink_r16__psfch_RxNumber_n15	= 1,
	NR_BandSidelink_r16__psfch_FormatZeroSidelink_r16__psfch_RxNumber_n25	= 2,
	NR_BandSidelink_r16__psfch_FormatZeroSidelink_r16__psfch_RxNumber_n32	= 3,
	NR_BandSidelink_r16__psfch_FormatZeroSidelink_r16__psfch_RxNumber_n35	= 4,
	NR_BandSidelink_r16__psfch_FormatZeroSidelink_r16__psfch_RxNumber_n45	= 5,
	NR_BandSidelink_r16__psfch_FormatZeroSidelink_r16__psfch_RxNumber_n50	= 6,
	NR_BandSidelink_r16__psfch_FormatZeroSidelink_r16__psfch_RxNumber_n64	= 7
} e_NR_BandSidelink_r16__psfch_FormatZeroSidelink_r16__psfch_RxNumber;
typedef enum NR_BandSidelink_r16__psfch_FormatZeroSidelink_r16__psfch_TxNumber {
	NR_BandSidelink_r16__psfch_FormatZeroSidelink_r16__psfch_TxNumber_n4	= 0,
	NR_BandSidelink_r16__psfch_FormatZeroSidelink_r16__psfch_TxNumber_n8	= 1,
	NR_BandSidelink_r16__psfch_FormatZeroSidelink_r16__psfch_TxNumber_n16	= 2
} e_NR_BandSidelink_r16__psfch_FormatZeroSidelink_r16__psfch_TxNumber;
typedef enum NR_BandSidelink_r16__lowSE_64QAM_MCS_TableSidelink_r16 {
	NR_BandSidelink_r16__lowSE_64QAM_MCS_TableSidelink_r16_supported	= 0
} e_NR_BandSidelink_r16__lowSE_64QAM_MCS_TableSidelink_r16;
typedef enum NR_BandSidelink_r16__enb_sync_Sidelink_r16 {
	NR_BandSidelink_r16__enb_sync_Sidelink_r16_supported	= 0
} e_NR_BandSidelink_r16__enb_sync_Sidelink_r16;
typedef enum NR_BandSidelink_r16__ext1__sl_TransmissionMode2_r16__harq_TxProcessModeTwoSidelink_r16 {
	NR_BandSidelink_r16__ext1__sl_TransmissionMode2_r16__harq_TxProcessModeTwoSidelink_r16_n8	= 0,
	NR_BandSidelink_r16__ext1__sl_TransmissionMode2_r16__harq_TxProcessModeTwoSidelink_r16_n16	= 1
} e_NR_BandSidelink_r16__ext1__sl_TransmissionMode2_r16__harq_TxProcessModeTwoSidelink_r16;
typedef enum NR_BandSidelink_r16__ext1__sl_TransmissionMode2_r16__scs_CP_PatternTxSidelinkModeTwo_r16 {
	NR_BandSidelink_r16__ext1__sl_TransmissionMode2_r16__scs_CP_PatternTxSidelinkModeTwo_r16_supported	= 0
} e_NR_BandSidelink_r16__ext1__sl_TransmissionMode2_r16__scs_CP_PatternTxSidelinkModeTwo_r16;
typedef enum NR_BandSidelink_r16__ext1__sl_TransmissionMode2_r16__dl_openLoopPC_Sidelink_r16 {
	NR_BandSidelink_r16__ext1__sl_TransmissionMode2_r16__dl_openLoopPC_Sidelink_r16_supported	= 0
} e_NR_BandSidelink_r16__ext1__sl_TransmissionMode2_r16__dl_openLoopPC_Sidelink_r16;
typedef enum NR_BandSidelink_r16__ext1__congestionControlSidelink_r16__cbr_ReportSidelink_r16 {
	NR_BandSidelink_r16__ext1__congestionControlSidelink_r16__cbr_ReportSidelink_r16_supported	= 0
} e_NR_BandSidelink_r16__ext1__congestionControlSidelink_r16__cbr_ReportSidelink_r16;
typedef enum NR_BandSidelink_r16__ext1__congestionControlSidelink_r16__cbr_CR_TimeLimitSidelink_r16 {
	NR_BandSidelink_r16__ext1__congestionControlSidelink_r16__cbr_CR_TimeLimitSidelink_r16_time1	= 0,
	NR_BandSidelink_r16__ext1__congestionControlSidelink_r16__cbr_CR_TimeLimitSidelink_r16_time2	= 1
} e_NR_BandSidelink_r16__ext1__congestionControlSidelink_r16__cbr_CR_TimeLimitSidelink_r16;
typedef enum NR_BandSidelink_r16__ext1__fewerSymbolSlotSidelink_r16 {
	NR_BandSidelink_r16__ext1__fewerSymbolSlotSidelink_r16_supported	= 0
} e_NR_BandSidelink_r16__ext1__fewerSymbolSlotSidelink_r16;
typedef enum NR_BandSidelink_r16__ext1__sl_openLoopPC_RSRP_ReportSidelink_r16 {
	NR_BandSidelink_r16__ext1__sl_openLoopPC_RSRP_ReportSidelink_r16_supported	= 0
} e_NR_BandSidelink_r16__ext1__sl_openLoopPC_RSRP_ReportSidelink_r16;
typedef enum NR_BandSidelink_r16__ext1__sl_Rx_256QAM_r16 {
	NR_BandSidelink_r16__ext1__sl_Rx_256QAM_r16_supported	= 0
} e_NR_BandSidelink_r16__ext1__sl_Rx_256QAM_r16;
typedef enum NR_BandSidelink_r16__ext2__ue_PowerClassSidelink_r16 {
	NR_BandSidelink_r16__ext2__ue_PowerClassSidelink_r16_pc2	= 0,
	NR_BandSidelink_r16__ext2__ue_PowerClassSidelink_r16_pc3	= 1,
	NR_BandSidelink_r16__ext2__ue_PowerClassSidelink_r16_spare6	= 2,
	NR_BandSidelink_r16__ext2__ue_PowerClassSidelink_r16_spare5	= 3,
	NR_BandSidelink_r16__ext2__ue_PowerClassSidelink_r16_spare4	= 4,
	NR_BandSidelink_r16__ext2__ue_PowerClassSidelink_r16_spare3	= 5,
	NR_BandSidelink_r16__ext2__ue_PowerClassSidelink_r16_spare2	= 6,
	NR_BandSidelink_r16__ext2__ue_PowerClassSidelink_r16_spare1	= 7
} e_NR_BandSidelink_r16__ext2__ue_PowerClassSidelink_r16;
typedef enum NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__harq_TxProcessModeTwoSidelink_r17 {
	NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__harq_TxProcessModeTwoSidelink_r17_n8	= 0,
	NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__harq_TxProcessModeTwoSidelink_r17_n16	= 1
} e_NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__harq_TxProcessModeTwoSidelink_r17;
typedef enum NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__scs_CP_PatternTxSidelinkModeTwo_r17_PR {
	NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__scs_CP_PatternTxSidelinkModeTwo_r17_PR_NOTHING,	/* No components present */
	NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__scs_CP_PatternTxSidelinkModeTwo_r17_PR_fr1_r17,
	NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__scs_CP_PatternTxSidelinkModeTwo_r17_PR_fr2_r17
} NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__scs_CP_PatternTxSidelinkModeTwo_r17_PR;
typedef enum NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__extendedCP_Mode2Random_r17 {
	NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__extendedCP_Mode2Random_r17_supported	= 0
} e_NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__extendedCP_Mode2Random_r17;
typedef enum NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__dl_openLoopPC_Sidelink_r17 {
	NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__dl_openLoopPC_Sidelink_r17_supported	= 0
} e_NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__dl_openLoopPC_Sidelink_r17;
typedef enum NR_BandSidelink_r16__ext3__sync_Sidelink_v1710__sync_GNSS_r17 {
	NR_BandSidelink_r16__ext3__sync_Sidelink_v1710__sync_GNSS_r17_supported	= 0
} e_NR_BandSidelink_r16__ext3__sync_Sidelink_v1710__sync_GNSS_r17;
typedef enum NR_BandSidelink_r16__ext3__sync_Sidelink_v1710__gNB_Sync_r17 {
	NR_BandSidelink_r16__ext3__sync_Sidelink_v1710__gNB_Sync_r17_supported	= 0
} e_NR_BandSidelink_r16__ext3__sync_Sidelink_v1710__gNB_Sync_r17;
typedef enum NR_BandSidelink_r16__ext3__sync_Sidelink_v1710__gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r17 {
	NR_BandSidelink_r16__ext3__sync_Sidelink_v1710__gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r17_supported	= 0
} e_NR_BandSidelink_r16__ext3__sync_Sidelink_v1710__gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r17;
typedef enum NR_BandSidelink_r16__ext3__sync_Sidelink_v1710__gNB_GNSS_UE_SyncWithPriorityOnGNSS_r17 {
	NR_BandSidelink_r16__ext3__sync_Sidelink_v1710__gNB_GNSS_UE_SyncWithPriorityOnGNSS_r17_supported	= 0
} e_NR_BandSidelink_r16__ext3__sync_Sidelink_v1710__gNB_GNSS_UE_SyncWithPriorityOnGNSS_r17;
typedef enum NR_BandSidelink_r16__ext3__enb_sync_Sidelink_v1710 {
	NR_BandSidelink_r16__ext3__enb_sync_Sidelink_v1710_supported	= 0
} e_NR_BandSidelink_r16__ext3__enb_sync_Sidelink_v1710;
typedef enum NR_BandSidelink_r16__ext3__rx_IUC_Scheme1_PreferredMode2Sidelink_r17 {
	NR_BandSidelink_r16__ext3__rx_IUC_Scheme1_PreferredMode2Sidelink_r17_supported	= 0
} e_NR_BandSidelink_r16__ext3__rx_IUC_Scheme1_PreferredMode2Sidelink_r17;
typedef enum NR_BandSidelink_r16__ext3__rx_IUC_Scheme1_NonPreferredMode2Sidelink_r17 {
	NR_BandSidelink_r16__ext3__rx_IUC_Scheme1_NonPreferredMode2Sidelink_r17_supported	= 0
} e_NR_BandSidelink_r16__ext3__rx_IUC_Scheme1_NonPreferredMode2Sidelink_r17;
typedef enum NR_BandSidelink_r16__ext3__rx_IUC_Scheme2_Mode2Sidelink_r17 {
	NR_BandSidelink_r16__ext3__rx_IUC_Scheme2_Mode2Sidelink_r17_n5	= 0,
	NR_BandSidelink_r16__ext3__rx_IUC_Scheme2_Mode2Sidelink_r17_n15	= 1,
	NR_BandSidelink_r16__ext3__rx_IUC_Scheme2_Mode2Sidelink_r17_n25	= 2,
	NR_BandSidelink_r16__ext3__rx_IUC_Scheme2_Mode2Sidelink_r17_n32	= 3,
	NR_BandSidelink_r16__ext3__rx_IUC_Scheme2_Mode2Sidelink_r17_n35	= 4,
	NR_BandSidelink_r16__ext3__rx_IUC_Scheme2_Mode2Sidelink_r17_n45	= 5,
	NR_BandSidelink_r16__ext3__rx_IUC_Scheme2_Mode2Sidelink_r17_n50	= 6,
	NR_BandSidelink_r16__ext3__rx_IUC_Scheme2_Mode2Sidelink_r17_n64	= 7
} e_NR_BandSidelink_r16__ext3__rx_IUC_Scheme2_Mode2Sidelink_r17;
typedef enum NR_BandSidelink_r16__ext3__rx_IUC_Scheme1_SCI_r17 {
	NR_BandSidelink_r16__ext3__rx_IUC_Scheme1_SCI_r17_supported	= 0
} e_NR_BandSidelink_r16__ext3__rx_IUC_Scheme1_SCI_r17;
typedef enum NR_BandSidelink_r16__ext3__rx_IUC_Scheme1_SCI_ExplicitReq_r17 {
	NR_BandSidelink_r16__ext3__rx_IUC_Scheme1_SCI_ExplicitReq_r17_supported	= 0
} e_NR_BandSidelink_r16__ext3__rx_IUC_Scheme1_SCI_ExplicitReq_r17;

/* NR_BandSidelink-r16 */
typedef struct NR_BandSidelink_r16 {
	NR_FreqBandIndicatorNR_t	 freqBandSidelink_r16;
	struct NR_BandSidelink_r16__sl_Reception_r16 {
		long	 harq_RxProcessSidelink_r16;
		long	 pscch_RxSidelink_r16;
		struct NR_BandSidelink_r16__sl_Reception_r16__scs_CP_PatternRxSidelink_r16 {
			NR_BandSidelink_r16__sl_Reception_r16__scs_CP_PatternRxSidelink_r16_PR present;
			union NR_BandSidelink_r16__NR_sl_Reception_r16__NR_scs_CP_PatternRxSidelink_r16_u {
				struct NR_BandSidelink_r16__sl_Reception_r16__scs_CP_PatternRxSidelink_r16__fr1_r16 {
					BIT_STRING_t	*scs_15kHz_r16;	/* OPTIONAL */
					BIT_STRING_t	*scs_30kHz_r16;	/* OPTIONAL */
					BIT_STRING_t	*scs_60kHz_r16;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *fr1_r16;
				struct NR_BandSidelink_r16__sl_Reception_r16__scs_CP_PatternRxSidelink_r16__fr2_r16 {
					BIT_STRING_t	*scs_60kHz_r16;	/* OPTIONAL */
					BIT_STRING_t	*scs_120kHz_r16;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *fr2_r16;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs_CP_PatternRxSidelink_r16;
		long	*extendedCP_RxSidelink_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_Reception_r16;
	struct NR_BandSidelink_r16__sl_TransmissionMode1_r16 {
		long	 harq_TxProcessModeOneSidelink_r16;
		struct NR_BandSidelink_r16__sl_TransmissionMode1_r16__scs_CP_PatternTxSidelinkModeOne_r16 {
			NR_BandSidelink_r16__sl_TransmissionMode1_r16__scs_CP_PatternTxSidelinkModeOne_r16_PR present;
			union NR_BandSidelink_r16__NR_sl_TransmissionMode1_r16__NR_scs_CP_PatternTxSidelinkModeOne_r16_u {
				struct NR_BandSidelink_r16__sl_TransmissionMode1_r16__scs_CP_PatternTxSidelinkModeOne_r16__fr1_r16 {
					BIT_STRING_t	*scs_15kHz_r16;	/* OPTIONAL */
					BIT_STRING_t	*scs_30kHz_r16;	/* OPTIONAL */
					BIT_STRING_t	*scs_60kHz_r16;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *fr1_r16;
				struct NR_BandSidelink_r16__sl_TransmissionMode1_r16__scs_CP_PatternTxSidelinkModeOne_r16__fr2_r16 {
					BIT_STRING_t	*scs_60kHz_r16;	/* OPTIONAL */
					BIT_STRING_t	*scs_120kHz_r16;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *fr2_r16;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} scs_CP_PatternTxSidelinkModeOne_r16;
		long	*extendedCP_TxSidelink_r16;	/* OPTIONAL */
		long	*harq_ReportOnPUCCH_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_TransmissionMode1_r16;
	struct NR_BandSidelink_r16__sync_Sidelink_r16 {
		long	*gNB_Sync_r16;	/* OPTIONAL */
		long	*gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r16;	/* OPTIONAL */
		long	*gNB_GNSS_UE_SyncWithPriorityOnGNSS_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sync_Sidelink_r16;
	long	*sl_Tx_256QAM_r16;	/* OPTIONAL */
	struct NR_BandSidelink_r16__psfch_FormatZeroSidelink_r16 {
		long	 psfch_RxNumber;
		long	 psfch_TxNumber;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *psfch_FormatZeroSidelink_r16;
	long	*lowSE_64QAM_MCS_TableSidelink_r16;	/* OPTIONAL */
	long	*enb_sync_Sidelink_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_BandSidelink_r16__ext1 {
		struct NR_BandSidelink_r16__ext1__sl_TransmissionMode2_r16 {
			long	 harq_TxProcessModeTwoSidelink_r16;
			long	*scs_CP_PatternTxSidelinkModeTwo_r16;	/* OPTIONAL */
			long	*dl_openLoopPC_Sidelink_r16;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *sl_TransmissionMode2_r16;
		struct NR_BandSidelink_r16__ext1__congestionControlSidelink_r16 {
			long	*cbr_ReportSidelink_r16;	/* OPTIONAL */
			long	 cbr_CR_TimeLimitSidelink_r16;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *congestionControlSidelink_r16;
		long	*fewerSymbolSlotSidelink_r16;	/* OPTIONAL */
		long	*sl_openLoopPC_RSRP_ReportSidelink_r16;	/* OPTIONAL */
		long	*sl_Rx_256QAM_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_BandSidelink_r16__ext2 {
		long	*ue_PowerClassSidelink_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct NR_BandSidelink_r16__ext3 {
		struct NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17 {
			long	 harq_TxProcessModeTwoSidelink_r17;
			struct NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__scs_CP_PatternTxSidelinkModeTwo_r17 {
				NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__scs_CP_PatternTxSidelinkModeTwo_r17_PR present;
				union NR_BandSidelink_r16__NR_ext3__NR_sl_TransmissionMode2_RandomResourceSelection_r17__NR_scs_CP_PatternTxSidelinkModeTwo_r17_u {
					struct NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__scs_CP_PatternTxSidelinkModeTwo_r17__fr1_r17 {
						BIT_STRING_t	*scs_15kHz_r17;	/* OPTIONAL */
						BIT_STRING_t	*scs_30kHz_r17;	/* OPTIONAL */
						BIT_STRING_t	*scs_60kHz_r17;	/* OPTIONAL */
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *fr1_r17;
					struct NR_BandSidelink_r16__ext3__sl_TransmissionMode2_RandomResourceSelection_r17__scs_CP_PatternTxSidelinkModeTwo_r17__fr2_r17 {
						BIT_STRING_t	*scs_60kHz_r17;	/* OPTIONAL */
						BIT_STRING_t	*scs_120kHz_r17;	/* OPTIONAL */
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *fr2_r17;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *scs_CP_PatternTxSidelinkModeTwo_r17;
			long	*extendedCP_Mode2Random_r17;	/* OPTIONAL */
			long	*dl_openLoopPC_Sidelink_r17;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *sl_TransmissionMode2_RandomResourceSelection_r17;
		struct NR_BandSidelink_r16__ext3__sync_Sidelink_v1710 {
			long	*sync_GNSS_r17;	/* OPTIONAL */
			long	*gNB_Sync_r17;	/* OPTIONAL */
			long	*gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r17;	/* OPTIONAL */
			long	*gNB_GNSS_UE_SyncWithPriorityOnGNSS_r17;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *sync_Sidelink_v1710;
		long	*enb_sync_Sidelink_v1710;	/* OPTIONAL */
		long	*rx_IUC_Scheme1_PreferredMode2Sidelink_r17;	/* OPTIONAL */
		long	*rx_IUC_Scheme1_NonPreferredMode2Sidelink_r17;	/* OPTIONAL */
		long	*rx_IUC_Scheme2_Mode2Sidelink_r17;	/* OPTIONAL */
		long	*rx_IUC_Scheme1_SCI_r17;	/* OPTIONAL */
		long	*rx_IUC_Scheme1_SCI_ExplicitReq_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BandSidelink_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_harq_RxProcessSidelink_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pscch_RxSidelink_r16_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_extendedCP_RxSidelink_r16_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_harq_TxProcessModeOneSidelink_r16_24;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_extendedCP_TxSidelink_r16_35;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_harq_ReportOnPUCCH_r16_37;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_gNB_Sync_r16_40;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r16_42;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_gNB_GNSS_UE_SyncWithPriorityOnGNSS_r16_44;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_Tx_256QAM_r16_46;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_psfch_RxNumber_49;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_psfch_TxNumber_58;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_lowSE_64QAM_MCS_TableSidelink_r16_62;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_enb_sync_Sidelink_r16_64;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_harq_TxProcessModeTwoSidelink_r16_69;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_CP_PatternTxSidelinkModeTwo_r16_72;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dl_openLoopPC_Sidelink_r16_74;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_cbr_ReportSidelink_r16_77;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_cbr_CR_TimeLimitSidelink_r16_79;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_fewerSymbolSlotSidelink_r16_82;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_openLoopPC_RSRP_ReportSidelink_r16_84;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_Rx_256QAM_r16_86;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ue_PowerClassSidelink_r16_89;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_harq_TxProcessModeTwoSidelink_r17_100;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_extendedCP_Mode2Random_r17_111;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dl_openLoopPC_Sidelink_r17_113;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sync_GNSS_r17_116;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_gNB_Sync_r17_118;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r17_120;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_gNB_GNSS_UE_SyncWithPriorityOnGNSS_r17_122;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_enb_sync_Sidelink_v1710_124;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rx_IUC_Scheme1_PreferredMode2Sidelink_r17_126;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rx_IUC_Scheme1_NonPreferredMode2Sidelink_r17_128;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rx_IUC_Scheme2_Mode2Sidelink_r17_130;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rx_IUC_Scheme1_SCI_r17_139;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rx_IUC_Scheme1_SCI_ExplicitReq_r17_141;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_BandSidelink_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_BandSidelink_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BandSidelink_r16_1[11];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_BandSidelink_r16_H_ */
#include <asn_internal.h>
