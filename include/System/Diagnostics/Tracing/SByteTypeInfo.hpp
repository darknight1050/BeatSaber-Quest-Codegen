// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
#include "System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
  // Forward declaring type: TraceLoggingMetadataCollector
  class TraceLoggingMetadataCollector;
  // Forward declaring type: EventFieldFormat
  struct EventFieldFormat;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.SByteTypeInfo
  class SByteTypeInfo : public System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<int8_t> {
    public:
    // public System.Void WriteData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, System.SByte value)
    // Offset: 0xD861C8
    void WriteData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, int8_t& value);
    // public override System.Void WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    // Offset: 0xD86138
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo
    // Base method: System.Void TraceLoggingTypeInfo::WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    void WriteMetadata(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::CsString* name, System::Diagnostics::Tracing::EventFieldFormat format);
    // public System.Void .ctor()
    // Offset: 0xD86240
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
    // Base method: System.Void TraceLoggingTypeInfo`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static SByteTypeInfo* New_ctor();
  }; // System.Diagnostics.Tracing.SByteTypeInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::SByteTypeInfo*, "System.Diagnostics.Tracing", "SByteTypeInfo");
#pragma pack(pop)
