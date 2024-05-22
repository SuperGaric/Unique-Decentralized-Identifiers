/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_GNSS_MeasurementForOneGNSS_H_
#define	_LPP_GNSS_MeasurementForOneGNSS_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LPP_GNSS-ID.h"
#include "LPP_GNSS-SgnMeasList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LPP_GNSS-MeasurementForOneGNSS */
typedef struct LPP_GNSS_MeasurementForOneGNSS {
	LPP_GNSS_ID_t	 gnss_ID;
	LPP_GNSS_SgnMeasList_t	 gnss_SgnMeasList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_GNSS_MeasurementForOneGNSS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_MeasurementForOneGNSS;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_GNSS_MeasurementForOneGNSS_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_GNSS_MeasurementForOneGNSS_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_GNSS_MeasurementForOneGNSS_H_ */
#include <asn_internal.h>