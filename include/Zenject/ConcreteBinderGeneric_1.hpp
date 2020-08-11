// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinderGeneric`1
#include "Zenject/FromBinderGeneric_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass5_0 because it is already included!
  // Skipping declaration: FromBinderGeneric`1 because it is already included!
  // Forward declaring type: FromBinderNonGeneric
  class FromBinderNonGeneric;
  // Forward declaring type: ConventionSelectTypesBinder
  class ConventionSelectTypesBinder;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: BindStatement
  class BindStatement;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ConcreteBinderGeneric`1
  template<typename TContract>
  class ConcreteBinderGeneric_1 : public Zenject::FromBinderGeneric_1<TContract> {
    public:
    // Nested type: Zenject::ConcreteBinderGeneric_1::$$c__DisplayClass5_0<TContract>
    class $$c__DisplayClass5_0;
    // Autogenerated type: Zenject.ConcreteBinderGeneric`1/<>c__DisplayClass5_0
    class $$c__DisplayClass5_0 : public ::CsObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = ConcreteBinderGeneric_1<TContract>*;
      // public System.Type concreteType
      // Offset: 0x0
      System::Type* concreteType;
      // System.Boolean <To>b__1(System.Type contractType)
      // Offset: 0xFFFFFFFF
      bool $To$b__1(System::Type* contractType) {
        return THROW_UNLESS((il2cpp_utils::RunMethod<bool>(this, "<To>b__1", contractType)));
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename ConcreteBinderGeneric_1<TContract>::$$c__DisplayClass5_0* New_ctor() {
        return (typename ConcreteBinderGeneric_1<TContract>::$$c__DisplayClass5_0*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename ConcreteBinderGeneric_1<TContract>::$$c__DisplayClass5_0*>::get()));
      }
    }; // Zenject.ConcreteBinderGeneric`1/<>c__DisplayClass5_0
    // public Zenject.FromBinderGeneric`1<TContract> ToSelf()
    // Offset: 0xFFFFFFFF
    Zenject::FromBinderGeneric_1<TContract>* ToSelf() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::FromBinderGeneric_1<TContract>*>(this, "ToSelf"));
    }
    // public Zenject.FromBinderGeneric`1<TConcrete> To()
    // Offset: 0xFFFFFFFF
    template<class TConcrete>
    Zenject::FromBinderGeneric_1<TConcrete>* To() {
      static_assert(std::is_convertible_v<TConcrete, TContract>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::FromBinderGeneric_1<TConcrete>*>(this, "To", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()})));
    }
    // public Zenject.FromBinderNonGeneric To(System.Type[] concreteTypes)
    // Offset: 0xFFFFFFFF
    Zenject::FromBinderNonGeneric* To(::Array<System::Type*>* concreteTypes) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::FromBinderNonGeneric*>(this, "To", concreteTypes));
    }
    // public Zenject.FromBinderNonGeneric To(System.Collections.Generic.IEnumerable`1<System.Type> concreteTypes)
    // Offset: 0xFFFFFFFF
    Zenject::FromBinderNonGeneric* To(System::Collections::Generic::IEnumerable_1<System::Type*>* concreteTypes) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::FromBinderNonGeneric*>(this, "To", concreteTypes));
    }
    // public Zenject.FromBinderNonGeneric To(System.Action`1<Zenject.ConventionSelectTypesBinder> generator)
    // Offset: 0xFFFFFFFF
    Zenject::FromBinderNonGeneric* To(System::Action_1<Zenject::ConventionSelectTypesBinder*>* generator) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::FromBinderNonGeneric*>(this, "To", generator));
    }
    // private Zenject.IProvider <ToSelf>b__1_0(Zenject.DiContainer container, System.Type type)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $ToSelf$b__1_0(Zenject::DiContainer* container, System::Type* type) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<ToSelf>b__1_0", container, type)));
    }
    // private System.Boolean <To>b__5_0(System.Type concreteType)
    // Offset: 0xFFFFFFFF
    bool $To$b__5_0(System::Type* concreteType) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<bool>(this, "<To>b__5_0", concreteType)));
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.FromBinderGeneric`1
    // Base method: System.Void FromBinderGeneric`1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    // Base method: System.Void FromBinder::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement)
    static ConcreteBinderGeneric_1<TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::BindStatement* bindStatement) {
      return (ConcreteBinderGeneric_1<TContract>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConcreteBinderGeneric_1<TContract>*>::get(), bindContainer, bindInfo, bindStatement));
    }
  }; // Zenject.ConcreteBinderGeneric`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::ConcreteBinderGeneric_1, "Zenject", "ConcreteBinderGeneric`1");
#pragma pack(pop)
