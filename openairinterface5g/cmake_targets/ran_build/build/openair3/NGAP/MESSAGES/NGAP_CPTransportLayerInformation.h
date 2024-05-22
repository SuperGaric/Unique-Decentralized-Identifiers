/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#ifndef	_NGAP_CPTransportLayerInformation_H_
#define	_NGAP_CPTransportLayerInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_TransportLayerAddress.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_CPTransportLayerInformation_PR {
	NGAP_CPTransportLayerInformation_PR_NOTHING,	/* No components present */
	NGAP_CPTransportLayerInformation_PR_endpointIPAddress,
	NGAP_CPTransportLayerInformation_PR_choice_Extensions
} NGAP_CPTransportLayerInformation_PR;

/* Forward declarations */
struct NGAP_ProtocolIE_SingleContainer;

/* NGAP_CPTransportLayerInformation */
typedef struct NGAP_CPTransportLayerInformation {
	NGAP_CPTransportLayerInformation_PR present;
	union NGAP_CPTransportLayerInformation_u {
		NGAP_TransportLayerAddress_t	 endpointIPAddress;
		struct NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_CPTransportLayerInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_CPTransportLayerInformation;
extern asn_CHOICE_specifics_t asn_SPC_NGAP_CPTransportLayerInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_CPTransportLayerInformation_1[2];
extern asn_per_constraints_t asn_PER_type_NGAP_CPTransportLayerInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_CPTransportLayerInformation_H_ */
#include <asn_internal.h>
