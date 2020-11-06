/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     src/proto/grpc/gcp/transport_security_common.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef SRC_PROTO_GRPC_GCP_TRANSPORT_SECURITY_COMMON_PROTO_UPB_H_
#define SRC_PROTO_GRPC_GCP_TRANSPORT_SECURITY_COMMON_PROTO_UPB_H_

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

struct grpc_gcp_RpcProtocolVersions;
struct grpc_gcp_RpcProtocolVersions_Version;
typedef struct grpc_gcp_RpcProtocolVersions grpc_gcp_RpcProtocolVersions;
typedef struct grpc_gcp_RpcProtocolVersions_Version grpc_gcp_RpcProtocolVersions_Version;
extern const upb_msglayout grpc_gcp_RpcProtocolVersions_msginit;
extern const upb_msglayout grpc_gcp_RpcProtocolVersions_Version_msginit;

typedef enum {
  grpc_gcp_SECURITY_NONE = 0,
  grpc_gcp_INTEGRITY_ONLY = 1,
  grpc_gcp_INTEGRITY_AND_PRIVACY = 2
} grpc_gcp_SecurityLevel;


/* grpc.gcp.RpcProtocolVersions */

UPB_INLINE grpc_gcp_RpcProtocolVersions *grpc_gcp_RpcProtocolVersions_new(upb_arena *arena) {
  return (grpc_gcp_RpcProtocolVersions *)_upb_msg_new(&grpc_gcp_RpcProtocolVersions_msginit, arena);
}
UPB_INLINE grpc_gcp_RpcProtocolVersions *grpc_gcp_RpcProtocolVersions_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  grpc_gcp_RpcProtocolVersions *ret = grpc_gcp_RpcProtocolVersions_new(arena);
  return (ret && upb_decode(buf, size, ret, &grpc_gcp_RpcProtocolVersions_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *grpc_gcp_RpcProtocolVersions_serialize(const grpc_gcp_RpcProtocolVersions *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &grpc_gcp_RpcProtocolVersions_msginit, arena, len);
}

UPB_INLINE bool grpc_gcp_RpcProtocolVersions_has_max_rpc_version(const grpc_gcp_RpcProtocolVersions *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const grpc_gcp_RpcProtocolVersions_Version* grpc_gcp_RpcProtocolVersions_max_rpc_version(const grpc_gcp_RpcProtocolVersions *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), const grpc_gcp_RpcProtocolVersions_Version*); }
UPB_INLINE bool grpc_gcp_RpcProtocolVersions_has_min_rpc_version(const grpc_gcp_RpcProtocolVersions *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(4, 8)); }
UPB_INLINE const grpc_gcp_RpcProtocolVersions_Version* grpc_gcp_RpcProtocolVersions_min_rpc_version(const grpc_gcp_RpcProtocolVersions *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const grpc_gcp_RpcProtocolVersions_Version*); }

UPB_INLINE void grpc_gcp_RpcProtocolVersions_set_max_rpc_version(grpc_gcp_RpcProtocolVersions *msg, grpc_gcp_RpcProtocolVersions_Version* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), grpc_gcp_RpcProtocolVersions_Version*) = value;
}
UPB_INLINE struct grpc_gcp_RpcProtocolVersions_Version* grpc_gcp_RpcProtocolVersions_mutable_max_rpc_version(grpc_gcp_RpcProtocolVersions *msg, upb_arena *arena) {
  struct grpc_gcp_RpcProtocolVersions_Version* sub = (struct grpc_gcp_RpcProtocolVersions_Version*)grpc_gcp_RpcProtocolVersions_max_rpc_version(msg);
  if (sub == NULL) {
    sub = (struct grpc_gcp_RpcProtocolVersions_Version*)_upb_msg_new(&grpc_gcp_RpcProtocolVersions_Version_msginit, arena);
    if (!sub) return NULL;
    grpc_gcp_RpcProtocolVersions_set_max_rpc_version(msg, sub);
  }
  return sub;
}
UPB_INLINE void grpc_gcp_RpcProtocolVersions_set_min_rpc_version(grpc_gcp_RpcProtocolVersions *msg, grpc_gcp_RpcProtocolVersions_Version* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), grpc_gcp_RpcProtocolVersions_Version*) = value;
}
UPB_INLINE struct grpc_gcp_RpcProtocolVersions_Version* grpc_gcp_RpcProtocolVersions_mutable_min_rpc_version(grpc_gcp_RpcProtocolVersions *msg, upb_arena *arena) {
  struct grpc_gcp_RpcProtocolVersions_Version* sub = (struct grpc_gcp_RpcProtocolVersions_Version*)grpc_gcp_RpcProtocolVersions_min_rpc_version(msg);
  if (sub == NULL) {
    sub = (struct grpc_gcp_RpcProtocolVersions_Version*)_upb_msg_new(&grpc_gcp_RpcProtocolVersions_Version_msginit, arena);
    if (!sub) return NULL;
    grpc_gcp_RpcProtocolVersions_set_min_rpc_version(msg, sub);
  }
  return sub;
}

/* grpc.gcp.RpcProtocolVersions.Version */

UPB_INLINE grpc_gcp_RpcProtocolVersions_Version *grpc_gcp_RpcProtocolVersions_Version_new(upb_arena *arena) {
  return (grpc_gcp_RpcProtocolVersions_Version *)_upb_msg_new(&grpc_gcp_RpcProtocolVersions_Version_msginit, arena);
}
UPB_INLINE grpc_gcp_RpcProtocolVersions_Version *grpc_gcp_RpcProtocolVersions_Version_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  grpc_gcp_RpcProtocolVersions_Version *ret = grpc_gcp_RpcProtocolVersions_Version_new(arena);
  return (ret && upb_decode(buf, size, ret, &grpc_gcp_RpcProtocolVersions_Version_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *grpc_gcp_RpcProtocolVersions_Version_serialize(const grpc_gcp_RpcProtocolVersions_Version *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &grpc_gcp_RpcProtocolVersions_Version_msginit, arena, len);
}

UPB_INLINE uint32_t grpc_gcp_RpcProtocolVersions_Version_major(const grpc_gcp_RpcProtocolVersions_Version *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), uint32_t); }
UPB_INLINE uint32_t grpc_gcp_RpcProtocolVersions_Version_minor(const grpc_gcp_RpcProtocolVersions_Version *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 4), uint32_t); }

UPB_INLINE void grpc_gcp_RpcProtocolVersions_Version_set_major(grpc_gcp_RpcProtocolVersions_Version *msg, uint32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), uint32_t) = value;
}
UPB_INLINE void grpc_gcp_RpcProtocolVersions_Version_set_minor(grpc_gcp_RpcProtocolVersions_Version *msg, uint32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 4), uint32_t) = value;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* SRC_PROTO_GRPC_GCP_TRANSPORT_SECURITY_COMMON_PROTO_UPB_H_ */
