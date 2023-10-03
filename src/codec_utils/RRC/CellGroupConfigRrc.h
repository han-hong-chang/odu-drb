/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_CellGroupConfigRrc_H_
#define	_CellGroupConfigRrc_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellGroupId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "LogicalChannelIdentity.h"
#include "SCellIndexRrc.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellGroupConfigRrc__ext1__reportUplinkTxDirectCurrent_v1530 {
	CellGroupConfigRrc__ext1__reportUplinkTxDirectCurrent_v1530_true	= 0
} e_CellGroupConfigRrc__ext1__reportUplinkTxDirectCurrent_v1530;

/* Forward declarations */
struct MAC_CellGroupConfig;
struct PhysicalCellGroupConfig;
struct SpCellConfig;
struct RLC_BearerConfig;
struct SCellConfig;

/* CellGroupConfigRrc */
typedef struct CellGroupConfigRrc {
	CellGroupId_t	 cellGroupId;
	struct CellGroupConfigRrc__rlc_BearerToAddModList {
		A_SEQUENCE_OF(struct RLC_BearerConfig) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rlc_BearerToAddModList;
	struct CellGroupConfigRrc__rlc_BearerToReleaseList {
		A_SEQUENCE_OF(LogicalChannelIdentity_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rlc_BearerToReleaseList;
	struct MAC_CellGroupConfig	*mac_CellGroupConfig;	/* OPTIONAL */
	struct PhysicalCellGroupConfig	*physicalCellGroupConfig;	/* OPTIONAL */
	struct SpCellConfig	*spCellConfig;	/* OPTIONAL */
	struct CellGroupConfigRrc__sCellToAddModList {
		A_SEQUENCE_OF(struct SCellConfig) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sCellToAddModList;
	struct CellGroupConfigRrc__sCellToReleaseList {
		A_SEQUENCE_OF(SCellIndexRrc_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sCellToReleaseList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct CellGroupConfigRrc__ext1 {
		long	*reportUplinkTxDirectCurrent_v1530;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellGroupConfigRrc_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reportUplinkTxDirectCurrent_v1530_16;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CellGroupConfigRrc;

#ifdef __cplusplus
}
#endif

#endif	/* _CellGroupConfigRrc_H_ */
#include <asn_internal.h>
