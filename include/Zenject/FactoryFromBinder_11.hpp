// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinderBase
#include "Zenject/FactoryFromBinderBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass1_0 because it is already included!
  // Skipping declaration: <>c__2`1 because it is already included!
  // Skipping declaration: <>c__DisplayClass3_0 because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Skipping declaration: ConditionCopyNonLazyBinder because it is already included!
  // Forward declaring type: IFactory`11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10, typename TValue>
  class IFactory_11;
  // Skipping declaration: ArgConditionCopyNonLazyBinder because it is already included!
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
  // Forward declaring type: FactorySubContainerBinder`11<TContract, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>
  template<typename TContract, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10>
  class FactorySubContainerBinder_11;
  // Forward declaring type: IProvider
  class IProvider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`12<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, TResult>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename TResult>
  class Func_12;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder`11
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10, typename TContract>
  class FactoryFromBinder_11 : public Zenject::FactoryFromBinderBase {
    public:
    // Nested type: Zenject::FactoryFromBinder_11::$$c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>
    class $$c__DisplayClass1_0;
    // Nested type: Zenject::FactoryFromBinder_11::$$c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract, TSubFactory>
    template<typename TSubFactory>
    class $$c__2_1;
    // Nested type: Zenject::FactoryFromBinder_11::$$c__DisplayClass3_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>
    class $$c__DisplayClass3_0;
    // Autogenerated type: Zenject.FactoryFromBinder`11/<>c__DisplayClass1_0
    class $$c__DisplayClass1_0 : public ::CsObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*;
      // public System.Func`12<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> method
      // Offset: 0x0
      System::Func_12<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* method;
      // Zenject.IProvider <FromMethod>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $FromMethod$b__0(Zenject::DiContainer* container) {
        return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<FromMethod>b__0", container)));
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__DisplayClass1_0* New_ctor() {
        return (typename FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__DisplayClass1_0*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__DisplayClass1_0*>::get())));
      }
    }; // Zenject.FactoryFromBinder`11/<>c__DisplayClass1_0
    // Autogenerated type: Zenject.FactoryFromBinder`11/<>c__2`1
    template<typename TSubFactory>
    class $$c__2_1 : public ::CsObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      static_assert((!std::is_complete_v<std::remove_pointer_t<TSubFactory>> || std::is_base_of_v<Zenject::IFactory_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>, std::remove_pointer_t<TSubFactory>>));
      public:
      using declaring_type = FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*;
      // Autogenerated static field getter
      // Get static field: static public readonly Zenject.FactoryFromBinder`11/<>c__2`1<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract,TSubFactory> <>9
      static typename Zenject::FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__2_1<TSubFactory>* _get_$$9() {
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename Zenject::FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__2_1<TSubFactory>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly Zenject.FactoryFromBinder`11/<>c__2`1<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract,TSubFactory> <>9
      static void _set_$$9(typename Zenject::FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__2_1<TSubFactory>* value) {
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract>>> <>9__2_0
      static System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>*>* _get_$$9__2_0() {
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9__2_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract>>> <>9__2_0
      static void _set_$$9__2_0(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>*>* value) {
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9__2_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__2_1<TSubFactory>*>::get(), ".cctor")));
      }
      // System.Void <FromFactory>b__2_0(Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract>> x)
      // Offset: 0xFFFFFFFF
      void $FromFactory$b__2_0(Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>* x) {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "<FromFactory>b__2_0", x));
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__2_1<TSubFactory>* New_ctor() {
        return (typename FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__2_1<TSubFactory>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__2_1<TSubFactory>*>::get())));
      }
    }; // Zenject.FactoryFromBinder`11/<>c__2`1
    // Autogenerated type: Zenject.FactoryFromBinder`11/<>c__DisplayClass3_0
    class $$c__DisplayClass3_0 : public ::CsObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*;
      // public System.Guid factoryId
      // Offset: 0x0
      System::Guid factoryId;
      // Zenject.IProvider <FromIFactory>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $FromIFactory$b__0(Zenject::DiContainer* container) {
        return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<FromIFactory>b__0", container)));
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__DisplayClass3_0* New_ctor() {
        return (typename FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__DisplayClass3_0*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__DisplayClass3_0*>::get())));
      }
    }; // Zenject.FactoryFromBinder`11/<>c__DisplayClass3_0
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    static FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* New_ctor(Zenject::DiContainer* container, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      return (FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>::get(), container, bindInfo, factoryBindInfo)));
    }
    // public Zenject.ConditionCopyNonLazyBinder FromMethod(System.Func`12<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> method)
    // Offset: 0xFFFFFFFF
    Zenject::ConditionCopyNonLazyBinder* FromMethod(System::Func_12<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* method) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::ConditionCopyNonLazyBinder*>(this, "FromMethod", method));
    }
    // public Zenject.ConditionCopyNonLazyBinder FromFactory()
    // Offset: 0xFFFFFFFF
    template<class TSubFactory>
    Zenject::ConditionCopyNonLazyBinder* FromFactory() {
      static_assert(std::is_base_of_v<Zenject::IFactory_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>, std::remove_pointer_t<TSubFactory>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ConditionCopyNonLazyBinder*>(this, "FromFactory", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get()})));
    }
    // public Zenject.ArgConditionCopyNonLazyBinder FromIFactory(System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract>>> factoryBindGenerator)
    // Offset: 0xFFFFFFFF
    Zenject::ArgConditionCopyNonLazyBinder* FromIFactory(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>*>* factoryBindGenerator) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::ArgConditionCopyNonLazyBinder*>(this, "FromIFactory", factoryBindGenerator));
    }
    // public Zenject.FactorySubContainerBinder`11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> FromSubContainerResolve()
    // Offset: 0xFFFFFFFF
    Zenject::FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* FromSubContainerResolve() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>(this, "FromSubContainerResolve")));
    }
    // public Zenject.FactorySubContainerBinder`11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> FromSubContainerResolve(System.Object subIdentifier)
    // Offset: 0xFFFFFFFF
    Zenject::FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* FromSubContainerResolve(::CsObject* subIdentifier) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>(this, "FromSubContainerResolve", subIdentifier)));
    }
  }; // Zenject.FactoryFromBinder`11
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder_11, "Zenject", "FactoryFromBinder`11");
#pragma pack(pop)
