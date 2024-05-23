/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#ifndef	_NGAP_CancelledCellsInEAI_EUTRA_H_
#define	_NGAP_CancelledCellsInEAI_EUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_CancelledCellsInEAI_EUTRA_Item;

/* NGAP_CancelledCellsInEAI-EUTRA */
typedef struct NGAP_CancelledCellsInEAI_EUTRA {
	A_SEQUENCE_OF(struct NGAP_CancelledCellsInEAI_EUTRA_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_CancelledCellsInEAI_EUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_CancelledCellsInEAI_EUTRA;
extern asn_SET_OF_specifics_t asn_SPC_NGAP_CancelledCellsInEAI_EUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_CancelledCellsInEAI_EUTRA_1[1];
extern asn_per_constraints_t asn_PER_type_NGAP_CancelledCellsInEAI_EUTRA_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_CancelledCellsInEAI_EUTRA_H_ */
#include <asn_internal.h>
