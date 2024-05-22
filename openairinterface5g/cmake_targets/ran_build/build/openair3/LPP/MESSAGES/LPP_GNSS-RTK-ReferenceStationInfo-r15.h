/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_GNSS_RTK_ReferenceStationInfo_r15_H_
#define	_LPP_GNSS_RTK_ReferenceStationInfo_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LPP_GNSS-ReferenceStationID-r15.h"
#include <NativeEnumerated.h>
#include <INTEGER.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_GNSS_RTK_ReferenceStationInfo_r15__referenceStationIndicator_r15 {
	LPP_GNSS_RTK_ReferenceStationInfo_r15__referenceStationIndicator_r15_physical	= 0,
	LPP_GNSS_RTK_ReferenceStationInfo_r15__referenceStationIndicator_r15_non_physical	= 1
} e_LPP_GNSS_RTK_ReferenceStationInfo_r15__referenceStationIndicator_r15;

/* Forward declarations */
struct LPP_AntennaDescription_r15;
struct LPP_AntennaReferencePointUnc_r15;
struct LPP_PhysicalReferenceStationInfo_r15;
struct LPP_EqualIntegerAmbiguityLevel_r16;

/* LPP_GNSS-RTK-ReferenceStationInfo-r15 */
typedef struct LPP_GNSS_RTK_ReferenceStationInfo_r15 {
	LPP_GNSS_ReferenceStationID_r15_t	 referenceStationID_r15;
	long	 referenceStationIndicator_r15;
	INTEGER_t	 antenna_reference_point_ECEF_X_r15;
	INTEGER_t	 antenna_reference_point_ECEF_Y_r15;
	INTEGER_t	 antenna_reference_point_ECEF_Z_r15;
	long	*antennaHeight_r15;	/* OPTIONAL */
	struct LPP_AntennaDescription_r15	*antennaDescription_r15;	/* OPTIONAL */
	struct LPP_AntennaReferencePointUnc_r15	*antenna_reference_point_unc_r15;	/* OPTIONAL */
	struct LPP_PhysicalReferenceStationInfo_r15	*physical_reference_station_info_r15;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LPP_GNSS_RTK_ReferenceStationInfo_r15__ext1 {
		struct LPP_EqualIntegerAmbiguityLevel_r16	*equalIntegerAmbiguityLevel_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_GNSS_RTK_ReferenceStationInfo_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_referenceStationIndicator_r15_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_RTK_ReferenceStationInfo_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_GNSS_RTK_ReferenceStationInfo_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_GNSS_RTK_ReferenceStationInfo_r15_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_GNSS_RTK_ReferenceStationInfo_r15_H_ */
#include <asn_internal.h>