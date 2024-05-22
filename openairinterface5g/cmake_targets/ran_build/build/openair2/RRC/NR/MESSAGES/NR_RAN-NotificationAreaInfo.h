/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_RAN_NotificationAreaInfo_H_
#define	_NR_RAN_NotificationAreaInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_RAN_NotificationAreaInfo_PR {
	NR_RAN_NotificationAreaInfo_PR_NOTHING,	/* No components present */
	NR_RAN_NotificationAreaInfo_PR_cellList,
	NR_RAN_NotificationAreaInfo_PR_ran_AreaConfigList
	/* Extensions may appear below */
	
} NR_RAN_NotificationAreaInfo_PR;

/* Forward declarations */
struct NR_PLMN_RAN_AreaCellList;
struct NR_PLMN_RAN_AreaConfigList;

/* NR_RAN-NotificationAreaInfo */
typedef struct NR_RAN_NotificationAreaInfo {
	NR_RAN_NotificationAreaInfo_PR present;
	union NR_RAN_NotificationAreaInfo_u {
		struct NR_PLMN_RAN_AreaCellList	*cellList;
		struct NR_PLMN_RAN_AreaConfigList	*ran_AreaConfigList;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RAN_NotificationAreaInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_RAN_NotificationAreaInfo;
extern asn_CHOICE_specifics_t asn_SPC_NR_RAN_NotificationAreaInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RAN_NotificationAreaInfo_1[2];
extern asn_per_constraints_t asn_PER_type_NR_RAN_NotificationAreaInfo_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_PLMN-RAN-AreaCellList.h"
#include "NR_PLMN-RAN-AreaConfigList.h"

#endif	/* _NR_RAN_NotificationAreaInfo_H_ */
#include <asn_internal.h>
