/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_PhysCellIdRangeNR_r16_H_
#define	_LTE_PhysCellIdRangeNR_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PhysCellIdNR-r15.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PhysCellIdRangeNR_r16__range {
	LTE_PhysCellIdRangeNR_r16__range_n4	= 0,
	LTE_PhysCellIdRangeNR_r16__range_n8	= 1,
	LTE_PhysCellIdRangeNR_r16__range_n12	= 2,
	LTE_PhysCellIdRangeNR_r16__range_n16	= 3,
	LTE_PhysCellIdRangeNR_r16__range_n24	= 4,
	LTE_PhysCellIdRangeNR_r16__range_n32	= 5,
	LTE_PhysCellIdRangeNR_r16__range_n48	= 6,
	LTE_PhysCellIdRangeNR_r16__range_n64	= 7,
	LTE_PhysCellIdRangeNR_r16__range_n84	= 8,
	LTE_PhysCellIdRangeNR_r16__range_n96	= 9,
	LTE_PhysCellIdRangeNR_r16__range_n128	= 10,
	LTE_PhysCellIdRangeNR_r16__range_n168	= 11,
	LTE_PhysCellIdRangeNR_r16__range_n252	= 12,
	LTE_PhysCellIdRangeNR_r16__range_n504	= 13,
	LTE_PhysCellIdRangeNR_r16__range_n1008	= 14,
	LTE_PhysCellIdRangeNR_r16__range_spare1	= 15
} e_LTE_PhysCellIdRangeNR_r16__range;

/* LTE_PhysCellIdRangeNR-r16 */
typedef struct LTE_PhysCellIdRangeNR_r16 {
	LTE_PhysCellIdNR_r15_t	 start;
	long	*range;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PhysCellIdRangeNR_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_range_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PhysCellIdRangeNR_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PhysCellIdRangeNR_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PhysCellIdRangeNR_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PhysCellIdRangeNR_r16_H_ */
#include <asn_internal.h>
