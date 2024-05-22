/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_GNSS_AuxiliaryInformation_H_
#define	_LPP_GNSS_AuxiliaryInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LPP_GNSS-ID-BDS-r16.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_GNSS_AuxiliaryInformation_PR {
	LPP_GNSS_AuxiliaryInformation_PR_NOTHING,	/* No components present */
	LPP_GNSS_AuxiliaryInformation_PR_gnss_ID_GPS,
	LPP_GNSS_AuxiliaryInformation_PR_gnss_ID_GLONASS,
	/* Extensions may appear below */
	LPP_GNSS_AuxiliaryInformation_PR_ext1
} LPP_GNSS_AuxiliaryInformation_PR;

/* Forward declarations */
struct LPP_GNSS_ID_GPS;
struct LPP_GNSS_ID_GLONASS;

/* LPP_GNSS-AuxiliaryInformation */
typedef struct LPP_GNSS_AuxiliaryInformation {
	LPP_GNSS_AuxiliaryInformation_PR present;
	union LPP_GNSS_AuxiliaryInformation_u {
		struct LPP_GNSS_ID_GPS	*gnss_ID_GPS;
		struct LPP_GNSS_ID_GLONASS	*gnss_ID_GLONASS;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		struct LPP_GNSS_AuxiliaryInformation__ext1 {
			LPP_GNSS_ID_BDS_r16_t	 gnss_ID_BDS_r16;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ext1;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_GNSS_AuxiliaryInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_AuxiliaryInformation;
extern asn_CHOICE_specifics_t asn_SPC_LPP_GNSS_AuxiliaryInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_GNSS_AuxiliaryInformation_1[3];
extern asn_per_constraints_t asn_PER_type_LPP_GNSS_AuxiliaryInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_GNSS_AuxiliaryInformation_H_ */
#include <asn_internal.h>