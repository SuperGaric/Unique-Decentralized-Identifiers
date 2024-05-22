/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#ifndef	_NGAP_PWSFailedCellIDList_H_
#define	_NGAP_PWSFailedCellIDList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_PWSFailedCellIDList_PR {
	NGAP_PWSFailedCellIDList_PR_NOTHING,	/* No components present */
	NGAP_PWSFailedCellIDList_PR_eUTRA_CGI_PWSFailedList,
	NGAP_PWSFailedCellIDList_PR_nR_CGI_PWSFailedList,
	NGAP_PWSFailedCellIDList_PR_choice_Extensions
} NGAP_PWSFailedCellIDList_PR;

/* Forward declarations */
struct NGAP_EUTRA_CGIList;
struct NGAP_NR_CGIList;
struct NGAP_ProtocolIE_SingleContainer;

/* NGAP_PWSFailedCellIDList */
typedef struct NGAP_PWSFailedCellIDList {
	NGAP_PWSFailedCellIDList_PR present;
	union NGAP_PWSFailedCellIDList_u {
		struct NGAP_EUTRA_CGIList	*eUTRA_CGI_PWSFailedList;
		struct NGAP_NR_CGIList	*nR_CGI_PWSFailedList;
		struct NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_PWSFailedCellIDList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_PWSFailedCellIDList;
extern asn_CHOICE_specifics_t asn_SPC_NGAP_PWSFailedCellIDList_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_PWSFailedCellIDList_1[3];
extern asn_per_constraints_t asn_PER_type_NGAP_PWSFailedCellIDList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_PWSFailedCellIDList_H_ */
#include <asn_internal.h>
