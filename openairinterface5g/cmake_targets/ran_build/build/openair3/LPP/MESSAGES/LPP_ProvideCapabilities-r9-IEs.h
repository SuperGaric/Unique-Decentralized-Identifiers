/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_ProvideCapabilities_r9_IEs_H_
#define	_LPP_ProvideCapabilities_r9_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LPP_CommonIEsProvideCapabilities;
struct LPP_A_GNSS_ProvideCapabilities;
struct LPP_OTDOA_ProvideCapabilities;
struct LPP_ECID_ProvideCapabilities;
struct LPP_EPDU_Sequence;
struct LPP_Sensor_ProvideCapabilities_r13;
struct LPP_TBS_ProvideCapabilities_r13;
struct LPP_WLAN_ProvideCapabilities_r13;
struct LPP_BT_ProvideCapabilities_r13;
struct LPP_NR_ECID_ProvideCapabilities_r16;
struct LPP_NR_Multi_RTT_ProvideCapabilities_r16;
struct LPP_NR_DL_AoD_ProvideCapabilities_r16;
struct LPP_NR_DL_TDOA_ProvideCapabilities_r16;
struct LPP_NR_UL_ProvideCapabilities_r16;

/* LPP_ProvideCapabilities-r9-IEs */
typedef struct LPP_ProvideCapabilities_r9_IEs {
	struct LPP_CommonIEsProvideCapabilities	*commonIEsProvideCapabilities;	/* OPTIONAL */
	struct LPP_A_GNSS_ProvideCapabilities	*a_gnss_ProvideCapabilities;	/* OPTIONAL */
	struct LPP_OTDOA_ProvideCapabilities	*otdoa_ProvideCapabilities;	/* OPTIONAL */
	struct LPP_ECID_ProvideCapabilities	*ecid_ProvideCapabilities;	/* OPTIONAL */
	struct LPP_EPDU_Sequence	*epdu_ProvideCapabilities;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LPP_ProvideCapabilities_r9_IEs__ext1 {
		struct LPP_Sensor_ProvideCapabilities_r13	*sensor_ProvideCapabilities_r13;	/* OPTIONAL */
		struct LPP_TBS_ProvideCapabilities_r13	*tbs_ProvideCapabilities_r13;	/* OPTIONAL */
		struct LPP_WLAN_ProvideCapabilities_r13	*wlan_ProvideCapabilities_r13;	/* OPTIONAL */
		struct LPP_BT_ProvideCapabilities_r13	*bt_ProvideCapabilities_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LPP_ProvideCapabilities_r9_IEs__ext2 {
		struct LPP_NR_ECID_ProvideCapabilities_r16	*nr_ECID_ProvideCapabilities_r16;	/* OPTIONAL */
		struct LPP_NR_Multi_RTT_ProvideCapabilities_r16	*nr_Multi_RTT_ProvideCapabilities_r16;	/* OPTIONAL */
		struct LPP_NR_DL_AoD_ProvideCapabilities_r16	*nr_DL_AoD_ProvideCapabilities_r16;	/* OPTIONAL */
		struct LPP_NR_DL_TDOA_ProvideCapabilities_r16	*nr_DL_TDOA_ProvideCapabilities_r16;	/* OPTIONAL */
		struct LPP_NR_UL_ProvideCapabilities_r16	*nr_UL_ProvideCapabilities_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_ProvideCapabilities_r9_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_ProvideCapabilities_r9_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_ProvideCapabilities_r9_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_ProvideCapabilities_r9_IEs_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_ProvideCapabilities_r9_IEs_H_ */
#include <asn_internal.h>
