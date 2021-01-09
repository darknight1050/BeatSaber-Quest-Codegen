// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.IPoolable`3
  // [] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3>
  class IPoolable_3 {
    public:
    // Creating value type constructor for type: IPoolable_3
    IPoolable_3() noexcept {}
    // public System.Void OnDespawned()
    // Offset: 0xFFFFFFFF
    void OnDespawned() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IPoolable_3::OnDespawned");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnDespawned", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3)
    // Offset: 0xFFFFFFFF
    void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IPoolable_3::OnSpawned");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnSpawned", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(p1, p2, p3)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, p1, p2, p3);
    }
  }; // Zenject.IPoolable`3
  // Could not write size check! Type: Zenject.IPoolable`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IPoolable_3, "Zenject", "IPoolable`3");
