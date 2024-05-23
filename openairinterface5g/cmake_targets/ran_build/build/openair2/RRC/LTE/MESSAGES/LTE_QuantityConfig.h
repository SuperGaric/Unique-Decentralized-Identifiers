/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_QuantityConfig_H_
#define	_LTE_QuantityConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_QuantityConfigEUTRA;
struct LTE_QuantityConfigUTRA;
struct LTE_QuantityConfigGERAN;
struct LTE_QuantityConfigCDMA2000;
struct LTE_QuantityConfigUTRA_v1020;
struct LTE_QuantityConfigEUTRA_v1250;
struct LTE_QuantityConfigEUTRA_v1310;
struct LTE_QuantityConfigWLAN_r13;
struct LTE_QuantityConfigNRList_r15;

/* LTE_QuantityConfig */
typedef struct LTE_QuantityConfig {
	struct LTE_QuantityConfigEUTRA	*quantityConfigEUTRA;	/* OPTIONAL */
	struct LTE_QuantityConfigUTRA	*quantityConfigUTRA;	/* OPTIONAL */
	struct LTE_QuantityConfigGERAN	*quantityConfigGERAN;	/* OPTIONAL */
	struct LTE_QuantityConfigCDMA2000	*quantityConfigCDMA2000;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_QuantityConfig__ext1 {
		struct LTE_QuantityConfigUTRA_v1020	*quantityConfigUTRA_v1020;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_QuantityConfig__ext2 {
		struct LTE_QuantityConfigEUTRA_v1250	*quantityConfigEUTRA_v1250;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_QuantityConfig__ext3 {
		struct LTE_QuantityConfigEUTRA_v1310	*quantityConfigEUTRA_v1310;	/* OPTIONAL */
		struct LTE_QuantityConfigWLAN_r13	*quantityConfigWLAN_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_QuantityConfig__ext4 {
		struct LTE_QuantityConfigNRList_r15	*quantityConfigNRList_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_QuantityConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_QuantityConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_QuantityConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_QuantityConfig_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_QuantityConfigEUTRA.h"
#include "LTE_QuantityConfigUTRA.h"
#include "LTE_QuantityConfigGERAN.h"
#include "LTE_QuantityConfigCDMA2000.h"
#include "LTE_QuantityConfigUTRA-v1020.h"
#include "LTE_QuantityConfigEUTRA-v1250.h"
#include "LTE_QuantityConfigEUTRA-v1310.h"
#include "LTE_QuantityConfigWLAN-r13.h"
#include "LTE_QuantityConfigNRList-r15.h"

#endif	/* _LTE_QuantityConfig_H_ */
#include <asn_internal.h>
