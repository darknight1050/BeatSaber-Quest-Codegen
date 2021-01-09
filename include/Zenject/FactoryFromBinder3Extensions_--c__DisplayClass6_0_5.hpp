// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinder3Extensions
#include "Zenject/FactoryFromBinder3Extensions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`4<TParam1, TParam2, TParam3, TParam4>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  class IPoolable_4;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPool`5<TParam1, TParam2, TParam3, TParam4, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
  class MemoryPool_5;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryFromBinder3Extensions/<>c__DisplayClass6_0`5
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D93298
  template<typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TMemoryPool>
  class FactoryFromBinder3Extensions::$$c__DisplayClass6_0_5 : public ::Il2CppObject {
    public:
    // public System.Guid poolId
    // Size: 0x10
    // Offset: 0x0
    System::Guid poolId;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    // Creating value type constructor for type: $$c__DisplayClass6_0_5
    $$c__DisplayClass6_0_5(System::Guid poolId_ = {}) noexcept : poolId{poolId_} {}
    // Creating conversion operator: operator System::Guid
    constexpr operator System::Guid() const noexcept {
      return poolId;
    }
    // Zenject.IProvider <FromPoolableMemoryPool>b__0(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $FromPoolableMemoryPool$b__0(Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass6_0_5::<FromPoolableMemoryPool>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromPoolableMemoryPool>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(container))));
      return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinder3Extensions::$$c__DisplayClass6_0_5<TParam1, TParam2, TParam3, TContract, TMemoryPool>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass6_0_5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinder3Extensions::$$c__DisplayClass6_0_5<TParam1, TParam2, TParam3, TContract, TMemoryPool>*, creationType>()));
    }
  }; // Zenject.FactoryFromBinder3Extensions/<>c__DisplayClass6_0`5
  // Could not write size check! Type: Zenject.FactoryFromBinder3Extensions/<>c__DisplayClass6_0`5 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass6_0_5, "Zenject", "FactoryFromBinder3Extensions/<>c__DisplayClass6_0`5");
