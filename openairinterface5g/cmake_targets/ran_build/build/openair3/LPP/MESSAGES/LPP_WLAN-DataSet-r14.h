/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_WLAN_DataSet_r14_H_
#define	_LPP_WLAN_DataSet_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LPP_SupportedChannels_11a_r14;
struct LPP_SupportedChannels_11bg_r14;
struct LPP_WLAN_AP_Data_r14;

/* LPP_WLAN-DataSet-r14 */
typedef struct LPP_WLAN_DataSet_r14 {
	struct LPP_WLAN_DataSet_r14__wlan_AP_List_r14 {
		A_SEQUENCE_OF(struct LPP_WLAN_AP_Data_r14) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} wlan_AP_List_r14;
	struct LPP_SupportedChannels_11a_r14	*supportedChannels_11a_r14;	/* OPTIONAL */
	struct LPP_SupportedChannels_11bg_r14	*supportedChannels_11bg_r14;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_WLAN_DataSet_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_WLAN_DataSet_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_WLAN_DataSet_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_WLAN_DataSet_r14_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_WLAN_DataSet_r14_H_ */
#include <asn_internal.h>
