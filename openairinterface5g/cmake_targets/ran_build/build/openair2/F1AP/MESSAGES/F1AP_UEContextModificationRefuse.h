/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Contents"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_UEContextModificationRefuse_H_
#define	_F1AP_UEContextModificationRefuse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "F1AP_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* F1AP_UEContextModificationRefuse */
typedef struct F1AP_UEContextModificationRefuse {
	F1AP_ProtocolIE_Container_10659P25_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_UEContextModificationRefuse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_UEContextModificationRefuse;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_UEContextModificationRefuse_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_UEContextModificationRefuse_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_UEContextModificationRefuse_H_ */
#include <asn_internal.h>
