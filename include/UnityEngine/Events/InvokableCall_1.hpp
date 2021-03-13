// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Events.BaseInvokableCall
#include "UnityEngine/Events/BaseInvokableCall.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Events.InvokableCall`1
  // [] Offset: FFFFFFFF
  template<typename T1>
  class InvokableCall_1 : public UnityEngine::Events::BaseInvokableCall {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xCAC454
    // [DebuggerBrowsableAttribute] Offset: 0xCAC454
    // private UnityEngine.Events.UnityAction`1<T1> Delegate
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::Events::UnityAction_1<T1>* Delegate;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityAction_1<T1>*) == 0x8);
    // Creating value type constructor for type: InvokableCall_1
    InvokableCall_1(UnityEngine::Events::UnityAction_1<T1>* Delegate_ = {}) noexcept : Delegate{Delegate_} {}
    // Creating conversion operator: operator UnityEngine::Events::UnityAction_1<T1>*
    constexpr operator UnityEngine::Events::UnityAction_1<T1>*() const noexcept {
      return Delegate;
    }
    // protected System.Void add_Delegate(UnityEngine.Events.UnityAction`1<T1> value)
    // Offset: 0xFFFFFFFF
    void add_Delegate(UnityEngine::Events::UnityAction_1<T1>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::InvokableCall_1::add_Delegate");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_Delegate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // protected System.Void remove_Delegate(UnityEngine.Events.UnityAction`1<T1> value)
    // Offset: 0xFFFFFFFF
    void remove_Delegate(UnityEngine::Events::UnityAction_1<T1>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::InvokableCall_1::remove_Delegate");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_Delegate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor(UnityEngine.Events.UnityAction`1<T1> action)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvokableCall_1<T1>* New_ctor(UnityEngine::Events::UnityAction_1<T1>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::InvokableCall_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvokableCall_1<T1>*, creationType>(action)));
    }
    // public System.Void Invoke(T1 args0)
    // Offset: 0xFFFFFFFF
    void Invoke_NEW(T1 args0) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::InvokableCall_1::Invoke_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(args0)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, args0);
    }
    // public System.Void .ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::.ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvokableCall_1<T1>* New_ctor(::Il2CppObject* target, System::Reflection::MethodInfo* theFunction) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::InvokableCall_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvokableCall_1<T1>*, creationType>(target, theFunction)));
    }
    // public override System.Void Invoke(System.Object[] args)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::Invoke_NEW(System.Object[] args)
    void Invoke(::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::InvokableCall_1::Invoke");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(args)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, args);
    }
    // public override System.Boolean Find(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Boolean BaseInvokableCall::Find_NEW(System.Object targetObj, System.Reflection.MethodInfo method)
    bool Find(::Il2CppObject* targetObj, System::Reflection::MethodInfo* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::InvokableCall_1::Find");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Find", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(targetObj, method)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, targetObj, method);
    }
  }; // UnityEngine.Events.InvokableCall`1
  // Could not write size check! Type: UnityEngine.Events.InvokableCall`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::InvokableCall_1, "UnityEngine.Events", "InvokableCall`1");
