/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_MeasuredResultsList_H_
#define	_LPP_MeasuredResultsList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LPP_MeasuredResultsElement;

/* LPP_MeasuredResultsList */
typedef struct LPP_MeasuredResultsList {
	A_SEQUENCE_OF(struct LPP_MeasuredResultsElement) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_MeasuredResultsList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_MeasuredResultsList;
extern asn_SET_OF_specifics_t asn_SPC_LPP_MeasuredResultsList_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_MeasuredResultsList_1[1];
extern asn_per_constraints_t asn_PER_type_LPP_MeasuredResultsList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_MeasuredResultsList_H_ */
#include <asn_internal.h>
