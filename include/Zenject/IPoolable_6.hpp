// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.IPoolable`6
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
  class IPoolable_6 {
    public:
    // Creating value type constructor for type: IPoolable_6
    IPoolable_6() noexcept {}
    // public System.Void OnDespawned()
    // Offset: 0xFFFFFFFF
    void OnDespawned() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IPoolable_6::OnDespawned");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnDespawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6)
    // Offset: 0xFFFFFFFF
    void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IPoolable_6::OnSpawned");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnSpawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(p3), ::il2cpp_utils::ExtractType(p4), ::il2cpp_utils::ExtractType(p5), ::il2cpp_utils::ExtractType(p6)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, p1, p2, p3, p4, p5, p6);
    }
  }; // Zenject.IPoolable`6
  // Could not write size check! Type: Zenject.IPoolable`6 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IPoolable_6, "Zenject", "IPoolable`6");
