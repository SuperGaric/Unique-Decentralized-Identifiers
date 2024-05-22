/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_PosSIB_Type_r15_H_
#define	_LTE_PosSIB_Type_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PosSIB_Type_r15__encrypted_r15 {
	LTE_PosSIB_Type_r15__encrypted_r15_true	= 0
} e_LTE_PosSIB_Type_r15__encrypted_r15;
typedef enum LTE_PosSIB_Type_r15__posSibType_r15 {
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType1_1	= 0,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType1_2	= 1,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType1_3	= 2,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType1_4	= 3,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType1_5	= 4,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType1_6	= 5,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType1_7	= 6,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_1	= 7,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_2	= 8,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_3	= 9,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_4	= 10,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_5	= 11,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_6	= 12,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_7	= 13,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_8	= 14,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_9	= 15,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_10	= 16,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_11	= 17,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_12	= 18,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_13	= 19,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_14	= 20,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_15	= 21,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_16	= 22,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_17	= 23,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_18	= 24,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_19	= 25,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType3_1	= 26,
	/*
	 * Enumeration is extensible
	 */
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType1_8_v1610	= 27,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_20_v1610	= 28,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_21_v1610	= 29,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_22_v1610	= 30,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_23_v1610	= 31,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_24_v1610	= 32,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType2_25_v1610	= 33,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType4_1_v1610	= 34,
	LTE_PosSIB_Type_r15__posSibType_r15_posSibType5_1_v1610	= 35
} e_LTE_PosSIB_Type_r15__posSibType_r15;

/* Forward declarations */
struct LTE_GNSS_ID_r15;
struct LTE_SBAS_ID_r15;

/* LTE_PosSIB-Type-r15 */
typedef struct LTE_PosSIB_Type_r15 {
	long	*encrypted_r15;	/* OPTIONAL */
	struct LTE_GNSS_ID_r15	*gnss_id_r15;	/* OPTIONAL */
	struct LTE_SBAS_ID_r15	*sbas_id_r15;	/* OPTIONAL */
	long	 posSibType_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PosSIB_Type_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_encrypted_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_posSibType_r15_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PosSIB_Type_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PosSIB_Type_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PosSIB_Type_r15_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_GNSS-ID-r15.h"
#include "LTE_SBAS-ID-r15.h"

#endif	/* _LTE_PosSIB_Type_r15_H_ */
#include <asn_internal.h>
