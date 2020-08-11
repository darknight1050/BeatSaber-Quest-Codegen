// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass69_0`1
  template<typename TConcrete>
  class FromBinder::$$c__DisplayClass69_0_1 : public ::CsObject {
    public:
    // public System.Func`2<Zenject.InjectContext,TConcrete> method
    // Offset: 0x0
    System::Func_2<Zenject::InjectContext*, TConcrete>* method;
    // Zenject.IProvider <FromMethodBase>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $FromMethodBase$b__0(Zenject::DiContainer* container, System::Type* type) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<FromMethodBase>b__0", container, type)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FromBinder::$$c__DisplayClass69_0_1<TConcrete>* New_ctor() {
      return (FromBinder::$$c__DisplayClass69_0_1<TConcrete>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FromBinder::$$c__DisplayClass69_0_1<TConcrete>*>::get()));
    }
  }; // Zenject.FromBinder/<>c__DisplayClass69_0`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FromBinder::$$c__DisplayClass69_0_1, "Zenject", "FromBinder/<>c__DisplayClass69_0`1");
#pragma pack(pop)
