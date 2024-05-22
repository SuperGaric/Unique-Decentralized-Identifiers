/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SystemInformationBlockType26a_r16_H_
#define	_LTE_SystemInformationBlockType26a_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PLMN-InfoList-r16.h"
#include "LTE_BandListENDC-r16.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_SystemInformationBlockType26a-r16 */
typedef struct LTE_SystemInformationBlockType26a_r16 {
	LTE_PLMN_InfoList_r16_t	 plmn_InfoList_r16;
	LTE_BandListENDC_r16_t	 bandListENDC_r16;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType26a_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType26a_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType26a_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType26a_r16_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SystemInformationBlockType26a_r16_H_ */
#include <asn_internal.h>