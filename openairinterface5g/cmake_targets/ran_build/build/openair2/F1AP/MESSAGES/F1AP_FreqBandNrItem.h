/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_FreqBandNrItem_H_
#define	_F1AP_FreqBandNrItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct F1AP_ProtocolExtensionContainer;
struct F1AP_SupportedSULFreqBandItem;

/* F1AP_FreqBandNrItem */
typedef struct F1AP_FreqBandNrItem {
	long	 freqBandIndicatorNr;
	struct F1AP_FreqBandNrItem__supportedSULBandList {
		A_SEQUENCE_OF(struct F1AP_SupportedSULFreqBandItem) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} supportedSULBandList;
	struct F1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_FreqBandNrItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_FreqBandNrItem;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_FreqBandNrItem_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_FreqBandNrItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_FreqBandNrItem_H_ */
#include <asn_internal.h>