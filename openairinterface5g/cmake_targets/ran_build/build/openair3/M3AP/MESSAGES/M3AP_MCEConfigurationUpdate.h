/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-PDU-Contents"
 * 	found in "/home/dmt/openairinterface5g/openair3/M3AP/MESSAGES/ASN1/m3ap-14.0.0.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/M3AP/MESSAGES`
 */

#ifndef	_M3AP_MCEConfigurationUpdate_H_
#define	_M3AP_MCEConfigurationUpdate_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M3AP_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* M3AP_MCEConfigurationUpdate */
typedef struct M3AP_MCEConfigurationUpdate {
	M3AP_ProtocolIE_Container_1004P14_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MCEConfigurationUpdate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MCEConfigurationUpdate;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_MCEConfigurationUpdate_specs_1;
extern asn_TYPE_member_t asn_MBR_M3AP_MCEConfigurationUpdate_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_MCEConfigurationUpdate_H_ */
#include <asn_internal.h>
