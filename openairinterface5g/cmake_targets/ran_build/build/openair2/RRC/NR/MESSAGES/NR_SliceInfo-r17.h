/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SliceInfo_r17_H_
#define	_NR_SliceInfo_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_NSAG-IdentityInfo-r17.h"
#include "NR_CellReselectionPriority.h"
#include "NR_CellReselectionSubPriority.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SliceInfo_r17__sliceCellListNR_r17_PR {
	NR_SliceInfo_r17__sliceCellListNR_r17_PR_NOTHING,	/* No components present */
	NR_SliceInfo_r17__sliceCellListNR_r17_PR_sliceAllowedCellListNR_r17,
	NR_SliceInfo_r17__sliceCellListNR_r17_PR_sliceExcludedCellListNR_r17
} NR_SliceInfo_r17__sliceCellListNR_r17_PR;

/* Forward declarations */
struct NR_SliceCellListNR_r17;

/* NR_SliceInfo-r17 */
typedef struct NR_SliceInfo_r17 {
	NR_NSAG_IdentityInfo_r17_t	 nsag_IdentityInfo_r17;
	NR_CellReselectionPriority_t	*nsag_CellReselectionPriority_r17;	/* OPTIONAL */
	NR_CellReselectionSubPriority_t	*nsag_CellReselectionSubPriority_r17;	/* OPTIONAL */
	struct NR_SliceInfo_r17__sliceCellListNR_r17 {
		NR_SliceInfo_r17__sliceCellListNR_r17_PR present;
		union NR_SliceInfo_r17__NR_sliceCellListNR_r17_u {
			struct NR_SliceCellListNR_r17	*sliceAllowedCellListNR_r17;
			struct NR_SliceCellListNR_r17	*sliceExcludedCellListNR_r17;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sliceCellListNR_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SliceInfo_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_SliceInfo_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SliceInfo_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SliceInfo_r17_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SliceCellListNR-r17.h"

#endif	/* _NR_SliceInfo_r17_H_ */
#include <asn_internal.h>