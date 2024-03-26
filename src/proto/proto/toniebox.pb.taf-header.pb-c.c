/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: proto/toniebox.pb.taf-header.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "proto/toniebox.pb.taf-header.pb-c.h"
void   toniebox_audio_file_header__init
                     (TonieboxAudioFileHeader         *message)
{
  static const TonieboxAudioFileHeader init_value = TONIEBOX_AUDIO_FILE_HEADER__INIT;
  *message = init_value;
}
size_t toniebox_audio_file_header__get_packed_size
                     (const TonieboxAudioFileHeader *message)
{
  assert(message->base.descriptor == &toniebox_audio_file_header__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t toniebox_audio_file_header__pack
                     (const TonieboxAudioFileHeader *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &toniebox_audio_file_header__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t toniebox_audio_file_header__pack_to_buffer
                     (const TonieboxAudioFileHeader *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &toniebox_audio_file_header__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
TonieboxAudioFileHeader *
       toniebox_audio_file_header__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (TonieboxAudioFileHeader *)
     protobuf_c_message_unpack (&toniebox_audio_file_header__descriptor,
                                allocator, len, data);
}
void   toniebox_audio_file_header__free_unpacked
                     (TonieboxAudioFileHeader *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &toniebox_audio_file_header__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor toniebox_audio_file_header__field_descriptors[8] =
{
  {
    "sha1_hash",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(TonieboxAudioFileHeader, sha1_hash),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "num_bytes",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(TonieboxAudioFileHeader, num_bytes),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "audio_id",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TonieboxAudioFileHeader, audio_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "track_page_nums",
    4,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(TonieboxAudioFileHeader, n_track_page_nums),
    offsetof(TonieboxAudioFileHeader, track_page_nums),
    NULL,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_PACKED,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "_fill",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(TonieboxAudioFileHeader, _fill),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ogg_granule_position",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(TonieboxAudioFileHeader, has_ogg_granule_position),
    offsetof(TonieboxAudioFileHeader, ogg_granule_position),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ogg_packet_count",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(TonieboxAudioFileHeader, has_ogg_packet_count),
    offsetof(TonieboxAudioFileHeader, ogg_packet_count),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "taf_block_num",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(TonieboxAudioFileHeader, has_taf_block_num),
    offsetof(TonieboxAudioFileHeader, taf_block_num),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned toniebox_audio_file_header__field_indices_by_name[] = {
  4,   /* field[4] = _fill */
  2,   /* field[2] = audio_id */
  1,   /* field[1] = num_bytes */
  5,   /* field[5] = ogg_granule_position */
  6,   /* field[6] = ogg_packet_count */
  0,   /* field[0] = sha1_hash */
  7,   /* field[7] = taf_block_num */
  3,   /* field[3] = track_page_nums */
};
static const ProtobufCIntRange toniebox_audio_file_header__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor toniebox_audio_file_header__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "TonieboxAudioFileHeader",
  "TonieboxAudioFileHeader",
  "TonieboxAudioFileHeader",
  "",
  sizeof(TonieboxAudioFileHeader),
  8,
  toniebox_audio_file_header__field_descriptors,
  toniebox_audio_file_header__field_indices_by_name,
  1,  toniebox_audio_file_header__number_ranges,
  (ProtobufCMessageInit) toniebox_audio_file_header__init,
  NULL,NULL,NULL    /* reserved[123] */
};
