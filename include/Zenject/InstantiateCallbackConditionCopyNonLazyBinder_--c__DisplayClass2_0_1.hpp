// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.InstantiateCallbackConditionCopyNonLazyBinder
#include "Zenject/InstantiateCallbackConditionCopyNonLazyBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.InstantiateCallbackConditionCopyNonLazyBinder/<>c__DisplayClass2_0`1
  template<typename T>
  class InstantiateCallbackConditionCopyNonLazyBinder::$$c__DisplayClass2_0_1 : public ::Il2CppObject {
    public:
    // public System.Action`2<Zenject.InjectContext,T> callback
    // Offset: 0x0
    System::Action_2<Zenject::InjectContext*, T>* callback;
    // System.Void <OnInstantiated>b__0(Zenject.InjectContext ctx, System.Object obj)
    // Offset: 0xFFFFFFFF
    void $OnInstantiated$b__0(Zenject::InjectContext* ctx, ::Il2CppObject* obj) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "<OnInstantiated>b__0", ctx, obj));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static InstantiateCallbackConditionCopyNonLazyBinder::$$c__DisplayClass2_0_1<T>* New_ctor() {
      return (InstantiateCallbackConditionCopyNonLazyBinder::$$c__DisplayClass2_0_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<InstantiateCallbackConditionCopyNonLazyBinder::$$c__DisplayClass2_0_1<T>*>::get()));
    }
  }; // Zenject.InstantiateCallbackConditionCopyNonLazyBinder/<>c__DisplayClass2_0`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::InstantiateCallbackConditionCopyNonLazyBinder::$$c__DisplayClass2_0_1, "Zenject", "InstantiateCallbackConditionCopyNonLazyBinder/<>c__DisplayClass2_0`1");
#pragma pack(pop)
