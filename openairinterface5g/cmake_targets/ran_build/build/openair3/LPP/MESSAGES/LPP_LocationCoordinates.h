/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_LocationCoordinates_H_
#define	_LPP_LocationCoordinates_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_LocationCoordinates_PR {
	LPP_LocationCoordinates_PR_NOTHING,	/* No components present */
	LPP_LocationCoordinates_PR_ellipsoidPoint,
	LPP_LocationCoordinates_PR_ellipsoidPointWithUncertaintyCircle,
	LPP_LocationCoordinates_PR_ellipsoidPointWithUncertaintyEllipse,
	LPP_LocationCoordinates_PR_polygon,
	LPP_LocationCoordinates_PR_ellipsoidPointWithAltitude,
	LPP_LocationCoordinates_PR_ellipsoidPointWithAltitudeAndUncertaintyEllipsoid,
	LPP_LocationCoordinates_PR_ellipsoidArc,
	/* Extensions may appear below */
	LPP_LocationCoordinates_PR_highAccuracyEllipsoidPointWithUncertaintyEllipse_v1510,
	LPP_LocationCoordinates_PR_highAccuracyEllipsoidPointWithAltitudeAndUncertaintyEllipsoid_v1510
} LPP_LocationCoordinates_PR;

/* Forward declarations */
struct LPP_Ellipsoid_Point;
struct LPP_Ellipsoid_PointWithUncertaintyCircle;
struct LPP_EllipsoidPointWithUncertaintyEllipse;
struct LPP_Polygon;
struct LPP_EllipsoidPointWithAltitude;
struct LPP_EllipsoidPointWithAltitudeAndUncertaintyEllipsoid;
struct LPP_EllipsoidArc;
struct LPP_HighAccuracyEllipsoidPointWithUncertaintyEllipse_r15;
struct LPP_HighAccuracyEllipsoidPointWithAltitudeAndUncertaintyEllipsoid_r15;

/* LPP_LocationCoordinates */
typedef struct LPP_LocationCoordinates {
	LPP_LocationCoordinates_PR present;
	union LPP_LocationCoordinates_u {
		struct LPP_Ellipsoid_Point	*ellipsoidPoint;
		struct LPP_Ellipsoid_PointWithUncertaintyCircle	*ellipsoidPointWithUncertaintyCircle;
		struct LPP_EllipsoidPointWithUncertaintyEllipse	*ellipsoidPointWithUncertaintyEllipse;
		struct LPP_Polygon	*polygon;
		struct LPP_EllipsoidPointWithAltitude	*ellipsoidPointWithAltitude;
		struct LPP_EllipsoidPointWithAltitudeAndUncertaintyEllipsoid	*ellipsoidPointWithAltitudeAndUncertaintyEllipsoid;
		struct LPP_EllipsoidArc	*ellipsoidArc;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		struct LPP_HighAccuracyEllipsoidPointWithUncertaintyEllipse_r15	*highAccuracyEllipsoidPointWithUncertaintyEllipse_v1510;
		struct LPP_HighAccuracyEllipsoidPointWithAltitudeAndUncertaintyEllipsoid_r15	*highAccuracyEllipsoidPointWithAltitudeAndUncertaintyEllipsoid_v1510;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_LocationCoordinates_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_LocationCoordinates;
extern asn_CHOICE_specifics_t asn_SPC_LPP_LocationCoordinates_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_LocationCoordinates_1[9];
extern asn_per_constraints_t asn_PER_type_LPP_LocationCoordinates_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_LocationCoordinates_H_ */
#include <asn_internal.h>