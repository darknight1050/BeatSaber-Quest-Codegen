// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass64_1
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D938F8
  class FromBinder::$$c__DisplayClass64_1 : public ::Il2CppObject {
    public:
    // public UnityEngine.MonoBehaviour monoBehaviour
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::MonoBehaviour* monoBehaviour;
    // Field size check
    static_assert(sizeof(UnityEngine::MonoBehaviour*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass64_1
    $$c__DisplayClass64_1(UnityEngine::MonoBehaviour* monoBehaviour_ = {}) noexcept : monoBehaviour{monoBehaviour_} {}
    // Creating conversion operator: operator UnityEngine::MonoBehaviour*
    constexpr operator UnityEngine::MonoBehaviour*() const noexcept {
      return monoBehaviour;
    }
    // System.Boolean <FromComponentsSibling>b__2(UnityEngine.Component x)
    // Offset: 0x129C940
    bool $FromComponentsSibling$b__2(UnityEngine::Component* x);
    // public System.Void .ctor()
    // Offset: 0x129C938
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass64_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass64_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass64_1*, creationType>()));
    }
  }; // Zenject.FromBinder/<>c__DisplayClass64_1
  static check_size<sizeof(FromBinder::$$c__DisplayClass64_1), 16 + sizeof(UnityEngine::MonoBehaviour*)> __Zenject_FromBinder_$$c__DisplayClass64_1SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass64_1) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass64_1*, "Zenject", "FromBinder/<>c__DisplayClass64_1");
#pragma pack(pop)
