/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_CommonIEsRequestAssistanceData_H_
#define	_LPP_CommonIEsRequestAssistanceData_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LPP_SegmentationInfo-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LPP_ECGI;
struct LPP_PeriodicAssistanceDataControlParameters_r15;
struct LPP_NCGI_r15;

/* LPP_CommonIEsRequestAssistanceData */
typedef struct LPP_CommonIEsRequestAssistanceData {
	struct LPP_ECGI	*primaryCellID;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LPP_CommonIEsRequestAssistanceData__ext1 {
		LPP_SegmentationInfo_r14_t	*segmentationInfo_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LPP_CommonIEsRequestAssistanceData__ext2 {
		struct LPP_PeriodicAssistanceDataControlParameters_r15	*periodicAssistanceDataReq_r15;	/* OPTIONAL */
		struct LPP_NCGI_r15	*primaryCellID_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_CommonIEsRequestAssistanceData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_CommonIEsRequestAssistanceData;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_CommonIEsRequestAssistanceData_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_CommonIEsRequestAssistanceData_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_CommonIEsRequestAssistanceData_H_ */
#include <asn_internal.h>
