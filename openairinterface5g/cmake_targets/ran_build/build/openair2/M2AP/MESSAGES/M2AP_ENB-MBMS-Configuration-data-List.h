/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-PDU-Contents"
 * 	found in "/home/dmt/openairinterface5g/openair2/M2AP/MESSAGES/ASN1/m2ap-14.0.0.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/M2AP/MESSAGES`
 */

#ifndef	_M2AP_ENB_MBMS_Configuration_data_List_H_
#define	_M2AP_ENB_MBMS_Configuration_data_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct M2AP_ProtocolIE_Single_Container;

/* M2AP_ENB-MBMS-Configuration-data-List */
typedef struct M2AP_ENB_MBMS_Configuration_data_List {
	A_SEQUENCE_OF(struct M2AP_ProtocolIE_Single_Container) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M2AP_ENB_MBMS_Configuration_data_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M2AP_ENB_MBMS_Configuration_data_List;
extern asn_SET_OF_specifics_t asn_SPC_M2AP_ENB_MBMS_Configuration_data_List_specs_1;
extern asn_TYPE_member_t asn_MBR_M2AP_ENB_MBMS_Configuration_data_List_1[1];
extern asn_per_constraints_t asn_PER_type_M2AP_ENB_MBMS_Configuration_data_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _M2AP_ENB_MBMS_Configuration_data_List_H_ */
#include <asn_internal.h>
