/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_WLAN_TargetDeviceErrorCauses_r13_H_
#define	_LPP_WLAN_TargetDeviceErrorCauses_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NULL.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_WLAN_TargetDeviceErrorCauses_r13__cause_r13 {
	LPP_WLAN_TargetDeviceErrorCauses_r13__cause_r13_undefined	= 0,
	LPP_WLAN_TargetDeviceErrorCauses_r13__cause_r13_requestedMeasurementsNotAvailable	= 1,
	LPP_WLAN_TargetDeviceErrorCauses_r13__cause_r13_notAllrequestedMeasurementsPossible	= 2
	/*
	 * Enumeration is extensible
	 */
} e_LPP_WLAN_TargetDeviceErrorCauses_r13__cause_r13;

/* LPP_WLAN-TargetDeviceErrorCauses-r13 */
typedef struct LPP_WLAN_TargetDeviceErrorCauses_r13 {
	long	 cause_r13;
	NULL_t	*wlan_AP_RSSI_MeasurementNotPossible_r13;	/* OPTIONAL */
	NULL_t	*wlan_AP_RTT_MeasurementNotPossible_r13;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_WLAN_TargetDeviceErrorCauses_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_cause_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_WLAN_TargetDeviceErrorCauses_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_WLAN_TargetDeviceErrorCauses_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_WLAN_TargetDeviceErrorCauses_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_WLAN_TargetDeviceErrorCauses_r13_H_ */
#include <asn_internal.h>