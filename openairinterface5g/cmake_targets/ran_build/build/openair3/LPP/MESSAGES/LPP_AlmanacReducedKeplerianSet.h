/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_AlmanacReducedKeplerianSet_H_
#define	_LPP_AlmanacReducedKeplerianSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LPP_SV-ID.h"
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LPP_AlmanacReducedKeplerianSet */
typedef struct LPP_AlmanacReducedKeplerianSet {
	LPP_SV_ID_t	 svID;
	long	 redAlmDeltaA;
	long	 redAlmOmega0;
	long	 redAlmPhi0;
	BOOLEAN_t	 redAlmL1Health;
	BOOLEAN_t	 redAlmL2Health;
	BOOLEAN_t	 redAlmL5Health;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_AlmanacReducedKeplerianSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_AlmanacReducedKeplerianSet;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_AlmanacReducedKeplerianSet_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_AlmanacReducedKeplerianSet_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_AlmanacReducedKeplerianSet_H_ */
#include <asn_internal.h>
