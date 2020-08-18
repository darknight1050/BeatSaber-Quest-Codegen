// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingTypeInfo
  class TraceLoggingTypeInfo;
  // Forward declaring type: EventFieldAttribute
  class EventFieldAttribute;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.PropertyAnalysis
  class PropertyAnalysis : public ::Il2CppObject {
    public:
    // readonly System.String name
    // Offset: 0x10
    ::Il2CppString* name;
    // readonly System.Reflection.MethodInfo getterInfo
    // Offset: 0x18
    System::Reflection::MethodInfo* getterInfo;
    // readonly System.Diagnostics.Tracing.TraceLoggingTypeInfo typeInfo
    // Offset: 0x20
    System::Diagnostics::Tracing::TraceLoggingTypeInfo* typeInfo;
    // readonly System.Diagnostics.Tracing.EventFieldAttribute fieldAttribute
    // Offset: 0x28
    System::Diagnostics::Tracing::EventFieldAttribute* fieldAttribute;
    // public System.Void .ctor(System.String name, System.Reflection.MethodInfo getterInfo, System.Diagnostics.Tracing.TraceLoggingTypeInfo typeInfo, System.Diagnostics.Tracing.EventFieldAttribute fieldAttribute)
    // Offset: 0xCF9BA4
    static PropertyAnalysis* New_ctor(::Il2CppString* name, System::Reflection::MethodInfo* getterInfo, System::Diagnostics::Tracing::TraceLoggingTypeInfo* typeInfo, System::Diagnostics::Tracing::EventFieldAttribute* fieldAttribute);
  }; // System.Diagnostics.Tracing.PropertyAnalysis
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::PropertyAnalysis*, "System.Diagnostics.Tracing", "PropertyAnalysis");
#pragma pack(pop)
