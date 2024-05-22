/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_CarrierAggregationVariant_H_
#define	_NR_CarrierAggregationVariant_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CarrierAggregationVariant__fr1fdd_FR1TDD_CA_SpCellOnFR1FDD {
	NR_CarrierAggregationVariant__fr1fdd_FR1TDD_CA_SpCellOnFR1FDD_supported	= 0
} e_NR_CarrierAggregationVariant__fr1fdd_FR1TDD_CA_SpCellOnFR1FDD;
typedef enum NR_CarrierAggregationVariant__fr1fdd_FR1TDD_CA_SpCellOnFR1TDD {
	NR_CarrierAggregationVariant__fr1fdd_FR1TDD_CA_SpCellOnFR1TDD_supported	= 0
} e_NR_CarrierAggregationVariant__fr1fdd_FR1TDD_CA_SpCellOnFR1TDD;
typedef enum NR_CarrierAggregationVariant__fr1fdd_FR2TDD_CA_SpCellOnFR1FDD {
	NR_CarrierAggregationVariant__fr1fdd_FR2TDD_CA_SpCellOnFR1FDD_supported	= 0
} e_NR_CarrierAggregationVariant__fr1fdd_FR2TDD_CA_SpCellOnFR1FDD;
typedef enum NR_CarrierAggregationVariant__fr1fdd_FR2TDD_CA_SpCellOnFR2TDD {
	NR_CarrierAggregationVariant__fr1fdd_FR2TDD_CA_SpCellOnFR2TDD_supported	= 0
} e_NR_CarrierAggregationVariant__fr1fdd_FR2TDD_CA_SpCellOnFR2TDD;
typedef enum NR_CarrierAggregationVariant__fr1tdd_FR2TDD_CA_SpCellOnFR1TDD {
	NR_CarrierAggregationVariant__fr1tdd_FR2TDD_CA_SpCellOnFR1TDD_supported	= 0
} e_NR_CarrierAggregationVariant__fr1tdd_FR2TDD_CA_SpCellOnFR1TDD;
typedef enum NR_CarrierAggregationVariant__fr1tdd_FR2TDD_CA_SpCellOnFR2TDD {
	NR_CarrierAggregationVariant__fr1tdd_FR2TDD_CA_SpCellOnFR2TDD_supported	= 0
} e_NR_CarrierAggregationVariant__fr1tdd_FR2TDD_CA_SpCellOnFR2TDD;
typedef enum NR_CarrierAggregationVariant__fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1FDD {
	NR_CarrierAggregationVariant__fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1FDD_supported	= 0
} e_NR_CarrierAggregationVariant__fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1FDD;
typedef enum NR_CarrierAggregationVariant__fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1TDD {
	NR_CarrierAggregationVariant__fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1TDD_supported	= 0
} e_NR_CarrierAggregationVariant__fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1TDD;
typedef enum NR_CarrierAggregationVariant__fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR2TDD {
	NR_CarrierAggregationVariant__fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR2TDD_supported	= 0
} e_NR_CarrierAggregationVariant__fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR2TDD;

/* NR_CarrierAggregationVariant */
typedef struct NR_CarrierAggregationVariant {
	long	*fr1fdd_FR1TDD_CA_SpCellOnFR1FDD;	/* OPTIONAL */
	long	*fr1fdd_FR1TDD_CA_SpCellOnFR1TDD;	/* OPTIONAL */
	long	*fr1fdd_FR2TDD_CA_SpCellOnFR1FDD;	/* OPTIONAL */
	long	*fr1fdd_FR2TDD_CA_SpCellOnFR2TDD;	/* OPTIONAL */
	long	*fr1tdd_FR2TDD_CA_SpCellOnFR1TDD;	/* OPTIONAL */
	long	*fr1tdd_FR2TDD_CA_SpCellOnFR2TDD;	/* OPTIONAL */
	long	*fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1FDD;	/* OPTIONAL */
	long	*fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1TDD;	/* OPTIONAL */
	long	*fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR2TDD;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CarrierAggregationVariant_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_fr1fdd_FR1TDD_CA_SpCellOnFR1FDD_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_fr1fdd_FR1TDD_CA_SpCellOnFR1TDD_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_fr1fdd_FR2TDD_CA_SpCellOnFR1FDD_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_fr1fdd_FR2TDD_CA_SpCellOnFR2TDD_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_fr1tdd_FR2TDD_CA_SpCellOnFR1TDD_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_fr1tdd_FR2TDD_CA_SpCellOnFR2TDD_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1FDD_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR1TDD_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_fr1fdd_FR1TDD_FR2TDD_CA_SpCellOnFR2TDD_18;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_CarrierAggregationVariant;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CarrierAggregationVariant_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CarrierAggregationVariant_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_CarrierAggregationVariant_H_ */
#include <asn_internal.h>