// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.ActivityFilter
#include "System/Diagnostics/Tracing/ActivityFilter.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.ActivityFilter/<>c__DisplayClass13_0
  class ActivityFilter::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    // public System.Int32 tickNow
    // Offset: 0x10
    int tickNow;
    // System.Int32 <TrimActiveActivityStore>b__0(System.Collections.Generic.KeyValuePair`2<System.Guid,System.Int32> x, System.Collections.Generic.KeyValuePair`2<System.Guid,System.Int32> y)
    // Offset: 0xBF4C64
    int $TrimActiveActivityStore$b__0(System::Collections::Generic::KeyValuePair_2<System::Guid, int> x, System::Collections::Generic::KeyValuePair_2<System::Guid, int> y);
    // public System.Void .ctor()
    // Offset: 0xBF4BA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ActivityFilter::$$c__DisplayClass13_0* New_ctor();
  }; // System.Diagnostics.Tracing.ActivityFilter/<>c__DisplayClass13_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::ActivityFilter::$$c__DisplayClass13_0*, "System.Diagnostics.Tracing", "ActivityFilter/<>c__DisplayClass13_0");
#pragma pack(pop)
