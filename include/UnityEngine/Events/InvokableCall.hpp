// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Events.BaseInvokableCall
#include "UnityEngine/Events/BaseInvokableCall.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Size: 0x18
  // Autogenerated type: UnityEngine.Events.InvokableCall
  // [] Offset: FFFFFFFF
  class InvokableCall : public UnityEngine::Events::BaseInvokableCall {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xD513A0
    // [CompilerGeneratedAttribute] Offset: 0xD513A0
    // private UnityEngine.Events.UnityAction Delegate
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Events::UnityAction* Delegate;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityAction*) == 0x8);
    // Creating value type constructor for type: InvokableCall
    InvokableCall(UnityEngine::Events::UnityAction* Delegate_ = {}) noexcept : Delegate{Delegate_} {}
    // Creating conversion operator: operator UnityEngine::Events::UnityAction*
    constexpr operator UnityEngine::Events::UnityAction*() const noexcept {
      return Delegate;
    }
    // private System.Void add_Delegate(UnityEngine.Events.UnityAction value)
    // Offset: 0x16864A4
    void add_Delegate(UnityEngine::Events::UnityAction* value);
    // private System.Void remove_Delegate(UnityEngine.Events.UnityAction value)
    // Offset: 0x1686548
    void remove_Delegate(UnityEngine::Events::UnityAction* value);
    // public System.Void .ctor(UnityEngine.Events.UnityAction action)
    // Offset: 0x16866C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvokableCall* New_ctor(UnityEngine::Events::UnityAction* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::InvokableCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvokableCall*, creationType>(action)));
    }
    // public System.Void Invoke()
    // Offset: 0x1686734
    void Invoke();
    // public System.Void .ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    // Offset: 0x16865EC
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::.ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvokableCall* New_ctor(::Il2CppObject* target, System::Reflection::MethodInfo* theFunction) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::InvokableCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvokableCall*, creationType>(target, theFunction)));
    }
    // public override System.Void Invoke(System.Object[] args)
    // Offset: 0x16866F4
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::Invoke(System.Object[] args)
    void Invoke(::Array<::Il2CppObject*>* args);
    // public override System.Boolean Find(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0x1686774
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Boolean BaseInvokableCall::Find(System.Object targetObj, System.Reflection.MethodInfo method)
    bool Find(::Il2CppObject* targetObj, System::Reflection::MethodInfo* method);
  }; // UnityEngine.Events.InvokableCall
  static check_size<sizeof(InvokableCall), 16 + sizeof(UnityEngine::Events::UnityAction*)> __UnityEngine_Events_InvokableCallSizeCheck;
  static_assert(sizeof(InvokableCall) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::InvokableCall*, "UnityEngine.Events", "InvokableCall");
#pragma pack(pop)
