// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
// Including type: Zenject.InjectSources
#include "Zenject/InjectSources.hpp"
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
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass71_0`2
  template<typename TObj, typename TResult>
  class FromBinder::$$c__DisplayClass71_0_2 : public ::CsObject {
    public:
    // public System.Object identifier
    // Offset: 0x0
    ::CsObject* identifier;
    // public System.Func`2<TObj,TResult> method
    // Offset: 0x0
    System::Func_2<TObj, TResult>* method;
    // public Zenject.InjectSources source
    // Offset: 0x0
    Zenject::InjectSources source;
    // public System.Boolean matchMultiple
    // Offset: 0x0
    bool matchMultiple;
    // Zenject.IProvider <FromResolveGetterBase>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $FromResolveGetterBase$b__0(Zenject::DiContainer* container, System::Type* type) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<FromResolveGetterBase>b__0", container, type)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FromBinder::$$c__DisplayClass71_0_2<TObj, TResult>* New_ctor() {
      return (FromBinder::$$c__DisplayClass71_0_2<TObj, TResult>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FromBinder::$$c__DisplayClass71_0_2<TObj, TResult>*>::get())));
    }
  }; // Zenject.FromBinder/<>c__DisplayClass71_0`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FromBinder::$$c__DisplayClass71_0_2, "Zenject", "FromBinder/<>c__DisplayClass71_0`2");
#pragma pack(pop)
