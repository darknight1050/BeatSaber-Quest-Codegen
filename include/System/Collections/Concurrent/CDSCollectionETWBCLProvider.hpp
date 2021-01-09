// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.EventSource
#include "System/Diagnostics/Tracing/EventSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Concurrent
namespace System::Collections::Concurrent {
  // Size: 0xD0
  // Autogenerated type: System.Collections.Concurrent.CDSCollectionETWBCLProvider
  // [] Offset: FFFFFFFF
  // [EventSourceAttribute] Offset: D3CED0
  class CDSCollectionETWBCLProvider : public System::Diagnostics::Tracing::EventSource {
    public:
    // Creating value type constructor for type: CDSCollectionETWBCLProvider
    CDSCollectionETWBCLProvider() noexcept {}
    // Get static field: static public System.Collections.Concurrent.CDSCollectionETWBCLProvider Log
    static System::Collections::Concurrent::CDSCollectionETWBCLProvider* _get_Log();
    // Set static field: static public System.Collections.Concurrent.CDSCollectionETWBCLProvider Log
    static void _set_Log(System::Collections::Concurrent::CDSCollectionETWBCLProvider* value);
    // public System.Void ConcurrentDictionary_AcquiringAllLocks(System.Int32 numOfBuckets)
    // Offset: 0x1CB563C
    void ConcurrentDictionary_AcquiringAllLocks(int numOfBuckets);
    // private System.Void .ctor()
    // Offset: 0x1CB55D4
    // Implemented from: System.Diagnostics.Tracing.EventSource
    // Base method: System.Void EventSource::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CDSCollectionETWBCLProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::CDSCollectionETWBCLProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CDSCollectionETWBCLProvider*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1CB568C
    // Implemented from: System.Diagnostics.Tracing.EventSource
    // Base method: System.Void EventSource::.cctor()
    static void _cctor();
  }; // System.Collections.Concurrent.CDSCollectionETWBCLProvider
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Concurrent::CDSCollectionETWBCLProvider*, "System.Collections.Concurrent", "CDSCollectionETWBCLProvider");
#pragma pack(pop)
