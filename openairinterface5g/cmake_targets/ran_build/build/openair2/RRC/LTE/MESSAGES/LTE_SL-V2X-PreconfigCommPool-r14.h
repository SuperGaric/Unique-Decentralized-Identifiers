/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SL_V2X_PreconfigCommPool_r14_H_
#define	_LTE_SL_V2X_PreconfigCommPool_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SubframeBitmapSL-r14.h"
#include <BOOLEAN.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "LTE_P0-SL-r12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14 {
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n4	= 0,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n5	= 1,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n6	= 2,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n8	= 3,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n9	= 4,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n10	= 5,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n12	= 6,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n15	= 7,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n16	= 8,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n18	= 9,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n20	= 10,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n25	= 11,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n30	= 12,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n48	= 13,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n50	= 14,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n72	= 15,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n75	= 16,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n96	= 17,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n100	= 18,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare13	= 19,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare12	= 20,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare11	= 21,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare10	= 22,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare9	= 23,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare8	= 24,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare7	= 25,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare6	= 26,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare5	= 27,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare4	= 28,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare3	= 29,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare2	= 30,
	LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare1	= 31
} e_LTE_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14;
typedef enum LTE_SL_V2X_PreconfigCommPool_r14__numSubchannel_r14 {
	LTE_SL_V2X_PreconfigCommPool_r14__numSubchannel_r14_n1	= 0,
	LTE_SL_V2X_PreconfigCommPool_r14__numSubchannel_r14_n3	= 1,
	LTE_SL_V2X_PreconfigCommPool_r14__numSubchannel_r14_n5	= 2,
	LTE_SL_V2X_PreconfigCommPool_r14__numSubchannel_r14_n8	= 3,
	LTE_SL_V2X_PreconfigCommPool_r14__numSubchannel_r14_n10	= 4,
	LTE_SL_V2X_PreconfigCommPool_r14__numSubchannel_r14_n15	= 5,
	LTE_SL_V2X_PreconfigCommPool_r14__numSubchannel_r14_n20	= 6,
	LTE_SL_V2X_PreconfigCommPool_r14__numSubchannel_r14_spare1	= 7
} e_LTE_SL_V2X_PreconfigCommPool_r14__numSubchannel_r14;

/* Forward declarations */
struct LTE_SL_OffsetIndicator_r12;
struct LTE_SL_CBR_PPPP_TxPreconfigList_r14;
struct LTE_SL_P2X_ResourceSelectionConfig_r14;
struct LTE_SL_SyncAllowed_r14;
struct LTE_SL_RestrictResourceReservationPeriodList_r14;
struct LTE_SL_MinT2ValueList_r15;
struct LTE_SL_CBR_PPPP_TxPreconfigList_v1530;

/* LTE_SL-V2X-PreconfigCommPool-r14 */
typedef struct LTE_SL_V2X_PreconfigCommPool_r14 {
	struct LTE_SL_OffsetIndicator_r12	*sl_OffsetIndicator_r14;	/* OPTIONAL */
	LTE_SubframeBitmapSL_r14_t	 sl_Subframe_r14;
	BOOLEAN_t	 adjacencyPSCCH_PSSCH_r14;
	long	 sizeSubchannel_r14;
	long	 numSubchannel_r14;
	long	 startRB_Subchannel_r14;
	long	*startRB_PSCCH_Pool_r14;	/* OPTIONAL */
	LTE_P0_SL_r12_t	 dataTxParameters_r14;
	long	*zoneID_r14;	/* OPTIONAL */
	long	*threshS_RSSI_CBR_r14;	/* OPTIONAL */
	struct LTE_SL_CBR_PPPP_TxPreconfigList_r14	*cbr_pssch_TxConfigList_r14;	/* OPTIONAL */
	struct LTE_SL_P2X_ResourceSelectionConfig_r14	*resourceSelectionConfigP2X_r14;	/* OPTIONAL */
	struct LTE_SL_SyncAllowed_r14	*syncAllowed_r14;	/* OPTIONAL */
	struct LTE_SL_RestrictResourceReservationPeriodList_r14	*restrictResourceReservationPeriod_r14;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SL_V2X_PreconfigCommPool_r14__ext1 {
		struct LTE_SL_MinT2ValueList_r15	*sl_MinT2ValueList_r15;	/* OPTIONAL */
		struct LTE_SL_CBR_PPPP_TxPreconfigList_v1530	*cbr_pssch_TxConfigList_v1530;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_V2X_PreconfigCommPool_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sizeSubchannel_r14_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_numSubchannel_r14_38;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_V2X_PreconfigCommPool_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_V2X_PreconfigCommPool_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_V2X_PreconfigCommPool_r14_1[15];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SL-OffsetIndicator-r12.h"
#include "LTE_SL-CBR-PPPP-TxPreconfigList-r14.h"
#include "LTE_SL-P2X-ResourceSelectionConfig-r14.h"
#include "LTE_SL-SyncAllowed-r14.h"
#include "LTE_SL-RestrictResourceReservationPeriodList-r14.h"
#include "LTE_SL-MinT2ValueList-r15.h"
#include "LTE_SL-CBR-PPPP-TxPreconfigList-v1530.h"

#endif	/* _LTE_SL_V2X_PreconfigCommPool_r14_H_ */
#include <asn_internal.h>
