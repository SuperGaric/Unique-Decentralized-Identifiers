/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_WLAN-backhaulRate-r12.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_LTE_WLAN_backhaulRate_r12_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_WLAN_backhaulRate_r12_value2enum_1[] = {
	{ 0,	2,	"r0" },
	{ 1,	2,	"r4" },
	{ 2,	2,	"r8" },
	{ 3,	3,	"r16" },
	{ 4,	3,	"r32" },
	{ 5,	3,	"r64" },
	{ 6,	4,	"r128" },
	{ 7,	4,	"r256" },
	{ 8,	4,	"r512" },
	{ 9,	5,	"r1024" },
	{ 10,	5,	"r2048" },
	{ 11,	5,	"r4096" },
	{ 12,	5,	"r8192" },
	{ 13,	6,	"r16384" },
	{ 14,	6,	"r32768" },
	{ 15,	6,	"r65536" },
	{ 16,	7,	"r131072" },
	{ 17,	7,	"r262144" },
	{ 18,	7,	"r524288" },
	{ 19,	8,	"r1048576" },
	{ 20,	8,	"r2097152" },
	{ 21,	8,	"r4194304" },
	{ 22,	8,	"r8388608" },
	{ 23,	9,	"r16777216" },
	{ 24,	9,	"r33554432" },
	{ 25,	9,	"r67108864" },
	{ 26,	10,	"r134217728" },
	{ 27,	10,	"r268435456" },
	{ 28,	10,	"r536870912" },
	{ 29,	11,	"r1073741824" },
	{ 30,	11,	"r2147483648" },
	{ 31,	11,	"r4294967296" }
};
static const unsigned int asn_MAP_LTE_WLAN_backhaulRate_r12_enum2value_1[] = {
	0,	/* r0(0) */
	9,	/* r1024(9) */
	19,	/* r1048576(19) */
	29,	/* r1073741824(29) */
	6,	/* r128(6) */
	16,	/* r131072(16) */
	26,	/* r134217728(26) */
	3,	/* r16(3) */
	13,	/* r16384(13) */
	23,	/* r16777216(23) */
	10,	/* r2048(10) */
	20,	/* r2097152(20) */
	30,	/* r2147483648(30) */
	7,	/* r256(7) */
	17,	/* r262144(17) */
	27,	/* r268435456(27) */
	4,	/* r32(4) */
	14,	/* r32768(14) */
	24,	/* r33554432(24) */
	1,	/* r4(1) */
	11,	/* r4096(11) */
	21,	/* r4194304(21) */
	31,	/* r4294967296(31) */
	8,	/* r512(8) */
	18,	/* r524288(18) */
	28,	/* r536870912(28) */
	5,	/* r64(5) */
	15,	/* r65536(15) */
	25,	/* r67108864(25) */
	2,	/* r8(2) */
	12,	/* r8192(12) */
	22	/* r8388608(22) */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_WLAN_backhaulRate_r12_specs_1 = {
	asn_MAP_LTE_WLAN_backhaulRate_r12_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_WLAN_backhaulRate_r12_enum2value_1,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_WLAN_backhaulRate_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_WLAN_backhaulRate_r12 = {
	"WLAN-backhaulRate-r12",
	"WLAN-backhaulRate-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_WLAN_backhaulRate_r12_tags_1,
	sizeof(asn_DEF_LTE_WLAN_backhaulRate_r12_tags_1)
		/sizeof(asn_DEF_LTE_WLAN_backhaulRate_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_WLAN_backhaulRate_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_WLAN_backhaulRate_r12_tags_1)
		/sizeof(asn_DEF_LTE_WLAN_backhaulRate_r12_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_WLAN_backhaulRate_r12_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_WLAN_backhaulRate_r12_specs_1	/* Additional specs */
};

