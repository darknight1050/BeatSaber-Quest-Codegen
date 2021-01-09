// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IPrefabProvider
#include "Zenject/IPrefabProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  // Autogenerated type: Zenject.PrefabProvider
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D92AA0
  class PrefabProvider : public ::Il2CppObject/*, public Zenject::IPrefabProvider*/ {
    public:
    // private readonly UnityEngine.Object _prefab
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Object* prefab;
    // Field size check
    static_assert(sizeof(UnityEngine::Object*) == 0x8);
    // Creating value type constructor for type: PrefabProvider
    PrefabProvider(UnityEngine::Object* prefab_ = {}) noexcept : prefab{prefab_} {}
    // Creating interface conversion operator: operator Zenject::IPrefabProvider
    operator Zenject::IPrefabProvider() noexcept {
      return *reinterpret_cast<Zenject::IPrefabProvider*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Object*
    constexpr operator UnityEngine::Object*() const noexcept {
      return prefab;
    }
    // public System.Void .ctor(UnityEngine.Object prefab)
    // Offset: 0x134A694
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabProvider* New_ctor(UnityEngine::Object* prefab) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabProvider*, creationType>(prefab)));
    }
    // public UnityEngine.Object GetPrefab()
    // Offset: 0x134BA84
    // Implemented from: Zenject.IPrefabProvider
    // Base method: UnityEngine.Object IPrefabProvider::GetPrefab()
    UnityEngine::Object* GetPrefab();
  }; // Zenject.PrefabProvider
  static check_size<sizeof(PrefabProvider), 16 + sizeof(UnityEngine::Object*)> __Zenject_PrefabProviderSizeCheck;
  static_assert(sizeof(PrefabProvider) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabProvider*, "Zenject", "PrefabProvider");
#pragma pack(pop)
