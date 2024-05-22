/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_EllipsoidPointWithAltitude_H_
#define	_LPP_EllipsoidPointWithAltitude_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_EllipsoidPointWithAltitude__latitudeSign {
	LPP_EllipsoidPointWithAltitude__latitudeSign_north	= 0,
	LPP_EllipsoidPointWithAltitude__latitudeSign_south	= 1
} e_LPP_EllipsoidPointWithAltitude__latitudeSign;
typedef enum LPP_EllipsoidPointWithAltitude__altitudeDirection {
	LPP_EllipsoidPointWithAltitude__altitudeDirection_height	= 0,
	LPP_EllipsoidPointWithAltitude__altitudeDirection_depth	= 1
} e_LPP_EllipsoidPointWithAltitude__altitudeDirection;

/* LPP_EllipsoidPointWithAltitude */
typedef struct LPP_EllipsoidPointWithAltitude {
	long	 latitudeSign;
	long	 degreesLatitude;
	long	 degreesLongitude;
	long	 altitudeDirection;
	long	 altitude;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_EllipsoidPointWithAltitude_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_latitudeSign_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_altitudeDirection_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_EllipsoidPointWithAltitude;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_EllipsoidPointWithAltitude_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_EllipsoidPointWithAltitude_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_EllipsoidPointWithAltitude_H_ */
#include <asn_internal.h>