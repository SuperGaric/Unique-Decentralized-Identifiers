/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/dmt/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#ifndef	_X2AP_X2APMessageTransfer_H_
#define	_X2AP_X2APMessageTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* X2AP_X2APMessageTransfer */
typedef struct X2AP_X2APMessageTransfer {
	X2AP_ProtocolIE_Container_8370P29_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_X2APMessageTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_X2APMessageTransfer;
extern asn_SEQUENCE_specifics_t asn_SPC_X2AP_X2APMessageTransfer_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_X2APMessageTransfer_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_X2APMessageTransfer_H_ */
#include <asn_internal.h>
