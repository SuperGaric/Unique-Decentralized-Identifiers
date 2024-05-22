/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_ResourceTypeSemi_persistentPos_H_
#define	_F1AP_ResourceTypeSemi_persistentPos_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_ResourceTypeSemi_persistentPos__periodicity {
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot1	= 0,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot2	= 1,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot4	= 2,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot5	= 3,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot8	= 4,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot10	= 5,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot16	= 6,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot20	= 7,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot32	= 8,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot40	= 9,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot64	= 10,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot80	= 11,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot160	= 12,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot320	= 13,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot640	= 14,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot1280	= 15,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot2560	= 16,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot5120	= 17,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot10240	= 18,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot20480	= 19,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot40960	= 20,
	F1AP_ResourceTypeSemi_persistentPos__periodicity_slot81920	= 21
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_ResourceTypeSemi_persistentPos__periodicity;

/* Forward declarations */
struct F1AP_ProtocolExtensionContainer;

/* F1AP_ResourceTypeSemi-persistentPos */
typedef struct F1AP_ResourceTypeSemi_persistentPos {
	long	 periodicity;
	long	 offset;
	struct F1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_ResourceTypeSemi_persistentPos_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_F1AP_periodicity_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_ResourceTypeSemi_persistentPos;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_ResourceTypeSemi_persistentPos_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_ResourceTypeSemi_persistentPos_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_ResourceTypeSemi_persistentPos_H_ */
#include <asn_internal.h>