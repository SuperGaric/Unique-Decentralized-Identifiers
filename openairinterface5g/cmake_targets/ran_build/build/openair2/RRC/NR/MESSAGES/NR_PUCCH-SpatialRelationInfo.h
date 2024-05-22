/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_PUCCH_SpatialRelationInfo_H_
#define	_NR_PUCCH_SpatialRelationInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_PUCCH-SpatialRelationInfoId.h"
#include "NR_ServCellIndex.h"
#include "NR_PUCCH-PathlossReferenceRS-Id.h"
#include "NR_P0-PUCCH-Id.h"
#include <NativeEnumerated.h>
#include "NR_SSB-Index.h"
#include "NR_NZP-CSI-RS-ResourceId.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PUCCH_SpatialRelationInfo__referenceSignal_PR {
	NR_PUCCH_SpatialRelationInfo__referenceSignal_PR_NOTHING,	/* No components present */
	NR_PUCCH_SpatialRelationInfo__referenceSignal_PR_ssb_Index,
	NR_PUCCH_SpatialRelationInfo__referenceSignal_PR_csi_RS_Index,
	NR_PUCCH_SpatialRelationInfo__referenceSignal_PR_srs
} NR_PUCCH_SpatialRelationInfo__referenceSignal_PR;
typedef enum NR_PUCCH_SpatialRelationInfo__closedLoopIndex {
	NR_PUCCH_SpatialRelationInfo__closedLoopIndex_i0	= 0,
	NR_PUCCH_SpatialRelationInfo__closedLoopIndex_i1	= 1
} e_NR_PUCCH_SpatialRelationInfo__closedLoopIndex;

/* Forward declarations */
struct NR_PUCCH_SRS;

/* NR_PUCCH-SpatialRelationInfo */
typedef struct NR_PUCCH_SpatialRelationInfo {
	NR_PUCCH_SpatialRelationInfoId_t	 pucch_SpatialRelationInfoId;
	NR_ServCellIndex_t	*servingCellId;	/* OPTIONAL */
	struct NR_PUCCH_SpatialRelationInfo__referenceSignal {
		NR_PUCCH_SpatialRelationInfo__referenceSignal_PR present;
		union NR_PUCCH_SpatialRelationInfo__NR_referenceSignal_u {
			NR_SSB_Index_t	 ssb_Index;
			NR_NZP_CSI_RS_ResourceId_t	 csi_RS_Index;
			struct NR_PUCCH_SRS	*srs;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} referenceSignal;
	NR_PUCCH_PathlossReferenceRS_Id_t	 pucch_PathlossReferenceRS_Id;
	NR_P0_PUCCH_Id_t	 p0_PUCCH_Id;
	long	 closedLoopIndex;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PUCCH_SpatialRelationInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_closedLoopIndex_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_PUCCH_SpatialRelationInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PUCCH_SpatialRelationInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PUCCH_SpatialRelationInfo_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_PUCCH-SRS.h"

#endif	/* _NR_PUCCH_SpatialRelationInfo_H_ */
#include <asn_internal.h>