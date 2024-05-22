/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_FailedLogicalChannelInfo_r15_H_
#define	_LTE_FailedLogicalChannelInfo_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_FailedLogicalChannelInfo_r15__failedLogicalChannelIdentity_r15__cellGroupIndication_r15 {
	LTE_FailedLogicalChannelInfo_r15__failedLogicalChannelIdentity_r15__cellGroupIndication_r15_mn	= 0,
	LTE_FailedLogicalChannelInfo_r15__failedLogicalChannelIdentity_r15__cellGroupIndication_r15_sn	= 1
} e_LTE_FailedLogicalChannelInfo_r15__failedLogicalChannelIdentity_r15__cellGroupIndication_r15;
typedef enum LTE_FailedLogicalChannelInfo_r15__failureType {
	LTE_FailedLogicalChannelInfo_r15__failureType_duplication	= 0,
	LTE_FailedLogicalChannelInfo_r15__failureType_spare3	= 1,
	LTE_FailedLogicalChannelInfo_r15__failureType_spare2	= 2,
	LTE_FailedLogicalChannelInfo_r15__failureType_spare1	= 3
} e_LTE_FailedLogicalChannelInfo_r15__failureType;

/* LTE_FailedLogicalChannelInfo-r15 */
typedef struct LTE_FailedLogicalChannelInfo_r15 {
	struct LTE_FailedLogicalChannelInfo_r15__failedLogicalChannelIdentity_r15 {
		long	 cellGroupIndication_r15;
		long	*logicalChannelIdentity_r15;	/* OPTIONAL */
		long	*logicalChannelIdentityExt_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} failedLogicalChannelIdentity_r15;
	long	 failureType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_FailedLogicalChannelInfo_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_cellGroupIndication_r15_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_failureType_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_FailedLogicalChannelInfo_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_FailedLogicalChannelInfo_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_FailedLogicalChannelInfo_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_FailedLogicalChannelInfo_r15_H_ */
#include <asn_internal.h>
