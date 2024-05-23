/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_BandCombination_UplinkTxSwitch_v1720_H_
#define	_NR_BandCombination_UplinkTxSwitch_v1720_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_BandCombination_UplinkTxSwitch_v1720__uplinkTxSwitching_OptionSupport2T2T_r17 {
	NR_BandCombination_UplinkTxSwitch_v1720__uplinkTxSwitching_OptionSupport2T2T_r17_switchedUL	= 0,
	NR_BandCombination_UplinkTxSwitch_v1720__uplinkTxSwitching_OptionSupport2T2T_r17_dualUL	= 1,
	NR_BandCombination_UplinkTxSwitch_v1720__uplinkTxSwitching_OptionSupport2T2T_r17_both	= 2
} e_NR_BandCombination_UplinkTxSwitch_v1720__uplinkTxSwitching_OptionSupport2T2T_r17;

/* Forward declarations */
struct NR_BandCombination_v1720;

/* NR_BandCombination-UplinkTxSwitch-v1720 */
typedef struct NR_BandCombination_UplinkTxSwitch_v1720 {
	struct NR_BandCombination_v1720	*bandCombination_v1720;	/* OPTIONAL */
	long	*uplinkTxSwitching_OptionSupport2T2T_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BandCombination_UplinkTxSwitch_v1720_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_uplinkTxSwitching_OptionSupport2T2T_r17_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_BandCombination_UplinkTxSwitch_v1720;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_BandCombination_UplinkTxSwitch_v1720_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BandCombination_UplinkTxSwitch_v1720_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_BandCombination-v1720.h"

#endif	/* _NR_BandCombination_UplinkTxSwitch_v1720_H_ */
#include <asn_internal.h>
