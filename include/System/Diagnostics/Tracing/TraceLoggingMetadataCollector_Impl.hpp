// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.TraceLoggingMetadataCollector
#include "System/Diagnostics/Tracing/TraceLoggingMetadataCollector.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: FieldMetadata
  class FieldMetadata;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x21
  // Autogenerated type: System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl
  // [] Offset: FFFFFFFF
  class TraceLoggingMetadataCollector::Impl : public ::Il2CppObject {
    public:
    // readonly System.Collections.Generic.List`1<System.Diagnostics.Tracing.FieldMetadata> fields
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Diagnostics::Tracing::FieldMetadata*>* fields;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Diagnostics::Tracing::FieldMetadata*>*) == 0x8);
    // System.Int16 scratchSize
    // Size: 0x2
    // Offset: 0x18
    int16_t scratchSize;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // System.SByte dataCount
    // Size: 0x1
    // Offset: 0x1A
    int8_t dataCount;
    // Field size check
    static_assert(sizeof(int8_t) == 0x1);
    // System.SByte pinCount
    // Size: 0x1
    // Offset: 0x1B
    int8_t pinCount;
    // Field size check
    static_assert(sizeof(int8_t) == 0x1);
    // private System.Int32 bufferNesting
    // Size: 0x4
    // Offset: 0x1C
    int bufferNesting;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean scalar
    // Size: 0x1
    // Offset: 0x20
    bool scalar;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Impl
    Impl(System::Collections::Generic::List_1<System::Diagnostics::Tracing::FieldMetadata*>* fields_ = {}, int16_t scratchSize_ = {}, int8_t dataCount_ = {}, int8_t pinCount_ = {}, int bufferNesting_ = {}, bool scalar_ = {}) noexcept : fields{fields_}, scratchSize{scratchSize_}, dataCount{dataCount_}, pinCount{pinCount_}, bufferNesting{bufferNesting_}, scalar{scalar_} {}
    // public System.Void AddScalar(System.Int32 size)
    // Offset: 0x1121DD8
    void AddScalar(int size);
    // public System.Void AddNonscalar()
    // Offset: 0x1121E80
    void AddNonscalar();
    // public System.Void BeginBuffered()
    // Offset: 0x1121FBC
    void BeginBuffered();
    // public System.Void EndBuffered()
    // Offset: 0x11220A0
    void EndBuffered();
    // public System.Int32 Encode(System.Byte[] metadata)
    // Offset: 0x11220B0
    int Encode(::Array<uint8_t>* metadata);
    // public System.Void .ctor()
    // Offset: 0x1121B70
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceLoggingMetadataCollector::Impl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceLoggingMetadataCollector::Impl*, creationType>()));
    }
  }; // System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl
  static check_size<sizeof(TraceLoggingMetadataCollector::Impl), 32 + sizeof(bool)> __System_Diagnostics_Tracing_TraceLoggingMetadataCollector_ImplSizeCheck;
  static_assert(sizeof(TraceLoggingMetadataCollector::Impl) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl*, "System.Diagnostics.Tracing", "TraceLoggingMetadataCollector/Impl");
#pragma pack(pop)
