/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SL_PagingIdentityRemoteUE_r17_H_
#define	_NR_SL_PagingIdentityRemoteUE_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_NG-5G-S-TMSI.h"
#include "NR_I-RNTI-Value.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_SL-PagingIdentityRemoteUE-r17 */
typedef struct NR_SL_PagingIdentityRemoteUE_r17 {
	NR_NG_5G_S_TMSI_t	 ng_5G_S_TMSI_r17;
	NR_I_RNTI_Value_t	*fullI_RNTI_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SL_PagingIdentityRemoteUE_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_SL_PagingIdentityRemoteUE_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SL_PagingIdentityRemoteUE_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SL_PagingIdentityRemoteUE_r17_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SL_PagingIdentityRemoteUE_r17_H_ */
#include <asn_internal.h>
