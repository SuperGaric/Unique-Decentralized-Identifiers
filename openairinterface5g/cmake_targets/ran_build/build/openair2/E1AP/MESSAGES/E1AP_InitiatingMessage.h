/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-PDU-Descriptions"
 * 	found in "/home/dmt/openairinterface5g/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#ifndef	_E1AP_InitiatingMessage_H_
#define	_E1AP_InitiatingMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E1AP_ProcedureCode.h"
#include "E1AP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "E1AP_Reset.h"
#include "E1AP_ResetAcknowledge.h"
#include "E1AP_GNB-CU-UP-E1SetupRequest.h"
#include "E1AP_GNB-CU-UP-E1SetupResponse.h"
#include "E1AP_GNB-CU-UP-E1SetupFailure.h"
#include "E1AP_GNB-CU-CP-E1SetupRequest.h"
#include "E1AP_GNB-CU-CP-E1SetupResponse.h"
#include "E1AP_GNB-CU-CP-E1SetupFailure.h"
#include "E1AP_GNB-CU-UP-ConfigurationUpdate.h"
#include "E1AP_GNB-CU-UP-ConfigurationUpdateAcknowledge.h"
#include "E1AP_GNB-CU-UP-ConfigurationUpdateFailure.h"
#include "E1AP_GNB-CU-CP-ConfigurationUpdate.h"
#include "E1AP_GNB-CU-CP-ConfigurationUpdateAcknowledge.h"
#include "E1AP_GNB-CU-CP-ConfigurationUpdateFailure.h"
#include "E1AP_E1ReleaseRequest.h"
#include "E1AP_E1ReleaseResponse.h"
#include "E1AP_BearerContextSetupRequest.h"
#include "E1AP_BearerContextSetupResponse.h"
#include "E1AP_BearerContextSetupFailure.h"
#include "E1AP_BearerContextModificationRequest.h"
#include "E1AP_BearerContextModificationResponse.h"
#include "E1AP_BearerContextModificationFailure.h"
#include "E1AP_BearerContextModificationRequired.h"
#include "E1AP_BearerContextModificationConfirm.h"
#include "E1AP_BearerContextReleaseCommand.h"
#include "E1AP_BearerContextReleaseComplete.h"
#include "E1AP_ResourceStatusRequest.h"
#include "E1AP_ResourceStatusResponse.h"
#include "E1AP_ResourceStatusFailure.h"
#include "E1AP_IAB-UPTNLAddressUpdate.h"
#include "E1AP_IAB-UPTNLAddressUpdateAcknowledge.h"
#include "E1AP_IAB-UPTNLAddressUpdateFailure.h"
#include "E1AP_ErrorIndication.h"
#include "E1AP_BearerContextReleaseRequest.h"
#include "E1AP_BearerContextInactivityNotification.h"
#include "E1AP_DLDataNotification.h"
#include "E1AP_ULDataNotification.h"
#include "E1AP_DataUsageReport.h"
#include "E1AP_GNB-CU-UP-CounterCheckRequest.h"
#include "E1AP_GNB-CU-UP-StatusIndication.h"
#include "E1AP_MRDC-DataUsageReport.h"
#include "E1AP_DeactivateTrace.h"
#include "E1AP_TraceStart.h"
#include "E1AP_PrivateMessage.h"
#include "E1AP_CellTrafficTrace.h"
#include "E1AP_ResourceStatusUpdate.h"
#include "E1AP_EarlyForwardingSNTransfer.h"
#include "E1AP_GNB-CU-CPMeasurementResultsInformation.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E1AP_InitiatingMessage__value_PR {
	E1AP_InitiatingMessage__value_PR_NOTHING,	/* No components present */
	E1AP_InitiatingMessage__value_PR_Reset,
	E1AP_InitiatingMessage__value_PR_GNB_CU_UP_E1SetupRequest,
	E1AP_InitiatingMessage__value_PR_GNB_CU_CP_E1SetupRequest,
	E1AP_InitiatingMessage__value_PR_GNB_CU_UP_ConfigurationUpdate,
	E1AP_InitiatingMessage__value_PR_GNB_CU_CP_ConfigurationUpdate,
	E1AP_InitiatingMessage__value_PR_E1ReleaseRequest,
	E1AP_InitiatingMessage__value_PR_BearerContextSetupRequest,
	E1AP_InitiatingMessage__value_PR_BearerContextModificationRequest,
	E1AP_InitiatingMessage__value_PR_BearerContextModificationRequired,
	E1AP_InitiatingMessage__value_PR_BearerContextReleaseCommand,
	E1AP_InitiatingMessage__value_PR_ResourceStatusRequest,
	E1AP_InitiatingMessage__value_PR_IAB_UPTNLAddressUpdate,
	E1AP_InitiatingMessage__value_PR_ErrorIndication,
	E1AP_InitiatingMessage__value_PR_BearerContextReleaseRequest,
	E1AP_InitiatingMessage__value_PR_BearerContextInactivityNotification,
	E1AP_InitiatingMessage__value_PR_DLDataNotification,
	E1AP_InitiatingMessage__value_PR_ULDataNotification,
	E1AP_InitiatingMessage__value_PR_DataUsageReport,
	E1AP_InitiatingMessage__value_PR_GNB_CU_UP_CounterCheckRequest,
	E1AP_InitiatingMessage__value_PR_GNB_CU_UP_StatusIndication,
	E1AP_InitiatingMessage__value_PR_MRDC_DataUsageReport,
	E1AP_InitiatingMessage__value_PR_DeactivateTrace,
	E1AP_InitiatingMessage__value_PR_TraceStart,
	E1AP_InitiatingMessage__value_PR_PrivateMessage,
	E1AP_InitiatingMessage__value_PR_CellTrafficTrace,
	E1AP_InitiatingMessage__value_PR_ResourceStatusUpdate,
	E1AP_InitiatingMessage__value_PR_EarlyForwardingSNTransfer,
	E1AP_InitiatingMessage__value_PR_GNB_CU_CPMeasurementResultsInformation
} E1AP_InitiatingMessage__value_PR;

/* E1AP_InitiatingMessage */
typedef struct E1AP_InitiatingMessage {
	E1AP_ProcedureCode_t	 procedureCode;
	E1AP_Criticality_t	 criticality;
	struct E1AP_InitiatingMessage__value {
		E1AP_InitiatingMessage__value_PR present;
		union E1AP_InitiatingMessage__E1AP_value_u {
			E1AP_Reset_t	 Reset;
			E1AP_GNB_CU_UP_E1SetupRequest_t	 GNB_CU_UP_E1SetupRequest;
			E1AP_GNB_CU_CP_E1SetupRequest_t	 GNB_CU_CP_E1SetupRequest;
			E1AP_GNB_CU_UP_ConfigurationUpdate_t	 GNB_CU_UP_ConfigurationUpdate;
			E1AP_GNB_CU_CP_ConfigurationUpdate_t	 GNB_CU_CP_ConfigurationUpdate;
			E1AP_E1ReleaseRequest_t	 E1ReleaseRequest;
			E1AP_BearerContextSetupRequest_t	 BearerContextSetupRequest;
			E1AP_BearerContextModificationRequest_t	 BearerContextModificationRequest;
			E1AP_BearerContextModificationRequired_t	 BearerContextModificationRequired;
			E1AP_BearerContextReleaseCommand_t	 BearerContextReleaseCommand;
			E1AP_ResourceStatusRequest_t	 ResourceStatusRequest;
			E1AP_IAB_UPTNLAddressUpdate_t	 IAB_UPTNLAddressUpdate;
			E1AP_ErrorIndication_t	 ErrorIndication;
			E1AP_BearerContextReleaseRequest_t	 BearerContextReleaseRequest;
			E1AP_BearerContextInactivityNotification_t	 BearerContextInactivityNotification;
			E1AP_DLDataNotification_t	 DLDataNotification;
			E1AP_ULDataNotification_t	 ULDataNotification;
			E1AP_DataUsageReport_t	 DataUsageReport;
			E1AP_GNB_CU_UP_CounterCheckRequest_t	 GNB_CU_UP_CounterCheckRequest;
			E1AP_GNB_CU_UP_StatusIndication_t	 GNB_CU_UP_StatusIndication;
			E1AP_MRDC_DataUsageReport_t	 MRDC_DataUsageReport;
			E1AP_DeactivateTrace_t	 DeactivateTrace;
			E1AP_TraceStart_t	 TraceStart;
			E1AP_PrivateMessage_t	 PrivateMessage;
			E1AP_CellTrafficTrace_t	 CellTrafficTrace;
			E1AP_ResourceStatusUpdate_t	 ResourceStatusUpdate;
			E1AP_EarlyForwardingSNTransfer_t	 EarlyForwardingSNTransfer;
			E1AP_GNB_CU_CPMeasurementResultsInformation_t	 GNB_CU_CPMeasurementResultsInformation;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E1AP_InitiatingMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E1AP_InitiatingMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_E1AP_InitiatingMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_E1AP_InitiatingMessage_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _E1AP_InitiatingMessage_H_ */
#include <asn_internal.h>