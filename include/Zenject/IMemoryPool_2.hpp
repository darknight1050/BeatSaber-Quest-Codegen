// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: Zenject.IDespawnableMemoryPool`1
#include "Zenject/IDespawnableMemoryPool_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.IMemoryPool`2
  // [] Offset: FFFFFFFF
  template<typename TParam1, typename TValue>
  class IMemoryPool_2/*, public Zenject::IDespawnableMemoryPool_1<TValue>*/ {
    public:
    // Creating value type constructor for type: IMemoryPool_2
    IMemoryPool_2() noexcept {}
    // Creating interface conversion operator: operator Zenject::IDespawnableMemoryPool_1<TValue>
    operator Zenject::IDespawnableMemoryPool_1<TValue>() noexcept {
      return *reinterpret_cast<Zenject::IDespawnableMemoryPool_1<TValue>*>(this);
    }
    // public TValue Spawn(TParam1 param)
    // Offset: 0xFFFFFFFF
    TValue Spawn(TParam1 param) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IMemoryPool_2::Spawn");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(param)));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method, param);
    }
  }; // Zenject.IMemoryPool`2
  // Could not write size check! Type: Zenject.IMemoryPool`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IMemoryPool_2, "Zenject", "IMemoryPool`2");
