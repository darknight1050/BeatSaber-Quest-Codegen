// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass69_0`1
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D93988
  template<typename TConcrete>
  class FromBinder::$$c__DisplayClass69_0_1 : public ::Il2CppObject {
    public:
    // public System.Func`2<Zenject.InjectContext,TConcrete> method
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<Zenject::InjectContext*, TConcrete>* method;
    // Field size check
    static_assert(sizeof(System::Func_2<Zenject::InjectContext*, TConcrete>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass69_0_1
    $$c__DisplayClass69_0_1(System::Func_2<Zenject::InjectContext*, TConcrete>* method_ = {}) noexcept : method{method_} {}
    // Creating conversion operator: operator System::Func_2<Zenject::InjectContext*, TConcrete>*
    constexpr operator System::Func_2<Zenject::InjectContext*, TConcrete>*() const noexcept {
      return method;
    }
    // Zenject.IProvider <FromMethodBase>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $FromMethodBase$b__0(Zenject::DiContainer* container, System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass69_0_1::<FromMethodBase>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromMethodBase>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(container, type))));
      return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container, type);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass69_0_1<TConcrete>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass69_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass69_0_1<TConcrete>*, creationType>()));
    }
  }; // Zenject.FromBinder/<>c__DisplayClass69_0`1
  // Could not write size check! Type: Zenject.FromBinder/<>c__DisplayClass69_0`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FromBinder::$$c__DisplayClass69_0_1, "Zenject", "FromBinder/<>c__DisplayClass69_0`1");
