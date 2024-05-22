/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_CA_ParametersEUTRA_v1560_H_
#define	_NR_CA_ParametersEUTRA_v1560_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_CA-ParametersEUTRA-v1560 */
typedef struct NR_CA_ParametersEUTRA_v1560 {
	long	*fd_MIMO_TotalWeightedLayers;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CA_ParametersEUTRA_v1560_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_CA_ParametersEUTRA_v1560;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CA_ParametersEUTRA_v1560_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CA_ParametersEUTRA_v1560_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_CA_ParametersEUTRA_v1560_H_ */
#include <asn_internal.h>