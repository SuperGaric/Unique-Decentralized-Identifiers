/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_BandClassInfoCDMA2000_H_
#define	_LTE_BandClassInfoCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_BandclassCDMA2000.h"
#include "LTE_CellReselectionPriority.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_BandClassInfoCDMA2000 */
typedef struct LTE_BandClassInfoCDMA2000 {
	LTE_BandclassCDMA2000_t	 bandClass;
	LTE_CellReselectionPriority_t	*cellReselectionPriority;	/* OPTIONAL */
	long	 threshX_High;
	long	 threshX_Low;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BandClassInfoCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BandClassInfoCDMA2000;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_BandClassInfoCDMA2000_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_BandClassInfoCDMA2000_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_BandClassInfoCDMA2000_H_ */
#include <asn_internal.h>
