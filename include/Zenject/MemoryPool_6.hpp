// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MemoryPoolBase`1
#include "Zenject/MemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`6
#include "Zenject/IMemoryPool_6.hpp"
// Including type: Zenject.IFactory`6
#include "Zenject/IFactory_6.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.MemoryPool`6
  // [] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
  class MemoryPool_6 : public Zenject::MemoryPoolBase_1<TValue>/*, public Zenject::IMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>, public Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*/ {
    public:
    // Creating value type constructor for type: MemoryPool_6
    MemoryPool_6() noexcept {}
    // Creating interface conversion operator: operator Zenject::IMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>
    operator Zenject::IMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>() noexcept {
      return *reinterpret_cast<Zenject::IMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>(this);
    }
    // Creating interface conversion operator: operator Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>
    operator Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>() noexcept {
      return *reinterpret_cast<Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>(this);
    }
    // public TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5)
    // Offset: 0xFFFFFFFF
    TValue Spawn_NEW(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPool_6::Spawn_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(param1, param2, param3, param4, param5)));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method, param1, param2, param3, param4, param5);
    }
    // protected System.Void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TValue item)
    // Offset: 0xFFFFFFFF
    void Reinitialize_NEW(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPool_6::Reinitialize_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Reinitialize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(p1, p2, p3, p4, p5, item)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, p1, p2, p3, p4, p5, item);
    }
    // private TValue Zenject.IFactory<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>.Create(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5)
    // Offset: 0xFFFFFFFF
    TValue Zenject_IFactory$TParam1_TParam2_TParam3_TParam4_TParam5_TValue$_Create_NEW(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPool_6::Zenject.IFactory<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>.Create_NEW");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Zenject.IFactory<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>.Create", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(p1, p2, p3, p4, p5))));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method, p1, p2, p3, p4, p5);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPool_6::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*, creationType>()));
    }
  }; // Zenject.MemoryPool`6
  // Could not write size check! Type: Zenject.MemoryPool`6 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPool_6, "Zenject", "MemoryPool`6");
