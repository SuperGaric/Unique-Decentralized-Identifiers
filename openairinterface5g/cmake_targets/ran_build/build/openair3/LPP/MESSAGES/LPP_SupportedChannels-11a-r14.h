/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_SupportedChannels_11a_r14_H_
#define	_LPP_SupportedChannels_11a_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LPP_SupportedChannels-11a-r14 */
typedef struct LPP_SupportedChannels_11a_r14 {
	BOOLEAN_t	 ch34_r14;
	BOOLEAN_t	 ch36_r14;
	BOOLEAN_t	 ch38_r14;
	BOOLEAN_t	 ch40_r14;
	BOOLEAN_t	 ch42_r14;
	BOOLEAN_t	 ch44_r14;
	BOOLEAN_t	 ch46_r14;
	BOOLEAN_t	 ch48_r14;
	BOOLEAN_t	 ch52_r14;
	BOOLEAN_t	 ch56_r14;
	BOOLEAN_t	 ch60_r14;
	BOOLEAN_t	 ch64_r14;
	BOOLEAN_t	 ch149_r14;
	BOOLEAN_t	 ch153_r14;
	BOOLEAN_t	 ch157_r14;
	BOOLEAN_t	 ch161_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_SupportedChannels_11a_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_SupportedChannels_11a_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_SupportedChannels_11a_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_SupportedChannels_11a_r14_1[16];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_SupportedChannels_11a_r14_H_ */
#include <asn_internal.h>