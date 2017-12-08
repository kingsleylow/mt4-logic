// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RequestExecution.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RequestExecution.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace ProtoTypes {

namespace {

const ::google::protobuf::Descriptor* ExecutionOrder_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ExecutionOrder_reflection_ = NULL;
const ::google::protobuf::Descriptor* ExecutionSignal_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ExecutionSignal_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RequestExecution_2eproto() {
  protobuf_AddDesc_RequestExecution_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RequestExecution.proto");
  GOOGLE_CHECK(file != NULL);
  ExecutionOrder_descriptor_ = file->message_type(0);
  static const int ExecutionOrder_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecutionOrder, login_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecutionOrder, actiontype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecutionOrder, side_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecutionOrder, volume_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecutionOrder, symbol_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecutionOrder, orderid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecutionOrder, commission_),
  };
  ExecutionOrder_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ExecutionOrder_descriptor_,
      ExecutionOrder::default_instance_,
      ExecutionOrder_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecutionOrder, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecutionOrder, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ExecutionOrder));
  ExecutionSignal_descriptor_ = file->message_type(1);
  static const int ExecutionSignal_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecutionSignal, comment_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecutionSignal, destination_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecutionSignal, orders_),
  };
  ExecutionSignal_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ExecutionSignal_descriptor_,
      ExecutionSignal::default_instance_,
      ExecutionSignal_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecutionSignal, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecutionSignal, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ExecutionSignal));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RequestExecution_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ExecutionOrder_descriptor_, &ExecutionOrder::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ExecutionSignal_descriptor_, &ExecutionSignal::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RequestExecution_2eproto() {
  delete ExecutionOrder::default_instance_;
  delete ExecutionOrder_reflection_;
  delete ExecutionSignal::default_instance_;
  delete ExecutionSignal_reflection_;
}

void protobuf_AddDesc_RequestExecution_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::ProtoTypes::protobuf_AddDesc_SignalMT4Trade_2eproto();
  ::ProtoTypes::protobuf_AddDesc_Signal_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026RequestExecution.proto\022\nProtoTypes\032\024Si"
    "gnalMT4Trade.proto\032\014Signal.proto\"\265\001\n\016Exe"
    "cutionOrder\022\r\n\005Login\030\001 \002(\005\022*\n\nActionType"
    "\030\002 \002(\0162\026.ProtoTypes.ActionType\022#\n\004Side\030\003"
    " \002(\0162\025.ProtoTypes.TradeSide\022\016\n\006Volume\030\004 "
    "\002(\001\022\016\n\006Symbol\030\005 \002(\t\022\017\n\007OrderID\030\006 \001(\005\022\022\n\n"
    "Commission\030\007 \001(\001\"c\n\017ExecutionSignal\022\017\n\007C"
    "omment\030\001 \002(\t\022\023\n\013Destination\030\002 \002(\t\022*\n\006Ord"
    "ers\030\003 \003(\0132\032.ProtoTypes.ExecutionOrder", 357);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RequestExecution.proto", &protobuf_RegisterTypes);
  ExecutionOrder::default_instance_ = new ExecutionOrder();
  ExecutionSignal::default_instance_ = new ExecutionSignal();
  ExecutionOrder::default_instance_->InitAsDefaultInstance();
  ExecutionSignal::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RequestExecution_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RequestExecution_2eproto {
  StaticDescriptorInitializer_RequestExecution_2eproto() {
    protobuf_AddDesc_RequestExecution_2eproto();
  }
} static_descriptor_initializer_RequestExecution_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ExecutionOrder::kLoginFieldNumber;
const int ExecutionOrder::kActionTypeFieldNumber;
const int ExecutionOrder::kSideFieldNumber;
const int ExecutionOrder::kVolumeFieldNumber;
const int ExecutionOrder::kSymbolFieldNumber;
const int ExecutionOrder::kOrderIDFieldNumber;
const int ExecutionOrder::kCommissionFieldNumber;
#endif  // !_MSC_VER

ExecutionOrder::ExecutionOrder()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ExecutionOrder::InitAsDefaultInstance() {
}

ExecutionOrder::ExecutionOrder(const ExecutionOrder& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ExecutionOrder::SharedCtor() {
  _cached_size_ = 0;
  login_ = 0;
  actiontype_ = 0;
  side_ = 0;
  volume_ = 0;
  symbol_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  orderid_ = 0;
  commission_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ExecutionOrder::~ExecutionOrder() {
  SharedDtor();
}

void ExecutionOrder::SharedDtor() {
  if (symbol_ != &::google::protobuf::internal::kEmptyString) {
    delete symbol_;
  }
  if (this != default_instance_) {
  }
}

void ExecutionOrder::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ExecutionOrder::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ExecutionOrder_descriptor_;
}

const ExecutionOrder& ExecutionOrder::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RequestExecution_2eproto();
  return *default_instance_;
}

ExecutionOrder* ExecutionOrder::default_instance_ = NULL;

ExecutionOrder* ExecutionOrder::New() const {
  return new ExecutionOrder;
}

void ExecutionOrder::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    login_ = 0;
    actiontype_ = 0;
    side_ = 0;
    volume_ = 0;
    if (has_symbol()) {
      if (symbol_ != &::google::protobuf::internal::kEmptyString) {
        symbol_->clear();
      }
    }
    orderid_ = 0;
    commission_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ExecutionOrder::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 Login = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &login_)));
          set_has_login();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_ActionType;
        break;
      }

      // required .ProtoTypes.ActionType ActionType = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ActionType:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::ProtoTypes::ActionType_IsValid(value)) {
            set_actiontype(static_cast< ::ProtoTypes::ActionType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_Side;
        break;
      }

      // required .ProtoTypes.TradeSide Side = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Side:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::ProtoTypes::TradeSide_IsValid(value)) {
            set_side(static_cast< ::ProtoTypes::TradeSide >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(33)) goto parse_Volume;
        break;
      }

      // required double Volume = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_Volume:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &volume_)));
          set_has_volume();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_Symbol;
        break;
      }

      // required string Symbol = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Symbol:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_symbol()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->symbol().data(), this->symbol().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_OrderID;
        break;
      }

      // optional int32 OrderID = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_OrderID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &orderid_)));
          set_has_orderid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(57)) goto parse_Commission;
        break;
      }

      // optional double Commission = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_Commission:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &commission_)));
          set_has_commission();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ExecutionOrder::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 Login = 1;
  if (has_login()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->login(), output);
  }

  // required .ProtoTypes.ActionType ActionType = 2;
  if (has_actiontype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->actiontype(), output);
  }

  // required .ProtoTypes.TradeSide Side = 3;
  if (has_side()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->side(), output);
  }

  // required double Volume = 4;
  if (has_volume()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->volume(), output);
  }

  // required string Symbol = 5;
  if (has_symbol()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->symbol().data(), this->symbol().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->symbol(), output);
  }

  // optional int32 OrderID = 6;
  if (has_orderid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->orderid(), output);
  }

  // optional double Commission = 7;
  if (has_commission()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->commission(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ExecutionOrder::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 Login = 1;
  if (has_login()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->login(), target);
  }

  // required .ProtoTypes.ActionType ActionType = 2;
  if (has_actiontype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->actiontype(), target);
  }

  // required .ProtoTypes.TradeSide Side = 3;
  if (has_side()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->side(), target);
  }

  // required double Volume = 4;
  if (has_volume()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->volume(), target);
  }

  // required string Symbol = 5;
  if (has_symbol()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->symbol().data(), this->symbol().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->symbol(), target);
  }

  // optional int32 OrderID = 6;
  if (has_orderid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->orderid(), target);
  }

  // optional double Commission = 7;
  if (has_commission()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->commission(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ExecutionOrder::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 Login = 1;
    if (has_login()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->login());
    }

    // required .ProtoTypes.ActionType ActionType = 2;
    if (has_actiontype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->actiontype());
    }

    // required .ProtoTypes.TradeSide Side = 3;
    if (has_side()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->side());
    }

    // required double Volume = 4;
    if (has_volume()) {
      total_size += 1 + 8;
    }

    // required string Symbol = 5;
    if (has_symbol()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->symbol());
    }

    // optional int32 OrderID = 6;
    if (has_orderid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->orderid());
    }

    // optional double Commission = 7;
    if (has_commission()) {
      total_size += 1 + 8;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ExecutionOrder::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ExecutionOrder* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ExecutionOrder*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ExecutionOrder::MergeFrom(const ExecutionOrder& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_login()) {
      set_login(from.login());
    }
    if (from.has_actiontype()) {
      set_actiontype(from.actiontype());
    }
    if (from.has_side()) {
      set_side(from.side());
    }
    if (from.has_volume()) {
      set_volume(from.volume());
    }
    if (from.has_symbol()) {
      set_symbol(from.symbol());
    }
    if (from.has_orderid()) {
      set_orderid(from.orderid());
    }
    if (from.has_commission()) {
      set_commission(from.commission());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ExecutionOrder::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ExecutionOrder::CopyFrom(const ExecutionOrder& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExecutionOrder::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;

  return true;
}

void ExecutionOrder::Swap(ExecutionOrder* other) {
  if (other != this) {
    std::swap(login_, other->login_);
    std::swap(actiontype_, other->actiontype_);
    std::swap(side_, other->side_);
    std::swap(volume_, other->volume_);
    std::swap(symbol_, other->symbol_);
    std::swap(orderid_, other->orderid_);
    std::swap(commission_, other->commission_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ExecutionOrder::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ExecutionOrder_descriptor_;
  metadata.reflection = ExecutionOrder_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ExecutionSignal::kCommentFieldNumber;
const int ExecutionSignal::kDestinationFieldNumber;
const int ExecutionSignal::kOrdersFieldNumber;
#endif  // !_MSC_VER

ExecutionSignal::ExecutionSignal()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ExecutionSignal::InitAsDefaultInstance() {
}

ExecutionSignal::ExecutionSignal(const ExecutionSignal& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ExecutionSignal::SharedCtor() {
  _cached_size_ = 0;
  comment_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  destination_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ExecutionSignal::~ExecutionSignal() {
  SharedDtor();
}

void ExecutionSignal::SharedDtor() {
  if (comment_ != &::google::protobuf::internal::kEmptyString) {
    delete comment_;
  }
  if (destination_ != &::google::protobuf::internal::kEmptyString) {
    delete destination_;
  }
  if (this != default_instance_) {
  }
}

void ExecutionSignal::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ExecutionSignal::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ExecutionSignal_descriptor_;
}

const ExecutionSignal& ExecutionSignal::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RequestExecution_2eproto();
  return *default_instance_;
}

ExecutionSignal* ExecutionSignal::default_instance_ = NULL;

ExecutionSignal* ExecutionSignal::New() const {
  return new ExecutionSignal;
}

void ExecutionSignal::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_comment()) {
      if (comment_ != &::google::protobuf::internal::kEmptyString) {
        comment_->clear();
      }
    }
    if (has_destination()) {
      if (destination_ != &::google::protobuf::internal::kEmptyString) {
        destination_->clear();
      }
    }
  }
  orders_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ExecutionSignal::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string Comment = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_comment()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->comment().data(), this->comment().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_Destination;
        break;
      }

      // required string Destination = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Destination:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_destination()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->destination().data(), this->destination().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_Orders;
        break;
      }

      // repeated .ProtoTypes.ExecutionOrder Orders = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Orders:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_orders()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_Orders;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ExecutionSignal::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string Comment = 1;
  if (has_comment()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->comment().data(), this->comment().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->comment(), output);
  }

  // required string Destination = 2;
  if (has_destination()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->destination().data(), this->destination().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->destination(), output);
  }

  // repeated .ProtoTypes.ExecutionOrder Orders = 3;
  for (int i = 0; i < this->orders_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->orders(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ExecutionSignal::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string Comment = 1;
  if (has_comment()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->comment().data(), this->comment().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->comment(), target);
  }

  // required string Destination = 2;
  if (has_destination()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->destination().data(), this->destination().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->destination(), target);
  }

  // repeated .ProtoTypes.ExecutionOrder Orders = 3;
  for (int i = 0; i < this->orders_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->orders(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ExecutionSignal::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string Comment = 1;
    if (has_comment()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->comment());
    }

    // required string Destination = 2;
    if (has_destination()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->destination());
    }

  }
  // repeated .ProtoTypes.ExecutionOrder Orders = 3;
  total_size += 1 * this->orders_size();
  for (int i = 0; i < this->orders_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->orders(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ExecutionSignal::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ExecutionSignal* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ExecutionSignal*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ExecutionSignal::MergeFrom(const ExecutionSignal& from) {
  GOOGLE_CHECK_NE(&from, this);
  orders_.MergeFrom(from.orders_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_comment()) {
      set_comment(from.comment());
    }
    if (from.has_destination()) {
      set_destination(from.destination());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ExecutionSignal::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ExecutionSignal::CopyFrom(const ExecutionSignal& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExecutionSignal::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  for (int i = 0; i < orders_size(); i++) {
    if (!this->orders(i).IsInitialized()) return false;
  }
  return true;
}

void ExecutionSignal::Swap(ExecutionSignal* other) {
  if (other != this) {
    std::swap(comment_, other->comment_);
    std::swap(destination_, other->destination_);
    orders_.Swap(&other->orders_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ExecutionSignal::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ExecutionSignal_descriptor_;
  metadata.reflection = ExecutionSignal_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ProtoTypes

// @@protoc_insertion_point(global_scope)
