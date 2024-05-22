/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 */

#ifndef _X2AP_ASN_CONSTANT_H
#define _X2AP_ASN_CONSTANT_H

#ifdef __cplusplus
extern "C" {
#endif

#define min_val_X2AP_ActivationID (0)
#define max_val_X2AP_ActivationID (255)
#define min_val_X2AP_BitRate (0)
#define max_val_X2AP_BitRate (10000000000)
#define min_val_X2AP_CapacityValue (0)
#define max_val_X2AP_CapacityValue (100)
#define min_val_X2AP_DL_ABS_status (0)
#define max_val_X2AP_DL_ABS_status (100)
#define min_val_X2AP_DL_GBR_PRB_usage (0)
#define max_val_X2AP_DL_GBR_PRB_usage (100)
#define min_val_X2AP_DL_non_GBR_PRB_usage (0)
#define max_val_X2AP_DL_non_GBR_PRB_usage (100)
#define min_val_X2AP_DL_scheduling_PDCCH_CCE_usage (0)
#define max_val_X2AP_DL_scheduling_PDCCH_CCE_usage (100)
#define min_val_X2AP_DL_Total_PRB_usage (0)
#define max_val_X2AP_DL_Total_PRB_usage (100)
#define min_val_X2AP_DRB_ID (1)
#define max_val_X2AP_DRB_ID (32)
#define min_val_X2AP_EARFCN (0)
#define max_val_X2AP_EARFCN (65535)
#define min_val_X2AP_HFN (0)
#define max_val_X2AP_HFN (1048575)
#define min_val_X2AP_HFNModified (0)
#define max_val_X2AP_HFNModified (131071)
#define min_val_X2AP_HFNforPDCP_SNlength18 (0)
#define max_val_X2AP_HFNforPDCP_SNlength18 (16383)
#define min_val_X2AP_NextHopChainingCount (0)
#define max_val_X2AP_NextHopChainingCount (7)
#define min_val_X2AP_NRPCI (0)
#define max_val_X2AP_NRPCI (1007)
#define min_val_X2AP_Packet_LossRate (0)
#define max_val_X2AP_Packet_LossRate (1000)
#define min_val_X2AP_PDCP_SN (0)
#define max_val_X2AP_PDCP_SN (4095)
#define min_val_X2AP_PDCP_SNExtended (0)
#define max_val_X2AP_PDCP_SNExtended (32767)
#define min_val_X2AP_PDCP_SNlength18 (0)
#define max_val_X2AP_PDCP_SNlength18 (262143)
#define min_val_X2AP_PriorityLevel (0)
#define max_val_X2AP_PriorityLevel (15)
#define min_val_X2AP_QCI (0)
#define max_val_X2AP_QCI (255)
#define min_val_X2AP_SgNB_UE_X2AP_ID (0)
#define max_val_X2AP_SgNB_UE_X2AP_ID (4294967295)
#define min_val_X2AP_SpectrumSharingGroupID (1)
#define max_val_X2AP_SpectrumSharingGroupID (256)
#define min_val_X2AP_SubscriberProfileIDforRFP (1)
#define max_val_X2AP_SubscriberProfileIDforRFP (256)
#define min_val_X2AP_Threshold_RSRP (0)
#define max_val_X2AP_Threshold_RSRP (97)
#define min_val_X2AP_Threshold_RSRQ (0)
#define max_val_X2AP_Threshold_RSRQ (34)
#define min_val_X2AP_Time_UE_StayedInCell (0)
#define max_val_X2AP_Time_UE_StayedInCell (4095)
#define min_val_X2AP_Time_UE_StayedInCell_EnhancedGranularity (0)
#define max_val_X2AP_Time_UE_StayedInCell_EnhancedGranularity (40950)
#define min_val_X2AP_UE_S1AP_ID (0)
#define max_val_X2AP_UE_S1AP_ID (4294967295)
#define min_val_X2AP_UE_X2AP_ID (0)
#define max_val_X2AP_UE_X2AP_ID (4095)
#define min_val_X2AP_UL_GBR_PRB_usage (0)
#define max_val_X2AP_UL_GBR_PRB_usage (100)
#define min_val_X2AP_UL_non_GBR_PRB_usage (0)
#define max_val_X2AP_UL_non_GBR_PRB_usage (100)
#define min_val_X2AP_UL_scheduling_PDCCH_CCE_usage (0)
#define max_val_X2AP_UL_scheduling_PDCCH_CCE_usage (100)
#define min_val_X2AP_UL_Total_PRB_usage (0)
#define max_val_X2AP_UL_Total_PRB_usage (100)
#define X2AP_maxPrivateIEs (65535)
#define X2AP_maxProtocolExtensions (65535)
#define X2AP_maxProtocolIEs (65535)
#define min_val_X2AP_ProcedureCode (0)
#define max_val_X2AP_ProcedureCode (255)
#define min_val_X2AP_ProtocolIE_ID (0)
#define max_val_X2AP_ProtocolIE_ID (65535)
#define X2AP_maxEARFCN (65535)
#define X2AP_maxEARFCNPlusOne (65536)
#define X2AP_newmaxEARFCN (262143)
#define X2AP_maxInterfaces (16)
#define X2AP_maxCellineNB (256)
#define X2AP_maxnoofBands (16)
#define X2AP_maxnoofBearers (256)
#define X2AP_maxNrOfErrors (256)
#define X2AP_maxnoofPDCP_SN (16)
#define X2AP_maxnoofEPLMNs (15)
#define X2AP_maxnoofEPLMNsPlusOne (16)
#define X2AP_maxnoofForbLACs (4096)
#define X2AP_maxnoofForbTACs (4096)
#define X2AP_maxnoofBPLMNs (6)
#define X2AP_maxnoofAdditionalPLMNs (6)
#define X2AP_maxnoofNeighbours (512)
#define X2AP_maxnoofPRBs (110)
#define X2AP_maxPools (16)
#define X2AP_maxnoofCells (16)
#define X2AP_maxnoofMBSFN (8)
#define X2AP_maxFailedMeasObjects (32)
#define X2AP_maxnoofCellIDforMDT (32)
#define X2AP_maxnoofTAforMDT (8)
#define X2AP_maxnoofMBMSServiceAreaIdentities (256)
#define X2AP_maxnoofMDTPLMNs (16)
#define X2AP_maxnoofCoMPHypothesisSet (256)
#define X2AP_maxnoofCoMPCells (32)
#define X2AP_maxUEReport (128)
#define X2AP_maxCellReport (9)
#define X2AP_maxnoofPA (3)
#define X2AP_maxCSIProcess (4)
#define X2AP_maxCSIReport (2)
#define X2AP_maxSubband (14)
#define X2AP_maxofNRNeighbours (1024)
#define X2AP_maxCellinengNB (16384)
#define X2AP_maxnooftimeperiods (2)
#define X2AP_maxnoofCellIDforQMC (32)
#define X2AP_maxnoofTAforQMC (8)
#define X2AP_maxnoofPLMNforQMC (16)
#define X2AP_maxUEsinengNBDU (8192)
#define X2AP_maxnoofProtectedResourcePatterns (16)
#define X2AP_maxnoNRcellsSpectrumSharingWithE_UTRA (64)
#define X2AP_maxnoofNrCellBands (32)
#define X2AP_maxnoofBluetoothName (4)
#define X2AP_maxnoofWLANName (4)
#define X2AP_maxnoofextBPLMNs (12)
#define X2AP_maxnoofextBPLMNsminus1 (11)
#define X2AP_maxnoofBPLMNsminus1 (11)


#ifdef __cplusplus
}
#endif

#endif /* _X2AP_ASN_CONSTANT_H */