// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinder0Extensions
#include "Zenject/FactoryFromBinder0Extensions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryFromBinder0Extensions/<>c__DisplayClass6_0`1
  // [CompilerGeneratedAttribute] Offset: DDD898
  template<typename TContract>
  class FactoryFromBinder0Extensions::$$c__DisplayClass6_0_1 : public ::Il2CppObject {
    public:
    // public System.Guid factoryId
    // Size: 0x10
    // Offset: 0x0
    System::Guid factoryId;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    // Creating value type constructor for type: $$c__DisplayClass6_0_1
    $$c__DisplayClass6_0_1(System::Guid factoryId_ = {}) noexcept : factoryId{factoryId_} {}
    // Creating conversion operator: operator System::Guid
    constexpr operator System::Guid() const noexcept {
      return factoryId;
    }
    // Zenject.IProvider <FromIFactory>b__0(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $FromIFactory$b__0(Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder0Extensions::$$c__DisplayClass6_0_1::<FromIFactory>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromIFactory>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinder0Extensions::$$c__DisplayClass6_0_1<TContract>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder0Extensions::$$c__DisplayClass6_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinder0Extensions::$$c__DisplayClass6_0_1<TContract>*, creationType>()));
    }
  }; // Zenject.FactoryFromBinder0Extensions/<>c__DisplayClass6_0`1
  // Could not write size check! Type: Zenject.FactoryFromBinder0Extensions/<>c__DisplayClass6_0`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder0Extensions::$$c__DisplayClass6_0_1, "Zenject", "FactoryFromBinder0Extensions/<>c__DisplayClass6_0`1");
