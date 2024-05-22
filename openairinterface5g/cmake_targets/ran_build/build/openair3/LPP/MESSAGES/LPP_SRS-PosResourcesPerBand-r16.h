/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_SRS_PosResourcesPerBand_r16_H_
#define	_LPP_SRS_PosResourcesPerBand_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LPP_FreqBandIndicatorNR-r16.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_SRS_PosResourcesPerBand_r16__maxNumberSRS_PosResourceSetsPerBWP_r16 {
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSRS_PosResourceSetsPerBWP_r16_n1	= 0,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSRS_PosResourceSetsPerBWP_r16_n2	= 1,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSRS_PosResourceSetsPerBWP_r16_n4	= 2,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSRS_PosResourceSetsPerBWP_r16_n8	= 3,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSRS_PosResourceSetsPerBWP_r16_n12	= 4,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSRS_PosResourceSetsPerBWP_r16_n16	= 5
} e_LPP_SRS_PosResourcesPerBand_r16__maxNumberSRS_PosResourceSetsPerBWP_r16;
typedef enum LPP_SRS_PosResourcesPerBand_r16__maxNumberSRS_PosResourcesPerBWP_r16 {
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSRS_PosResourcesPerBWP_r16_n1	= 0,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSRS_PosResourcesPerBWP_r16_n2	= 1,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSRS_PosResourcesPerBWP_r16_n4	= 2,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSRS_PosResourcesPerBWP_r16_n8	= 3,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSRS_PosResourcesPerBWP_r16_n16	= 4,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSRS_PosResourcesPerBWP_r16_n32	= 5,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSRS_PosResourcesPerBWP_r16_n64	= 6
} e_LPP_SRS_PosResourcesPerBand_r16__maxNumberSRS_PosResourcesPerBWP_r16;
typedef enum LPP_SRS_PosResourcesPerBand_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_r16 {
	LPP_SRS_PosResourcesPerBand_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_r16_n1	= 0,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_r16_n2	= 1,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_r16_n4	= 2,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_r16_n8	= 3,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_r16_n16	= 4,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_r16_n32	= 5,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_r16_n64	= 6
} e_LPP_SRS_PosResourcesPerBand_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_r16;
typedef enum LPP_SRS_PosResourcesPerBand_r16__maxNumberAP_SRS_PosResourcesPerBWP_r16 {
	LPP_SRS_PosResourcesPerBand_r16__maxNumberAP_SRS_PosResourcesPerBWP_r16_n1	= 0,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberAP_SRS_PosResourcesPerBWP_r16_n2	= 1,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberAP_SRS_PosResourcesPerBWP_r16_n4	= 2,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberAP_SRS_PosResourcesPerBWP_r16_n8	= 3,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberAP_SRS_PosResourcesPerBWP_r16_n16	= 4,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberAP_SRS_PosResourcesPerBWP_r16_n32	= 5,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberAP_SRS_PosResourcesPerBWP_r16_n64	= 6
} e_LPP_SRS_PosResourcesPerBand_r16__maxNumberAP_SRS_PosResourcesPerBWP_r16;
typedef enum LPP_SRS_PosResourcesPerBand_r16__maxNumberSP_SRS_PosResourcesPerBWP_r16 {
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSP_SRS_PosResourcesPerBWP_r16_n1	= 0,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSP_SRS_PosResourcesPerBWP_r16_n2	= 1,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSP_SRS_PosResourcesPerBWP_r16_n4	= 2,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSP_SRS_PosResourcesPerBWP_r16_n8	= 3,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSP_SRS_PosResourcesPerBWP_r16_n16	= 4,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSP_SRS_PosResourcesPerBWP_r16_n32	= 5,
	LPP_SRS_PosResourcesPerBand_r16__maxNumberSP_SRS_PosResourcesPerBWP_r16_n64	= 6
} e_LPP_SRS_PosResourcesPerBand_r16__maxNumberSP_SRS_PosResourcesPerBWP_r16;

/* LPP_SRS-PosResourcesPerBand-r16 */
typedef struct LPP_SRS_PosResourcesPerBand_r16 {
	LPP_FreqBandIndicatorNR_r16_t	 freqBandIndicatorNR_r16;
	long	 maxNumberSRS_PosResourceSetsPerBWP_r16;
	long	 maxNumberSRS_PosResourcesPerBWP_r16;
	long	 maxNumberPeriodicSRS_PosResourcesPerBWP_r16;
	long	*maxNumberAP_SRS_PosResourcesPerBWP_r16;	/* OPTIONAL */
	long	*maxNumberSP_SRS_PosResourcesPerBWP_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_SRS_PosResourcesPerBand_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_maxNumberSRS_PosResourceSetsPerBWP_r16_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_maxNumberSRS_PosResourcesPerBWP_r16_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_maxNumberAP_SRS_PosResourcesPerBWP_r16_26;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_maxNumberSP_SRS_PosResourcesPerBWP_r16_34;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_SRS_PosResourcesPerBand_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_SRS_PosResourcesPerBand_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_SRS_PosResourcesPerBand_r16_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_SRS_PosResourcesPerBand_r16_H_ */
#include <asn_internal.h>
