/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_Phy_ParametersFRX_Diff_H_
#define	_NR_Phy_ParametersFRX_Diff_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_Phy_ParametersFRX_Diff__dynamicSFI {
	NR_Phy_ParametersFRX_Diff__dynamicSFI_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__dynamicSFI;
typedef enum NR_Phy_ParametersFRX_Diff__supportedDMRS_TypeDL {
	NR_Phy_ParametersFRX_Diff__supportedDMRS_TypeDL_type1	= 0,
	NR_Phy_ParametersFRX_Diff__supportedDMRS_TypeDL_type1And2	= 1
} e_NR_Phy_ParametersFRX_Diff__supportedDMRS_TypeDL;
typedef enum NR_Phy_ParametersFRX_Diff__supportedDMRS_TypeUL {
	NR_Phy_ParametersFRX_Diff__supportedDMRS_TypeUL_type1	= 0,
	NR_Phy_ParametersFRX_Diff__supportedDMRS_TypeUL_type1And2	= 1
} e_NR_Phy_ParametersFRX_Diff__supportedDMRS_TypeUL;
typedef enum NR_Phy_ParametersFRX_Diff__semiOpenLoopCSI {
	NR_Phy_ParametersFRX_Diff__semiOpenLoopCSI_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__semiOpenLoopCSI;
typedef enum NR_Phy_ParametersFRX_Diff__csi_ReportWithoutPMI {
	NR_Phy_ParametersFRX_Diff__csi_ReportWithoutPMI_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__csi_ReportWithoutPMI;
typedef enum NR_Phy_ParametersFRX_Diff__csi_ReportWithoutCQI {
	NR_Phy_ParametersFRX_Diff__csi_ReportWithoutCQI_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__csi_ReportWithoutCQI;
typedef enum NR_Phy_ParametersFRX_Diff__twoPUCCH_F0_2_ConsecSymbols {
	NR_Phy_ParametersFRX_Diff__twoPUCCH_F0_2_ConsecSymbols_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__twoPUCCH_F0_2_ConsecSymbols;
typedef enum NR_Phy_ParametersFRX_Diff__pucch_F2_WithFH {
	NR_Phy_ParametersFRX_Diff__pucch_F2_WithFH_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__pucch_F2_WithFH;
typedef enum NR_Phy_ParametersFRX_Diff__pucch_F3_WithFH {
	NR_Phy_ParametersFRX_Diff__pucch_F3_WithFH_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__pucch_F3_WithFH;
typedef enum NR_Phy_ParametersFRX_Diff__pucch_F4_WithFH {
	NR_Phy_ParametersFRX_Diff__pucch_F4_WithFH_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__pucch_F4_WithFH;
typedef enum NR_Phy_ParametersFRX_Diff__pucch_F0_2WithoutFH {
	NR_Phy_ParametersFRX_Diff__pucch_F0_2WithoutFH_notSupported	= 0
} e_NR_Phy_ParametersFRX_Diff__pucch_F0_2WithoutFH;
typedef enum NR_Phy_ParametersFRX_Diff__pucch_F1_3_4WithoutFH {
	NR_Phy_ParametersFRX_Diff__pucch_F1_3_4WithoutFH_notSupported	= 0
} e_NR_Phy_ParametersFRX_Diff__pucch_F1_3_4WithoutFH;
typedef enum NR_Phy_ParametersFRX_Diff__mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot {
	NR_Phy_ParametersFRX_Diff__mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot;
typedef enum NR_Phy_ParametersFRX_Diff__uci_CodeBlockSegmentation {
	NR_Phy_ParametersFRX_Diff__uci_CodeBlockSegmentation_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__uci_CodeBlockSegmentation;
typedef enum NR_Phy_ParametersFRX_Diff__onePUCCH_LongAndShortFormat {
	NR_Phy_ParametersFRX_Diff__onePUCCH_LongAndShortFormat_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__onePUCCH_LongAndShortFormat;
typedef enum NR_Phy_ParametersFRX_Diff__twoPUCCH_AnyOthersInSlot {
	NR_Phy_ParametersFRX_Diff__twoPUCCH_AnyOthersInSlot_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__twoPUCCH_AnyOthersInSlot;
typedef enum NR_Phy_ParametersFRX_Diff__intraSlotFreqHopping_PUSCH {
	NR_Phy_ParametersFRX_Diff__intraSlotFreqHopping_PUSCH_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__intraSlotFreqHopping_PUSCH;
typedef enum NR_Phy_ParametersFRX_Diff__pusch_LBRM {
	NR_Phy_ParametersFRX_Diff__pusch_LBRM_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__pusch_LBRM;
typedef enum NR_Phy_ParametersFRX_Diff__tpc_PUSCH_RNTI {
	NR_Phy_ParametersFRX_Diff__tpc_PUSCH_RNTI_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__tpc_PUSCH_RNTI;
typedef enum NR_Phy_ParametersFRX_Diff__tpc_PUCCH_RNTI {
	NR_Phy_ParametersFRX_Diff__tpc_PUCCH_RNTI_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__tpc_PUCCH_RNTI;
typedef enum NR_Phy_ParametersFRX_Diff__tpc_SRS_RNTI {
	NR_Phy_ParametersFRX_Diff__tpc_SRS_RNTI_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__tpc_SRS_RNTI;
typedef enum NR_Phy_ParametersFRX_Diff__absoluteTPC_Command {
	NR_Phy_ParametersFRX_Diff__absoluteTPC_Command_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__absoluteTPC_Command;
typedef enum NR_Phy_ParametersFRX_Diff__twoDifferentTPC_Loop_PUSCH {
	NR_Phy_ParametersFRX_Diff__twoDifferentTPC_Loop_PUSCH_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__twoDifferentTPC_Loop_PUSCH;
typedef enum NR_Phy_ParametersFRX_Diff__twoDifferentTPC_Loop_PUCCH {
	NR_Phy_ParametersFRX_Diff__twoDifferentTPC_Loop_PUCCH_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__twoDifferentTPC_Loop_PUCCH;
typedef enum NR_Phy_ParametersFRX_Diff__pusch_HalfPi_BPSK {
	NR_Phy_ParametersFRX_Diff__pusch_HalfPi_BPSK_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__pusch_HalfPi_BPSK;
typedef enum NR_Phy_ParametersFRX_Diff__pucch_F3_4_HalfPi_BPSK {
	NR_Phy_ParametersFRX_Diff__pucch_F3_4_HalfPi_BPSK_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__pucch_F3_4_HalfPi_BPSK;
typedef enum NR_Phy_ParametersFRX_Diff__almostContiguousCP_OFDM_UL {
	NR_Phy_ParametersFRX_Diff__almostContiguousCP_OFDM_UL_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__almostContiguousCP_OFDM_UL;
typedef enum NR_Phy_ParametersFRX_Diff__sp_CSI_RS {
	NR_Phy_ParametersFRX_Diff__sp_CSI_RS_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__sp_CSI_RS;
typedef enum NR_Phy_ParametersFRX_Diff__sp_CSI_IM {
	NR_Phy_ParametersFRX_Diff__sp_CSI_IM_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__sp_CSI_IM;
typedef enum NR_Phy_ParametersFRX_Diff__tdd_MultiDL_UL_SwitchPerSlot {
	NR_Phy_ParametersFRX_Diff__tdd_MultiDL_UL_SwitchPerSlot_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__tdd_MultiDL_UL_SwitchPerSlot;
typedef enum NR_Phy_ParametersFRX_Diff__multipleCORESET {
	NR_Phy_ParametersFRX_Diff__multipleCORESET_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__multipleCORESET;
typedef enum NR_Phy_ParametersFRX_Diff__ext1__mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot__sameSymbol {
	NR_Phy_ParametersFRX_Diff__ext1__mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot__sameSymbol_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext1__mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot__sameSymbol;
typedef enum NR_Phy_ParametersFRX_Diff__ext1__mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot__diffSymbol {
	NR_Phy_ParametersFRX_Diff__ext1__mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot__diffSymbol_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext1__mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot__diffSymbol;
typedef enum NR_Phy_ParametersFRX_Diff__ext1__mux_SR_HARQ_ACK_PUCCH {
	NR_Phy_ParametersFRX_Diff__ext1__mux_SR_HARQ_ACK_PUCCH_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext1__mux_SR_HARQ_ACK_PUCCH;
typedef enum NR_Phy_ParametersFRX_Diff__ext1__mux_MultipleGroupCtrlCH_Overlap {
	NR_Phy_ParametersFRX_Diff__ext1__mux_MultipleGroupCtrlCH_Overlap_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext1__mux_MultipleGroupCtrlCH_Overlap;
typedef enum NR_Phy_ParametersFRX_Diff__ext1__dl_SchedulingOffset_PDSCH_TypeA {
	NR_Phy_ParametersFRX_Diff__ext1__dl_SchedulingOffset_PDSCH_TypeA_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext1__dl_SchedulingOffset_PDSCH_TypeA;
typedef enum NR_Phy_ParametersFRX_Diff__ext1__dl_SchedulingOffset_PDSCH_TypeB {
	NR_Phy_ParametersFRX_Diff__ext1__dl_SchedulingOffset_PDSCH_TypeB_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext1__dl_SchedulingOffset_PDSCH_TypeB;
typedef enum NR_Phy_ParametersFRX_Diff__ext1__ul_SchedulingOffset {
	NR_Phy_ParametersFRX_Diff__ext1__ul_SchedulingOffset_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext1__ul_SchedulingOffset;
typedef enum NR_Phy_ParametersFRX_Diff__ext1__dl_64QAM_MCS_TableAlt {
	NR_Phy_ParametersFRX_Diff__ext1__dl_64QAM_MCS_TableAlt_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext1__dl_64QAM_MCS_TableAlt;
typedef enum NR_Phy_ParametersFRX_Diff__ext1__ul_64QAM_MCS_TableAlt {
	NR_Phy_ParametersFRX_Diff__ext1__ul_64QAM_MCS_TableAlt_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext1__ul_64QAM_MCS_TableAlt;
typedef enum NR_Phy_ParametersFRX_Diff__ext1__cqi_TableAlt {
	NR_Phy_ParametersFRX_Diff__ext1__cqi_TableAlt_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext1__cqi_TableAlt;
typedef enum NR_Phy_ParametersFRX_Diff__ext1__oneFL_DMRS_TwoAdditionalDMRS_UL {
	NR_Phy_ParametersFRX_Diff__ext1__oneFL_DMRS_TwoAdditionalDMRS_UL_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext1__oneFL_DMRS_TwoAdditionalDMRS_UL;
typedef enum NR_Phy_ParametersFRX_Diff__ext1__twoFL_DMRS_TwoAdditionalDMRS_UL {
	NR_Phy_ParametersFRX_Diff__ext1__twoFL_DMRS_TwoAdditionalDMRS_UL_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext1__twoFL_DMRS_TwoAdditionalDMRS_UL;
typedef enum NR_Phy_ParametersFRX_Diff__ext1__oneFL_DMRS_ThreeAdditionalDMRS_UL {
	NR_Phy_ParametersFRX_Diff__ext1__oneFL_DMRS_ThreeAdditionalDMRS_UL_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext1__oneFL_DMRS_ThreeAdditionalDMRS_UL;
typedef enum NR_Phy_ParametersFRX_Diff__ext2__mux_HARQ_ACK_PUSCH_DiffSymbol {
	NR_Phy_ParametersFRX_Diff__ext2__mux_HARQ_ACK_PUSCH_DiffSymbol_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext2__mux_HARQ_ACK_PUSCH_DiffSymbol;
typedef enum NR_Phy_ParametersFRX_Diff__ext3__type1_HARQ_ACK_Codebook_r16 {
	NR_Phy_ParametersFRX_Diff__ext3__type1_HARQ_ACK_Codebook_r16_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext3__type1_HARQ_ACK_Codebook_r16;
typedef enum NR_Phy_ParametersFRX_Diff__ext3__enhancedPowerControl_r16 {
	NR_Phy_ParametersFRX_Diff__ext3__enhancedPowerControl_r16_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext3__enhancedPowerControl_r16;
typedef enum NR_Phy_ParametersFRX_Diff__ext3__simultaneousTCI_ActMultipleCC_r16 {
	NR_Phy_ParametersFRX_Diff__ext3__simultaneousTCI_ActMultipleCC_r16_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext3__simultaneousTCI_ActMultipleCC_r16;
typedef enum NR_Phy_ParametersFRX_Diff__ext3__simultaneousSpatialRelationMultipleCC_r16 {
	NR_Phy_ParametersFRX_Diff__ext3__simultaneousSpatialRelationMultipleCC_r16_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext3__simultaneousSpatialRelationMultipleCC_r16;
typedef enum NR_Phy_ParametersFRX_Diff__ext3__cli_RSSI_FDM_DL_r16 {
	NR_Phy_ParametersFRX_Diff__ext3__cli_RSSI_FDM_DL_r16_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext3__cli_RSSI_FDM_DL_r16;
typedef enum NR_Phy_ParametersFRX_Diff__ext3__cli_SRS_RSRP_FDM_DL_r16 {
	NR_Phy_ParametersFRX_Diff__ext3__cli_SRS_RSRP_FDM_DL_r16_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext3__cli_SRS_RSRP_FDM_DL_r16;
typedef enum NR_Phy_ParametersFRX_Diff__ext3__maxLayersMIMO_Adaptation_r16 {
	NR_Phy_ParametersFRX_Diff__ext3__maxLayersMIMO_Adaptation_r16_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext3__maxLayersMIMO_Adaptation_r16;
typedef enum NR_Phy_ParametersFRX_Diff__ext3__aggregationFactorSPS_DL_r16 {
	NR_Phy_ParametersFRX_Diff__ext3__aggregationFactorSPS_DL_r16_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext3__aggregationFactorSPS_DL_r16;
typedef enum NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResWithinSlotAcrossCC_OneFR_r16 {
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResWithinSlotAcrossCC_OneFR_r16_n2	= 0,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResWithinSlotAcrossCC_OneFR_r16_n4	= 1,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResWithinSlotAcrossCC_OneFR_r16_n8	= 2,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResWithinSlotAcrossCC_OneFR_r16_n12	= 3,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResWithinSlotAcrossCC_OneFR_r16_n16	= 4,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResWithinSlotAcrossCC_OneFR_r16_n32	= 5,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResWithinSlotAcrossCC_OneFR_r16_n64	= 6,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResWithinSlotAcrossCC_OneFR_r16_n128	= 7
} e_NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResWithinSlotAcrossCC_OneFR_r16;
typedef enum NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResAcrossCC_OneFR_r16 {
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResAcrossCC_OneFR_r16_n2	= 0,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResAcrossCC_OneFR_r16_n4	= 1,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResAcrossCC_OneFR_r16_n8	= 2,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResAcrossCC_OneFR_r16_n12	= 3,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResAcrossCC_OneFR_r16_n16	= 4,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResAcrossCC_OneFR_r16_n32	= 5,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResAcrossCC_OneFR_r16_n40	= 6,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResAcrossCC_OneFR_r16_n48	= 7,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResAcrossCC_OneFR_r16_n64	= 8,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResAcrossCC_OneFR_r16_n72	= 9,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResAcrossCC_OneFR_r16_n80	= 10,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResAcrossCC_OneFR_r16_n96	= 11,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResAcrossCC_OneFR_r16_n128	= 12,
	NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResAcrossCC_OneFR_r16_n256	= 13
} e_NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16__maxNumberResAcrossCC_OneFR_r16;
typedef enum NR_Phy_ParametersFRX_Diff__ext4__twoTCI_Act_servingCellInCC_List_r16 {
	NR_Phy_ParametersFRX_Diff__ext4__twoTCI_Act_servingCellInCC_List_r16_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext4__twoTCI_Act_servingCellInCC_List_r16;
typedef enum NR_Phy_ParametersFRX_Diff__ext5__cri_RI_CQI_WithoutNon_PMI_PortInd_r16 {
	NR_Phy_ParametersFRX_Diff__ext5__cri_RI_CQI_WithoutNon_PMI_PortInd_r16_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext5__cri_RI_CQI_WithoutNon_PMI_PortInd_r16;
typedef enum NR_Phy_ParametersFRX_Diff__ext6__cqi_4_BitsSubbandTN_NonSharedSpectrumChAccess_r17 {
	NR_Phy_ParametersFRX_Diff__ext6__cqi_4_BitsSubbandTN_NonSharedSpectrumChAccess_r17_supported	= 0
} e_NR_Phy_ParametersFRX_Diff__ext6__cqi_4_BitsSubbandTN_NonSharedSpectrumChAccess_r17;

/* Forward declarations */
struct NR_CSI_RS_IM_ReceptionForFeedback;
struct NR_CSI_RS_ProcFrameworkForSRS;
struct NR_CSI_ReportFramework;
struct NR_CSI_ReportFrameworkExt_r16;

/* NR_Phy-ParametersFRX-Diff */
typedef struct NR_Phy_ParametersFRX_Diff {
	long	*dynamicSFI;	/* OPTIONAL */
	BIT_STRING_t	*dummy1;	/* OPTIONAL */
	BIT_STRING_t	*twoFL_DMRS;	/* OPTIONAL */
	BIT_STRING_t	*dummy2;	/* OPTIONAL */
	BIT_STRING_t	*dummy3;	/* OPTIONAL */
	long	*supportedDMRS_TypeDL;	/* OPTIONAL */
	long	*supportedDMRS_TypeUL;	/* OPTIONAL */
	long	*semiOpenLoopCSI;	/* OPTIONAL */
	long	*csi_ReportWithoutPMI;	/* OPTIONAL */
	long	*csi_ReportWithoutCQI;	/* OPTIONAL */
	BIT_STRING_t	*onePortsPTRS;	/* OPTIONAL */
	long	*twoPUCCH_F0_2_ConsecSymbols;	/* OPTIONAL */
	long	*pucch_F2_WithFH;	/* OPTIONAL */
	long	*pucch_F3_WithFH;	/* OPTIONAL */
	long	*pucch_F4_WithFH;	/* OPTIONAL */
	long	*pucch_F0_2WithoutFH;	/* OPTIONAL */
	long	*pucch_F1_3_4WithoutFH;	/* OPTIONAL */
	long	*mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot;	/* OPTIONAL */
	long	*uci_CodeBlockSegmentation;	/* OPTIONAL */
	long	*onePUCCH_LongAndShortFormat;	/* OPTIONAL */
	long	*twoPUCCH_AnyOthersInSlot;	/* OPTIONAL */
	long	*intraSlotFreqHopping_PUSCH;	/* OPTIONAL */
	long	*pusch_LBRM;	/* OPTIONAL */
	long	*pdcch_BlindDetectionCA;	/* OPTIONAL */
	long	*tpc_PUSCH_RNTI;	/* OPTIONAL */
	long	*tpc_PUCCH_RNTI;	/* OPTIONAL */
	long	*tpc_SRS_RNTI;	/* OPTIONAL */
	long	*absoluteTPC_Command;	/* OPTIONAL */
	long	*twoDifferentTPC_Loop_PUSCH;	/* OPTIONAL */
	long	*twoDifferentTPC_Loop_PUCCH;	/* OPTIONAL */
	long	*pusch_HalfPi_BPSK;	/* OPTIONAL */
	long	*pucch_F3_4_HalfPi_BPSK;	/* OPTIONAL */
	long	*almostContiguousCP_OFDM_UL;	/* OPTIONAL */
	long	*sp_CSI_RS;	/* OPTIONAL */
	long	*sp_CSI_IM;	/* OPTIONAL */
	long	*tdd_MultiDL_UL_SwitchPerSlot;	/* OPTIONAL */
	long	*multipleCORESET;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_Phy_ParametersFRX_Diff__ext1 {
		struct NR_CSI_RS_IM_ReceptionForFeedback	*csi_RS_IM_ReceptionForFeedback;	/* OPTIONAL */
		struct NR_CSI_RS_ProcFrameworkForSRS	*csi_RS_ProcFrameworkForSRS;	/* OPTIONAL */
		struct NR_CSI_ReportFramework	*csi_ReportFramework;	/* OPTIONAL */
		struct NR_Phy_ParametersFRX_Diff__ext1__mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot {
			long	*sameSymbol;	/* OPTIONAL */
			long	*diffSymbol;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *mux_SR_HARQ_ACK_CSI_PUCCH_OncePerSlot;
		long	*mux_SR_HARQ_ACK_PUCCH;	/* OPTIONAL */
		long	*mux_MultipleGroupCtrlCH_Overlap;	/* OPTIONAL */
		long	*dl_SchedulingOffset_PDSCH_TypeA;	/* OPTIONAL */
		long	*dl_SchedulingOffset_PDSCH_TypeB;	/* OPTIONAL */
		long	*ul_SchedulingOffset;	/* OPTIONAL */
		long	*dl_64QAM_MCS_TableAlt;	/* OPTIONAL */
		long	*ul_64QAM_MCS_TableAlt;	/* OPTIONAL */
		long	*cqi_TableAlt;	/* OPTIONAL */
		long	*oneFL_DMRS_TwoAdditionalDMRS_UL;	/* OPTIONAL */
		long	*twoFL_DMRS_TwoAdditionalDMRS_UL;	/* OPTIONAL */
		long	*oneFL_DMRS_ThreeAdditionalDMRS_UL;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_Phy_ParametersFRX_Diff__ext2 {
		struct NR_Phy_ParametersFRX_Diff__ext2__pdcch_BlindDetectionNRDC {
			long	 pdcch_BlindDetectionMCG_UE;
			long	 pdcch_BlindDetectionSCG_UE;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *pdcch_BlindDetectionNRDC;
		long	*mux_HARQ_ACK_PUSCH_DiffSymbol;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct NR_Phy_ParametersFRX_Diff__ext3 {
		long	*type1_HARQ_ACK_Codebook_r16;	/* OPTIONAL */
		long	*enhancedPowerControl_r16;	/* OPTIONAL */
		long	*simultaneousTCI_ActMultipleCC_r16;	/* OPTIONAL */
		long	*simultaneousSpatialRelationMultipleCC_r16;	/* OPTIONAL */
		long	*cli_RSSI_FDM_DL_r16;	/* OPTIONAL */
		long	*cli_SRS_RSRP_FDM_DL_r16;	/* OPTIONAL */
		long	*maxLayersMIMO_Adaptation_r16;	/* OPTIONAL */
		long	*aggregationFactorSPS_DL_r16;	/* OPTIONAL */
		struct NR_Phy_ParametersFRX_Diff__ext3__maxTotalResourcesForOneFreqRange_r16 {
			long	*maxNumberResWithinSlotAcrossCC_OneFR_r16;	/* OPTIONAL */
			long	*maxNumberResAcrossCC_OneFR_r16;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *maxTotalResourcesForOneFreqRange_r16;
		struct NR_CSI_ReportFrameworkExt_r16	*csi_ReportFrameworkExt_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct NR_Phy_ParametersFRX_Diff__ext4 {
		long	*twoTCI_Act_servingCellInCC_List_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct NR_Phy_ParametersFRX_Diff__ext5 {
		long	*cri_RI_CQI_WithoutNon_PMI_PortInd_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct NR_Phy_ParametersFRX_Diff__ext6 {
		long	*cqi_4_BitsSubbandTN_NonSharedSpectrumChAccess_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_Phy_ParametersFRX_Diff_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dynamicSFI_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_supportedDMRS_TypeDL_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_supportedDMRS_TypeUL_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_semiOpenLoopCSI_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_csi_ReportWithoutPMI_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_csi_ReportWithoutCQI_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_twoPUCCH_F0_2_ConsecSymbols_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pucch_F2_WithFH_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pucch_F3_WithFH_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pucch_F4_WithFH_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pucch_F0_2WithoutFH_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pucch_F1_3_4WithoutFH_31;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mux_SR_HARQ_ACK_CSI_PUCCH_MultiPerSlot_33;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_uci_CodeBlockSegmentation_35;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_onePUCCH_LongAndShortFormat_37;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_twoPUCCH_AnyOthersInSlot_39;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_intraSlotFreqHopping_PUSCH_41;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pusch_LBRM_43;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_tpc_PUSCH_RNTI_46;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_tpc_PUCCH_RNTI_48;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_tpc_SRS_RNTI_50;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_absoluteTPC_Command_52;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_twoDifferentTPC_Loop_PUSCH_54;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_twoDifferentTPC_Loop_PUCCH_56;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pusch_HalfPi_BPSK_58;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pucch_F3_4_HalfPi_BPSK_60;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_almostContiguousCP_OFDM_UL_62;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sp_CSI_RS_64;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sp_CSI_IM_66;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_tdd_MultiDL_UL_SwitchPerSlot_68;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_multipleCORESET_70;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sameSymbol_78;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_diffSymbol_80;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mux_SR_HARQ_ACK_PUCCH_82;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mux_MultipleGroupCtrlCH_Overlap_84;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dl_SchedulingOffset_PDSCH_TypeA_86;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dl_SchedulingOffset_PDSCH_TypeB_88;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ul_SchedulingOffset_90;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dl_64QAM_MCS_TableAlt_92;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ul_64QAM_MCS_TableAlt_94;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_cqi_TableAlt_96;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_oneFL_DMRS_TwoAdditionalDMRS_UL_98;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_twoFL_DMRS_TwoAdditionalDMRS_UL_100;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_oneFL_DMRS_ThreeAdditionalDMRS_UL_102;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mux_HARQ_ACK_PUSCH_DiffSymbol_108;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_type1_HARQ_ACK_Codebook_r16_111;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_enhancedPowerControl_r16_113;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_simultaneousTCI_ActMultipleCC_r16_115;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_simultaneousSpatialRelationMultipleCC_r16_117;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_cli_RSSI_FDM_DL_r16_119;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_cli_SRS_RSRP_FDM_DL_r16_121;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxLayersMIMO_Adaptation_r16_123;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_aggregationFactorSPS_DL_r16_125;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberResWithinSlotAcrossCC_OneFR_r16_128;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberResAcrossCC_OneFR_r16_137;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_twoTCI_Act_servingCellInCC_List_r16_154;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_cri_RI_CQI_WithoutNon_PMI_PortInd_r16_157;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_cqi_4_BitsSubbandTN_NonSharedSpectrumChAccess_r17_160;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_Phy_ParametersFRX_Diff;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_Phy_ParametersFRX_Diff_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_Phy_ParametersFRX_Diff_1[43];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_CSI-RS-IM-ReceptionForFeedback.h"
#include "NR_CSI-RS-ProcFrameworkForSRS.h"
#include "NR_CSI-ReportFramework.h"
#include "NR_CSI-ReportFrameworkExt-r16.h"

#endif	/* _NR_Phy_ParametersFRX_Diff_H_ */
#include <asn_internal.h>