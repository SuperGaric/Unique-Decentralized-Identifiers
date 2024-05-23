/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#ifndef	_S1AP_RecommendedCellItem_H_
#define	_S1AP_RecommendedCellItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_EUTRAN-CGI.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_ProtocolExtensionContainer;

/* S1AP_RecommendedCellItem */
typedef struct S1AP_RecommendedCellItem {
	S1AP_EUTRAN_CGI_t	 eUTRAN_CGI;
	long	*timeStayedInCell;	/* OPTIONAL */
	struct S1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_RecommendedCellItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_RecommendedCellItem;
extern asn_SEQUENCE_specifics_t asn_SPC_S1AP_RecommendedCellItem_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_RecommendedCellItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_RecommendedCellItem_H_ */
#include <asn_internal.h>
