/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_S_NSSAI_H_
#define	_NR_S_NSSAI_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_S_NSSAI_PR {
	NR_S_NSSAI_PR_NOTHING,	/* No components present */
	NR_S_NSSAI_PR_sst,
	NR_S_NSSAI_PR_sst_SD
} NR_S_NSSAI_PR;

/* NR_S-NSSAI */
typedef struct NR_S_NSSAI {
	NR_S_NSSAI_PR present;
	union NR_S_NSSAI_u {
		BIT_STRING_t	 sst;
		BIT_STRING_t	 sst_SD;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_S_NSSAI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_S_NSSAI;
extern asn_CHOICE_specifics_t asn_SPC_NR_S_NSSAI_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_S_NSSAI_1[2];
extern asn_per_constraints_t asn_PER_type_NR_S_NSSAI_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_S_NSSAI_H_ */
#include <asn_internal.h>
