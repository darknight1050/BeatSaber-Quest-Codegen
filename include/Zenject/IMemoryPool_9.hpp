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
  // Autogenerated type: Zenject.IMemoryPool`9
  // [] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TValue>
  class IMemoryPool_9/*, public Zenject::IDespawnableMemoryPool_1<TValue>*/ {
    public:
    // Creating value type constructor for type: IMemoryPool_9
    IMemoryPool_9() noexcept {}
    // Creating interface conversion operator: operator Zenject::IDespawnableMemoryPool_1<TValue>
    operator Zenject::IDespawnableMemoryPool_1<TValue>() noexcept {
      return *reinterpret_cast<Zenject::IDespawnableMemoryPool_1<TValue>*>(this);
    }
    // public TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6, TParam7 param7, TParam8 param8)
    // Offset: 0xFFFFFFFF
    TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6, TParam7 param7, TParam8 param8) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IMemoryPool_9::Spawn");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(param1, param2, param3, param4, param5, param6, param7, param8)));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method, param1, param2, param3, param4, param5, param6, param7, param8);
    }
  }; // Zenject.IMemoryPool`9
  // Could not write size check! Type: Zenject.IMemoryPool`9 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IMemoryPool_9, "Zenject", "IMemoryPool`9");
