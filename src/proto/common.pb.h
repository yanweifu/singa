// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common.proto

#ifndef PROTOBUF_common_2eproto__INCLUDED
#define PROTOBUF_common_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace lapis {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_common_2eproto();
void protobuf_AssignDesc_common_2eproto();
void protobuf_ShutdownFile_common_2eproto();

class EmptyMessage;
class ShortMsg;
class Arg;
class Args;
class FileParams;
class ConfigData;

enum MessageTypes {
  MTYPE_PUT_REQUEST = 1,
  MTYPE_GET_REQUEST = 2,
  MTYPE_GET_RESPONSE = 3,
  MTYPE_SHUTDOWN = 4,
  MTYPE_REGISTER_WORKER = 5,
  MTYPE_WORKER_FLUSH = 6,
  MTYPE_WORKER_FLUSH_DONE = 7,
  MTYPE_SHARD_ASSIGNMENT = 8,
  MTYPE_SHARD_ASSIGNMENT_DONE = 9,
  MTYPE_WORKER_APPLY = 10,
  MTYPE_WORKER_APPLY_DONE = 11,
  MTYPE_WORKER_END = 12,
  MTYPE_DATA_PUT_REQUEST = 14,
  MTYPE_DATA_PUT_REQUEST_FINISH = 15,
  MTYPE_DATA_PUT_REQUEST_DONE = 16,
  MTYPE_NET_PARTITION = 17,
  MTYPE_VALIDATION = 18,
  MTYPE_INSTRUCTION = 19,
  MTYPE_PERFORMANCE = 20,
  MTYPE_GROUP_CONFIG = 21,
  MTYPE_PUT_SHARD = 23,
  MTYPE_BARRIER_REQUEST = 24,
  MTYPE_BARRIER_REPLY = 25,
  MTYPE_BARRIER_READY = 26,
  MTYPE_WORKER_START = 27,
  MTYPE_FINISH_INIT_PARAMS = 28,
  MTYPE_INIT_PARAMS = 29,
  MTYPE_UPDATE_REQUEST = 30,
  MTYPE_SERVER_RESTORED = 31
};
bool MessageTypes_IsValid(int value);
const MessageTypes MessageTypes_MIN = MTYPE_PUT_REQUEST;
const MessageTypes MessageTypes_MAX = MTYPE_SERVER_RESTORED;
const int MessageTypes_ARRAYSIZE = MessageTypes_MAX + 1;

const ::google::protobuf::EnumDescriptor* MessageTypes_descriptor();
inline const ::std::string& MessageTypes_Name(MessageTypes value) {
  return ::google::protobuf::internal::NameOfEnum(
    MessageTypes_descriptor(), value);
}
inline bool MessageTypes_Parse(
    const ::std::string& name, MessageTypes* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MessageTypes>(
    MessageTypes_descriptor(), name, value);
}
enum CompressionFormat {
  NONE = 0,
  LZO = 1,
  ZLIB = 2
};
bool CompressionFormat_IsValid(int value);
const CompressionFormat CompressionFormat_MIN = NONE;
const CompressionFormat CompressionFormat_MAX = ZLIB;
const int CompressionFormat_ARRAYSIZE = CompressionFormat_MAX + 1;

const ::google::protobuf::EnumDescriptor* CompressionFormat_descriptor();
inline const ::std::string& CompressionFormat_Name(CompressionFormat value) {
  return ::google::protobuf::internal::NameOfEnum(
    CompressionFormat_descriptor(), value);
}
inline bool CompressionFormat_Parse(
    const ::std::string& name, CompressionFormat* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CompressionFormat>(
    CompressionFormat_descriptor(), name, value);
}
// ===================================================================

class EmptyMessage : public ::google::protobuf::Message {
 public:
  EmptyMessage();
  virtual ~EmptyMessage();

  EmptyMessage(const EmptyMessage& from);

  inline EmptyMessage& operator=(const EmptyMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const EmptyMessage& default_instance();

  void Swap(EmptyMessage* other);

  // implements Message ----------------------------------------------

  EmptyMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EmptyMessage& from);
  void MergeFrom(const EmptyMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:lapis.EmptyMessage)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_common_2eproto();
  friend void protobuf_AssignDesc_common_2eproto();
  friend void protobuf_ShutdownFile_common_2eproto();

  void InitAsDefaultInstance();
  static EmptyMessage* default_instance_;
};
// -------------------------------------------------------------------

class ShortMsg : public ::google::protobuf::Message {
 public:
  ShortMsg();
  virtual ~ShortMsg();

  ShortMsg(const ShortMsg& from);

  inline ShortMsg& operator=(const ShortMsg& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ShortMsg& default_instance();

  void Swap(ShortMsg* other);

  // implements Message ----------------------------------------------

  ShortMsg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ShortMsg& from);
  void MergeFrom(const ShortMsg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 step = 1;
  inline bool has_step() const;
  inline void clear_step();
  static const int kStepFieldNumber = 1;
  inline ::google::protobuf::int32 step() const;
  inline void set_step(::google::protobuf::int32 value);

  // optional bool answer = 2;
  inline bool has_answer() const;
  inline void clear_answer();
  static const int kAnswerFieldNumber = 2;
  inline bool answer() const;
  inline void set_answer(bool value);

  // @@protoc_insertion_point(class_scope:lapis.ShortMsg)
 private:
  inline void set_has_step();
  inline void clear_has_step();
  inline void set_has_answer();
  inline void clear_has_answer();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 step_;
  bool answer_;
  friend void  protobuf_AddDesc_common_2eproto();
  friend void protobuf_AssignDesc_common_2eproto();
  friend void protobuf_ShutdownFile_common_2eproto();

  void InitAsDefaultInstance();
  static ShortMsg* default_instance_;
};
// -------------------------------------------------------------------

class Arg : public ::google::protobuf::Message {
 public:
  Arg();
  virtual ~Arg();

  Arg(const Arg& from);

  inline Arg& operator=(const Arg& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Arg& default_instance();

  void Swap(Arg* other);

  // implements Message ----------------------------------------------

  Arg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Arg& from);
  void MergeFrom(const Arg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bytes key = 1;
  inline bool has_key() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 1;
  inline const ::std::string& key() const;
  inline void set_key(const ::std::string& value);
  inline void set_key(const char* value);
  inline void set_key(const void* value, size_t size);
  inline ::std::string* mutable_key();
  inline ::std::string* release_key();
  inline void set_allocated_key(::std::string* key);

  // required bytes value = 2;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 2;
  inline const ::std::string& value() const;
  inline void set_value(const ::std::string& value);
  inline void set_value(const char* value);
  inline void set_value(const void* value, size_t size);
  inline ::std::string* mutable_value();
  inline ::std::string* release_value();
  inline void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:lapis.Arg)
 private:
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* key_;
  ::std::string* value_;
  friend void  protobuf_AddDesc_common_2eproto();
  friend void protobuf_AssignDesc_common_2eproto();
  friend void protobuf_ShutdownFile_common_2eproto();

  void InitAsDefaultInstance();
  static Arg* default_instance_;
};
// -------------------------------------------------------------------

class Args : public ::google::protobuf::Message {
 public:
  Args();
  virtual ~Args();

  Args(const Args& from);

  inline Args& operator=(const Args& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Args& default_instance();

  void Swap(Args* other);

  // implements Message ----------------------------------------------

  Args* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Args& from);
  void MergeFrom(const Args& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .lapis.Arg param = 1;
  inline int param_size() const;
  inline void clear_param();
  static const int kParamFieldNumber = 1;
  inline const ::lapis::Arg& param(int index) const;
  inline ::lapis::Arg* mutable_param(int index);
  inline ::lapis::Arg* add_param();
  inline const ::google::protobuf::RepeatedPtrField< ::lapis::Arg >&
      param() const;
  inline ::google::protobuf::RepeatedPtrField< ::lapis::Arg >*
      mutable_param();

  // @@protoc_insertion_point(class_scope:lapis.Args)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::lapis::Arg > param_;
  friend void  protobuf_AddDesc_common_2eproto();
  friend void protobuf_AssignDesc_common_2eproto();
  friend void protobuf_ShutdownFile_common_2eproto();

  void InitAsDefaultInstance();
  static Args* default_instance_;
};
// -------------------------------------------------------------------

class FileParams : public ::google::protobuf::Message {
 public:
  FileParams();
  virtual ~FileParams();

  FileParams(const FileParams& from);

  inline FileParams& operator=(const FileParams& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FileParams& default_instance();

  void Swap(FileParams* other);

  // implements Message ----------------------------------------------

  FileParams* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FileParams& from);
  void MergeFrom(const FileParams& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .lapis.Arg attr = 1;
  inline int attr_size() const;
  inline void clear_attr();
  static const int kAttrFieldNumber = 1;
  inline const ::lapis::Arg& attr(int index) const;
  inline ::lapis::Arg* mutable_attr(int index);
  inline ::lapis::Arg* add_attr();
  inline const ::google::protobuf::RepeatedPtrField< ::lapis::Arg >&
      attr() const;
  inline ::google::protobuf::RepeatedPtrField< ::lapis::Arg >*
      mutable_attr();

  // optional int32 compression = 2 [default = 0];
  inline bool has_compression() const;
  inline void clear_compression();
  static const int kCompressionFieldNumber = 2;
  inline ::google::protobuf::int32 compression() const;
  inline void set_compression(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:lapis.FileParams)
 private:
  inline void set_has_compression();
  inline void clear_has_compression();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::lapis::Arg > attr_;
  ::google::protobuf::int32 compression_;
  friend void  protobuf_AddDesc_common_2eproto();
  friend void protobuf_AssignDesc_common_2eproto();
  friend void protobuf_ShutdownFile_common_2eproto();

  void InitAsDefaultInstance();
  static FileParams* default_instance_;
};
// -------------------------------------------------------------------

class ConfigData : public ::google::protobuf::Message {
 public:
  ConfigData();
  virtual ~ConfigData();

  ConfigData(const ConfigData& from);

  inline ConfigData& operator=(const ConfigData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ConfigData& default_instance();

  void Swap(ConfigData* other);

  // implements Message ----------------------------------------------

  ConfigData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ConfigData& from);
  void MergeFrom(const ConfigData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 num_workers = 1;
  inline bool has_num_workers() const;
  inline void clear_num_workers();
  static const int kNumWorkersFieldNumber = 1;
  inline ::google::protobuf::int32 num_workers() const;
  inline void set_num_workers(::google::protobuf::int32 value);

  // required int32 worker_id = 2;
  inline bool has_worker_id() const;
  inline void clear_worker_id();
  static const int kWorkerIdFieldNumber = 2;
  inline ::google::protobuf::int32 worker_id() const;
  inline void set_worker_id(::google::protobuf::int32 value);

  // required int32 master_id = 3;
  inline bool has_master_id() const;
  inline void clear_master_id();
  static const int kMasterIdFieldNumber = 3;
  inline ::google::protobuf::int32 master_id() const;
  inline void set_master_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:lapis.ConfigData)
 private:
  inline void set_has_num_workers();
  inline void clear_has_num_workers();
  inline void set_has_worker_id();
  inline void clear_has_worker_id();
  inline void set_has_master_id();
  inline void clear_has_master_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 num_workers_;
  ::google::protobuf::int32 worker_id_;
  ::google::protobuf::int32 master_id_;
  friend void  protobuf_AddDesc_common_2eproto();
  friend void protobuf_AssignDesc_common_2eproto();
  friend void protobuf_ShutdownFile_common_2eproto();

  void InitAsDefaultInstance();
  static ConfigData* default_instance_;
};
// ===================================================================


// ===================================================================

// EmptyMessage

// -------------------------------------------------------------------

// ShortMsg

// optional int32 step = 1;
inline bool ShortMsg::has_step() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ShortMsg::set_has_step() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ShortMsg::clear_has_step() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ShortMsg::clear_step() {
  step_ = 0;
  clear_has_step();
}
inline ::google::protobuf::int32 ShortMsg::step() const {
  // @@protoc_insertion_point(field_get:lapis.ShortMsg.step)
  return step_;
}
inline void ShortMsg::set_step(::google::protobuf::int32 value) {
  set_has_step();
  step_ = value;
  // @@protoc_insertion_point(field_set:lapis.ShortMsg.step)
}

// optional bool answer = 2;
inline bool ShortMsg::has_answer() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ShortMsg::set_has_answer() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ShortMsg::clear_has_answer() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ShortMsg::clear_answer() {
  answer_ = false;
  clear_has_answer();
}
inline bool ShortMsg::answer() const {
  // @@protoc_insertion_point(field_get:lapis.ShortMsg.answer)
  return answer_;
}
inline void ShortMsg::set_answer(bool value) {
  set_has_answer();
  answer_ = value;
  // @@protoc_insertion_point(field_set:lapis.ShortMsg.answer)
}

// -------------------------------------------------------------------

// Arg

// required bytes key = 1;
inline bool Arg::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Arg::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Arg::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Arg::clear_key() {
  if (key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_->clear();
  }
  clear_has_key();
}
inline const ::std::string& Arg::key() const {
  // @@protoc_insertion_point(field_get:lapis.Arg.key)
  return *key_;
}
inline void Arg::set_key(const ::std::string& value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  key_->assign(value);
  // @@protoc_insertion_point(field_set:lapis.Arg.key)
}
inline void Arg::set_key(const char* value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  key_->assign(value);
  // @@protoc_insertion_point(field_set_char:lapis.Arg.key)
}
inline void Arg::set_key(const void* value, size_t size) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  key_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:lapis.Arg.key)
}
inline ::std::string* Arg::mutable_key() {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    key_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:lapis.Arg.key)
  return key_;
}
inline ::std::string* Arg::release_key() {
  clear_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = key_;
    key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Arg::set_allocated_key(::std::string* key) {
  if (key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete key_;
  }
  if (key) {
    set_has_key();
    key_ = key;
  } else {
    clear_has_key();
    key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:lapis.Arg.key)
}

// required bytes value = 2;
inline bool Arg::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Arg::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Arg::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Arg::clear_value() {
  if (value_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_->clear();
  }
  clear_has_value();
}
inline const ::std::string& Arg::value() const {
  // @@protoc_insertion_point(field_get:lapis.Arg.value)
  return *value_;
}
inline void Arg::set_value(const ::std::string& value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_ = new ::std::string;
  }
  value_->assign(value);
  // @@protoc_insertion_point(field_set:lapis.Arg.value)
}
inline void Arg::set_value(const char* value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_ = new ::std::string;
  }
  value_->assign(value);
  // @@protoc_insertion_point(field_set_char:lapis.Arg.value)
}
inline void Arg::set_value(const void* value, size_t size) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_ = new ::std::string;
  }
  value_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:lapis.Arg.value)
}
inline ::std::string* Arg::mutable_value() {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    value_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:lapis.Arg.value)
  return value_;
}
inline ::std::string* Arg::release_value() {
  clear_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = value_;
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Arg::set_allocated_value(::std::string* value) {
  if (value_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete value_;
  }
  if (value) {
    set_has_value();
    value_ = value;
  } else {
    clear_has_value();
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:lapis.Arg.value)
}

// -------------------------------------------------------------------

// Args

// repeated .lapis.Arg param = 1;
inline int Args::param_size() const {
  return param_.size();
}
inline void Args::clear_param() {
  param_.Clear();
}
inline const ::lapis::Arg& Args::param(int index) const {
  // @@protoc_insertion_point(field_get:lapis.Args.param)
  return param_.Get(index);
}
inline ::lapis::Arg* Args::mutable_param(int index) {
  // @@protoc_insertion_point(field_mutable:lapis.Args.param)
  return param_.Mutable(index);
}
inline ::lapis::Arg* Args::add_param() {
  // @@protoc_insertion_point(field_add:lapis.Args.param)
  return param_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::lapis::Arg >&
Args::param() const {
  // @@protoc_insertion_point(field_list:lapis.Args.param)
  return param_;
}
inline ::google::protobuf::RepeatedPtrField< ::lapis::Arg >*
Args::mutable_param() {
  // @@protoc_insertion_point(field_mutable_list:lapis.Args.param)
  return &param_;
}

// -------------------------------------------------------------------

// FileParams

// repeated .lapis.Arg attr = 1;
inline int FileParams::attr_size() const {
  return attr_.size();
}
inline void FileParams::clear_attr() {
  attr_.Clear();
}
inline const ::lapis::Arg& FileParams::attr(int index) const {
  // @@protoc_insertion_point(field_get:lapis.FileParams.attr)
  return attr_.Get(index);
}
inline ::lapis::Arg* FileParams::mutable_attr(int index) {
  // @@protoc_insertion_point(field_mutable:lapis.FileParams.attr)
  return attr_.Mutable(index);
}
inline ::lapis::Arg* FileParams::add_attr() {
  // @@protoc_insertion_point(field_add:lapis.FileParams.attr)
  return attr_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::lapis::Arg >&
FileParams::attr() const {
  // @@protoc_insertion_point(field_list:lapis.FileParams.attr)
  return attr_;
}
inline ::google::protobuf::RepeatedPtrField< ::lapis::Arg >*
FileParams::mutable_attr() {
  // @@protoc_insertion_point(field_mutable_list:lapis.FileParams.attr)
  return &attr_;
}

// optional int32 compression = 2 [default = 0];
inline bool FileParams::has_compression() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FileParams::set_has_compression() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FileParams::clear_has_compression() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FileParams::clear_compression() {
  compression_ = 0;
  clear_has_compression();
}
inline ::google::protobuf::int32 FileParams::compression() const {
  // @@protoc_insertion_point(field_get:lapis.FileParams.compression)
  return compression_;
}
inline void FileParams::set_compression(::google::protobuf::int32 value) {
  set_has_compression();
  compression_ = value;
  // @@protoc_insertion_point(field_set:lapis.FileParams.compression)
}

// -------------------------------------------------------------------

// ConfigData

// required int32 num_workers = 1;
inline bool ConfigData::has_num_workers() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ConfigData::set_has_num_workers() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ConfigData::clear_has_num_workers() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ConfigData::clear_num_workers() {
  num_workers_ = 0;
  clear_has_num_workers();
}
inline ::google::protobuf::int32 ConfigData::num_workers() const {
  // @@protoc_insertion_point(field_get:lapis.ConfigData.num_workers)
  return num_workers_;
}
inline void ConfigData::set_num_workers(::google::protobuf::int32 value) {
  set_has_num_workers();
  num_workers_ = value;
  // @@protoc_insertion_point(field_set:lapis.ConfigData.num_workers)
}

// required int32 worker_id = 2;
inline bool ConfigData::has_worker_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ConfigData::set_has_worker_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ConfigData::clear_has_worker_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ConfigData::clear_worker_id() {
  worker_id_ = 0;
  clear_has_worker_id();
}
inline ::google::protobuf::int32 ConfigData::worker_id() const {
  // @@protoc_insertion_point(field_get:lapis.ConfigData.worker_id)
  return worker_id_;
}
inline void ConfigData::set_worker_id(::google::protobuf::int32 value) {
  set_has_worker_id();
  worker_id_ = value;
  // @@protoc_insertion_point(field_set:lapis.ConfigData.worker_id)
}

// required int32 master_id = 3;
inline bool ConfigData::has_master_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ConfigData::set_has_master_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ConfigData::clear_has_master_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ConfigData::clear_master_id() {
  master_id_ = 0;
  clear_has_master_id();
}
inline ::google::protobuf::int32 ConfigData::master_id() const {
  // @@protoc_insertion_point(field_get:lapis.ConfigData.master_id)
  return master_id_;
}
inline void ConfigData::set_master_id(::google::protobuf::int32 value) {
  set_has_master_id();
  master_id_ = value;
  // @@protoc_insertion_point(field_set:lapis.ConfigData.master_id)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace lapis

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::lapis::MessageTypes> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::lapis::MessageTypes>() {
  return ::lapis::MessageTypes_descriptor();
}
template <> struct is_proto_enum< ::lapis::CompressionFormat> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::lapis::CompressionFormat>() {
  return ::lapis::CompressionFormat_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_common_2eproto__INCLUDED
