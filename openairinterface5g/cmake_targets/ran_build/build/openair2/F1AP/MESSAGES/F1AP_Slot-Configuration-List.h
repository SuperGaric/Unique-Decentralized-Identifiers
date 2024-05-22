/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_Slot_Configuration_List_H_
#define	_F1AP_Slot_Configuration_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct F1AP_Slot_Configuration_Item;

/* F1AP_Slot-Configuration-List */
typedef struct F1AP_Slot_Configuration_List {
	A_SEQUENCE_OF(struct F1AP_Slot_Configuration_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_Slot_Configuration_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_Slot_Configuration_List;
extern asn_SET_OF_specifics_t asn_SPC_F1AP_Slot_Configuration_List_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_Slot_Configuration_List_1[1];
extern asn_per_constraints_t asn_PER_type_F1AP_Slot_Configuration_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_Slot_Configuration_List_H_ */
#include <asn_internal.h>
