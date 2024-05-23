/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-CommonDataTypes"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_ProtocolIE_ID_H_
#define	_F1AP_ProtocolIE_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* F1AP_ProtocolIE-ID */
typedef long	 F1AP_ProtocolIE_ID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_F1AP_ProtocolIE_ID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_F1AP_ProtocolIE_ID;
asn_struct_free_f F1AP_ProtocolIE_ID_free;
asn_struct_print_f F1AP_ProtocolIE_ID_print;
asn_constr_check_f F1AP_ProtocolIE_ID_constraint;
xer_type_decoder_f F1AP_ProtocolIE_ID_decode_xer;
xer_type_encoder_f F1AP_ProtocolIE_ID_encode_xer;
per_type_decoder_f F1AP_ProtocolIE_ID_decode_uper;
per_type_encoder_f F1AP_ProtocolIE_ID_encode_uper;
per_type_decoder_f F1AP_ProtocolIE_ID_decode_aper;
per_type_encoder_f F1AP_ProtocolIE_ID_encode_aper;
#define F1AP_ProtocolIE_ID_id_Cause	((F1AP_ProtocolIE_ID_t)0)
#define F1AP_ProtocolIE_ID_id_Cells_Failed_to_be_Activated_List	((F1AP_ProtocolIE_ID_t)1)
#define F1AP_ProtocolIE_ID_id_Cells_Failed_to_be_Activated_List_Item	((F1AP_ProtocolIE_ID_t)2)
#define F1AP_ProtocolIE_ID_id_Cells_to_be_Activated_List	((F1AP_ProtocolIE_ID_t)3)
#define F1AP_ProtocolIE_ID_id_Cells_to_be_Activated_List_Item	((F1AP_ProtocolIE_ID_t)4)
#define F1AP_ProtocolIE_ID_id_Cells_to_be_Deactivated_List	((F1AP_ProtocolIE_ID_t)5)
#define F1AP_ProtocolIE_ID_id_Cells_to_be_Deactivated_List_Item	((F1AP_ProtocolIE_ID_t)6)
#define F1AP_ProtocolIE_ID_id_CriticalityDiagnostics	((F1AP_ProtocolIE_ID_t)7)
#define F1AP_ProtocolIE_ID_id_CUtoDURRCInformation	((F1AP_ProtocolIE_ID_t)9)
#define F1AP_ProtocolIE_ID_id_DRBs_FailedToBeModified_Item	((F1AP_ProtocolIE_ID_t)12)
#define F1AP_ProtocolIE_ID_id_DRBs_FailedToBeModified_List	((F1AP_ProtocolIE_ID_t)13)
#define F1AP_ProtocolIE_ID_id_DRBs_FailedToBeSetup_Item	((F1AP_ProtocolIE_ID_t)14)
#define F1AP_ProtocolIE_ID_id_DRBs_FailedToBeSetup_List	((F1AP_ProtocolIE_ID_t)15)
#define F1AP_ProtocolIE_ID_id_DRBs_FailedToBeSetupMod_Item	((F1AP_ProtocolIE_ID_t)16)
#define F1AP_ProtocolIE_ID_id_DRBs_FailedToBeSetupMod_List	((F1AP_ProtocolIE_ID_t)17)
#define F1AP_ProtocolIE_ID_id_DRBs_ModifiedConf_Item	((F1AP_ProtocolIE_ID_t)18)
#define F1AP_ProtocolIE_ID_id_DRBs_ModifiedConf_List	((F1AP_ProtocolIE_ID_t)19)
#define F1AP_ProtocolIE_ID_id_DRBs_Modified_Item	((F1AP_ProtocolIE_ID_t)20)
#define F1AP_ProtocolIE_ID_id_DRBs_Modified_List	((F1AP_ProtocolIE_ID_t)21)
#define F1AP_ProtocolIE_ID_id_DRBs_Required_ToBeModified_Item	((F1AP_ProtocolIE_ID_t)22)
#define F1AP_ProtocolIE_ID_id_DRBs_Required_ToBeModified_List	((F1AP_ProtocolIE_ID_t)23)
#define F1AP_ProtocolIE_ID_id_DRBs_Required_ToBeReleased_Item	((F1AP_ProtocolIE_ID_t)24)
#define F1AP_ProtocolIE_ID_id_DRBs_Required_ToBeReleased_List	((F1AP_ProtocolIE_ID_t)25)
#define F1AP_ProtocolIE_ID_id_DRBs_Setup_Item	((F1AP_ProtocolIE_ID_t)26)
#define F1AP_ProtocolIE_ID_id_DRBs_Setup_List	((F1AP_ProtocolIE_ID_t)27)
#define F1AP_ProtocolIE_ID_id_DRBs_SetupMod_Item	((F1AP_ProtocolIE_ID_t)28)
#define F1AP_ProtocolIE_ID_id_DRBs_SetupMod_List	((F1AP_ProtocolIE_ID_t)29)
#define F1AP_ProtocolIE_ID_id_DRBs_ToBeModified_Item	((F1AP_ProtocolIE_ID_t)30)
#define F1AP_ProtocolIE_ID_id_DRBs_ToBeModified_List	((F1AP_ProtocolIE_ID_t)31)
#define F1AP_ProtocolIE_ID_id_DRBs_ToBeReleased_Item	((F1AP_ProtocolIE_ID_t)32)
#define F1AP_ProtocolIE_ID_id_DRBs_ToBeReleased_List	((F1AP_ProtocolIE_ID_t)33)
#define F1AP_ProtocolIE_ID_id_DRBs_ToBeSetup_Item	((F1AP_ProtocolIE_ID_t)34)
#define F1AP_ProtocolIE_ID_id_DRBs_ToBeSetup_List	((F1AP_ProtocolIE_ID_t)35)
#define F1AP_ProtocolIE_ID_id_DRBs_ToBeSetupMod_Item	((F1AP_ProtocolIE_ID_t)36)
#define F1AP_ProtocolIE_ID_id_DRBs_ToBeSetupMod_List	((F1AP_ProtocolIE_ID_t)37)
#define F1AP_ProtocolIE_ID_id_DRXCycle	((F1AP_ProtocolIE_ID_t)38)
#define F1AP_ProtocolIE_ID_id_DUtoCURRCInformation	((F1AP_ProtocolIE_ID_t)39)
#define F1AP_ProtocolIE_ID_id_gNB_CU_UE_F1AP_ID	((F1AP_ProtocolIE_ID_t)40)
#define F1AP_ProtocolIE_ID_id_gNB_DU_UE_F1AP_ID	((F1AP_ProtocolIE_ID_t)41)
#define F1AP_ProtocolIE_ID_id_gNB_DU_ID	((F1AP_ProtocolIE_ID_t)42)
#define F1AP_ProtocolIE_ID_id_GNB_DU_Served_Cells_Item	((F1AP_ProtocolIE_ID_t)43)
#define F1AP_ProtocolIE_ID_id_gNB_DU_Served_Cells_List	((F1AP_ProtocolIE_ID_t)44)
#define F1AP_ProtocolIE_ID_id_gNB_DU_Name	((F1AP_ProtocolIE_ID_t)45)
#define F1AP_ProtocolIE_ID_id_NRCellID	((F1AP_ProtocolIE_ID_t)46)
#define F1AP_ProtocolIE_ID_id_oldgNB_DU_UE_F1AP_ID	((F1AP_ProtocolIE_ID_t)47)
#define F1AP_ProtocolIE_ID_id_ResetType	((F1AP_ProtocolIE_ID_t)48)
#define F1AP_ProtocolIE_ID_id_ResourceCoordinationTransferContainer	((F1AP_ProtocolIE_ID_t)49)
#define F1AP_ProtocolIE_ID_id_RRCContainer	((F1AP_ProtocolIE_ID_t)50)
#define F1AP_ProtocolIE_ID_id_SCell_ToBeRemoved_Item	((F1AP_ProtocolIE_ID_t)51)
#define F1AP_ProtocolIE_ID_id_SCell_ToBeRemoved_List	((F1AP_ProtocolIE_ID_t)52)
#define F1AP_ProtocolIE_ID_id_SCell_ToBeSetup_Item	((F1AP_ProtocolIE_ID_t)53)
#define F1AP_ProtocolIE_ID_id_SCell_ToBeSetup_List	((F1AP_ProtocolIE_ID_t)54)
#define F1AP_ProtocolIE_ID_id_SCell_ToBeSetupMod_Item	((F1AP_ProtocolIE_ID_t)55)
#define F1AP_ProtocolIE_ID_id_SCell_ToBeSetupMod_List	((F1AP_ProtocolIE_ID_t)56)
#define F1AP_ProtocolIE_ID_id_Served_Cells_To_Add_Item	((F1AP_ProtocolIE_ID_t)57)
#define F1AP_ProtocolIE_ID_id_Served_Cells_To_Add_List	((F1AP_ProtocolIE_ID_t)58)
#define F1AP_ProtocolIE_ID_id_Served_Cells_To_Delete_Item	((F1AP_ProtocolIE_ID_t)59)
#define F1AP_ProtocolIE_ID_id_Served_Cells_To_Delete_List	((F1AP_ProtocolIE_ID_t)60)
#define F1AP_ProtocolIE_ID_id_Served_Cells_To_Modify_Item	((F1AP_ProtocolIE_ID_t)61)
#define F1AP_ProtocolIE_ID_id_Served_Cells_To_Modify_List	((F1AP_ProtocolIE_ID_t)62)
#define F1AP_ProtocolIE_ID_id_SpCell_ID	((F1AP_ProtocolIE_ID_t)63)
#define F1AP_ProtocolIE_ID_id_SRBID	((F1AP_ProtocolIE_ID_t)64)
#define F1AP_ProtocolIE_ID_id_SRBs_FailedToBeSetup_Item	((F1AP_ProtocolIE_ID_t)65)
#define F1AP_ProtocolIE_ID_id_SRBs_FailedToBeSetup_List	((F1AP_ProtocolIE_ID_t)66)
#define F1AP_ProtocolIE_ID_id_SRBs_FailedToBeSetupMod_Item	((F1AP_ProtocolIE_ID_t)67)
#define F1AP_ProtocolIE_ID_id_SRBs_FailedToBeSetupMod_List	((F1AP_ProtocolIE_ID_t)68)
#define F1AP_ProtocolIE_ID_id_SRBs_Required_ToBeReleased_Item	((F1AP_ProtocolIE_ID_t)69)
#define F1AP_ProtocolIE_ID_id_SRBs_Required_ToBeReleased_List	((F1AP_ProtocolIE_ID_t)70)
#define F1AP_ProtocolIE_ID_id_SRBs_ToBeReleased_Item	((F1AP_ProtocolIE_ID_t)71)
#define F1AP_ProtocolIE_ID_id_SRBs_ToBeReleased_List	((F1AP_ProtocolIE_ID_t)72)
#define F1AP_ProtocolIE_ID_id_SRBs_ToBeSetup_Item	((F1AP_ProtocolIE_ID_t)73)
#define F1AP_ProtocolIE_ID_id_SRBs_ToBeSetup_List	((F1AP_ProtocolIE_ID_t)74)
#define F1AP_ProtocolIE_ID_id_SRBs_ToBeSetupMod_Item	((F1AP_ProtocolIE_ID_t)75)
#define F1AP_ProtocolIE_ID_id_SRBs_ToBeSetupMod_List	((F1AP_ProtocolIE_ID_t)76)
#define F1AP_ProtocolIE_ID_id_TimeToWait	((F1AP_ProtocolIE_ID_t)77)
#define F1AP_ProtocolIE_ID_id_TransactionID	((F1AP_ProtocolIE_ID_t)78)
#define F1AP_ProtocolIE_ID_id_TransmissionActionIndicator	((F1AP_ProtocolIE_ID_t)79)
#define F1AP_ProtocolIE_ID_id_UE_associatedLogicalF1_ConnectionItem	((F1AP_ProtocolIE_ID_t)80)
#define F1AP_ProtocolIE_ID_id_UE_associatedLogicalF1_ConnectionListResAck	((F1AP_ProtocolIE_ID_t)81)
#define F1AP_ProtocolIE_ID_id_gNB_CU_Name	((F1AP_ProtocolIE_ID_t)82)
#define F1AP_ProtocolIE_ID_id_SCell_FailedtoSetup_List	((F1AP_ProtocolIE_ID_t)83)
#define F1AP_ProtocolIE_ID_id_SCell_FailedtoSetup_Item	((F1AP_ProtocolIE_ID_t)84)
#define F1AP_ProtocolIE_ID_id_SCell_FailedtoSetupMod_List	((F1AP_ProtocolIE_ID_t)85)
#define F1AP_ProtocolIE_ID_id_SCell_FailedtoSetupMod_Item	((F1AP_ProtocolIE_ID_t)86)
#define F1AP_ProtocolIE_ID_id_RRCReconfigurationCompleteIndicator	((F1AP_ProtocolIE_ID_t)87)
#define F1AP_ProtocolIE_ID_id_Cells_Status_Item	((F1AP_ProtocolIE_ID_t)88)
#define F1AP_ProtocolIE_ID_id_Cells_Status_List	((F1AP_ProtocolIE_ID_t)89)
#define F1AP_ProtocolIE_ID_id_Candidate_SpCell_List	((F1AP_ProtocolIE_ID_t)90)
#define F1AP_ProtocolIE_ID_id_Candidate_SpCell_Item	((F1AP_ProtocolIE_ID_t)91)
#define F1AP_ProtocolIE_ID_id_Potential_SpCell_List	((F1AP_ProtocolIE_ID_t)92)
#define F1AP_ProtocolIE_ID_id_Potential_SpCell_Item	((F1AP_ProtocolIE_ID_t)93)
#define F1AP_ProtocolIE_ID_id_FullConfiguration	((F1AP_ProtocolIE_ID_t)94)
#define F1AP_ProtocolIE_ID_id_C_RNTI	((F1AP_ProtocolIE_ID_t)95)
#define F1AP_ProtocolIE_ID_id_SpCellULConfigured	((F1AP_ProtocolIE_ID_t)96)
#define F1AP_ProtocolIE_ID_id_InactivityMonitoringRequest	((F1AP_ProtocolIE_ID_t)97)
#define F1AP_ProtocolIE_ID_id_InactivityMonitoringResponse	((F1AP_ProtocolIE_ID_t)98)
#define F1AP_ProtocolIE_ID_id_DRB_Activity_Item	((F1AP_ProtocolIE_ID_t)99)
#define F1AP_ProtocolIE_ID_id_DRB_Activity_List	((F1AP_ProtocolIE_ID_t)100)
#define F1AP_ProtocolIE_ID_id_EUTRA_NR_CellResourceCoordinationReq_Container	((F1AP_ProtocolIE_ID_t)101)
#define F1AP_ProtocolIE_ID_id_EUTRA_NR_CellResourceCoordinationReqAck_Container	((F1AP_ProtocolIE_ID_t)102)
#define F1AP_ProtocolIE_ID_id_Protected_EUTRA_Resources_List	((F1AP_ProtocolIE_ID_t)105)
#define F1AP_ProtocolIE_ID_id_RequestType	((F1AP_ProtocolIE_ID_t)106)
#define F1AP_ProtocolIE_ID_id_ServCellIndex	((F1AP_ProtocolIE_ID_t)107)
#define F1AP_ProtocolIE_ID_id_RAT_FrequencyPriorityInformation	((F1AP_ProtocolIE_ID_t)108)
#define F1AP_ProtocolIE_ID_id_ExecuteDuplication	((F1AP_ProtocolIE_ID_t)109)
#define F1AP_ProtocolIE_ID_id_NRCGI	((F1AP_ProtocolIE_ID_t)111)
#define F1AP_ProtocolIE_ID_id_PagingCell_Item	((F1AP_ProtocolIE_ID_t)112)
#define F1AP_ProtocolIE_ID_id_PagingCell_List	((F1AP_ProtocolIE_ID_t)113)
#define F1AP_ProtocolIE_ID_id_PagingDRX	((F1AP_ProtocolIE_ID_t)114)
#define F1AP_ProtocolIE_ID_id_PagingPriority	((F1AP_ProtocolIE_ID_t)115)
#define F1AP_ProtocolIE_ID_id_SItype_List	((F1AP_ProtocolIE_ID_t)116)
#define F1AP_ProtocolIE_ID_id_UEIdentityIndexValue	((F1AP_ProtocolIE_ID_t)117)
#define F1AP_ProtocolIE_ID_id_gNB_CUSystemInformation	((F1AP_ProtocolIE_ID_t)118)
#define F1AP_ProtocolIE_ID_id_HandoverPreparationInformation	((F1AP_ProtocolIE_ID_t)119)
#define F1AP_ProtocolIE_ID_id_GNB_CU_TNL_Association_To_Add_Item	((F1AP_ProtocolIE_ID_t)120)
#define F1AP_ProtocolIE_ID_id_GNB_CU_TNL_Association_To_Add_List	((F1AP_ProtocolIE_ID_t)121)
#define F1AP_ProtocolIE_ID_id_GNB_CU_TNL_Association_To_Remove_Item	((F1AP_ProtocolIE_ID_t)122)
#define F1AP_ProtocolIE_ID_id_GNB_CU_TNL_Association_To_Remove_List	((F1AP_ProtocolIE_ID_t)123)
#define F1AP_ProtocolIE_ID_id_GNB_CU_TNL_Association_To_Update_Item	((F1AP_ProtocolIE_ID_t)124)
#define F1AP_ProtocolIE_ID_id_GNB_CU_TNL_Association_To_Update_List	((F1AP_ProtocolIE_ID_t)125)
#define F1AP_ProtocolIE_ID_id_MaskedIMEISV	((F1AP_ProtocolIE_ID_t)126)
#define F1AP_ProtocolIE_ID_id_PagingIdentity	((F1AP_ProtocolIE_ID_t)127)
#define F1AP_ProtocolIE_ID_id_DUtoCURRCContainer	((F1AP_ProtocolIE_ID_t)128)
#define F1AP_ProtocolIE_ID_id_Cells_to_be_Barred_List	((F1AP_ProtocolIE_ID_t)129)
#define F1AP_ProtocolIE_ID_id_Cells_to_be_Barred_Item	((F1AP_ProtocolIE_ID_t)130)
#define F1AP_ProtocolIE_ID_id_TAISliceSupportList	((F1AP_ProtocolIE_ID_t)131)
#define F1AP_ProtocolIE_ID_id_GNB_CU_TNL_Association_Setup_List	((F1AP_ProtocolIE_ID_t)132)
#define F1AP_ProtocolIE_ID_id_GNB_CU_TNL_Association_Setup_Item	((F1AP_ProtocolIE_ID_t)133)
#define F1AP_ProtocolIE_ID_id_GNB_CU_TNL_Association_Failed_To_Setup_List	((F1AP_ProtocolIE_ID_t)134)
#define F1AP_ProtocolIE_ID_id_GNB_CU_TNL_Association_Failed_To_Setup_Item	((F1AP_ProtocolIE_ID_t)135)
#define F1AP_ProtocolIE_ID_id_DRB_Notify_Item	((F1AP_ProtocolIE_ID_t)136)
#define F1AP_ProtocolIE_ID_id_DRB_Notify_List	((F1AP_ProtocolIE_ID_t)137)
#define F1AP_ProtocolIE_ID_id_NotficationControl	((F1AP_ProtocolIE_ID_t)138)
#define F1AP_ProtocolIE_ID_id_RANAC	((F1AP_ProtocolIE_ID_t)139)
#define F1AP_ProtocolIE_ID_id_PWSSystemInformation	((F1AP_ProtocolIE_ID_t)140)
#define F1AP_ProtocolIE_ID_id_RepetitionPeriod	((F1AP_ProtocolIE_ID_t)141)
#define F1AP_ProtocolIE_ID_id_NumberofBroadcastRequest	((F1AP_ProtocolIE_ID_t)142)
#define F1AP_ProtocolIE_ID_id_Cells_To_Be_Broadcast_List	((F1AP_ProtocolIE_ID_t)144)
#define F1AP_ProtocolIE_ID_id_Cells_To_Be_Broadcast_Item	((F1AP_ProtocolIE_ID_t)145)
#define F1AP_ProtocolIE_ID_id_Cells_Broadcast_Completed_List	((F1AP_ProtocolIE_ID_t)146)
#define F1AP_ProtocolIE_ID_id_Cells_Broadcast_Completed_Item	((F1AP_ProtocolIE_ID_t)147)
#define F1AP_ProtocolIE_ID_id_Broadcast_To_Be_Cancelled_List	((F1AP_ProtocolIE_ID_t)148)
#define F1AP_ProtocolIE_ID_id_Broadcast_To_Be_Cancelled_Item	((F1AP_ProtocolIE_ID_t)149)
#define F1AP_ProtocolIE_ID_id_Cells_Broadcast_Cancelled_List	((F1AP_ProtocolIE_ID_t)150)
#define F1AP_ProtocolIE_ID_id_Cells_Broadcast_Cancelled_Item	((F1AP_ProtocolIE_ID_t)151)
#define F1AP_ProtocolIE_ID_id_NR_CGI_List_For_Restart_List	((F1AP_ProtocolIE_ID_t)152)
#define F1AP_ProtocolIE_ID_id_NR_CGI_List_For_Restart_Item	((F1AP_ProtocolIE_ID_t)153)
#define F1AP_ProtocolIE_ID_id_PWS_Failed_NR_CGI_List	((F1AP_ProtocolIE_ID_t)154)
#define F1AP_ProtocolIE_ID_id_PWS_Failed_NR_CGI_Item	((F1AP_ProtocolIE_ID_t)155)
#define F1AP_ProtocolIE_ID_id_ConfirmedUEID	((F1AP_ProtocolIE_ID_t)156)
#define F1AP_ProtocolIE_ID_id_Cancel_all_Warning_Messages_Indicator	((F1AP_ProtocolIE_ID_t)157)
#define F1AP_ProtocolIE_ID_id_GNB_DU_UE_AMBR_UL	((F1AP_ProtocolIE_ID_t)158)
#define F1AP_ProtocolIE_ID_id_DRXConfigurationIndicator	((F1AP_ProtocolIE_ID_t)159)
#define F1AP_ProtocolIE_ID_id_RLC_Status	((F1AP_ProtocolIE_ID_t)160)
#define F1AP_ProtocolIE_ID_id_DLPDCPSNLength	((F1AP_ProtocolIE_ID_t)161)
#define F1AP_ProtocolIE_ID_id_GNB_DUConfigurationQuery	((F1AP_ProtocolIE_ID_t)162)
#define F1AP_ProtocolIE_ID_id_MeasurementTimingConfiguration	((F1AP_ProtocolIE_ID_t)163)
#define F1AP_ProtocolIE_ID_id_DRB_Information	((F1AP_ProtocolIE_ID_t)164)
#define F1AP_ProtocolIE_ID_id_ServingPLMN	((F1AP_ProtocolIE_ID_t)165)
#define F1AP_ProtocolIE_ID_id_Protected_EUTRA_Resources_Item	((F1AP_ProtocolIE_ID_t)168)
#define F1AP_ProtocolIE_ID_id_GNB_CU_RRC_Version	((F1AP_ProtocolIE_ID_t)170)
#define F1AP_ProtocolIE_ID_id_GNB_DU_RRC_Version	((F1AP_ProtocolIE_ID_t)171)
#define F1AP_ProtocolIE_ID_id_GNBDUOverloadInformation	((F1AP_ProtocolIE_ID_t)172)
#define F1AP_ProtocolIE_ID_id_CellGroupConfig	((F1AP_ProtocolIE_ID_t)173)
#define F1AP_ProtocolIE_ID_id_RLCFailureIndication	((F1AP_ProtocolIE_ID_t)174)
#define F1AP_ProtocolIE_ID_id_UplinkTxDirectCurrentListInformation	((F1AP_ProtocolIE_ID_t)175)
#define F1AP_ProtocolIE_ID_id_DC_Based_Duplication_Configured	((F1AP_ProtocolIE_ID_t)176)
#define F1AP_ProtocolIE_ID_id_DC_Based_Duplication_Activation	((F1AP_ProtocolIE_ID_t)177)
#define F1AP_ProtocolIE_ID_id_SULAccessIndication	((F1AP_ProtocolIE_ID_t)178)
#define F1AP_ProtocolIE_ID_id_AvailablePLMNList	((F1AP_ProtocolIE_ID_t)179)
#define F1AP_ProtocolIE_ID_id_PDUSessionID	((F1AP_ProtocolIE_ID_t)180)
#define F1AP_ProtocolIE_ID_id_ULPDUSessionAggregateMaximumBitRate	((F1AP_ProtocolIE_ID_t)181)
#define F1AP_ProtocolIE_ID_id_ServingCellMO	((F1AP_ProtocolIE_ID_t)182)
#define F1AP_ProtocolIE_ID_id_QoSFlowMappingIndication	((F1AP_ProtocolIE_ID_t)183)
#define F1AP_ProtocolIE_ID_id_RRCDeliveryStatusRequest	((F1AP_ProtocolIE_ID_t)184)
#define F1AP_ProtocolIE_ID_id_RRCDeliveryStatus	((F1AP_ProtocolIE_ID_t)185)
#define F1AP_ProtocolIE_ID_id_BearerTypeChange	((F1AP_ProtocolIE_ID_t)186)
#define F1AP_ProtocolIE_ID_id_RLCMode	((F1AP_ProtocolIE_ID_t)187)
#define F1AP_ProtocolIE_ID_id_Duplication_Activation	((F1AP_ProtocolIE_ID_t)188)
#define F1AP_ProtocolIE_ID_id_Dedicated_SIDelivery_NeededUE_List	((F1AP_ProtocolIE_ID_t)189)
#define F1AP_ProtocolIE_ID_id_Dedicated_SIDelivery_NeededUE_Item	((F1AP_ProtocolIE_ID_t)190)
#define F1AP_ProtocolIE_ID_id_DRX_LongCycleStartOffset	((F1AP_ProtocolIE_ID_t)191)
#define F1AP_ProtocolIE_ID_id_ULPDCPSNLength	((F1AP_ProtocolIE_ID_t)192)
#define F1AP_ProtocolIE_ID_id_SelectedBandCombinationIndex	((F1AP_ProtocolIE_ID_t)193)
#define F1AP_ProtocolIE_ID_id_SelectedFeatureSetEntryIndex	((F1AP_ProtocolIE_ID_t)194)
#define F1AP_ProtocolIE_ID_id_ResourceCoordinationTransferInformation	((F1AP_ProtocolIE_ID_t)195)
#define F1AP_ProtocolIE_ID_id_ExtendedServedPLMNs_List	((F1AP_ProtocolIE_ID_t)196)
#define F1AP_ProtocolIE_ID_id_ExtendedAvailablePLMN_List	((F1AP_ProtocolIE_ID_t)197)
#define F1AP_ProtocolIE_ID_id_Associated_SCell_List	((F1AP_ProtocolIE_ID_t)198)
#define F1AP_ProtocolIE_ID_id_latest_RRC_Version_Enhanced	((F1AP_ProtocolIE_ID_t)199)
#define F1AP_ProtocolIE_ID_id_Associated_SCell_Item	((F1AP_ProtocolIE_ID_t)200)
#define F1AP_ProtocolIE_ID_id_Cell_Direction	((F1AP_ProtocolIE_ID_t)201)
#define F1AP_ProtocolIE_ID_id_SRBs_Setup_List	((F1AP_ProtocolIE_ID_t)202)
#define F1AP_ProtocolIE_ID_id_SRBs_Setup_Item	((F1AP_ProtocolIE_ID_t)203)
#define F1AP_ProtocolIE_ID_id_SRBs_SetupMod_List	((F1AP_ProtocolIE_ID_t)204)
#define F1AP_ProtocolIE_ID_id_SRBs_SetupMod_Item	((F1AP_ProtocolIE_ID_t)205)
#define F1AP_ProtocolIE_ID_id_SRBs_Modified_List	((F1AP_ProtocolIE_ID_t)206)
#define F1AP_ProtocolIE_ID_id_SRBs_Modified_Item	((F1AP_ProtocolIE_ID_t)207)
#define F1AP_ProtocolIE_ID_id_Ph_InfoSCG	((F1AP_ProtocolIE_ID_t)208)
#define F1AP_ProtocolIE_ID_id_RequestedBandCombinationIndex	((F1AP_ProtocolIE_ID_t)209)
#define F1AP_ProtocolIE_ID_id_RequestedFeatureSetEntryIndex	((F1AP_ProtocolIE_ID_t)210)
#define F1AP_ProtocolIE_ID_id_RequestedP_MaxFR2	((F1AP_ProtocolIE_ID_t)211)
#define F1AP_ProtocolIE_ID_id_DRX_Config	((F1AP_ProtocolIE_ID_t)212)
#define F1AP_ProtocolIE_ID_id_IgnoreResourceCoordinationContainer	((F1AP_ProtocolIE_ID_t)213)
#define F1AP_ProtocolIE_ID_id_UEAssistanceInformation	((F1AP_ProtocolIE_ID_t)214)
#define F1AP_ProtocolIE_ID_id_NeedforGap	((F1AP_ProtocolIE_ID_t)215)
#define F1AP_ProtocolIE_ID_id_PagingOrigin	((F1AP_ProtocolIE_ID_t)216)
#define F1AP_ProtocolIE_ID_id_new_gNB_CU_UE_F1AP_ID	((F1AP_ProtocolIE_ID_t)217)
#define F1AP_ProtocolIE_ID_id_RedirectedRRCmessage	((F1AP_ProtocolIE_ID_t)218)
#define F1AP_ProtocolIE_ID_id_new_gNB_DU_UE_F1AP_ID	((F1AP_ProtocolIE_ID_t)219)
#define F1AP_ProtocolIE_ID_id_NotificationInformation	((F1AP_ProtocolIE_ID_t)220)
#define F1AP_ProtocolIE_ID_id_PLMNAssistanceInfoForNetShar	((F1AP_ProtocolIE_ID_t)221)
#define F1AP_ProtocolIE_ID_id_UEContextNotRetrievable	((F1AP_ProtocolIE_ID_t)222)
#define F1AP_ProtocolIE_ID_id_BPLMN_ID_Info_List	((F1AP_ProtocolIE_ID_t)223)
#define F1AP_ProtocolIE_ID_id_SelectedPLMNID	((F1AP_ProtocolIE_ID_t)224)
#define F1AP_ProtocolIE_ID_id_UAC_Assistance_Info	((F1AP_ProtocolIE_ID_t)225)
#define F1AP_ProtocolIE_ID_id_RANUEID	((F1AP_ProtocolIE_ID_t)226)
#define F1AP_ProtocolIE_ID_id_GNB_DU_TNL_Association_To_Remove_Item	((F1AP_ProtocolIE_ID_t)227)
#define F1AP_ProtocolIE_ID_id_GNB_DU_TNL_Association_To_Remove_List	((F1AP_ProtocolIE_ID_t)228)
#define F1AP_ProtocolIE_ID_id_TNLAssociationTransportLayerAddressgNBDU	((F1AP_ProtocolIE_ID_t)229)
#define F1AP_ProtocolIE_ID_id_portNumber	((F1AP_ProtocolIE_ID_t)230)
#define F1AP_ProtocolIE_ID_id_AdditionalSIBMessageList	((F1AP_ProtocolIE_ID_t)231)
#define F1AP_ProtocolIE_ID_id_Cell_Type	((F1AP_ProtocolIE_ID_t)232)
#define F1AP_ProtocolIE_ID_id_IgnorePRACHConfiguration	((F1AP_ProtocolIE_ID_t)233)
#define F1AP_ProtocolIE_ID_id_CG_Config	((F1AP_ProtocolIE_ID_t)234)
#define F1AP_ProtocolIE_ID_id_PDCCH_BlindDetectionSCG	((F1AP_ProtocolIE_ID_t)235)
#define F1AP_ProtocolIE_ID_id_Requested_PDCCH_BlindDetectionSCG	((F1AP_ProtocolIE_ID_t)236)
#define F1AP_ProtocolIE_ID_id_Ph_InfoMCG	((F1AP_ProtocolIE_ID_t)237)
#define F1AP_ProtocolIE_ID_id_MeasGapSharingConfig	((F1AP_ProtocolIE_ID_t)238)
#define F1AP_ProtocolIE_ID_id_systemInformationAreaID	((F1AP_ProtocolIE_ID_t)239)
#define F1AP_ProtocolIE_ID_id_areaScope	((F1AP_ProtocolIE_ID_t)240)
#define F1AP_ProtocolIE_ID_id_RRCContainer_RRCSetupComplete	((F1AP_ProtocolIE_ID_t)241)
#define F1AP_ProtocolIE_ID_id_TraceActivation	((F1AP_ProtocolIE_ID_t)242)
#define F1AP_ProtocolIE_ID_id_TraceID	((F1AP_ProtocolIE_ID_t)243)
#define F1AP_ProtocolIE_ID_id_Neighbour_Cell_Information_List	((F1AP_ProtocolIE_ID_t)244)
#define F1AP_ProtocolIE_ID_id_SymbolAllocInSlot	((F1AP_ProtocolIE_ID_t)246)
#define F1AP_ProtocolIE_ID_id_NumDLULSymbols	((F1AP_ProtocolIE_ID_t)247)
#define F1AP_ProtocolIE_ID_id_AdditionalRRMPriorityIndex	((F1AP_ProtocolIE_ID_t)248)
#define F1AP_ProtocolIE_ID_id_DUCURadioInformationType	((F1AP_ProtocolIE_ID_t)249)
#define F1AP_ProtocolIE_ID_id_CUDURadioInformationType	((F1AP_ProtocolIE_ID_t)250)
#define F1AP_ProtocolIE_ID_id_AggressorgNBSetID	((F1AP_ProtocolIE_ID_t)251)
#define F1AP_ProtocolIE_ID_id_VictimgNBSetID	((F1AP_ProtocolIE_ID_t)252)
#define F1AP_ProtocolIE_ID_id_LowerLayerPresenceStatusChange	((F1AP_ProtocolIE_ID_t)253)
#define F1AP_ProtocolIE_ID_id_Transport_Layer_Address_Info	((F1AP_ProtocolIE_ID_t)254)
#define F1AP_ProtocolIE_ID_id_Neighbour_Cell_Information_Item	((F1AP_ProtocolIE_ID_t)255)
#define F1AP_ProtocolIE_ID_id_IntendedTDD_DL_ULConfig	((F1AP_ProtocolIE_ID_t)256)
#define F1AP_ProtocolIE_ID_id_QosMonitoringRequest	((F1AP_ProtocolIE_ID_t)257)
#define F1AP_ProtocolIE_ID_id_BHChannels_ToBeSetup_List	((F1AP_ProtocolIE_ID_t)258)
#define F1AP_ProtocolIE_ID_id_BHChannels_ToBeSetup_Item	((F1AP_ProtocolIE_ID_t)259)
#define F1AP_ProtocolIE_ID_id_BHChannels_Setup_List	((F1AP_ProtocolIE_ID_t)260)
#define F1AP_ProtocolIE_ID_id_BHChannels_Setup_Item	((F1AP_ProtocolIE_ID_t)261)
#define F1AP_ProtocolIE_ID_id_BHChannels_ToBeModified_Item	((F1AP_ProtocolIE_ID_t)262)
#define F1AP_ProtocolIE_ID_id_BHChannels_ToBeModified_List	((F1AP_ProtocolIE_ID_t)263)
#define F1AP_ProtocolIE_ID_id_BHChannels_ToBeReleased_Item	((F1AP_ProtocolIE_ID_t)264)
#define F1AP_ProtocolIE_ID_id_BHChannels_ToBeReleased_List	((F1AP_ProtocolIE_ID_t)265)
#define F1AP_ProtocolIE_ID_id_BHChannels_ToBeSetupMod_Item	((F1AP_ProtocolIE_ID_t)266)
#define F1AP_ProtocolIE_ID_id_BHChannels_ToBeSetupMod_List	((F1AP_ProtocolIE_ID_t)267)
#define F1AP_ProtocolIE_ID_id_BHChannels_FailedToBeModified_Item	((F1AP_ProtocolIE_ID_t)268)
#define F1AP_ProtocolIE_ID_id_BHChannels_FailedToBeModified_List	((F1AP_ProtocolIE_ID_t)269)
#define F1AP_ProtocolIE_ID_id_BHChannels_FailedToBeSetupMod_Item	((F1AP_ProtocolIE_ID_t)270)
#define F1AP_ProtocolIE_ID_id_BHChannels_FailedToBeSetupMod_List	((F1AP_ProtocolIE_ID_t)271)
#define F1AP_ProtocolIE_ID_id_BHChannels_Modified_Item	((F1AP_ProtocolIE_ID_t)272)
#define F1AP_ProtocolIE_ID_id_BHChannels_Modified_List	((F1AP_ProtocolIE_ID_t)273)
#define F1AP_ProtocolIE_ID_id_BHChannels_SetupMod_Item	((F1AP_ProtocolIE_ID_t)274)
#define F1AP_ProtocolIE_ID_id_BHChannels_SetupMod_List	((F1AP_ProtocolIE_ID_t)275)
#define F1AP_ProtocolIE_ID_id_BHChannels_Required_ToBeReleased_Item	((F1AP_ProtocolIE_ID_t)276)
#define F1AP_ProtocolIE_ID_id_BHChannels_Required_ToBeReleased_List	((F1AP_ProtocolIE_ID_t)277)
#define F1AP_ProtocolIE_ID_id_BHChannels_FailedToBeSetup_Item	((F1AP_ProtocolIE_ID_t)278)
#define F1AP_ProtocolIE_ID_id_BHChannels_FailedToBeSetup_List	((F1AP_ProtocolIE_ID_t)279)
#define F1AP_ProtocolIE_ID_id_BHInfo	((F1AP_ProtocolIE_ID_t)280)
#define F1AP_ProtocolIE_ID_id_BAPAddress	((F1AP_ProtocolIE_ID_t)281)
#define F1AP_ProtocolIE_ID_id_ConfiguredBAPAddress	((F1AP_ProtocolIE_ID_t)282)
#define F1AP_ProtocolIE_ID_id_BH_Routing_Information_Added_List	((F1AP_ProtocolIE_ID_t)283)
#define F1AP_ProtocolIE_ID_id_BH_Routing_Information_Added_List_Item	((F1AP_ProtocolIE_ID_t)284)
#define F1AP_ProtocolIE_ID_id_BH_Routing_Information_Removed_List	((F1AP_ProtocolIE_ID_t)285)
#define F1AP_ProtocolIE_ID_id_BH_Routing_Information_Removed_List_Item	((F1AP_ProtocolIE_ID_t)286)
#define F1AP_ProtocolIE_ID_id_UL_BH_Non_UP_Traffic_Mapping	((F1AP_ProtocolIE_ID_t)287)
#define F1AP_ProtocolIE_ID_id_Activated_Cells_to_be_Updated_List	((F1AP_ProtocolIE_ID_t)288)
#define F1AP_ProtocolIE_ID_id_Child_Nodes_List	((F1AP_ProtocolIE_ID_t)289)
#define F1AP_ProtocolIE_ID_id_IAB_Info_IAB_DU	((F1AP_ProtocolIE_ID_t)290)
#define F1AP_ProtocolIE_ID_id_IAB_Info_IAB_donor_CU	((F1AP_ProtocolIE_ID_t)291)
#define F1AP_ProtocolIE_ID_id_IAB_TNL_Addresses_To_Remove_List	((F1AP_ProtocolIE_ID_t)292)
#define F1AP_ProtocolIE_ID_id_IAB_TNL_Addresses_To_Remove_Item	((F1AP_ProtocolIE_ID_t)293)
#define F1AP_ProtocolIE_ID_id_IAB_Allocated_TNL_Address_List	((F1AP_ProtocolIE_ID_t)294)
#define F1AP_ProtocolIE_ID_id_IAB_Allocated_TNL_Address_Item	((F1AP_ProtocolIE_ID_t)295)
#define F1AP_ProtocolIE_ID_id_IABIPv6RequestType	((F1AP_ProtocolIE_ID_t)296)
#define F1AP_ProtocolIE_ID_id_IABv4AddressesRequested	((F1AP_ProtocolIE_ID_t)297)
#define F1AP_ProtocolIE_ID_id_IAB_Barred	((F1AP_ProtocolIE_ID_t)298)
#define F1AP_ProtocolIE_ID_id_TrafficMappingInformation	((F1AP_ProtocolIE_ID_t)299)
#define F1AP_ProtocolIE_ID_id_UL_UP_TNL_Information_to_Update_List	((F1AP_ProtocolIE_ID_t)300)
#define F1AP_ProtocolIE_ID_id_UL_UP_TNL_Information_to_Update_List_Item	((F1AP_ProtocolIE_ID_t)301)
#define F1AP_ProtocolIE_ID_id_UL_UP_TNL_Address_to_Update_List	((F1AP_ProtocolIE_ID_t)302)
#define F1AP_ProtocolIE_ID_id_UL_UP_TNL_Address_to_Update_List_Item	((F1AP_ProtocolIE_ID_t)303)
#define F1AP_ProtocolIE_ID_id_DL_UP_TNL_Address_to_Update_List	((F1AP_ProtocolIE_ID_t)304)
#define F1AP_ProtocolIE_ID_id_DL_UP_TNL_Address_to_Update_List_Item	((F1AP_ProtocolIE_ID_t)305)
#define F1AP_ProtocolIE_ID_id_NRV2XServicesAuthorized	((F1AP_ProtocolIE_ID_t)306)
#define F1AP_ProtocolIE_ID_id_LTEV2XServicesAuthorized	((F1AP_ProtocolIE_ID_t)307)
#define F1AP_ProtocolIE_ID_id_NRUESidelinkAggregateMaximumBitrate	((F1AP_ProtocolIE_ID_t)308)
#define F1AP_ProtocolIE_ID_id_LTEUESidelinkAggregateMaximumBitrate	((F1AP_ProtocolIE_ID_t)309)
#define F1AP_ProtocolIE_ID_id_SIB12_message	((F1AP_ProtocolIE_ID_t)310)
#define F1AP_ProtocolIE_ID_id_SIB13_message	((F1AP_ProtocolIE_ID_t)311)
#define F1AP_ProtocolIE_ID_id_SIB14_message	((F1AP_ProtocolIE_ID_t)312)
#define F1AP_ProtocolIE_ID_id_SLDRBs_FailedToBeModified_Item	((F1AP_ProtocolIE_ID_t)313)
#define F1AP_ProtocolIE_ID_id_SLDRBs_FailedToBeModified_List	((F1AP_ProtocolIE_ID_t)314)
#define F1AP_ProtocolIE_ID_id_SLDRBs_FailedToBeSetup_Item	((F1AP_ProtocolIE_ID_t)315)
#define F1AP_ProtocolIE_ID_id_SLDRBs_FailedToBeSetup_List	((F1AP_ProtocolIE_ID_t)316)
#define F1AP_ProtocolIE_ID_id_SLDRBs_Modified_Item	((F1AP_ProtocolIE_ID_t)317)
#define F1AP_ProtocolIE_ID_id_SLDRBs_Modified_List	((F1AP_ProtocolIE_ID_t)318)
#define F1AP_ProtocolIE_ID_id_SLDRBs_Required_ToBeModified_Item	((F1AP_ProtocolIE_ID_t)319)
#define F1AP_ProtocolIE_ID_id_SLDRBs_Required_ToBeModified_List	((F1AP_ProtocolIE_ID_t)320)
#define F1AP_ProtocolIE_ID_id_SLDRBs_Required_ToBeReleased_Item	((F1AP_ProtocolIE_ID_t)321)
#define F1AP_ProtocolIE_ID_id_SLDRBs_Required_ToBeReleased_List	((F1AP_ProtocolIE_ID_t)322)
#define F1AP_ProtocolIE_ID_id_SLDRBs_Setup_Item	((F1AP_ProtocolIE_ID_t)323)
#define F1AP_ProtocolIE_ID_id_SLDRBs_Setup_List	((F1AP_ProtocolIE_ID_t)324)
#define F1AP_ProtocolIE_ID_id_SLDRBs_ToBeModified_Item	((F1AP_ProtocolIE_ID_t)325)
#define F1AP_ProtocolIE_ID_id_SLDRBs_ToBeModified_List	((F1AP_ProtocolIE_ID_t)326)
#define F1AP_ProtocolIE_ID_id_SLDRBs_ToBeReleased_Item	((F1AP_ProtocolIE_ID_t)327)
#define F1AP_ProtocolIE_ID_id_SLDRBs_ToBeReleased_List	((F1AP_ProtocolIE_ID_t)328)
#define F1AP_ProtocolIE_ID_id_SLDRBs_ToBeSetup_Item	((F1AP_ProtocolIE_ID_t)329)
#define F1AP_ProtocolIE_ID_id_SLDRBs_ToBeSetup_List	((F1AP_ProtocolIE_ID_t)330)
#define F1AP_ProtocolIE_ID_id_SLDRBs_ToBeSetupMod_Item	((F1AP_ProtocolIE_ID_t)331)
#define F1AP_ProtocolIE_ID_id_SLDRBs_ToBeSetupMod_List	((F1AP_ProtocolIE_ID_t)332)
#define F1AP_ProtocolIE_ID_id_SLDRBs_SetupMod_List	((F1AP_ProtocolIE_ID_t)333)
#define F1AP_ProtocolIE_ID_id_SLDRBs_FailedToBeSetupMod_List	((F1AP_ProtocolIE_ID_t)334)
#define F1AP_ProtocolIE_ID_id_SLDRBs_SetupMod_Item	((F1AP_ProtocolIE_ID_t)335)
#define F1AP_ProtocolIE_ID_id_SLDRBs_FailedToBeSetupMod_Item	((F1AP_ProtocolIE_ID_t)336)
#define F1AP_ProtocolIE_ID_id_SLDRBs_ModifiedConf_List	((F1AP_ProtocolIE_ID_t)337)
#define F1AP_ProtocolIE_ID_id_SLDRBs_ModifiedConf_Item	((F1AP_ProtocolIE_ID_t)338)
#define F1AP_ProtocolIE_ID_id_UEAssistanceInformationEUTRA	((F1AP_ProtocolIE_ID_t)339)
#define F1AP_ProtocolIE_ID_id_PC5LinkAMBR	((F1AP_ProtocolIE_ID_t)340)
#define F1AP_ProtocolIE_ID_id_SL_PHY_MAC_RLC_Config	((F1AP_ProtocolIE_ID_t)341)
#define F1AP_ProtocolIE_ID_id_SL_ConfigDedicatedEUTRA	((F1AP_ProtocolIE_ID_t)342)
#define F1AP_ProtocolIE_ID_id_AlternativeQoSParaSetList	((F1AP_ProtocolIE_ID_t)343)
#define F1AP_ProtocolIE_ID_id_CurrentQoSParaSetIndex	((F1AP_ProtocolIE_ID_t)344)
#define F1AP_ProtocolIE_ID_id_gNBCUMeasurementID	((F1AP_ProtocolIE_ID_t)345)
#define F1AP_ProtocolIE_ID_id_gNBDUMeasurementID	((F1AP_ProtocolIE_ID_t)346)
#define F1AP_ProtocolIE_ID_id_RegistrationRequest	((F1AP_ProtocolIE_ID_t)347)
#define F1AP_ProtocolIE_ID_id_ReportCharacteristics	((F1AP_ProtocolIE_ID_t)348)
#define F1AP_ProtocolIE_ID_id_CellToReportList	((F1AP_ProtocolIE_ID_t)349)
#define F1AP_ProtocolIE_ID_id_CellMeasurementResultList	((F1AP_ProtocolIE_ID_t)350)
#define F1AP_ProtocolIE_ID_id_HardwareLoadIndicator	((F1AP_ProtocolIE_ID_t)351)
#define F1AP_ProtocolIE_ID_id_ReportingPeriodicity	((F1AP_ProtocolIE_ID_t)352)
#define F1AP_ProtocolIE_ID_id_TNLCapacityIndicator	((F1AP_ProtocolIE_ID_t)353)
#define F1AP_ProtocolIE_ID_id_CarrierList	((F1AP_ProtocolIE_ID_t)354)
#define F1AP_ProtocolIE_ID_id_ULCarrierList	((F1AP_ProtocolIE_ID_t)355)
#define F1AP_ProtocolIE_ID_id_FrequencyShift7p5khz	((F1AP_ProtocolIE_ID_t)356)
#define F1AP_ProtocolIE_ID_id_SSB_PositionsInBurst	((F1AP_ProtocolIE_ID_t)357)
#define F1AP_ProtocolIE_ID_id_NRPRACHConfig	((F1AP_ProtocolIE_ID_t)358)
#define F1AP_ProtocolIE_ID_id_RACHReportInformationList	((F1AP_ProtocolIE_ID_t)359)
#define F1AP_ProtocolIE_ID_id_RLFReportInformationList	((F1AP_ProtocolIE_ID_t)360)
#define F1AP_ProtocolIE_ID_id_TDD_UL_DLConfigCommonNR	((F1AP_ProtocolIE_ID_t)361)
#define F1AP_ProtocolIE_ID_id_CNPacketDelayBudgetDownlink	((F1AP_ProtocolIE_ID_t)362)
#define F1AP_ProtocolIE_ID_id_ExtendedPacketDelayBudget	((F1AP_ProtocolIE_ID_t)363)
#define F1AP_ProtocolIE_ID_id_TSCTrafficCharacteristics	((F1AP_ProtocolIE_ID_t)364)
#define F1AP_ProtocolIE_ID_id_ReportingRequestType	((F1AP_ProtocolIE_ID_t)365)
#define F1AP_ProtocolIE_ID_id_TimeReferenceInformation	((F1AP_ProtocolIE_ID_t)366)
#define F1AP_ProtocolIE_ID_id_CNPacketDelayBudgetUplink	((F1AP_ProtocolIE_ID_t)369)
#define F1AP_ProtocolIE_ID_id_AdditionalPDCPDuplicationTNL_List	((F1AP_ProtocolIE_ID_t)370)
#define F1AP_ProtocolIE_ID_id_RLCDuplicationInformation	((F1AP_ProtocolIE_ID_t)371)
#define F1AP_ProtocolIE_ID_id_AdditionalDuplicationIndication	((F1AP_ProtocolIE_ID_t)372)
#define F1AP_ProtocolIE_ID_id_ConditionalInterDUMobilityInformation	((F1AP_ProtocolIE_ID_t)373)
#define F1AP_ProtocolIE_ID_id_ConditionalIntraDUMobilityInformation	((F1AP_ProtocolIE_ID_t)374)
#define F1AP_ProtocolIE_ID_id_targetCellsToCancel	((F1AP_ProtocolIE_ID_t)375)
#define F1AP_ProtocolIE_ID_id_requestedTargetCellGlobalID	((F1AP_ProtocolIE_ID_t)376)
#define F1AP_ProtocolIE_ID_id_ManagementBasedMDTPLMNList	((F1AP_ProtocolIE_ID_t)377)
#define F1AP_ProtocolIE_ID_id_TraceCollectionEntityIPAddress	((F1AP_ProtocolIE_ID_t)378)
#define F1AP_ProtocolIE_ID_id_PrivacyIndicator	((F1AP_ProtocolIE_ID_t)379)
#define F1AP_ProtocolIE_ID_id_TraceCollectionEntityURI	((F1AP_ProtocolIE_ID_t)380)
#define F1AP_ProtocolIE_ID_id_mdtConfiguration	((F1AP_ProtocolIE_ID_t)381)
#define F1AP_ProtocolIE_ID_id_ServingNID	((F1AP_ProtocolIE_ID_t)382)
#define F1AP_ProtocolIE_ID_id_NPNBroadcastInformation	((F1AP_ProtocolIE_ID_t)383)
#define F1AP_ProtocolIE_ID_id_NPNSupportInfo	((F1AP_ProtocolIE_ID_t)384)
#define F1AP_ProtocolIE_ID_id_NID	((F1AP_ProtocolIE_ID_t)385)
#define F1AP_ProtocolIE_ID_id_AvailableSNPN_ID_List	((F1AP_ProtocolIE_ID_t)386)
#define F1AP_ProtocolIE_ID_id_SIB10_message	((F1AP_ProtocolIE_ID_t)387)
#define F1AP_ProtocolIE_ID_id_DLCarrierList	((F1AP_ProtocolIE_ID_t)389)
#define F1AP_ProtocolIE_ID_id_ExtendedTAISliceSupportList	((F1AP_ProtocolIE_ID_t)390)
#define F1AP_ProtocolIE_ID_id_RequestedSRSTransmissionCharacteristics	((F1AP_ProtocolIE_ID_t)391)
#define F1AP_ProtocolIE_ID_id_PosAssistance_Information	((F1AP_ProtocolIE_ID_t)392)
#define F1AP_ProtocolIE_ID_id_PosBroadcast	((F1AP_ProtocolIE_ID_t)393)
#define F1AP_ProtocolIE_ID_id_RoutingID	((F1AP_ProtocolIE_ID_t)394)
#define F1AP_ProtocolIE_ID_id_PosAssistanceInformationFailureList	((F1AP_ProtocolIE_ID_t)395)
#define F1AP_ProtocolIE_ID_id_PosMeasurementQuantities	((F1AP_ProtocolIE_ID_t)396)
#define F1AP_ProtocolIE_ID_id_PosMeasurementResultList	((F1AP_ProtocolIE_ID_t)397)
#define F1AP_ProtocolIE_ID_id_TRPInformationTypeListTRPReq	((F1AP_ProtocolIE_ID_t)398)
#define F1AP_ProtocolIE_ID_id_TRPInformationTypeItem	((F1AP_ProtocolIE_ID_t)399)
#define F1AP_ProtocolIE_ID_id_TRPInformationListTRPResp	((F1AP_ProtocolIE_ID_t)400)
#define F1AP_ProtocolIE_ID_id_TRPInformationItem	((F1AP_ProtocolIE_ID_t)401)
#define F1AP_ProtocolIE_ID_id_LMF_MeasurementID	((F1AP_ProtocolIE_ID_t)402)
#define F1AP_ProtocolIE_ID_id_SRSType	((F1AP_ProtocolIE_ID_t)403)
#define F1AP_ProtocolIE_ID_id_ActivationTime	((F1AP_ProtocolIE_ID_t)404)
#define F1AP_ProtocolIE_ID_id_AbortTransmission	((F1AP_ProtocolIE_ID_t)405)
#define F1AP_ProtocolIE_ID_id_PositioningBroadcastCells	((F1AP_ProtocolIE_ID_t)406)
#define F1AP_ProtocolIE_ID_id_SRSConfiguration	((F1AP_ProtocolIE_ID_t)407)
#define F1AP_ProtocolIE_ID_id_PosReportCharacteristics	((F1AP_ProtocolIE_ID_t)408)
#define F1AP_ProtocolIE_ID_id_PosMeasurementPeriodicity	((F1AP_ProtocolIE_ID_t)409)
#define F1AP_ProtocolIE_ID_id_TRPList	((F1AP_ProtocolIE_ID_t)410)
#define F1AP_ProtocolIE_ID_id_RAN_MeasurementID	((F1AP_ProtocolIE_ID_t)411)
#define F1AP_ProtocolIE_ID_id_LMF_UE_MeasurementID	((F1AP_ProtocolIE_ID_t)412)
#define F1AP_ProtocolIE_ID_id_RAN_UE_MeasurementID	((F1AP_ProtocolIE_ID_t)413)
#define F1AP_ProtocolIE_ID_id_E_CID_MeasurementQuantities	((F1AP_ProtocolIE_ID_t)414)
#define F1AP_ProtocolIE_ID_id_E_CID_MeasurementQuantities_Item	((F1AP_ProtocolIE_ID_t)415)
#define F1AP_ProtocolIE_ID_id_E_CID_MeasurementPeriodicity	((F1AP_ProtocolIE_ID_t)416)
#define F1AP_ProtocolIE_ID_id_E_CID_MeasurementResult	((F1AP_ProtocolIE_ID_t)417)
#define F1AP_ProtocolIE_ID_id_Cell_Portion_ID	((F1AP_ProtocolIE_ID_t)418)
#define F1AP_ProtocolIE_ID_id_SFNInitialisationTime	((F1AP_ProtocolIE_ID_t)419)
#define F1AP_ProtocolIE_ID_id_SystemFrameNumber	((F1AP_ProtocolIE_ID_t)420)
#define F1AP_ProtocolIE_ID_id_SlotNumber	((F1AP_ProtocolIE_ID_t)421)
#define F1AP_ProtocolIE_ID_id_TRP_MeasurementRequestList	((F1AP_ProtocolIE_ID_t)422)
#define F1AP_ProtocolIE_ID_id_MeasurementBeamInfoRequest	((F1AP_ProtocolIE_ID_t)423)
#define F1AP_ProtocolIE_ID_id_E_CID_ReportCharacteristics	((F1AP_ProtocolIE_ID_t)424)
#define F1AP_ProtocolIE_ID_id_ConfiguredTACIndication	((F1AP_ProtocolIE_ID_t)425)
#define F1AP_ProtocolIE_ID_id_Extended_GNB_DU_Name	((F1AP_ProtocolIE_ID_t)426)
#define F1AP_ProtocolIE_ID_id_Extended_GNB_CU_Name	((F1AP_ProtocolIE_ID_t)427)

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_ProtocolIE_ID_H_ */
#include <asn_internal.h>
