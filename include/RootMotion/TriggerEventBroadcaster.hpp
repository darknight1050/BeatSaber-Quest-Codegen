// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.TriggerEventBroadcaster
  class TriggerEventBroadcaster : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.GameObject target
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* target;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // Creating value type constructor for type: TriggerEventBroadcaster
    TriggerEventBroadcaster(UnityEngine::GameObject* target_ = {}) noexcept : target{target_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void OnTriggerEnter(UnityEngine.Collider collider)
    // Offset: 0x1A99F60
    void OnTriggerEnter(UnityEngine::Collider* collider);
    // private System.Void OnTriggerStay(UnityEngine.Collider collider)
    // Offset: 0x1A9A018
    void OnTriggerStay(UnityEngine::Collider* collider);
    // private System.Void OnTriggerExit(UnityEngine.Collider collider)
    // Offset: 0x1A9A0D0
    void OnTriggerExit(UnityEngine::Collider* collider);
    // public System.Void .ctor()
    // Offset: 0x1A9A188
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TriggerEventBroadcaster* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::TriggerEventBroadcaster::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TriggerEventBroadcaster*, creationType>()));
    }
  }; // RootMotion.TriggerEventBroadcaster
  #pragma pack(pop)
  static check_size<sizeof(TriggerEventBroadcaster), 24 + sizeof(UnityEngine::GameObject*)> __RootMotion_TriggerEventBroadcasterSizeCheck;
  static_assert(sizeof(TriggerEventBroadcaster) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::TriggerEventBroadcaster*, "RootMotion", "TriggerEventBroadcaster");
