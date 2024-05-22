/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-PDU-Descriptions"
 * 	found in "/home/dmt/openairinterface5g/openair3/M3AP/MESSAGES/ASN1/m3ap-14.0.0.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/M3AP/MESSAGES`
 */

#ifndef	_M3AP_InitiatingMessage_H_
#define	_M3AP_InitiatingMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M3AP_ProcedureCode.h"
#include "M3AP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "M3AP_MBMSSessionStartRequest.h"
#include "M3AP_MBMSSessionStartResponse.h"
#include "M3AP_MBMSSessionStartFailure.h"
#include "M3AP_MBMSSessionStopRequest.h"
#include "M3AP_MBMSSessionStopResponse.h"
#include "M3AP_MBMSSessionUpdateRequest.h"
#include "M3AP_MBMSSessionUpdateResponse.h"
#include "M3AP_MBMSSessionUpdateFailure.h"
#include "M3AP_Reset.h"
#include "M3AP_ResetAcknowledge.h"
#include "M3AP_M3SetupRequest.h"
#include "M3AP_M3SetupResponse.h"
#include "M3AP_M3SetupFailure.h"
#include "M3AP_MCEConfigurationUpdate.h"
#include "M3AP_MCEConfigurationUpdateAcknowledge.h"
#include "M3AP_MCEConfigurationUpdateFailure.h"
#include "M3AP_ErrorIndication.h"
#include "M3AP_PrivateMessage.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M3AP_InitiatingMessage__value_PR {
	M3AP_InitiatingMessage__value_PR_NOTHING,	/* No components present */
	M3AP_InitiatingMessage__value_PR_MBMSSessionStartRequest,
	M3AP_InitiatingMessage__value_PR_MBMSSessionStopRequest,
	M3AP_InitiatingMessage__value_PR_MBMSSessionUpdateRequest,
	M3AP_InitiatingMessage__value_PR_Reset,
	M3AP_InitiatingMessage__value_PR_M3SetupRequest,
	M3AP_InitiatingMessage__value_PR_MCEConfigurationUpdate,
	M3AP_InitiatingMessage__value_PR_ErrorIndication,
	M3AP_InitiatingMessage__value_PR_PrivateMessage
} M3AP_InitiatingMessage__value_PR;

/* M3AP_InitiatingMessage */
typedef struct M3AP_InitiatingMessage {
	M3AP_ProcedureCode_t	 procedureCode;
	M3AP_Criticality_t	 criticality;
	struct M3AP_InitiatingMessage__value {
		M3AP_InitiatingMessage__value_PR present;
		union M3AP_InitiatingMessage__M3AP_value_u {
			M3AP_MBMSSessionStartRequest_t	 MBMSSessionStartRequest;
			M3AP_MBMSSessionStopRequest_t	 MBMSSessionStopRequest;
			M3AP_MBMSSessionUpdateRequest_t	 MBMSSessionUpdateRequest;
			M3AP_Reset_t	 Reset;
			M3AP_M3SetupRequest_t	 M3SetupRequest;
			M3AP_MCEConfigurationUpdate_t	 MCEConfigurationUpdate;
			M3AP_ErrorIndication_t	 ErrorIndication;
			M3AP_PrivateMessage_t	 PrivateMessage;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_InitiatingMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M3AP_InitiatingMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_InitiatingMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_M3AP_InitiatingMessage_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_InitiatingMessage_H_ */
#include <asn_internal.h>
