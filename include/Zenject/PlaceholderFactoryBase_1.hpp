// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IPlaceholderFactory
#include "Zenject/IPlaceholderFactory.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
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
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PlaceholderFactoryBase`1
  template<typename TValue>
  class PlaceholderFactoryBase_1 : public ::Il2CppObject/*, public Zenject::IPlaceholderFactory*/ {
    public:
    // private Zenject.IProvider _provider
    // Size: 0x8
    // Offset: 0x0
    Zenject::IProvider* provider;
    // Field size check
    static_assert(sizeof(Zenject::IProvider*) == 0x8);
    // private Zenject.InjectContext _injectContext
    // Size: 0x8
    // Offset: 0x0
    Zenject::InjectContext* injectContext;
    // Field size check
    static_assert(sizeof(Zenject::InjectContext*) == 0x8);
    // Creating value type constructor for type: PlaceholderFactoryBase_1
    PlaceholderFactoryBase_1(Zenject::IProvider* provider_ = {}, Zenject::InjectContext* injectContext_ = {}) noexcept : provider{provider_}, injectContext{injectContext_} {}
    // Creating interface conversion operator: operator Zenject::IPlaceholderFactory
    operator Zenject::IPlaceholderFactory() noexcept {
      return *reinterpret_cast<Zenject::IPlaceholderFactory*>(this);
    }
    // private System.Void Construct(Zenject.IProvider provider, Zenject.InjectContext injectContext)
    // Offset: 0xFFFFFFFF
    void Construct(Zenject::IProvider* provider, Zenject::InjectContext* injectContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactoryBase_1::Construct");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Construct", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(provider), ::il2cpp_utils::ExtractType(injectContext)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, provider, injectContext);
    }
    // protected TValue CreateInternal(System.Collections.Generic.List`1<Zenject.TypeValuePair> extraArgs)
    // Offset: 0xFFFFFFFF
    TValue CreateInternal(System::Collections::Generic::List_1<Zenject::TypeValuePair>* extraArgs) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactoryBase_1::CreateInternal");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateInternal", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(extraArgs)})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method, extraArgs);
    }
    // public System.Void Validate()
    // Offset: 0xFFFFFFFF
    void Validate() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactoryBase_1::Validate");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Validate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // protected System.Collections.Generic.IEnumerable`1<System.Type> get_ParamTypes()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_ParamTypes() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactoryBase_1::get_ParamTypes");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_ParamTypes", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<System::Type*>*, false>(this, ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlaceholderFactoryBase_1<TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactoryBase_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlaceholderFactoryBase_1<TValue>*, creationType>()));
    }
  }; // Zenject.PlaceholderFactoryBase`1
  // Could not write size check! Type: Zenject.PlaceholderFactoryBase`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PlaceholderFactoryBase_1, "Zenject", "PlaceholderFactoryBase`1");
