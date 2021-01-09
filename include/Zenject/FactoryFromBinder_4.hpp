// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinderBase
#include "Zenject/FactoryFromBinderBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass1_0 because it is already included!
  // Skipping declaration: <>c__2`1 because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Skipping declaration: ConditionCopyNonLazyBinder because it is already included!
  // Forward declaring type: IFactory`4<TParam1, TParam2, TParam3, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TValue>
  class IFactory_4;
  // Forward declaring type: FactorySubContainerBinder`4<TParam1, TParam2, TParam3, TContract>
  template<typename TParam1, typename TParam2, typename TParam3, typename TContract>
  class FactorySubContainerBinder_4;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`5<T1, T2, T3, T4, TResult>
  template<typename T1, typename T2, typename T3, typename T4, typename TResult>
  class Func_5;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryFromBinder`4
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D92050
  template<typename TParam1, typename TParam2, typename TParam3, typename TContract>
  class FactoryFromBinder_4 : public Zenject::FactoryFromBinderBase {
    public:
    // Nested type: Zenject::FactoryFromBinder_4::$$c__DisplayClass1_0<TParam1, TParam2, TParam3, TContract>
    class $$c__DisplayClass1_0;
    // Nested type: Zenject::FactoryFromBinder_4::$$c__2_1<TParam1, TParam2, TParam3, TContract, TSubFactory>
    template<typename TSubFactory>
    class $$c__2_1;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactoryFromBinder`4/<>c__DisplayClass1_0
    // [] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: D93238
    class $$c__DisplayClass1_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>*;
      static constexpr std::string_view NESTED_NAME = "$$c__DisplayClass1_0";
      // public System.Func`5<Zenject.DiContainer,TParam1,TParam2,TParam3,TContract> method
      // Size: 0x8
      // Offset: 0x0
      System::Func_5<Zenject::DiContainer*, TParam1, TParam2, TParam3, TContract>* method;
      // Field size check
      static_assert(sizeof(System::Func_5<Zenject::DiContainer*, TParam1, TParam2, TParam3, TContract>*) == 0x8);
      // Creating value type constructor for type: $$c__DisplayClass1_0
      $$c__DisplayClass1_0(System::Func_5<Zenject::DiContainer*, TParam1, TParam2, TParam3, TContract>* method_ = {}) noexcept : method{method_} {}
      // Creating conversion operator: operator System::Func_5<Zenject::DiContainer*, TParam1, TParam2, TParam3, TContract>*
      constexpr operator System::Func_5<Zenject::DiContainer*, TParam1, TParam2, TParam3, TContract>*() const noexcept {
        return method;
      }
      // Zenject.IProvider <FromMethod>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $FromMethod$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_4::$$c__DisplayClass1_0::<FromMethod>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromMethod>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(container))));
        return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__DisplayClass1_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_4::$$c__DisplayClass1_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__DisplayClass1_0*, creationType>()));
      }
    }; // Zenject.FactoryFromBinder`4/<>c__DisplayClass1_0
    // Could not write size check! Type: Zenject.FactoryFromBinder`4/<>c__DisplayClass1_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactoryFromBinder`4/<>c__2`1
    // [] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: D93248
    template<typename TSubFactory>
    class $$c__2_1 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>*;
      static constexpr std::string_view NESTED_NAME = "$$c__2_1";
      // Creating value type constructor for type: $$c__2_1
      $$c__2_1() noexcept {}
      // Autogenerated static field getter
      // Get static field: static public readonly Zenject.FactoryFromBinder`4/<>c__2`1<TParam1,TParam2,TParam3,TContract,TSubFactory> <>9
      static typename Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_4::$$c__2_1::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly Zenject.FactoryFromBinder`4/<>c__2`1<TParam1,TParam2,TParam3,TContract,TSubFactory> <>9
      static void _set_$$9(typename Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_4::$$c__2_1::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`4<TParam1,TParam2,TParam3,TContract>>> <>9__2_0
      static System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_4<TParam1, TParam2, TParam3, TContract>*>*>* _get_$$9__2_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_4::$$c__2_1::_get_$$9__2_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_4<TParam1, TParam2, TParam3, TContract>*>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9__2_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`4<TParam1,TParam2,TParam3,TContract>>> <>9__2_0
      static void _set_$$9__2_0(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_4<TParam1, TParam2, TParam3, TContract>*>*>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_4::$$c__2_1::_set_$$9__2_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9__2_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_4::$$c__2_1::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
        ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
      }
      // System.Void <FromFactory>b__2_0(Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`4<TParam1,TParam2,TParam3,TContract>> x)
      // Offset: 0xFFFFFFFF
      void $FromFactory$b__2_0(Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_4<TParam1, TParam2, TParam3, TContract>*>* x) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_4::$$c__2_1::<FromFactory>b__2_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromFactory>b__2_0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x))));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, x);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_4::$$c__2_1::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>::$$c__2_1<TSubFactory>*, creationType>()));
      }
    }; // Zenject.FactoryFromBinder`4/<>c__2`1
    // Could not write size check! Type: Zenject.FactoryFromBinder`4/<>c__2`1 is generic, or has no fields that are valid for size checks!
    // Creating value type constructor for type: FactoryFromBinder_4
    FactoryFromBinder_4() noexcept {}
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>* New_ctor(Zenject::DiContainer* container, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>*, creationType>(container, bindInfo, factoryBindInfo)));
    }
    // public Zenject.ConditionCopyNonLazyBinder FromMethod(System.Func`5<Zenject.DiContainer,TParam1,TParam2,TParam3,TContract> method)
    // Offset: 0xFFFFFFFF
    Zenject::ConditionCopyNonLazyBinder* FromMethod(System::Func_5<Zenject::DiContainer*, TParam1, TParam2, TParam3, TContract>* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_4::FromMethod");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "FromMethod", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(method)));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConditionCopyNonLazyBinder*, false>(this, ___internal__method, method);
    }
    // public Zenject.ConditionCopyNonLazyBinder FromFactory()
    // Offset: 0xFFFFFFFF
    template<class TSubFactory>
    Zenject::ConditionCopyNonLazyBinder* FromFactory() {
      static_assert(std::is_base_of_v<Zenject::IFactory_4<TParam1, TParam2, TParam3, TContract>, std::remove_pointer_t<TSubFactory>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_4::FromFactory");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "FromFactory", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConditionCopyNonLazyBinder*, false>(this, ___internal__method);
    }
    // public Zenject.FactorySubContainerBinder`4<TParam1,TParam2,TParam3,TContract> FromSubContainerResolve()
    // Offset: 0xFFFFFFFF
    Zenject::FactorySubContainerBinder_4<TParam1, TParam2, TParam3, TContract>* FromSubContainerResolve() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_4::FromSubContainerResolve");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "FromSubContainerResolve", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactorySubContainerBinder_4<TParam1, TParam2, TParam3, TContract>*, false>(this, ___internal__method);
    }
    // public Zenject.FactorySubContainerBinder`4<TParam1,TParam2,TParam3,TContract> FromSubContainerResolve(System.Object subIdentifier)
    // Offset: 0xFFFFFFFF
    Zenject::FactorySubContainerBinder_4<TParam1, TParam2, TParam3, TContract>* FromSubContainerResolve(::Il2CppObject* subIdentifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_4::FromSubContainerResolve");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "FromSubContainerResolve", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(subIdentifier)));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactorySubContainerBinder_4<TParam1, TParam2, TParam3, TContract>*, false>(this, ___internal__method, subIdentifier);
    }
  }; // Zenject.FactoryFromBinder`4
  // Could not write size check! Type: Zenject.FactoryFromBinder`4 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder_4, "Zenject", "FactoryFromBinder`4");
