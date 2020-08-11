// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.ConditionCopyNonLazyBinder
#include "Zenject/ConditionCopyNonLazyBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.InstantiateCallbackConditionCopyNonLazyBinder
  class InstantiateCallbackConditionCopyNonLazyBinder : public Zenject::ConditionCopyNonLazyBinder {
    public:
    // Nested type: Zenject::InstantiateCallbackConditionCopyNonLazyBinder::$$c__DisplayClass2_0_1<T>
    template<typename T>
    class $$c__DisplayClass2_0_1;
    // public Zenject.ConditionCopyNonLazyBinder OnInstantiated(System.Action`2<Zenject.InjectContext,System.Object> callback)
    // Offset: 0xF277B0
    Zenject::ConditionCopyNonLazyBinder* OnInstantiated(System::Action_2<Zenject::InjectContext*, ::CsObject*>* callback);
    // public Zenject.ConditionCopyNonLazyBinder OnInstantiated(System.Action`2<Zenject.InjectContext,T> callback)
    // Offset: 0xFFFFFFFF
    template<class T>
    Zenject::ConditionCopyNonLazyBinder* OnInstantiated(System::Action_2<Zenject::InjectContext*, T>* callback) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ConditionCopyNonLazyBinder*>(this, "OnInstantiated", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, callback)));
    }
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0xF277A8
    // Implemented from: Zenject.ConditionCopyNonLazyBinder
    // Base method: System.Void ConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void CopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void NonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void IfNotBoundBinder::.ctor(Zenject.BindInfo bindInfo)
    static InstantiateCallbackConditionCopyNonLazyBinder* New_ctor(Zenject::BindInfo* bindInfo);
  }; // Zenject.InstantiateCallbackConditionCopyNonLazyBinder
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InstantiateCallbackConditionCopyNonLazyBinder*, "Zenject", "InstantiateCallbackConditionCopyNonLazyBinder");
#pragma pack(pop)
