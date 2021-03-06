// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: reflection.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_reflection_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_reflection_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_reflection_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_reflection_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_reflection_2eproto;
namespace proto {
class proto_message;
class proto_messageDefaultTypeInternal;
extern proto_messageDefaultTypeInternal _proto_message_default_instance_;
}  // namespace proto
PROTOBUF_NAMESPACE_OPEN
template<> ::proto::proto_message* Arena::CreateMaybeMessage<::proto::proto_message>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace proto {

// ===================================================================

class proto_message :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:proto.proto_message) */ {
 public:
  proto_message();
  virtual ~proto_message();

  proto_message(const proto_message& from);
  proto_message(proto_message&& from) noexcept
    : proto_message() {
    *this = ::std::move(from);
  }

  inline proto_message& operator=(const proto_message& from) {
    CopyFrom(from);
    return *this;
  }
  inline proto_message& operator=(proto_message&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const proto_message& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const proto_message* internal_default_instance() {
    return reinterpret_cast<const proto_message*>(
               &_proto_message_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(proto_message& a, proto_message& b) {
    a.Swap(&b);
  }
  inline void Swap(proto_message* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline proto_message* New() const final {
    return CreateMaybeMessage<proto_message>(nullptr);
  }

  proto_message* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<proto_message>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const proto_message& from);
  void MergeFrom(const proto_message& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(proto_message* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "proto.proto_message";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_reflection_2eproto);
    return ::descriptor_table_reflection_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTypeFieldNumber = 1,
    kPayloadFieldNumber = 2,
  };
  // string type = 1;
  void clear_type();
  const std::string& type() const;
  void set_type(const std::string& value);
  void set_type(std::string&& value);
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  std::string* mutable_type();
  std::string* release_type();
  void set_allocated_type(std::string* type);
  private:
  const std::string& _internal_type() const;
  void _internal_set_type(const std::string& value);
  std::string* _internal_mutable_type();
  public:

  // bytes payload = 2;
  void clear_payload();
  const std::string& payload() const;
  void set_payload(const std::string& value);
  void set_payload(std::string&& value);
  void set_payload(const char* value);
  void set_payload(const void* value, size_t size);
  std::string* mutable_payload();
  std::string* release_payload();
  void set_allocated_payload(std::string* payload);
  private:
  const std::string& _internal_payload() const;
  void _internal_set_payload(const std::string& value);
  std::string* _internal_mutable_payload();
  public:

  // @@protoc_insertion_point(class_scope:proto.proto_message)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr type_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr payload_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_reflection_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// proto_message

// string type = 1;
inline void proto_message::clear_type() {
  type_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& proto_message::type() const {
  // @@protoc_insertion_point(field_get:proto.proto_message.type)
  return _internal_type();
}
inline void proto_message::set_type(const std::string& value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:proto.proto_message.type)
}
inline std::string* proto_message::mutable_type() {
  // @@protoc_insertion_point(field_mutable:proto.proto_message.type)
  return _internal_mutable_type();
}
inline const std::string& proto_message::_internal_type() const {
  return type_.GetNoArena();
}
inline void proto_message::_internal_set_type(const std::string& value) {
  
  type_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void proto_message::set_type(std::string&& value) {
  
  type_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proto.proto_message.type)
}
inline void proto_message::set_type(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  type_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto.proto_message.type)
}
inline void proto_message::set_type(const char* value, size_t size) {
  
  type_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto.proto_message.type)
}
inline std::string* proto_message::_internal_mutable_type() {
  
  return type_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* proto_message::release_type() {
  // @@protoc_insertion_point(field_release:proto.proto_message.type)
  
  return type_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void proto_message::set_allocated_type(std::string* type) {
  if (type != nullptr) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:proto.proto_message.type)
}

// bytes payload = 2;
inline void proto_message::clear_payload() {
  payload_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& proto_message::payload() const {
  // @@protoc_insertion_point(field_get:proto.proto_message.payload)
  return _internal_payload();
}
inline void proto_message::set_payload(const std::string& value) {
  _internal_set_payload(value);
  // @@protoc_insertion_point(field_set:proto.proto_message.payload)
}
inline std::string* proto_message::mutable_payload() {
  // @@protoc_insertion_point(field_mutable:proto.proto_message.payload)
  return _internal_mutable_payload();
}
inline const std::string& proto_message::_internal_payload() const {
  return payload_.GetNoArena();
}
inline void proto_message::_internal_set_payload(const std::string& value) {
  
  payload_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void proto_message::set_payload(std::string&& value) {
  
  payload_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proto.proto_message.payload)
}
inline void proto_message::set_payload(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  payload_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto.proto_message.payload)
}
inline void proto_message::set_payload(const void* value, size_t size) {
  
  payload_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto.proto_message.payload)
}
inline std::string* proto_message::_internal_mutable_payload() {
  
  return payload_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* proto_message::release_payload() {
  // @@protoc_insertion_point(field_release:proto.proto_message.payload)
  
  return payload_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void proto_message::set_allocated_payload(std::string* payload) {
  if (payload != nullptr) {
    
  } else {
    
  }
  payload_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), payload);
  // @@protoc_insertion_point(field_set_allocated:proto.proto_message.payload)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_reflection_2eproto
