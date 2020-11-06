/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/core/v1/context_params.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef UDPA_CORE_V1_CONTEXT_PARAMS_PROTO_UPB_H_
#define UDPA_CORE_V1_CONTEXT_PARAMS_PROTO_UPB_H_

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

struct udpa_core_v1_ContextParams;
struct udpa_core_v1_ContextParams_ParamsEntry;
typedef struct udpa_core_v1_ContextParams udpa_core_v1_ContextParams;
typedef struct udpa_core_v1_ContextParams_ParamsEntry udpa_core_v1_ContextParams_ParamsEntry;
extern const upb_msglayout udpa_core_v1_ContextParams_msginit;
extern const upb_msglayout udpa_core_v1_ContextParams_ParamsEntry_msginit;


/* udpa.core.v1.ContextParams */

UPB_INLINE udpa_core_v1_ContextParams *udpa_core_v1_ContextParams_new(upb_arena *arena) {
  return (udpa_core_v1_ContextParams *)_upb_msg_new(&udpa_core_v1_ContextParams_msginit, arena);
}
UPB_INLINE udpa_core_v1_ContextParams *udpa_core_v1_ContextParams_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  udpa_core_v1_ContextParams *ret = udpa_core_v1_ContextParams_new(arena);
  return (ret && upb_decode(buf, size, ret, &udpa_core_v1_ContextParams_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *udpa_core_v1_ContextParams_serialize(const udpa_core_v1_ContextParams *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &udpa_core_v1_ContextParams_msginit, arena, len);
}

UPB_INLINE bool udpa_core_v1_ContextParams_has_params(const udpa_core_v1_ContextParams *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE size_t udpa_core_v1_ContextParams_params_size(const udpa_core_v1_ContextParams *msg) {return _upb_msg_map_size(msg, UPB_SIZE(0, 0)); }
UPB_INLINE bool udpa_core_v1_ContextParams_params_get(const udpa_core_v1_ContextParams *msg, upb_strview key, upb_strview *val) { return _upb_msg_map_get(msg, UPB_SIZE(0, 0), &key, 0, val, 0); }
UPB_INLINE const udpa_core_v1_ContextParams_ParamsEntry* udpa_core_v1_ContextParams_params_next(const udpa_core_v1_ContextParams *msg, size_t* iter) { return (const udpa_core_v1_ContextParams_ParamsEntry*)_upb_msg_map_next(msg, UPB_SIZE(0, 0), iter); }

UPB_INLINE void udpa_core_v1_ContextParams_params_clear(udpa_core_v1_ContextParams *msg) { _upb_msg_map_clear(msg, UPB_SIZE(0, 0)); }
UPB_INLINE bool udpa_core_v1_ContextParams_params_set(udpa_core_v1_ContextParams *msg, upb_strview key, upb_strview val, upb_arena *a) { return _upb_msg_map_set(msg, UPB_SIZE(0, 0), &key, 0, &val, 0, a); }
UPB_INLINE bool udpa_core_v1_ContextParams_params_delete(udpa_core_v1_ContextParams *msg, upb_strview key) { return _upb_msg_map_delete(msg, UPB_SIZE(0, 0), &key, 0); }
UPB_INLINE udpa_core_v1_ContextParams_ParamsEntry* udpa_core_v1_ContextParams_params_nextmutable(udpa_core_v1_ContextParams *msg, size_t* iter) { return (udpa_core_v1_ContextParams_ParamsEntry*)_upb_msg_map_next(msg, UPB_SIZE(0, 0), iter); }

/* udpa.core.v1.ContextParams.ParamsEntry */

UPB_INLINE upb_strview udpa_core_v1_ContextParams_ParamsEntry_key(const udpa_core_v1_ContextParams_ParamsEntry *msg) {
  upb_strview ret;
  _upb_msg_map_key(msg, &ret, 0);
  return ret;
}
UPB_INLINE upb_strview udpa_core_v1_ContextParams_ParamsEntry_value(const udpa_core_v1_ContextParams_ParamsEntry *msg) {
  upb_strview ret;
  _upb_msg_map_value(msg, &ret, 0);
  return ret;
}

UPB_INLINE void udpa_core_v1_ContextParams_ParamsEntry_set_value(udpa_core_v1_ContextParams_ParamsEntry *msg, upb_strview value) {
  _upb_msg_map_set_value(msg, &value, 0);
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* UDPA_CORE_V1_CONTEXT_PARAMS_PROTO_UPB_H_ */
