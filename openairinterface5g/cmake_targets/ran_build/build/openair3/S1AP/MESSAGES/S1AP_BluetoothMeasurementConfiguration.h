/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#ifndef	_S1AP_BluetoothMeasurementConfiguration_H_
#define	_S1AP_BluetoothMeasurementConfiguration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_BluetoothMeasConfig.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_BluetoothMeasurementConfiguration__bt_rssi {
	S1AP_BluetoothMeasurementConfiguration__bt_rssi_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_BluetoothMeasurementConfiguration__bt_rssi;

/* Forward declarations */
struct S1AP_BluetoothMeasConfigNameList;
struct S1AP_ProtocolExtensionContainer;

/* S1AP_BluetoothMeasurementConfiguration */
typedef struct S1AP_BluetoothMeasurementConfiguration {
	S1AP_BluetoothMeasConfig_t	 bluetoothMeasConfig;
	struct S1AP_BluetoothMeasConfigNameList	*bluetoothMeasConfigNameList;	/* OPTIONAL */
	long	*bt_rssi;	/* OPTIONAL */
	struct S1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_BluetoothMeasurementConfiguration_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_S1AP_bt_rssi_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_BluetoothMeasurementConfiguration;
extern asn_SEQUENCE_specifics_t asn_SPC_S1AP_BluetoothMeasurementConfiguration_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_BluetoothMeasurementConfiguration_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_BluetoothMeasurementConfiguration_H_ */
#include <asn_internal.h>
