// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.ExecuteEvents
#include "UnityEngine/EventSystems/ExecuteEvents.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: IEventSystemHandler
  class IEventSystemHandler;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.ExecuteEvents/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: CD8EAC
  class ExecuteEvents::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.EventSystems.ExecuteEvents/<>c <>9
    static UnityEngine::EventSystems::ExecuteEvents::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.EventSystems.ExecuteEvents/<>c <>9
    static void _set_$$9(UnityEngine::EventSystems::ExecuteEvents::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x1313190
    static void _cctor();
    // System.Void <.cctor>b__79_0(System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler> l)
    // Offset: 0x13131FC
    void $_cctor$b__79_0(System::Collections::Generic::List_1<UnityEngine::EventSystems::IEventSystemHandler*>* l);
    // public System.Void .ctor()
    // Offset: 0x13131F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExecuteEvents::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::ExecuteEvents::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExecuteEvents::$$c*, creationType>()));
    }
  }; // UnityEngine.EventSystems.ExecuteEvents/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::ExecuteEvents::$$c*, "UnityEngine.EventSystems", "ExecuteEvents/<>c");
