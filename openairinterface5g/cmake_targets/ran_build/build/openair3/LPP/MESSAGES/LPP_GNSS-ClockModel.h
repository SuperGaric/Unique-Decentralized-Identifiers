/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_GNSS_ClockModel_H_
#define	_LPP_GNSS_ClockModel_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_GNSS_ClockModel_PR {
	LPP_GNSS_ClockModel_PR_NOTHING,	/* No components present */
	LPP_GNSS_ClockModel_PR_standardClockModelList,
	LPP_GNSS_ClockModel_PR_nav_ClockModel,
	LPP_GNSS_ClockModel_PR_cnav_ClockModel,
	LPP_GNSS_ClockModel_PR_glonass_ClockModel,
	LPP_GNSS_ClockModel_PR_sbas_ClockModel,
	/* Extensions may appear below */
	LPP_GNSS_ClockModel_PR_bds_ClockModel_r12,
	LPP_GNSS_ClockModel_PR_bds_ClockModel2_r16,
	LPP_GNSS_ClockModel_PR_navic_ClockModel_r16
} LPP_GNSS_ClockModel_PR;

/* Forward declarations */
struct LPP_StandardClockModelList;
struct LPP_NAV_ClockModel;
struct LPP_CNAV_ClockModel;
struct LPP_GLONASS_ClockModel;
struct LPP_SBAS_ClockModel;
struct LPP_BDS_ClockModel_r12;
struct LPP_BDS_ClockModel2_r16;
struct LPP_NavIC_ClockModel_r16;

/* LPP_GNSS-ClockModel */
typedef struct LPP_GNSS_ClockModel {
	LPP_GNSS_ClockModel_PR present;
	union LPP_GNSS_ClockModel_u {
		struct LPP_StandardClockModelList	*standardClockModelList;
		struct LPP_NAV_ClockModel	*nav_ClockModel;
		struct LPP_CNAV_ClockModel	*cnav_ClockModel;
		struct LPP_GLONASS_ClockModel	*glonass_ClockModel;
		struct LPP_SBAS_ClockModel	*sbas_ClockModel;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		struct LPP_BDS_ClockModel_r12	*bds_ClockModel_r12;
		struct LPP_BDS_ClockModel2_r16	*bds_ClockModel2_r16;
		struct LPP_NavIC_ClockModel_r16	*navic_ClockModel_r16;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_GNSS_ClockModel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_ClockModel;
extern asn_CHOICE_specifics_t asn_SPC_LPP_GNSS_ClockModel_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_GNSS_ClockModel_1[8];
extern asn_per_constraints_t asn_PER_type_LPP_GNSS_ClockModel_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_GNSS_ClockModel_H_ */
#include <asn_internal.h>
