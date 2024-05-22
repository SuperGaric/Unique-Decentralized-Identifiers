/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SIB7_H_
#define	_NR_SIB7_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SIB7__warningMessageSegmentType {
	NR_SIB7__warningMessageSegmentType_notLastSegment	= 0,
	NR_SIB7__warningMessageSegmentType_lastSegment	= 1
} e_NR_SIB7__warningMessageSegmentType;

/* NR_SIB7 */
typedef struct NR_SIB7 {
	BIT_STRING_t	 messageIdentifier;
	BIT_STRING_t	 serialNumber;
	long	 warningMessageSegmentType;
	long	 warningMessageSegmentNumber;
	OCTET_STRING_t	 warningMessageSegment;
	OCTET_STRING_t	*dataCodingScheme;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SIB7_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_warningMessageSegmentType_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SIB7;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SIB7_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SIB7_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SIB7_H_ */
#include <asn_internal.h>
