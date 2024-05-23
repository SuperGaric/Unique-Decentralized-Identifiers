/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_PDSCH_TimeDomainResourceAllocation_r16_H_
#define	_NR_PDSCH_TimeDomainResourceAllocation_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PDSCH_TimeDomainResourceAllocation_r16__mappingType_r16 {
	NR_PDSCH_TimeDomainResourceAllocation_r16__mappingType_r16_typeA	= 0,
	NR_PDSCH_TimeDomainResourceAllocation_r16__mappingType_r16_typeB	= 1
} e_NR_PDSCH_TimeDomainResourceAllocation_r16__mappingType_r16;
typedef enum NR_PDSCH_TimeDomainResourceAllocation_r16__repetitionNumber_r16 {
	NR_PDSCH_TimeDomainResourceAllocation_r16__repetitionNumber_r16_n2	= 0,
	NR_PDSCH_TimeDomainResourceAllocation_r16__repetitionNumber_r16_n3	= 1,
	NR_PDSCH_TimeDomainResourceAllocation_r16__repetitionNumber_r16_n4	= 2,
	NR_PDSCH_TimeDomainResourceAllocation_r16__repetitionNumber_r16_n5	= 3,
	NR_PDSCH_TimeDomainResourceAllocation_r16__repetitionNumber_r16_n6	= 4,
	NR_PDSCH_TimeDomainResourceAllocation_r16__repetitionNumber_r16_n7	= 5,
	NR_PDSCH_TimeDomainResourceAllocation_r16__repetitionNumber_r16_n8	= 6,
	NR_PDSCH_TimeDomainResourceAllocation_r16__repetitionNumber_r16_n16	= 7
} e_NR_PDSCH_TimeDomainResourceAllocation_r16__repetitionNumber_r16;
typedef enum NR_PDSCH_TimeDomainResourceAllocation_r16__ext2__repetitionNumber_v1730 {
	NR_PDSCH_TimeDomainResourceAllocation_r16__ext2__repetitionNumber_v1730_n2	= 0,
	NR_PDSCH_TimeDomainResourceAllocation_r16__ext2__repetitionNumber_v1730_n3	= 1,
	NR_PDSCH_TimeDomainResourceAllocation_r16__ext2__repetitionNumber_v1730_n4	= 2,
	NR_PDSCH_TimeDomainResourceAllocation_r16__ext2__repetitionNumber_v1730_n5	= 3,
	NR_PDSCH_TimeDomainResourceAllocation_r16__ext2__repetitionNumber_v1730_n6	= 4,
	NR_PDSCH_TimeDomainResourceAllocation_r16__ext2__repetitionNumber_v1730_n7	= 5,
	NR_PDSCH_TimeDomainResourceAllocation_r16__ext2__repetitionNumber_v1730_n8	= 6,
	NR_PDSCH_TimeDomainResourceAllocation_r16__ext2__repetitionNumber_v1730_n16	= 7
} e_NR_PDSCH_TimeDomainResourceAllocation_r16__ext2__repetitionNumber_v1730;

/* NR_PDSCH-TimeDomainResourceAllocation-r16 */
typedef struct NR_PDSCH_TimeDomainResourceAllocation_r16 {
	long	*k0_r16;	/* OPTIONAL */
	long	 mappingType_r16;
	long	 startSymbolAndLength_r16;
	long	*repetitionNumber_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_PDSCH_TimeDomainResourceAllocation_r16__ext1 {
		long	*k0_v1710;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_PDSCH_TimeDomainResourceAllocation_r16__ext2 {
		long	*repetitionNumber_v1730;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PDSCH_TimeDomainResourceAllocation_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mappingType_r16_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_repetitionNumber_r16_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_repetitionNumber_v1730_20;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_PDSCH_TimeDomainResourceAllocation_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PDSCH_TimeDomainResourceAllocation_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PDSCH_TimeDomainResourceAllocation_r16_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PDSCH_TimeDomainResourceAllocation_r16_H_ */
#include <asn_internal.h>
