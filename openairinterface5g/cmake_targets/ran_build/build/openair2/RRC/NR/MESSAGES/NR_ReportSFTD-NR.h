/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_ReportSFTD_NR_H_
#define	_NR_ReportSFTD_NR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <NativeEnumerated.h>
#include "NR_PhysCellId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_ReportSFTD_NR__ext1__reportSFTD_NeighMeas {
	NR_ReportSFTD_NR__ext1__reportSFTD_NeighMeas_true	= 0
} e_NR_ReportSFTD_NR__ext1__reportSFTD_NeighMeas;
typedef enum NR_ReportSFTD_NR__ext1__drx_SFTD_NeighMeas {
	NR_ReportSFTD_NR__ext1__drx_SFTD_NeighMeas_true	= 0
} e_NR_ReportSFTD_NR__ext1__drx_SFTD_NeighMeas;

/* NR_ReportSFTD-NR */
typedef struct NR_ReportSFTD_NR {
	BOOLEAN_t	 reportSFTD_Meas;
	BOOLEAN_t	 reportRSRP;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_ReportSFTD_NR__ext1 {
		long	*reportSFTD_NeighMeas;	/* OPTIONAL */
		long	*drx_SFTD_NeighMeas;	/* OPTIONAL */
		struct NR_ReportSFTD_NR__ext1__cellsForWhichToReportSFTD {
			A_SEQUENCE_OF(NR_PhysCellId_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *cellsForWhichToReportSFTD;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_ReportSFTD_NR_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_reportSFTD_NeighMeas_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_drx_SFTD_NeighMeas_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_ReportSFTD_NR;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_ReportSFTD_NR_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_ReportSFTD_NR_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_ReportSFTD_NR_H_ */
#include <asn_internal.h>