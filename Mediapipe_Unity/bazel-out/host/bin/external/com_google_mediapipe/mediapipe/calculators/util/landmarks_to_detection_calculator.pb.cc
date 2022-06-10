// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/calculators/util/landmarks_to_detection_calculator.proto

#include "mediapipe/calculators/util/landmarks_to_detection_calculator.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace mediapipe {
constexpr LandmarksToDetectionCalculatorOptions::LandmarksToDetectionCalculatorOptions(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : selected_landmark_indices_(){}
struct LandmarksToDetectionCalculatorOptionsDefaultTypeInternal {
  constexpr LandmarksToDetectionCalculatorOptionsDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~LandmarksToDetectionCalculatorOptionsDefaultTypeInternal() {}
  union {
    LandmarksToDetectionCalculatorOptions _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT LandmarksToDetectionCalculatorOptionsDefaultTypeInternal _LandmarksToDetectionCalculatorOptions_default_instance_;
}  // namespace mediapipe
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto = nullptr;

const uint32_t TableStruct_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mediapipe::LandmarksToDetectionCalculatorOptions, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::mediapipe::LandmarksToDetectionCalculatorOptions, selected_landmark_indices_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::mediapipe::LandmarksToDetectionCalculatorOptions)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_LandmarksToDetectionCalculatorOptions_default_instance_),
};

const char descriptor_table_protodef_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\nBmediapipe/calculators/util/landmarks_t"
  "o_detection_calculator.proto\022\tmediapipe\032"
  "$mediapipe/framework/calculator.proto\"\252\001"
  "\n%LandmarksToDetectionCalculatorOptions\022"
  "!\n\031selected_landmark_indices\030\001 \003(\0052^\n\003ex"
  "t\022\034.mediapipe.CalculatorOptions\030\365\251\211| \001(\013"
  "20.mediapipe.LandmarksToDetectionCalcula"
  "torOptions"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto_deps[1] = {
  &::descriptor_table_mediapipe_2fframework_2fcalculator_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto = {
  false, false, 290, descriptor_table_protodef_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto, "mediapipe/calculators/util/landmarks_to_detection_calculator.proto", 
  &descriptor_table_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto_once, descriptor_table_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto::offsets,
  file_level_metadata_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto, file_level_enum_descriptors_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto, file_level_service_descriptors_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto_getter() {
  return &descriptor_table_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto(&descriptor_table_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto);
namespace mediapipe {

// ===================================================================

class LandmarksToDetectionCalculatorOptions::_Internal {
 public:
};

LandmarksToDetectionCalculatorOptions::LandmarksToDetectionCalculatorOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  selected_landmark_indices_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:mediapipe.LandmarksToDetectionCalculatorOptions)
}
LandmarksToDetectionCalculatorOptions::LandmarksToDetectionCalculatorOptions(const LandmarksToDetectionCalculatorOptions& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      selected_landmark_indices_(from.selected_landmark_indices_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:mediapipe.LandmarksToDetectionCalculatorOptions)
}

inline void LandmarksToDetectionCalculatorOptions::SharedCtor() {
}

LandmarksToDetectionCalculatorOptions::~LandmarksToDetectionCalculatorOptions() {
  // @@protoc_insertion_point(destructor:mediapipe.LandmarksToDetectionCalculatorOptions)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void LandmarksToDetectionCalculatorOptions::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void LandmarksToDetectionCalculatorOptions::ArenaDtor(void* object) {
  LandmarksToDetectionCalculatorOptions* _this = reinterpret_cast< LandmarksToDetectionCalculatorOptions* >(object);
  (void)_this;
}
void LandmarksToDetectionCalculatorOptions::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LandmarksToDetectionCalculatorOptions::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void LandmarksToDetectionCalculatorOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.LandmarksToDetectionCalculatorOptions)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  selected_landmark_indices_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LandmarksToDetectionCalculatorOptions::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated int32 selected_landmark_indices = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_selected_landmark_indices(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<8>(ptr));
        } else if (static_cast<uint8_t>(tag) == 10) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_selected_landmark_indices(), ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* LandmarksToDetectionCalculatorOptions::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.LandmarksToDetectionCalculatorOptions)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 selected_landmark_indices = 1;
  for (int i = 0, n = this->_internal_selected_landmark_indices_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_selected_landmark_indices(i), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.LandmarksToDetectionCalculatorOptions)
  return target;
}

size_t LandmarksToDetectionCalculatorOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.LandmarksToDetectionCalculatorOptions)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 selected_landmark_indices = 1;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      Int32Size(this->selected_landmark_indices_);
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_selected_landmark_indices_size());
    total_size += data_size;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData LandmarksToDetectionCalculatorOptions::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    LandmarksToDetectionCalculatorOptions::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*LandmarksToDetectionCalculatorOptions::GetClassData() const { return &_class_data_; }

void LandmarksToDetectionCalculatorOptions::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<LandmarksToDetectionCalculatorOptions *>(to)->MergeFrom(
      static_cast<const LandmarksToDetectionCalculatorOptions &>(from));
}


void LandmarksToDetectionCalculatorOptions::MergeFrom(const LandmarksToDetectionCalculatorOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.LandmarksToDetectionCalculatorOptions)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  selected_landmark_indices_.MergeFrom(from.selected_landmark_indices_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void LandmarksToDetectionCalculatorOptions::CopyFrom(const LandmarksToDetectionCalculatorOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.LandmarksToDetectionCalculatorOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LandmarksToDetectionCalculatorOptions::IsInitialized() const {
  return true;
}

void LandmarksToDetectionCalculatorOptions::InternalSwap(LandmarksToDetectionCalculatorOptions* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  selected_landmark_indices_.InternalSwap(&other->selected_landmark_indices_);
}

::PROTOBUF_NAMESPACE_ID::Metadata LandmarksToDetectionCalculatorOptions::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto_getter, &descriptor_table_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto_once,
      file_level_metadata_mediapipe_2fcalculators_2futil_2flandmarks_5fto_5fdetection_5fcalculator_2eproto[0]);
}
#if !defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912)
const int LandmarksToDetectionCalculatorOptions::kExtFieldNumber;
#endif
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::mediapipe::CalculatorOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::mediapipe::LandmarksToDetectionCalculatorOptions >, 11, false >
  LandmarksToDetectionCalculatorOptions::ext(kExtFieldNumber, ::mediapipe::LandmarksToDetectionCalculatorOptions::default_instance());

// @@protoc_insertion_point(namespace_scope)
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mediapipe::LandmarksToDetectionCalculatorOptions* Arena::CreateMaybeMessage< ::mediapipe::LandmarksToDetectionCalculatorOptions >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mediapipe::LandmarksToDetectionCalculatorOptions >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>