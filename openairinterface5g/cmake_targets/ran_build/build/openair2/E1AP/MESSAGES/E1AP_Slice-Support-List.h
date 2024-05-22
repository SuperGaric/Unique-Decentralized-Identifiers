/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#ifndef	_E1AP_Slice_Support_List_H_
#define	_E1AP_Slice_Support_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E1AP_Slice_Support_Item;

/* E1AP_Slice-Support-List */
typedef struct E1AP_Slice_Support_List {
	A_SEQUENCE_OF(struct E1AP_Slice_Support_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E1AP_Slice_Support_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E1AP_Slice_Support_List;
extern asn_SET_OF_specifics_t asn_SPC_E1AP_Slice_Support_List_specs_1;
extern asn_TYPE_member_t asn_MBR_E1AP_Slice_Support_List_1[1];
extern asn_per_constraints_t asn_PER_type_E1AP_Slice_Support_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _E1AP_Slice_Support_List_H_ */
#include <asn_internal.h>
