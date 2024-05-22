/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_NRDC_Parameters_v15c0_H_
#define	_NR_NRDC_Parameters_v15c0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_NRDC_Parameters_v15c0__pdcp_DuplicationSplitSRB {
	NR_NRDC_Parameters_v15c0__pdcp_DuplicationSplitSRB_supported	= 0
} e_NR_NRDC_Parameters_v15c0__pdcp_DuplicationSplitSRB;
typedef enum NR_NRDC_Parameters_v15c0__pdcp_DuplicationSplitDRB {
	NR_NRDC_Parameters_v15c0__pdcp_DuplicationSplitDRB_supported	= 0
} e_NR_NRDC_Parameters_v15c0__pdcp_DuplicationSplitDRB;

/* NR_NRDC-Parameters-v15c0 */
typedef struct NR_NRDC_Parameters_v15c0 {
	long	*pdcp_DuplicationSplitSRB;	/* OPTIONAL */
	long	*pdcp_DuplicationSplitDRB;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_NRDC_Parameters_v15c0_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pdcp_DuplicationSplitSRB_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pdcp_DuplicationSplitDRB_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_NRDC_Parameters_v15c0;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_NRDC_Parameters_v15c0_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_NRDC_Parameters_v15c0_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_NRDC_Parameters_v15c0_H_ */
#include <asn_internal.h>