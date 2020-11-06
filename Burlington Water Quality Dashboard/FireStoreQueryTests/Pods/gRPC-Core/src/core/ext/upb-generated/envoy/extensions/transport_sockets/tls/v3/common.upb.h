/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/transport_sockets/tls/v3/common.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_EXTENSIONS_TRANSPORT_SOCKETS_TLS_V3_COMMON_PROTO_UPB_H_
#define ENVOY_EXTENSIONS_TRANSPORT_SOCKETS_TLS_V3_COMMON_PROTO_UPB_H_

#if COCOAPODS==1
  #include  "third_party/upb/upb/msg.h"
#else
  #include  "upb/msg.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/decode.h"
#else
  #include  "upb/decode.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/encode.h"
#else
  #include  "upb/encode.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_extensions_transport_sockets_tls_v3_TlsParameters;
struct envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider;
struct envoy_extensions_transport_sockets_tls_v3_TlsCertificate;
struct envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys;
struct envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext;
typedef struct envoy_extensions_transport_sockets_tls_v3_TlsParameters envoy_extensions_transport_sockets_tls_v3_TlsParameters;
typedef struct envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider;
typedef struct envoy_extensions_transport_sockets_tls_v3_TlsCertificate envoy_extensions_transport_sockets_tls_v3_TlsCertificate;
typedef struct envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys;
typedef struct envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext;
extern const upb_msglayout envoy_extensions_transport_sockets_tls_v3_TlsParameters_msginit;
extern const upb_msglayout envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_msginit;
extern const upb_msglayout envoy_extensions_transport_sockets_tls_v3_TlsCertificate_msginit;
extern const upb_msglayout envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_msginit;
extern const upb_msglayout envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_msginit;
struct envoy_config_core_v3_DataSource;
struct envoy_type_matcher_v3_StringMatcher;
struct google_protobuf_Any;
struct google_protobuf_BoolValue;
extern const upb_msglayout envoy_config_core_v3_DataSource_msginit;
extern const upb_msglayout envoy_type_matcher_v3_StringMatcher_msginit;
extern const upb_msglayout google_protobuf_Any_msginit;
extern const upb_msglayout google_protobuf_BoolValue_msginit;

typedef enum {
  envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_VERIFY_TRUST_CHAIN = 0,
  envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_ACCEPT_UNTRUSTED = 1
} envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_TrustChainVerification;

typedef enum {
  envoy_extensions_transport_sockets_tls_v3_TlsParameters_TLS_AUTO = 0,
  envoy_extensions_transport_sockets_tls_v3_TlsParameters_TLSv1_0 = 1,
  envoy_extensions_transport_sockets_tls_v3_TlsParameters_TLSv1_1 = 2,
  envoy_extensions_transport_sockets_tls_v3_TlsParameters_TLSv1_2 = 3,
  envoy_extensions_transport_sockets_tls_v3_TlsParameters_TLSv1_3 = 4
} envoy_extensions_transport_sockets_tls_v3_TlsParameters_TlsProtocol;


/* envoy.extensions.transport_sockets.tls.v3.TlsParameters */

UPB_INLINE envoy_extensions_transport_sockets_tls_v3_TlsParameters *envoy_extensions_transport_sockets_tls_v3_TlsParameters_new(upb_arena *arena) {
  return (envoy_extensions_transport_sockets_tls_v3_TlsParameters *)_upb_msg_new(&envoy_extensions_transport_sockets_tls_v3_TlsParameters_msginit, arena);
}
UPB_INLINE envoy_extensions_transport_sockets_tls_v3_TlsParameters *envoy_extensions_transport_sockets_tls_v3_TlsParameters_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_extensions_transport_sockets_tls_v3_TlsParameters *ret = envoy_extensions_transport_sockets_tls_v3_TlsParameters_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_extensions_transport_sockets_tls_v3_TlsParameters_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_extensions_transport_sockets_tls_v3_TlsParameters_serialize(const envoy_extensions_transport_sockets_tls_v3_TlsParameters *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_extensions_transport_sockets_tls_v3_TlsParameters_msginit, arena, len);
}

UPB_INLINE int32_t envoy_extensions_transport_sockets_tls_v3_TlsParameters_tls_minimum_protocol_version(const envoy_extensions_transport_sockets_tls_v3_TlsParameters *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), int32_t); }
UPB_INLINE int32_t envoy_extensions_transport_sockets_tls_v3_TlsParameters_tls_maximum_protocol_version(const envoy_extensions_transport_sockets_tls_v3_TlsParameters *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 8), int32_t); }
UPB_INLINE upb_strview const* envoy_extensions_transport_sockets_tls_v3_TlsParameters_cipher_suites(const envoy_extensions_transport_sockets_tls_v3_TlsParameters *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(16, 16), len); }
UPB_INLINE upb_strview const* envoy_extensions_transport_sockets_tls_v3_TlsParameters_ecdh_curves(const envoy_extensions_transport_sockets_tls_v3_TlsParameters *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(20, 24), len); }

UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_TlsParameters_set_tls_minimum_protocol_version(envoy_extensions_transport_sockets_tls_v3_TlsParameters *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), int32_t) = value;
}
UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_TlsParameters_set_tls_maximum_protocol_version(envoy_extensions_transport_sockets_tls_v3_TlsParameters *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 8), int32_t) = value;
}
UPB_INLINE upb_strview* envoy_extensions_transport_sockets_tls_v3_TlsParameters_mutable_cipher_suites(envoy_extensions_transport_sockets_tls_v3_TlsParameters *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(16, 16), len);
}
UPB_INLINE upb_strview* envoy_extensions_transport_sockets_tls_v3_TlsParameters_resize_cipher_suites(envoy_extensions_transport_sockets_tls_v3_TlsParameters *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor(msg, UPB_SIZE(16, 16), len, UPB_TYPE_STRING, arena);
}
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_TlsParameters_add_cipher_suites(envoy_extensions_transport_sockets_tls_v3_TlsParameters *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor(msg, UPB_SIZE(16, 16), UPB_SIZE(8, 16), UPB_TYPE_STRING, &val,
      arena);
}
UPB_INLINE upb_strview* envoy_extensions_transport_sockets_tls_v3_TlsParameters_mutable_ecdh_curves(envoy_extensions_transport_sockets_tls_v3_TlsParameters *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(20, 24), len);
}
UPB_INLINE upb_strview* envoy_extensions_transport_sockets_tls_v3_TlsParameters_resize_ecdh_curves(envoy_extensions_transport_sockets_tls_v3_TlsParameters *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor(msg, UPB_SIZE(20, 24), len, UPB_TYPE_STRING, arena);
}
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_TlsParameters_add_ecdh_curves(envoy_extensions_transport_sockets_tls_v3_TlsParameters *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor(msg, UPB_SIZE(20, 24), UPB_SIZE(8, 16), UPB_TYPE_STRING, &val,
      arena);
}

/* envoy.extensions.transport_sockets.tls.v3.PrivateKeyProvider */

UPB_INLINE envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider *envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_new(upb_arena *arena) {
  return (envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider *)_upb_msg_new(&envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_msginit, arena);
}
UPB_INLINE envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider *envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider *ret = envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_serialize(const envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_msginit, arena, len);
}

typedef enum {
  envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_config_type_typed_config = 3,
  envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_config_type_NOT_SET = 0
} envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_config_type_oneofcases;
UPB_INLINE envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_config_type_oneofcases envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_config_type_case(const envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider* msg) { return (envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_config_type_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(12, 24), int32_t); }

UPB_INLINE upb_strview envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_provider_name(const envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_has_typed_config(const envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 3; }
UPB_INLINE const struct google_protobuf_Any* envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_typed_config(const envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider *msg) { return UPB_READ_ONEOF(msg, const struct google_protobuf_Any*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 3, NULL); }

UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_set_provider_name(envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}
UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_set_typed_config(envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider *msg, struct google_protobuf_Any* value) {
  UPB_WRITE_ONEOF(msg, struct google_protobuf_Any*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 3);
}
UPB_INLINE struct google_protobuf_Any* envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_mutable_typed_config(envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider *msg, upb_arena *arena) {
  struct google_protobuf_Any* sub = (struct google_protobuf_Any*)envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_typed_config(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Any*)_upb_msg_new(&google_protobuf_Any_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_set_typed_config(msg, sub);
  }
  return sub;
}

/* envoy.extensions.transport_sockets.tls.v3.TlsCertificate */

UPB_INLINE envoy_extensions_transport_sockets_tls_v3_TlsCertificate *envoy_extensions_transport_sockets_tls_v3_TlsCertificate_new(upb_arena *arena) {
  return (envoy_extensions_transport_sockets_tls_v3_TlsCertificate *)_upb_msg_new(&envoy_extensions_transport_sockets_tls_v3_TlsCertificate_msginit, arena);
}
UPB_INLINE envoy_extensions_transport_sockets_tls_v3_TlsCertificate *envoy_extensions_transport_sockets_tls_v3_TlsCertificate_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_extensions_transport_sockets_tls_v3_TlsCertificate *ret = envoy_extensions_transport_sockets_tls_v3_TlsCertificate_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_extensions_transport_sockets_tls_v3_TlsCertificate_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_extensions_transport_sockets_tls_v3_TlsCertificate_serialize(const envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_extensions_transport_sockets_tls_v3_TlsCertificate_msginit, arena, len);
}

UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_TlsCertificate_has_certificate_chain(const envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const struct envoy_config_core_v3_DataSource* envoy_extensions_transport_sockets_tls_v3_TlsCertificate_certificate_chain(const envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), const struct envoy_config_core_v3_DataSource*); }
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_TlsCertificate_has_private_key(const envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(4, 8)); }
UPB_INLINE const struct envoy_config_core_v3_DataSource* envoy_extensions_transport_sockets_tls_v3_TlsCertificate_private_key(const envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const struct envoy_config_core_v3_DataSource*); }
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_TlsCertificate_has_password(const envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(8, 16)); }
UPB_INLINE const struct envoy_config_core_v3_DataSource* envoy_extensions_transport_sockets_tls_v3_TlsCertificate_password(const envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), const struct envoy_config_core_v3_DataSource*); }
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_TlsCertificate_has_ocsp_staple(const envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(12, 24)); }
UPB_INLINE const struct envoy_config_core_v3_DataSource* envoy_extensions_transport_sockets_tls_v3_TlsCertificate_ocsp_staple(const envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(12, 24), const struct envoy_config_core_v3_DataSource*); }
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_TlsCertificate_has_signed_certificate_timestamp(const envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(20, 40)); }
UPB_INLINE const struct envoy_config_core_v3_DataSource* const* envoy_extensions_transport_sockets_tls_v3_TlsCertificate_signed_certificate_timestamp(const envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg, size_t *len) { return (const struct envoy_config_core_v3_DataSource* const*)_upb_array_accessor(msg, UPB_SIZE(20, 40), len); }
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_TlsCertificate_has_private_key_provider(const envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(16, 32)); }
UPB_INLINE const envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider* envoy_extensions_transport_sockets_tls_v3_TlsCertificate_private_key_provider(const envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(16, 32), const envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider*); }

UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_TlsCertificate_set_certificate_chain(envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg, struct envoy_config_core_v3_DataSource* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), struct envoy_config_core_v3_DataSource*) = value;
}
UPB_INLINE struct envoy_config_core_v3_DataSource* envoy_extensions_transport_sockets_tls_v3_TlsCertificate_mutable_certificate_chain(envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg, upb_arena *arena) {
  struct envoy_config_core_v3_DataSource* sub = (struct envoy_config_core_v3_DataSource*)envoy_extensions_transport_sockets_tls_v3_TlsCertificate_certificate_chain(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_DataSource*)_upb_msg_new(&envoy_config_core_v3_DataSource_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_transport_sockets_tls_v3_TlsCertificate_set_certificate_chain(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_TlsCertificate_set_private_key(envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg, struct envoy_config_core_v3_DataSource* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), struct envoy_config_core_v3_DataSource*) = value;
}
UPB_INLINE struct envoy_config_core_v3_DataSource* envoy_extensions_transport_sockets_tls_v3_TlsCertificate_mutable_private_key(envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg, upb_arena *arena) {
  struct envoy_config_core_v3_DataSource* sub = (struct envoy_config_core_v3_DataSource*)envoy_extensions_transport_sockets_tls_v3_TlsCertificate_private_key(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_DataSource*)_upb_msg_new(&envoy_config_core_v3_DataSource_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_transport_sockets_tls_v3_TlsCertificate_set_private_key(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_TlsCertificate_set_password(envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg, struct envoy_config_core_v3_DataSource* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), struct envoy_config_core_v3_DataSource*) = value;
}
UPB_INLINE struct envoy_config_core_v3_DataSource* envoy_extensions_transport_sockets_tls_v3_TlsCertificate_mutable_password(envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg, upb_arena *arena) {
  struct envoy_config_core_v3_DataSource* sub = (struct envoy_config_core_v3_DataSource*)envoy_extensions_transport_sockets_tls_v3_TlsCertificate_password(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_DataSource*)_upb_msg_new(&envoy_config_core_v3_DataSource_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_transport_sockets_tls_v3_TlsCertificate_set_password(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_TlsCertificate_set_ocsp_staple(envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg, struct envoy_config_core_v3_DataSource* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24), struct envoy_config_core_v3_DataSource*) = value;
}
UPB_INLINE struct envoy_config_core_v3_DataSource* envoy_extensions_transport_sockets_tls_v3_TlsCertificate_mutable_ocsp_staple(envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg, upb_arena *arena) {
  struct envoy_config_core_v3_DataSource* sub = (struct envoy_config_core_v3_DataSource*)envoy_extensions_transport_sockets_tls_v3_TlsCertificate_ocsp_staple(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_DataSource*)_upb_msg_new(&envoy_config_core_v3_DataSource_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_transport_sockets_tls_v3_TlsCertificate_set_ocsp_staple(msg, sub);
  }
  return sub;
}
UPB_INLINE struct envoy_config_core_v3_DataSource** envoy_extensions_transport_sockets_tls_v3_TlsCertificate_mutable_signed_certificate_timestamp(envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg, size_t *len) {
  return (struct envoy_config_core_v3_DataSource**)_upb_array_mutable_accessor(msg, UPB_SIZE(20, 40), len);
}
UPB_INLINE struct envoy_config_core_v3_DataSource** envoy_extensions_transport_sockets_tls_v3_TlsCertificate_resize_signed_certificate_timestamp(envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg, size_t len, upb_arena *arena) {
  return (struct envoy_config_core_v3_DataSource**)_upb_array_resize_accessor(msg, UPB_SIZE(20, 40), len, UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_config_core_v3_DataSource* envoy_extensions_transport_sockets_tls_v3_TlsCertificate_add_signed_certificate_timestamp(envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg, upb_arena *arena) {
  struct envoy_config_core_v3_DataSource* sub = (struct envoy_config_core_v3_DataSource*)_upb_msg_new(&envoy_config_core_v3_DataSource_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(20, 40), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_TlsCertificate_set_private_key_provider(envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg, envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 32), envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider*) = value;
}
UPB_INLINE struct envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider* envoy_extensions_transport_sockets_tls_v3_TlsCertificate_mutable_private_key_provider(envoy_extensions_transport_sockets_tls_v3_TlsCertificate *msg, upb_arena *arena) {
  struct envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider* sub = (struct envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider*)envoy_extensions_transport_sockets_tls_v3_TlsCertificate_private_key_provider(msg);
  if (sub == NULL) {
    sub = (struct envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider*)_upb_msg_new(&envoy_extensions_transport_sockets_tls_v3_PrivateKeyProvider_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_transport_sockets_tls_v3_TlsCertificate_set_private_key_provider(msg, sub);
  }
  return sub;
}

/* envoy.extensions.transport_sockets.tls.v3.TlsSessionTicketKeys */

UPB_INLINE envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys *envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_new(upb_arena *arena) {
  return (envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys *)_upb_msg_new(&envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_msginit, arena);
}
UPB_INLINE envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys *envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys *ret = envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_serialize(const envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_msginit, arena, len);
}

UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_has_keys(const envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const struct envoy_config_core_v3_DataSource* const* envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_keys(const envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys *msg, size_t *len) { return (const struct envoy_config_core_v3_DataSource* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len); }

UPB_INLINE struct envoy_config_core_v3_DataSource** envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_mutable_keys(envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys *msg, size_t *len) {
  return (struct envoy_config_core_v3_DataSource**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE struct envoy_config_core_v3_DataSource** envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_resize_keys(envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys *msg, size_t len, upb_arena *arena) {
  return (struct envoy_config_core_v3_DataSource**)_upb_array_resize_accessor(msg, UPB_SIZE(0, 0), len, UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_config_core_v3_DataSource* envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_add_keys(envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys *msg, upb_arena *arena) {
  struct envoy_config_core_v3_DataSource* sub = (struct envoy_config_core_v3_DataSource*)_upb_msg_new(&envoy_config_core_v3_DataSource_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(0, 0), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}

/* envoy.extensions.transport_sockets.tls.v3.CertificateValidationContext */

UPB_INLINE envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_new(upb_arena *arena) {
  return (envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *)_upb_msg_new(&envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_msginit, arena);
}
UPB_INLINE envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *ret = envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_serialize(const envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_msginit, arena, len);
}

UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_has_trusted_ca(const envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(12, 16)); }
UPB_INLINE const struct envoy_config_core_v3_DataSource* envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_trusted_ca(const envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(12, 16), const struct envoy_config_core_v3_DataSource*); }
UPB_INLINE upb_strview const* envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_verify_certificate_hash(const envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(24, 40), len); }
UPB_INLINE upb_strview const* envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_verify_certificate_spki(const envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(28, 48), len); }
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_has_require_signed_certificate_timestamp(const envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(16, 24)); }
UPB_INLINE const struct google_protobuf_BoolValue* envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_require_signed_certificate_timestamp(const envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(16, 24), const struct google_protobuf_BoolValue*); }
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_has_crl(const envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(20, 32)); }
UPB_INLINE const struct envoy_config_core_v3_DataSource* envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_crl(const envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(20, 32), const struct envoy_config_core_v3_DataSource*); }
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_allow_expired_certificate(const envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 8), bool); }
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_has_match_subject_alt_names(const envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(32, 56)); }
UPB_INLINE const struct envoy_type_matcher_v3_StringMatcher* const* envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_match_subject_alt_names(const envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, size_t *len) { return (const struct envoy_type_matcher_v3_StringMatcher* const*)_upb_array_accessor(msg, UPB_SIZE(32, 56), len); }
UPB_INLINE int32_t envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_trust_chain_verification(const envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), int32_t); }

UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_set_trusted_ca(envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, struct envoy_config_core_v3_DataSource* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 16), struct envoy_config_core_v3_DataSource*) = value;
}
UPB_INLINE struct envoy_config_core_v3_DataSource* envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_mutable_trusted_ca(envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, upb_arena *arena) {
  struct envoy_config_core_v3_DataSource* sub = (struct envoy_config_core_v3_DataSource*)envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_trusted_ca(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_DataSource*)_upb_msg_new(&envoy_config_core_v3_DataSource_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_set_trusted_ca(msg, sub);
  }
  return sub;
}
UPB_INLINE upb_strview* envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_mutable_verify_certificate_hash(envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(24, 40), len);
}
UPB_INLINE upb_strview* envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_resize_verify_certificate_hash(envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor(msg, UPB_SIZE(24, 40), len, UPB_TYPE_STRING, arena);
}
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_add_verify_certificate_hash(envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor(msg, UPB_SIZE(24, 40), UPB_SIZE(8, 16), UPB_TYPE_STRING, &val,
      arena);
}
UPB_INLINE upb_strview* envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_mutable_verify_certificate_spki(envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(28, 48), len);
}
UPB_INLINE upb_strview* envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_resize_verify_certificate_spki(envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor(msg, UPB_SIZE(28, 48), len, UPB_TYPE_STRING, arena);
}
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_add_verify_certificate_spki(envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor(msg, UPB_SIZE(28, 48), UPB_SIZE(8, 16), UPB_TYPE_STRING, &val,
      arena);
}
UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_set_require_signed_certificate_timestamp(envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, struct google_protobuf_BoolValue* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 24), struct google_protobuf_BoolValue*) = value;
}
UPB_INLINE struct google_protobuf_BoolValue* envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_mutable_require_signed_certificate_timestamp(envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, upb_arena *arena) {
  struct google_protobuf_BoolValue* sub = (struct google_protobuf_BoolValue*)envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_require_signed_certificate_timestamp(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_BoolValue*)_upb_msg_new(&google_protobuf_BoolValue_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_set_require_signed_certificate_timestamp(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_set_crl(envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, struct envoy_config_core_v3_DataSource* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(20, 32), struct envoy_config_core_v3_DataSource*) = value;
}
UPB_INLINE struct envoy_config_core_v3_DataSource* envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_mutable_crl(envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, upb_arena *arena) {
  struct envoy_config_core_v3_DataSource* sub = (struct envoy_config_core_v3_DataSource*)envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_crl(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_DataSource*)_upb_msg_new(&envoy_config_core_v3_DataSource_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_set_crl(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_set_allow_expired_certificate(envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 8), bool) = value;
}
UPB_INLINE struct envoy_type_matcher_v3_StringMatcher** envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_mutable_match_subject_alt_names(envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, size_t *len) {
  return (struct envoy_type_matcher_v3_StringMatcher**)_upb_array_mutable_accessor(msg, UPB_SIZE(32, 56), len);
}
UPB_INLINE struct envoy_type_matcher_v3_StringMatcher** envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_resize_match_subject_alt_names(envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, size_t len, upb_arena *arena) {
  return (struct envoy_type_matcher_v3_StringMatcher**)_upb_array_resize_accessor(msg, UPB_SIZE(32, 56), len, UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_type_matcher_v3_StringMatcher* envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_add_match_subject_alt_names(envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, upb_arena *arena) {
  struct envoy_type_matcher_v3_StringMatcher* sub = (struct envoy_type_matcher_v3_StringMatcher*)_upb_msg_new(&envoy_type_matcher_v3_StringMatcher_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(32, 56), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_set_trust_chain_verification(envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), int32_t) = value;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* ENVOY_EXTENSIONS_TRANSPORT_SOCKETS_TLS_V3_COMMON_PROTO_UPB_H_ */
