/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_NPN_IdentityInfo_r16_H_
#define	_NR_NPN_IdentityInfo_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_TrackingAreaCode.h"
#include "NR_RAN-AreaCode.h"
#include "NR_CellIdentity.h"
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_NPN_IdentityInfo_r16__cellReservedForOperatorUse_r16 {
	NR_NPN_IdentityInfo_r16__cellReservedForOperatorUse_r16_reserved	= 0,
	NR_NPN_IdentityInfo_r16__cellReservedForOperatorUse_r16_notReserved	= 1
} e_NR_NPN_IdentityInfo_r16__cellReservedForOperatorUse_r16;
typedef enum NR_NPN_IdentityInfo_r16__iab_Support_r16 {
	NR_NPN_IdentityInfo_r16__iab_Support_r16_true	= 0
} e_NR_NPN_IdentityInfo_r16__iab_Support_r16;

/* Forward declarations */
struct NR_NPN_Identity_r16;

/* NR_NPN-IdentityInfo-r16 */
typedef struct NR_NPN_IdentityInfo_r16 {
	struct NR_NPN_IdentityInfo_r16__npn_IdentityList_r16 {
		A_SEQUENCE_OF(struct NR_NPN_Identity_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} npn_IdentityList_r16;
	NR_TrackingAreaCode_t	 trackingAreaCode_r16;
	NR_RAN_AreaCode_t	*ranac_r16;	/* OPTIONAL */
	NR_CellIdentity_t	 cellIdentity_r16;
	long	 cellReservedForOperatorUse_r16;
	long	*iab_Support_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_NPN_IdentityInfo_r16__ext1 {
		long	*gNB_ID_Length_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_NPN_IdentityInfo_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_cellReservedForOperatorUse_r16_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_iab_Support_r16_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_NPN_IdentityInfo_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_NPN_IdentityInfo_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_NPN_IdentityInfo_r16_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_NPN-Identity-r16.h"

#endif	/* _NR_NPN_IdentityInfo_r16_H_ */
#include <asn_internal.h>
