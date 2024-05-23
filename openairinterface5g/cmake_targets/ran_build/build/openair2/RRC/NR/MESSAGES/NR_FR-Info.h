/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_FR_Info_H_
#define	_NR_FR_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_ServCellIndex.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_FR_Info__fr_Type {
	NR_FR_Info__fr_Type_fr1	= 0,
	NR_FR_Info__fr_Type_fr2	= 1
} e_NR_FR_Info__fr_Type;

/* NR_FR-Info */
typedef struct NR_FR_Info {
	NR_ServCellIndex_t	 servCellIndex;
	long	 fr_Type;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_FR_Info_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_fr_Type_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_FR_Info;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_FR_Info_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_FR_Info_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_FR_Info_H_ */
#include <asn_internal.h>
