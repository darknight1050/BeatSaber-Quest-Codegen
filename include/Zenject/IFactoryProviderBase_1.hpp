// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
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
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.IFactoryProviderBase`1
  template<typename TContract>
  class IFactoryProviderBase_1 : public ::Il2CppObject/*, public Zenject::IProvider*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDDF278
    // private System.Guid <FactoryId>k__BackingField
    // Size: 0x10
    // Offset: 0x0
    System::Guid FactoryId;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    // [CompilerGeneratedAttribute] Offset: 0xDDF288
    // private Zenject.DiContainer <Container>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    Zenject::DiContainer* Container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: IFactoryProviderBase_1
    IFactoryProviderBase_1(System::Guid FactoryId_ = {}, Zenject::DiContainer* Container_ = {}) noexcept : FactoryId{FactoryId_}, Container{Container_} {}
    // Creating interface conversion operator: operator Zenject::IProvider
    operator Zenject::IProvider() noexcept {
      return *reinterpret_cast<Zenject::IProvider*>(this);
    }
    // public System.Void .ctor(Zenject.DiContainer container, System.Guid factoryId)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IFactoryProviderBase_1<TContract>* New_ctor(Zenject::DiContainer* container, System::Guid factoryId) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IFactoryProviderBase_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IFactoryProviderBase_1<TContract>*, creationType>(container, factoryId)));
    }
    // public System.Boolean get_IsCached()
    // Offset: 0xFFFFFFFF
    bool get_IsCached() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IFactoryProviderBase_1::get_IsCached");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_IsCached", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // protected System.Guid get_FactoryId()
    // Offset: 0xFFFFFFFF
    System::Guid get_FactoryId() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IFactoryProviderBase_1::get_FactoryId");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_FactoryId", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Guid, false>(this, ___internal__method);
    }
    // private System.Void set_FactoryId(System.Guid value)
    // Offset: 0xFFFFFFFF
    void set_FactoryId(System::Guid value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IFactoryProviderBase_1::set_FactoryId");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_FactoryId", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // protected Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_Container() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IFactoryProviderBase_1::get_Container");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Container", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::DiContainer*, false>(this, ___internal__method);
    }
    // private System.Void set_Container(Zenject.DiContainer value)
    // Offset: 0xFFFFFFFF
    void set_Container(Zenject::DiContainer* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IFactoryProviderBase_1::set_Container");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Container", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0xFFFFFFFF
    bool get_TypeVariesBasedOnMemberType() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IFactoryProviderBase_1::get_TypeVariesBasedOnMemberType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0xFFFFFFFF
    System::Type* GetInstanceType(Zenject::InjectContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IFactoryProviderBase_1::GetInstanceType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetInstanceType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context)})));
      return ::il2cpp_utils::RunMethodThrow<System::Type*, false>(this, ___internal__method, context);
    }
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xFFFFFFFF
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IFactoryProviderBase_1::GetAllInstancesWithInjectSplit");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context), ::il2cpp_utils::ExtractType(args), ::il2cpp_utils::ExtractIndependentType<System::Action*&>(), ::il2cpp_utils::ExtractType(buffer)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, context, args, injectAction, buffer);
    }
  }; // Zenject.IFactoryProviderBase`1
  // Could not write size check! Type: Zenject.IFactoryProviderBase`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IFactoryProviderBase_1, "Zenject", "IFactoryProviderBase`1");
