/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-Ies"
 * 	found in "/home/dmt/openairinterface5g/openair2/M2AP/MESSAGES/ASN1/m2ap-14.0.0.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/M2AP/MESSAGES`
 */

#ifndef	_M2AP_GBR_QosInformation_H_
#define	_M2AP_GBR_QosInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M2AP_BitRate.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct M2AP_ProtocolExtensionContainer;

/* M2AP_GBR-QosInformation */
typedef struct M2AP_GBR_QosInformation {
	M2AP_BitRate_t	 mBMS_E_RAB_MaximumBitrateDL;
	M2AP_BitRate_t	 mBMS_E_RAB_GuaranteedBitrateDL;
	struct M2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M2AP_GBR_QosInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M2AP_GBR_QosInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_M2AP_GBR_QosInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_M2AP_GBR_QosInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _M2AP_GBR_QosInformation_H_ */
#include <asn_internal.h>
