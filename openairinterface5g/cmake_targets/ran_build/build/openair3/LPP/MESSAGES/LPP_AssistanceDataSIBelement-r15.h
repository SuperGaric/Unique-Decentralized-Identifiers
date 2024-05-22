/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-Broadcast-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_AssistanceDataSIBelement_r15_H_
#define	_LPP_AssistanceDataSIBelement_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <UTCTime.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LPP_CipheringKeyData_r15;
struct LPP_SegmentationInfo_r15;

/* LPP_AssistanceDataSIBelement-r15 */
typedef struct LPP_AssistanceDataSIBelement_r15 {
	long	*valueTag_r15;	/* OPTIONAL */
	UTCTime_t	*expirationTime_r15;	/* OPTIONAL */
	struct LPP_CipheringKeyData_r15	*cipheringKeyData_r15;	/* OPTIONAL */
	struct LPP_SegmentationInfo_r15	*segmentationInfo_r15;	/* OPTIONAL */
	OCTET_STRING_t	 assistanceDataElement_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_AssistanceDataSIBelement_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_AssistanceDataSIBelement_r15;

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_AssistanceDataSIBelement_r15_H_ */
#include <asn_internal.h>