/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_CommonIEsRequestCapabilities_H_
#define	_LPP_CommonIEsRequestCapabilities_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_CommonIEsRequestCapabilities__ext1__lpp_message_segmentation_req_r14 {
	LPP_CommonIEsRequestCapabilities__ext1__lpp_message_segmentation_req_r14_serverToTarget	= 0,
	LPP_CommonIEsRequestCapabilities__ext1__lpp_message_segmentation_req_r14_targetToServer	= 1
} e_LPP_CommonIEsRequestCapabilities__ext1__lpp_message_segmentation_req_r14;

/* LPP_CommonIEsRequestCapabilities */
typedef struct LPP_CommonIEsRequestCapabilities {
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LPP_CommonIEsRequestCapabilities__ext1 {
		BIT_STRING_t	*lpp_message_segmentation_req_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_CommonIEsRequestCapabilities_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_CommonIEsRequestCapabilities;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_CommonIEsRequestCapabilities_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_CommonIEsRequestCapabilities_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_CommonIEsRequestCapabilities_H_ */
#include <asn_internal.h>