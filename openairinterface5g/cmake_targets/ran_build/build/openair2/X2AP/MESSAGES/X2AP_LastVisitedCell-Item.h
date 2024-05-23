/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#ifndef	_X2AP_LastVisitedCell_Item_H_
#define	_X2AP_LastVisitedCell_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_LastVisitedEUTRANCellInformation.h"
#include "X2AP_LastVisitedUTRANCellInformation.h"
#include "X2AP_LastVisitedGERANCellInformation.h"
#include "X2AP_LastVisitedNGRANCellInformation.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_LastVisitedCell_Item_PR {
	X2AP_LastVisitedCell_Item_PR_NOTHING,	/* No components present */
	X2AP_LastVisitedCell_Item_PR_e_UTRAN_Cell,
	X2AP_LastVisitedCell_Item_PR_uTRAN_Cell,
	X2AP_LastVisitedCell_Item_PR_gERAN_Cell,
	/* Extensions may appear below */
	X2AP_LastVisitedCell_Item_PR_nG_RAN_Cell
} X2AP_LastVisitedCell_Item_PR;

/* X2AP_LastVisitedCell-Item */
typedef struct X2AP_LastVisitedCell_Item {
	X2AP_LastVisitedCell_Item_PR present;
	union X2AP_LastVisitedCell_Item_u {
		X2AP_LastVisitedEUTRANCellInformation_t	 e_UTRAN_Cell;
		X2AP_LastVisitedUTRANCellInformation_t	 uTRAN_Cell;
		X2AP_LastVisitedGERANCellInformation_t	 gERAN_Cell;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		X2AP_LastVisitedNGRANCellInformation_t	 nG_RAN_Cell;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_LastVisitedCell_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_LastVisitedCell_Item;
extern asn_CHOICE_specifics_t asn_SPC_X2AP_LastVisitedCell_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_LastVisitedCell_Item_1[4];
extern asn_per_constraints_t asn_PER_type_X2AP_LastVisitedCell_Item_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_LastVisitedCell_Item_H_ */
#include <asn_internal.h>
