/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_GNSS_UTC_ModelSupport_H_
#define	_LPP_GNSS_UTC_ModelSupport_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_GNSS_UTC_ModelSupport__utc_Model {
	LPP_GNSS_UTC_ModelSupport__utc_Model_model_1	= 0,
	LPP_GNSS_UTC_ModelSupport__utc_Model_model_2	= 1,
	LPP_GNSS_UTC_ModelSupport__utc_Model_model_3	= 2,
	LPP_GNSS_UTC_ModelSupport__utc_Model_model_4	= 3,
	LPP_GNSS_UTC_ModelSupport__utc_Model_model_5	= 4
} e_LPP_GNSS_UTC_ModelSupport__utc_Model;

/* LPP_GNSS-UTC-ModelSupport */
typedef struct LPP_GNSS_UTC_ModelSupport {
	BIT_STRING_t	*utc_Model;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_GNSS_UTC_ModelSupport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_UTC_ModelSupport;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_GNSS_UTC_ModelSupport_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_GNSS_UTC_ModelSupport_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_GNSS_UTC_ModelSupport_H_ */
#include <asn_internal.h>
