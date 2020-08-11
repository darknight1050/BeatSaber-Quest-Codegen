// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.SByteTypeInfo
#include "System/Diagnostics/Tracing/SByteTypeInfo.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingDataCollector
#include "System/Diagnostics/Tracing/TraceLoggingDataCollector.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingMetadataCollector
#include "System/Diagnostics/Tracing/TraceLoggingMetadataCollector.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldFormat
#include "System/Diagnostics/Tracing/EventFieldFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Diagnostics.Tracing.SByteTypeInfo.WriteData
void System::Diagnostics::Tracing::SByteTypeInfo::WriteData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, int8_t& value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteData", collector, value));
}
// Autogenerated method: System.Diagnostics.Tracing.SByteTypeInfo.WriteMetadata
void System::Diagnostics::Tracing::SByteTypeInfo::WriteMetadata(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::CsString* name, System::Diagnostics::Tracing::EventFieldFormat format) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteMetadata", collector, name, format));
}
// Autogenerated method: System.Diagnostics.Tracing.SByteTypeInfo..ctor
System::Diagnostics::Tracing::SByteTypeInfo* System::Diagnostics::Tracing::SByteTypeInfo::New_ctor() {
  return (SByteTypeInfo*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "SByteTypeInfo"));
}
