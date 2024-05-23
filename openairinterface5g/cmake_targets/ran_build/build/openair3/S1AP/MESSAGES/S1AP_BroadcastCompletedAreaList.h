/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#ifndef	_S1AP_BroadcastCompletedAreaList_H_
#define	_S1AP_BroadcastCompletedAreaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_CellID-Broadcast.h"
#include "S1AP_TAI-Broadcast.h"
#include "S1AP_EmergencyAreaID-Broadcast.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_BroadcastCompletedAreaList_PR {
	S1AP_BroadcastCompletedAreaList_PR_NOTHING,	/* No components present */
	S1AP_BroadcastCompletedAreaList_PR_cellID_Broadcast,
	S1AP_BroadcastCompletedAreaList_PR_tAI_Broadcast,
	S1AP_BroadcastCompletedAreaList_PR_emergencyAreaID_Broadcast
	/* Extensions may appear below */
	
} S1AP_BroadcastCompletedAreaList_PR;

/* S1AP_BroadcastCompletedAreaList */
typedef struct S1AP_BroadcastCompletedAreaList {
	S1AP_BroadcastCompletedAreaList_PR present;
	union S1AP_BroadcastCompletedAreaList_u {
		S1AP_CellID_Broadcast_t	 cellID_Broadcast;
		S1AP_TAI_Broadcast_t	 tAI_Broadcast;
		S1AP_EmergencyAreaID_Broadcast_t	 emergencyAreaID_Broadcast;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_BroadcastCompletedAreaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_BroadcastCompletedAreaList;
extern asn_CHOICE_specifics_t asn_SPC_S1AP_BroadcastCompletedAreaList_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_BroadcastCompletedAreaList_1[3];
extern asn_per_constraints_t asn_PER_type_S1AP_BroadcastCompletedAreaList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_BroadcastCompletedAreaList_H_ */
#include <asn_internal.h>
