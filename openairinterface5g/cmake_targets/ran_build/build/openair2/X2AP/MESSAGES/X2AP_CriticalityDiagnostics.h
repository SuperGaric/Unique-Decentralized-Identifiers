/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#ifndef	_X2AP_CriticalityDiagnostics_H_
#define	_X2AP_CriticalityDiagnostics_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_ProcedureCode.h"
#include "X2AP_TriggeringMessage.h"
#include "X2AP_Criticality.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_CriticalityDiagnostics_IE_List;
struct X2AP_ProtocolExtensionContainer;

/* X2AP_CriticalityDiagnostics */
typedef struct X2AP_CriticalityDiagnostics {
	X2AP_ProcedureCode_t	*procedureCode;	/* OPTIONAL */
	X2AP_TriggeringMessage_t	*triggeringMessage;	/* OPTIONAL */
	X2AP_Criticality_t	*procedureCriticality;	/* OPTIONAL */
	struct X2AP_CriticalityDiagnostics_IE_List	*iEsCriticalityDiagnostics;	/* OPTIONAL */
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_CriticalityDiagnostics_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_CriticalityDiagnostics;
extern asn_SEQUENCE_specifics_t asn_SPC_X2AP_CriticalityDiagnostics_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_CriticalityDiagnostics_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_CriticalityDiagnostics_H_ */
#include <asn_internal.h>
