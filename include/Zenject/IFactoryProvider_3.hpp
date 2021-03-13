// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IFactoryProviderBase`1
#include "Zenject/IFactoryProviderBase_1.hpp"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.IFactoryProvider`3
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: CEF058
  template<typename TParam1, typename TParam2, typename TContract>
  class IFactoryProvider_3 : public Zenject::IFactoryProviderBase_1<TContract> {
    public:
    // Creating value type constructor for type: IFactoryProvider_3
    IFactoryProvider_3() noexcept {}
    // public System.Void .ctor(Zenject.DiContainer container, System.Guid factoryId)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactoryProviderBase`1
    // Base method: System.Void IFactoryProviderBase_1::.ctor(Zenject.DiContainer container, System.Guid factoryId)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IFactoryProvider_3<TParam1, TParam2, TContract>* New_ctor(Zenject::DiContainer* container, System::Guid factoryId) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IFactoryProvider_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IFactoryProvider_3<TParam1, TParam2, TContract>*, creationType>(container, factoryId)));
    }
    // public override System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactoryProviderBase`1
    // Base method: System.Void IFactoryProviderBase_1::GetAllInstancesWithInjectSplit_NEW(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IFactoryProvider_3::GetAllInstancesWithInjectSplit");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(context, args, injectAction, buffer)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, context, args, injectAction, buffer);
    }
  }; // Zenject.IFactoryProvider`3
  // Could not write size check! Type: Zenject.IFactoryProvider`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IFactoryProvider_3, "Zenject", "IFactoryProvider`3");
