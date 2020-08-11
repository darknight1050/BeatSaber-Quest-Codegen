// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.SubContainerCreatorByMethodBase
#include "Zenject/SubContainerCreatorByMethodBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: InjectContext
  class InjectContext;
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
  // Autogenerated type: Zenject.SubContainerCreatorByMethod`1
  template<typename TParam1>
  class SubContainerCreatorByMethod_1 : public Zenject::SubContainerCreatorByMethodBase {
    public:
    // private readonly System.Action`2<Zenject.DiContainer,TParam1> _installMethod
    // Offset: 0x0
    System::Action_2<Zenject::DiContainer*, TParam1>* installMethod;
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.SubContainerCreatorBindInfo containerBindInfo, System.Action`2<Zenject.DiContainer,TParam1> installMethod)
    // Offset: 0xFFFFFFFF
    static SubContainerCreatorByMethod_1<TParam1>* New_ctor(Zenject::DiContainer* container, Zenject::SubContainerCreatorBindInfo* containerBindInfo, System::Action_2<Zenject::DiContainer*, TParam1>* installMethod) {
      return (SubContainerCreatorByMethod_1<TParam1>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SubContainerCreatorByMethod_1<TParam1>*>::get(), container, containerBindInfo, installMethod));
    }
    // public override Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.SubContainerCreatorByMethodBase
    // Base method: Zenject.DiContainer SubContainerCreatorByMethodBase::CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    Zenject::DiContainer* CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* context) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "CreateSubContainer", args, context));
    }
  }; // Zenject.SubContainerCreatorByMethod`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::SubContainerCreatorByMethod_1, "Zenject", "SubContainerCreatorByMethod`1");
#pragma pack(pop)
