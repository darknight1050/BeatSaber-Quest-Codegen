// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: Zenject.IDespawnableMemoryPool`1
#include "Zenject/IDespawnableMemoryPool_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.IMemoryPool`1
  // [] Offset: FFFFFFFF
  template<typename TValue>
  class IMemoryPool_1/*, public Zenject::IDespawnableMemoryPool_1<TValue>*/ {
    public:
    // Creating value type constructor for type: IMemoryPool_1
    IMemoryPool_1() noexcept {}
    // Creating interface conversion operator: operator Zenject::IDespawnableMemoryPool_1<TValue>
    operator Zenject::IDespawnableMemoryPool_1<TValue>() noexcept {
      return *reinterpret_cast<Zenject::IDespawnableMemoryPool_1<TValue>*>(this);
    }
    // public TValue Spawn()
    // Offset: 0xFFFFFFFF
    TValue Spawn_NEW() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IMemoryPool_1::Spawn_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method);
    }
  }; // Zenject.IMemoryPool`1
  // Could not write size check! Type: Zenject.IMemoryPool`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IMemoryPool_1, "Zenject", "IMemoryPool`1");
