/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "O-RAN.WG3.E2SM-v02.01.asn1"
 * 	`asn1c -pdu=auto -fcompound-names -fno-include-deps -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_E_UTRA_TAC_H_
#define	_E_UTRA_TAC_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E-UTRA-TAC */
typedef OCTET_STRING_t	 E_UTRA_TAC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_UTRA_TAC;
asn_struct_free_f E_UTRA_TAC_free;
asn_struct_print_f E_UTRA_TAC_print;
asn_constr_check_f E_UTRA_TAC_constraint;
ber_type_decoder_f E_UTRA_TAC_decode_ber;
der_type_encoder_f E_UTRA_TAC_encode_der;
xer_type_decoder_f E_UTRA_TAC_decode_xer;
xer_type_encoder_f E_UTRA_TAC_encode_xer;
oer_type_decoder_f E_UTRA_TAC_decode_oer;
oer_type_encoder_f E_UTRA_TAC_encode_oer;
per_type_decoder_f E_UTRA_TAC_decode_uper;
per_type_encoder_f E_UTRA_TAC_encode_uper;
per_type_decoder_f E_UTRA_TAC_decode_aper;
per_type_encoder_f E_UTRA_TAC_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _E_UTRA_TAC_H_ */
#include <asn_internal.h>
