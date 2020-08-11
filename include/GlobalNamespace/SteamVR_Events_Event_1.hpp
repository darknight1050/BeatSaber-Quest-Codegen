// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_Events/Event`1
  template<typename T>
  class SteamVR_Events::Event_1 : public UnityEngine::Events::UnityEvent_1<T> {
    public:
    // public System.Void Listen(UnityEngine.Events.UnityAction`1<T> action)
    // Offset: 0xFFFFFFFF
    void Listen(UnityEngine::Events::UnityAction_1<T>* action) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Listen", action));
    }
    // public System.Void Remove(UnityEngine.Events.UnityAction`1<T> action)
    // Offset: 0xFFFFFFFF
    void Remove(UnityEngine::Events::UnityAction_1<T>* action) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Remove", action));
    }
    // public System.Void Send(T arg0)
    // Offset: 0xFFFFFFFF
    void Send(T arg0) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Send", arg0));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent`1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static SteamVR_Events::Event_1<T>* New_ctor() {
      return (SteamVR_Events::Event_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SteamVR_Events::Event_1<T>*>::get()));
    }
  }; // SteamVR_Events/Event`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::SteamVR_Events::Event_1, "", "SteamVR_Events/Event`1");
#pragma pack(pop)
