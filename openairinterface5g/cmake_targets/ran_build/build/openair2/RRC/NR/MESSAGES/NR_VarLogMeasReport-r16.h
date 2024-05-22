/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_VarLogMeasReport_r16_H_
#define	_NR_VarLogMeasReport_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_AbsoluteTimeInfo-r16.h"
#include "NR_TraceReference-r16.h"
#include <OCTET_STRING.h>
#include "NR_LogMeasInfoList-r16.h"
#include "NR_PLMN-IdentityList2-r16.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_VarLogMeasReport_r16__sigLoggedMeasType_r17 {
	NR_VarLogMeasReport_r16__sigLoggedMeasType_r17_true	= 0
} e_NR_VarLogMeasReport_r16__sigLoggedMeasType_r17;

/* NR_VarLogMeasReport-r16 */
typedef struct NR_VarLogMeasReport_r16 {
	NR_AbsoluteTimeInfo_r16_t	 absoluteTimeInfo_r16;
	NR_TraceReference_r16_t	 traceReference_r16;
	OCTET_STRING_t	 traceRecordingSessionRef_r16;
	OCTET_STRING_t	 tce_Id_r16;
	NR_LogMeasInfoList_r16_t	 logMeasInfoList_r16;
	NR_PLMN_IdentityList2_r16_t	 plmn_IdentityList_r16;
	long	 sigLoggedMeasType_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_VarLogMeasReport_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sigLoggedMeasType_r17_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_VarLogMeasReport_r16;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_VarLogMeasReport_r16_H_ */
#include <asn_internal.h>
