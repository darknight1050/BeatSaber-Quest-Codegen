// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MemoryPoolBase`1
#include "Zenject/MemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`1
#include "Zenject/IMemoryPool_1.hpp"
// Including type: Zenject.IFactory`1
#include "Zenject/IFactory_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.MemoryPool`1
  // [] Offset: FFFFFFFF
  template<typename TValue>
  class MemoryPool_1 : public Zenject::MemoryPoolBase_1<TValue>/*, public Zenject::IMemoryPool_1<TValue>, public Zenject::IFactory_1<TValue>*/ {
    public:
    // Creating value type constructor for type: MemoryPool_1
    MemoryPool_1() noexcept {}
    // Creating interface conversion operator: operator Zenject::IMemoryPool_1<TValue>
    operator Zenject::IMemoryPool_1<TValue>() noexcept {
      return *reinterpret_cast<Zenject::IMemoryPool_1<TValue>*>(this);
    }
    // Creating interface conversion operator: operator Zenject::IFactory_1<TValue>
    operator Zenject::IFactory_1<TValue>() noexcept {
      return *reinterpret_cast<Zenject::IFactory_1<TValue>*>(this);
    }
    // protected System.Void Reinitialize(TValue item)
    // Offset: 0xFFFFFFFF
    void Reinitialize(TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPool_1::Reinitialize");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Reinitialize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
    }
    // public TValue Spawn()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IMemoryPool`1
    // Base method: TValue IMemoryPool_1::Spawn()
    TValue Spawn() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPool_1::Spawn");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method);
    }
    // private TValue Zenject.IFactory<TValue>.Create()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactory`1
    // Base method: TValue IFactory_1::Create()
    TValue Zenject_IFactory_1_Create() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPool_1::Zenject.IFactory<TValue>.Create");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Zenject.IFactory<TValue>.Create", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryPool_1<TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryPool_1<TValue>*, creationType>()));
    }
  }; // Zenject.MemoryPool`1
  // Could not write size check! Type: Zenject.MemoryPool`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPool_1, "Zenject", "MemoryPool`1");
