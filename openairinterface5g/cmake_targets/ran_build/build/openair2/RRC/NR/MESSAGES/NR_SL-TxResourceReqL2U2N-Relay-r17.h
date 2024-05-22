/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SL_TxResourceReqL2U2N_Relay_r17_H_
#define	_NR_SL_TxResourceReqL2U2N_Relay_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_SL-DestinationIdentity-r16.h"
#include "NR_SL-TxInterestedFreqList-r16.h"
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include "NR_SL-TypeTxSync-r16.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SL_TxResourceReqL2U2N_Relay_r17__sl_LocalID_Request_r17 {
	NR_SL_TxResourceReqL2U2N_Relay_r17__sl_LocalID_Request_r17_true	= 0
} e_NR_SL_TxResourceReqL2U2N_Relay_r17__sl_LocalID_Request_r17;

/* Forward declarations */
struct NR_SL_PagingIdentityRemoteUE_r17;

/* NR_SL-TxResourceReqL2U2N-Relay-r17 */
typedef struct NR_SL_TxResourceReqL2U2N_Relay_r17 {
	NR_SL_DestinationIdentity_r16_t	*sl_DestinationIdentityL2U2N_r17;	/* OPTIONAL */
	NR_SL_TxInterestedFreqList_r16_t	 sl_TxInterestedFreqListL2U2N_r17;
	struct NR_SL_TxResourceReqL2U2N_Relay_r17__sl_TypeTxSyncListL2U2N_r17 {
		A_SEQUENCE_OF(NR_SL_TypeTxSync_r16_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} sl_TypeTxSyncListL2U2N_r17;
	long	*sl_LocalID_Request_r17;	/* OPTIONAL */
	struct NR_SL_PagingIdentityRemoteUE_r17	*sl_PagingIdentityRemoteUE_r17;	/* OPTIONAL */
	OCTET_STRING_t	*sl_CapabilityInformationSidelink_r17;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SL_TxResourceReqL2U2N_Relay_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_LocalID_Request_r17_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SL_TxResourceReqL2U2N_Relay_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SL_TxResourceReqL2U2N_Relay_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SL_TxResourceReqL2U2N_Relay_r17_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SL-PagingIdentityRemoteUE-r17.h"

#endif	/* _NR_SL_TxResourceReqL2U2N_Relay_r17_H_ */
#include <asn_internal.h>