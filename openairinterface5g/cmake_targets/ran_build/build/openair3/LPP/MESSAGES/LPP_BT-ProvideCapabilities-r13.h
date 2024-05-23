/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_BT_ProvideCapabilities_r13_H_
#define	_LPP_BT_ProvideCapabilities_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_BT_ProvideCapabilities_r13__bt_Modes_r13 {
	LPP_BT_ProvideCapabilities_r13__bt_Modes_r13_standalone	= 0,
	LPP_BT_ProvideCapabilities_r13__bt_Modes_r13_ue_assisted	= 1
} e_LPP_BT_ProvideCapabilities_r13__bt_Modes_r13;
typedef enum LPP_BT_ProvideCapabilities_r13__bt_MeasSupported_r13 {
	LPP_BT_ProvideCapabilities_r13__bt_MeasSupported_r13_rssi_r13	= 0
} e_LPP_BT_ProvideCapabilities_r13__bt_MeasSupported_r13;
typedef enum LPP_BT_ProvideCapabilities_r13__ext1__idleStateForMeasurements_r14 {
	LPP_BT_ProvideCapabilities_r13__ext1__idleStateForMeasurements_r14_required	= 0
} e_LPP_BT_ProvideCapabilities_r13__ext1__idleStateForMeasurements_r14;

/* Forward declarations */
struct LPP_PositioningModes;

/* LPP_BT-ProvideCapabilities-r13 */
typedef struct LPP_BT_ProvideCapabilities_r13 {
	BIT_STRING_t	 bt_Modes_r13;
	BIT_STRING_t	 bt_MeasSupported_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LPP_BT_ProvideCapabilities_r13__ext1 {
		long	*idleStateForMeasurements_r14;	/* OPTIONAL */
		struct LPP_PositioningModes	*periodicalReportingSupported_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_BT_ProvideCapabilities_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_idleStateForMeasurements_r14_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_BT_ProvideCapabilities_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_BT_ProvideCapabilities_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_BT_ProvideCapabilities_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_BT_ProvideCapabilities_r13_H_ */
#include <asn_internal.h>
