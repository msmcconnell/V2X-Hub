/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#include "TestMessage03.h"

asn_TYPE_member_t asn_MBR_TestMessage03_1[] = {
	{ ATF_POINTER, 2, offsetof(struct TestMessage03, header),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MobilityHeader,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"header"
		},
	{ ATF_POINTER, 1, offsetof(struct TestMessage03, body),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MobilityOperation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"body"
		},
};
static const int asn_MAP_TestMessage03_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_TestMessage03_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TestMessage03_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* header */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* body */
};
asn_SEQUENCE_specifics_t asn_SPC_TestMessage03_specs_1 = {
	sizeof(struct TestMessage03),
	offsetof(struct TestMessage03, _asn_ctx),
	asn_MAP_TestMessage03_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_TestMessage03_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TestMessage03 = {
	"TestMessage03",
	"TestMessage03",
	&asn_OP_SEQUENCE,
	asn_DEF_TestMessage03_tags_1,
	sizeof(asn_DEF_TestMessage03_tags_1)
		/sizeof(asn_DEF_TestMessage03_tags_1[0]), /* 1 */
	asn_DEF_TestMessage03_tags_1,	/* Same as above */
	sizeof(asn_DEF_TestMessage03_tags_1)
		/sizeof(asn_DEF_TestMessage03_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TestMessage03_1,
	2,	/* Elements count */
	&asn_SPC_TestMessage03_specs_1	/* Additional specs */
};

