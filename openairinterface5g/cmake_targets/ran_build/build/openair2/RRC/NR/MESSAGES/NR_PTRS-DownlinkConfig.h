/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_PTRS_DownlinkConfig_H_
#define	_NR_PTRS_DownlinkConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PTRS_DownlinkConfig__resourceElementOffset {
	NR_PTRS_DownlinkConfig__resourceElementOffset_offset01	= 0,
	NR_PTRS_DownlinkConfig__resourceElementOffset_offset10	= 1,
	NR_PTRS_DownlinkConfig__resourceElementOffset_offset11	= 2
} e_NR_PTRS_DownlinkConfig__resourceElementOffset;
typedef enum NR_PTRS_DownlinkConfig__ext1__maxNrofPorts_r16 {
	NR_PTRS_DownlinkConfig__ext1__maxNrofPorts_r16_n1	= 0,
	NR_PTRS_DownlinkConfig__ext1__maxNrofPorts_r16_n2	= 1
} e_NR_PTRS_DownlinkConfig__ext1__maxNrofPorts_r16;

/* NR_PTRS-DownlinkConfig */
typedef struct NR_PTRS_DownlinkConfig {
	struct NR_PTRS_DownlinkConfig__frequencyDensity {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *frequencyDensity;
	struct NR_PTRS_DownlinkConfig__timeDensity {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *timeDensity;
	long	*epre_Ratio;	/* OPTIONAL */
	long	*resourceElementOffset;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_PTRS_DownlinkConfig__ext1 {
		long	*maxNrofPorts_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PTRS_DownlinkConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_resourceElementOffset_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNrofPorts_r16_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_PTRS_DownlinkConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PTRS_DownlinkConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PTRS_DownlinkConfig_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PTRS_DownlinkConfig_H_ */
#include <asn_internal.h>
