// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/calculators/util/rect_to_render_data_calculator.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2futil_2frect_5fto_5frender_5fdata_5fcalculator_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2futil_2frect_5fto_5frender_5fdata_5fcalculator_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "mediapipe/framework/calculator.pb.h"
#include "mediapipe/util/color.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_mediapipe_2fcalculators_2futil_2frect_5fto_5frender_5fdata_5fcalculator_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_mediapipe_2fcalculators_2futil_2frect_5fto_5frender_5fdata_5fcalculator_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fcalculators_2futil_2frect_5fto_5frender_5fdata_5fcalculator_2eproto;
namespace mediapipe {
class RectToRenderDataCalculatorOptions;
struct RectToRenderDataCalculatorOptionsDefaultTypeInternal;
extern RectToRenderDataCalculatorOptionsDefaultTypeInternal _RectToRenderDataCalculatorOptions_default_instance_;
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> ::mediapipe::RectToRenderDataCalculatorOptions* Arena::CreateMaybeMessage<::mediapipe::RectToRenderDataCalculatorOptions>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mediapipe {

// ===================================================================

class RectToRenderDataCalculatorOptions final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.RectToRenderDataCalculatorOptions) */ {
 public:
  inline RectToRenderDataCalculatorOptions() : RectToRenderDataCalculatorOptions(nullptr) {}
  ~RectToRenderDataCalculatorOptions() override;
  explicit constexpr RectToRenderDataCalculatorOptions(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RectToRenderDataCalculatorOptions(const RectToRenderDataCalculatorOptions& from);
  RectToRenderDataCalculatorOptions(RectToRenderDataCalculatorOptions&& from) noexcept
    : RectToRenderDataCalculatorOptions() {
    *this = ::std::move(from);
  }

  inline RectToRenderDataCalculatorOptions& operator=(const RectToRenderDataCalculatorOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline RectToRenderDataCalculatorOptions& operator=(RectToRenderDataCalculatorOptions&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const RectToRenderDataCalculatorOptions& default_instance() {
    return *internal_default_instance();
  }
  static inline const RectToRenderDataCalculatorOptions* internal_default_instance() {
    return reinterpret_cast<const RectToRenderDataCalculatorOptions*>(
               &_RectToRenderDataCalculatorOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RectToRenderDataCalculatorOptions& a, RectToRenderDataCalculatorOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(RectToRenderDataCalculatorOptions* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RectToRenderDataCalculatorOptions* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RectToRenderDataCalculatorOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RectToRenderDataCalculatorOptions>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RectToRenderDataCalculatorOptions& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const RectToRenderDataCalculatorOptions& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RectToRenderDataCalculatorOptions* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.RectToRenderDataCalculatorOptions";
  }
  protected:
  explicit RectToRenderDataCalculatorOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kColorFieldNumber = 2,
    kFilledFieldNumber = 1,
    kOvalFieldNumber = 4,
    kThicknessFieldNumber = 3,
  };
  // optional .mediapipe.Color color = 2;
  bool has_color() const;
  private:
  bool _internal_has_color() const;
  public:
  void clear_color();
  const ::mediapipe::Color& color() const;
  PROTOBUF_NODISCARD ::mediapipe::Color* release_color();
  ::mediapipe::Color* mutable_color();
  void set_allocated_color(::mediapipe::Color* color);
  private:
  const ::mediapipe::Color& _internal_color() const;
  ::mediapipe::Color* _internal_mutable_color();
  public:
  void unsafe_arena_set_allocated_color(
      ::mediapipe::Color* color);
  ::mediapipe::Color* unsafe_arena_release_color();

  // optional bool filled = 1;
  bool has_filled() const;
  private:
  bool _internal_has_filled() const;
  public:
  void clear_filled();
  bool filled() const;
  void set_filled(bool value);
  private:
  bool _internal_filled() const;
  void _internal_set_filled(bool value);
  public:

  // optional bool oval = 4 [default = false];
  bool has_oval() const;
  private:
  bool _internal_has_oval() const;
  public:
  void clear_oval();
  bool oval() const;
  void set_oval(bool value);
  private:
  bool _internal_oval() const;
  void _internal_set_oval(bool value);
  public:

  // optional double thickness = 3 [default = 1];
  bool has_thickness() const;
  private:
  bool _internal_has_thickness() const;
  public:
  void clear_thickness();
  double thickness() const;
  void set_thickness(double value);
  private:
  double _internal_thickness() const;
  void _internal_set_thickness(double value);
  public:

  static const int kExtFieldNumber = 262270380;
  static ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::mediapipe::CalculatorOptions,
      ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::mediapipe::RectToRenderDataCalculatorOptions >, 11, false >
    ext;
  // @@protoc_insertion_point(class_scope:mediapipe.RectToRenderDataCalculatorOptions)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::mediapipe::Color* color_;
  bool filled_;
  bool oval_;
  double thickness_;
  friend struct ::TableStruct_mediapipe_2fcalculators_2futil_2frect_5fto_5frender_5fdata_5fcalculator_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RectToRenderDataCalculatorOptions

// optional bool filled = 1;
inline bool RectToRenderDataCalculatorOptions::_internal_has_filled() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool RectToRenderDataCalculatorOptions::has_filled() const {
  return _internal_has_filled();
}
inline void RectToRenderDataCalculatorOptions::clear_filled() {
  filled_ = false;
  _has_bits_[0] &= ~0x00000002u;
}
inline bool RectToRenderDataCalculatorOptions::_internal_filled() const {
  return filled_;
}
inline bool RectToRenderDataCalculatorOptions::filled() const {
  // @@protoc_insertion_point(field_get:mediapipe.RectToRenderDataCalculatorOptions.filled)
  return _internal_filled();
}
inline void RectToRenderDataCalculatorOptions::_internal_set_filled(bool value) {
  _has_bits_[0] |= 0x00000002u;
  filled_ = value;
}
inline void RectToRenderDataCalculatorOptions::set_filled(bool value) {
  _internal_set_filled(value);
  // @@protoc_insertion_point(field_set:mediapipe.RectToRenderDataCalculatorOptions.filled)
}

// optional .mediapipe.Color color = 2;
inline bool RectToRenderDataCalculatorOptions::_internal_has_color() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || color_ != nullptr);
  return value;
}
inline bool RectToRenderDataCalculatorOptions::has_color() const {
  return _internal_has_color();
}
inline const ::mediapipe::Color& RectToRenderDataCalculatorOptions::_internal_color() const {
  const ::mediapipe::Color* p = color_;
  return p != nullptr ? *p : reinterpret_cast<const ::mediapipe::Color&>(
      ::mediapipe::_Color_default_instance_);
}
inline const ::mediapipe::Color& RectToRenderDataCalculatorOptions::color() const {
  // @@protoc_insertion_point(field_get:mediapipe.RectToRenderDataCalculatorOptions.color)
  return _internal_color();
}
inline void RectToRenderDataCalculatorOptions::unsafe_arena_set_allocated_color(
    ::mediapipe::Color* color) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(color_);
  }
  color_ = color;
  if (color) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:mediapipe.RectToRenderDataCalculatorOptions.color)
}
inline ::mediapipe::Color* RectToRenderDataCalculatorOptions::release_color() {
  _has_bits_[0] &= ~0x00000001u;
  ::mediapipe::Color* temp = color_;
  color_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::mediapipe::Color* RectToRenderDataCalculatorOptions::unsafe_arena_release_color() {
  // @@protoc_insertion_point(field_release:mediapipe.RectToRenderDataCalculatorOptions.color)
  _has_bits_[0] &= ~0x00000001u;
  ::mediapipe::Color* temp = color_;
  color_ = nullptr;
  return temp;
}
inline ::mediapipe::Color* RectToRenderDataCalculatorOptions::_internal_mutable_color() {
  _has_bits_[0] |= 0x00000001u;
  if (color_ == nullptr) {
    auto* p = CreateMaybeMessage<::mediapipe::Color>(GetArenaForAllocation());
    color_ = p;
  }
  return color_;
}
inline ::mediapipe::Color* RectToRenderDataCalculatorOptions::mutable_color() {
  ::mediapipe::Color* _msg = _internal_mutable_color();
  // @@protoc_insertion_point(field_mutable:mediapipe.RectToRenderDataCalculatorOptions.color)
  return _msg;
}
inline void RectToRenderDataCalculatorOptions::set_allocated_color(::mediapipe::Color* color) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(color_);
  }
  if (color) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(color));
    if (message_arena != submessage_arena) {
      color = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, color, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  color_ = color;
  // @@protoc_insertion_point(field_set_allocated:mediapipe.RectToRenderDataCalculatorOptions.color)
}

// optional double thickness = 3 [default = 1];
inline bool RectToRenderDataCalculatorOptions::_internal_has_thickness() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool RectToRenderDataCalculatorOptions::has_thickness() const {
  return _internal_has_thickness();
}
inline void RectToRenderDataCalculatorOptions::clear_thickness() {
  thickness_ = 1;
  _has_bits_[0] &= ~0x00000008u;
}
inline double RectToRenderDataCalculatorOptions::_internal_thickness() const {
  return thickness_;
}
inline double RectToRenderDataCalculatorOptions::thickness() const {
  // @@protoc_insertion_point(field_get:mediapipe.RectToRenderDataCalculatorOptions.thickness)
  return _internal_thickness();
}
inline void RectToRenderDataCalculatorOptions::_internal_set_thickness(double value) {
  _has_bits_[0] |= 0x00000008u;
  thickness_ = value;
}
inline void RectToRenderDataCalculatorOptions::set_thickness(double value) {
  _internal_set_thickness(value);
  // @@protoc_insertion_point(field_set:mediapipe.RectToRenderDataCalculatorOptions.thickness)
}

// optional bool oval = 4 [default = false];
inline bool RectToRenderDataCalculatorOptions::_internal_has_oval() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool RectToRenderDataCalculatorOptions::has_oval() const {
  return _internal_has_oval();
}
inline void RectToRenderDataCalculatorOptions::clear_oval() {
  oval_ = false;
  _has_bits_[0] &= ~0x00000004u;
}
inline bool RectToRenderDataCalculatorOptions::_internal_oval() const {
  return oval_;
}
inline bool RectToRenderDataCalculatorOptions::oval() const {
  // @@protoc_insertion_point(field_get:mediapipe.RectToRenderDataCalculatorOptions.oval)
  return _internal_oval();
}
inline void RectToRenderDataCalculatorOptions::_internal_set_oval(bool value) {
  _has_bits_[0] |= 0x00000004u;
  oval_ = value;
}
inline void RectToRenderDataCalculatorOptions::set_oval(bool value) {
  _internal_set_oval(value);
  // @@protoc_insertion_point(field_set:mediapipe.RectToRenderDataCalculatorOptions.oval)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mediapipe

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2futil_2frect_5fto_5frender_5fdata_5fcalculator_2eproto
