/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RedistributionServingInfo_r13_H_
#define	_LTE_RedistributionServingInfo_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RedistributionServingInfo_r13__redistributionFactorCell_r13 {
	LTE_RedistributionServingInfo_r13__redistributionFactorCell_r13_true	= 0
} e_LTE_RedistributionServingInfo_r13__redistributionFactorCell_r13;
typedef enum LTE_RedistributionServingInfo_r13__t360_r13 {
	LTE_RedistributionServingInfo_r13__t360_r13_min4	= 0,
	LTE_RedistributionServingInfo_r13__t360_r13_min8	= 1,
	LTE_RedistributionServingInfo_r13__t360_r13_min16	= 2,
	LTE_RedistributionServingInfo_r13__t360_r13_min32	= 3,
	LTE_RedistributionServingInfo_r13__t360_r13_infinity	= 4,
	LTE_RedistributionServingInfo_r13__t360_r13_spare3	= 5,
	LTE_RedistributionServingInfo_r13__t360_r13_spare2	= 6,
	LTE_RedistributionServingInfo_r13__t360_r13_spare1	= 7
} e_LTE_RedistributionServingInfo_r13__t360_r13;
typedef enum LTE_RedistributionServingInfo_r13__redistrOnPagingOnly_r13 {
	LTE_RedistributionServingInfo_r13__redistrOnPagingOnly_r13_true	= 0
} e_LTE_RedistributionServingInfo_r13__redistrOnPagingOnly_r13;

/* LTE_RedistributionServingInfo-r13 */
typedef struct LTE_RedistributionServingInfo_r13 {
	long	 redistributionFactorServing_r13;
	long	*redistributionFactorCell_r13;	/* OPTIONAL */
	long	 t360_r13;
	long	*redistrOnPagingOnly_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RedistributionServingInfo_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_redistributionFactorCell_r13_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_t360_r13_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_redistrOnPagingOnly_r13_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RedistributionServingInfo_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RedistributionServingInfo_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RedistributionServingInfo_r13_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RedistributionServingInfo_r13_H_ */
#include <asn_internal.h>
