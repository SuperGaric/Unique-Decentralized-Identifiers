/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_BH_LogicalChannelIdentity_r16_H_
#define	_NR_BH_LogicalChannelIdentity_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_LogicalChannelIdentity.h"
#include "NR_BH-LogicalChannelIdentity-Ext-r16.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_BH_LogicalChannelIdentity_r16_PR {
	NR_BH_LogicalChannelIdentity_r16_PR_NOTHING,	/* No components present */
	NR_BH_LogicalChannelIdentity_r16_PR_bh_LogicalChannelIdentity_r16,
	NR_BH_LogicalChannelIdentity_r16_PR_bh_LogicalChannelIdentityExt_r16
} NR_BH_LogicalChannelIdentity_r16_PR;

/* NR_BH-LogicalChannelIdentity-r16 */
typedef struct NR_BH_LogicalChannelIdentity_r16 {
	NR_BH_LogicalChannelIdentity_r16_PR present;
	union NR_BH_LogicalChannelIdentity_r16_u {
		NR_LogicalChannelIdentity_t	 bh_LogicalChannelIdentity_r16;
		NR_BH_LogicalChannelIdentity_Ext_r16_t	 bh_LogicalChannelIdentityExt_r16;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BH_LogicalChannelIdentity_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_BH_LogicalChannelIdentity_r16;
extern asn_CHOICE_specifics_t asn_SPC_NR_BH_LogicalChannelIdentity_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BH_LogicalChannelIdentity_r16_1[2];
extern asn_per_constraints_t asn_PER_type_NR_BH_LogicalChannelIdentity_r16_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_BH_LogicalChannelIdentity_r16_H_ */
#include <asn_internal.h>
