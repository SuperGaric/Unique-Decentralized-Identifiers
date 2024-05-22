/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SRS_CarrierSwitching_H_
#define	_NR_SRS_CarrierSwitching_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>
#include "NR_ServCellIndex.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SRS_CarrierSwitching__srs_SwitchFromCarrier {
	NR_SRS_CarrierSwitching__srs_SwitchFromCarrier_sUL	= 0,
	NR_SRS_CarrierSwitching__srs_SwitchFromCarrier_nUL	= 1
} e_NR_SRS_CarrierSwitching__srs_SwitchFromCarrier;
typedef enum NR_SRS_CarrierSwitching__srs_TPC_PDCCH_Group_PR {
	NR_SRS_CarrierSwitching__srs_TPC_PDCCH_Group_PR_NOTHING,	/* No components present */
	NR_SRS_CarrierSwitching__srs_TPC_PDCCH_Group_PR_typeA,
	NR_SRS_CarrierSwitching__srs_TPC_PDCCH_Group_PR_typeB
} NR_SRS_CarrierSwitching__srs_TPC_PDCCH_Group_PR;

/* Forward declarations */
struct NR_SRS_TPC_PDCCH_Config;

/* NR_SRS-CarrierSwitching */
typedef struct NR_SRS_CarrierSwitching {
	long	*srs_SwitchFromServCellIndex;	/* OPTIONAL */
	long	 srs_SwitchFromCarrier;
	struct NR_SRS_CarrierSwitching__srs_TPC_PDCCH_Group {
		NR_SRS_CarrierSwitching__srs_TPC_PDCCH_Group_PR present;
		union NR_SRS_CarrierSwitching__NR_srs_TPC_PDCCH_Group_u {
			struct NR_SRS_CarrierSwitching__srs_TPC_PDCCH_Group__typeA {
				A_SEQUENCE_OF(struct NR_SRS_TPC_PDCCH_Config) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *typeA;
			struct NR_SRS_TPC_PDCCH_Config	*typeB;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_TPC_PDCCH_Group;
	struct NR_SRS_CarrierSwitching__monitoringCells {
		A_SEQUENCE_OF(NR_ServCellIndex_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *monitoringCells;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SRS_CarrierSwitching_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_srs_SwitchFromCarrier_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SRS_CarrierSwitching;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SRS_CarrierSwitching_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SRS_CarrierSwitching_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SRS-TPC-PDCCH-Config.h"

#endif	/* _NR_SRS_CarrierSwitching_H_ */
#include <asn_internal.h>
