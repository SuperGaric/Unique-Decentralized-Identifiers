/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_CG_CandidateList_r17_IEs_H_
#define	_NR_CG_CandidateList_r17_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_CG_CandidateInfo_r17;
struct NR_CG_CandidateInfoId_r17;

/* NR_CG-CandidateList-r17-IEs */
typedef struct NR_CG_CandidateList_r17_IEs {
	struct NR_CG_CandidateList_r17_IEs__cg_CandidateToAddModList_r17 {
		A_SEQUENCE_OF(struct NR_CG_CandidateInfo_r17) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cg_CandidateToAddModList_r17;
	struct NR_CG_CandidateList_r17_IEs__cg_CandidateToReleaseList_r17 {
		A_SEQUENCE_OF(struct NR_CG_CandidateInfoId_r17) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cg_CandidateToReleaseList_r17;
	struct NR_CG_CandidateList_r17_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CG_CandidateList_r17_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_CG_CandidateList_r17_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CG_CandidateList_r17_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CG_CandidateList_r17_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_CG-CandidateInfo-r17.h"
#include "NR_CG-CandidateInfoId-r17.h"

#endif	/* _NR_CG_CandidateList_r17_IEs_H_ */
#include <asn_internal.h>
