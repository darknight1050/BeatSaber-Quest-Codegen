// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Events.InvokableCall`1
#include "UnityEngine/Events/InvokableCall_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
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
  // Autogenerated type: UnityEngine.Events.CachedInvokableCall`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class CachedInvokableCall_1 : public UnityEngine::Events::InvokableCall_1<T> {
    public:
    // private readonly T m_Arg1
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T m_Arg1;
    // Creating value type constructor for type: CachedInvokableCall_1
    CachedInvokableCall_1(T m_Arg1_ = {}) noexcept : m_Arg1{m_Arg1_} {}
    // Deleting conversion operator: operator UnityEngine::Events::UnityAction_1<T1>*
    constexpr operator UnityEngine::Events::UnityAction_1<T1>*() const noexcept = delete;
    // public System.Void .ctor(UnityEngine.Object target, System.Reflection.MethodInfo theFunction, T argument)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CachedInvokableCall_1<T>* New_ctor(UnityEngine::Object* target, System::Reflection::MethodInfo* theFunction, T argument) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::CachedInvokableCall_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CachedInvokableCall_1<T>*, creationType>(target, theFunction, argument)));
    }
    // public override System.Void Invoke(System.Object[] args)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.InvokableCall`1
    // Base method: System.Void InvokableCall_1::Invoke(System.Object[] args)
    void Invoke(::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::CachedInvokableCall_1::Invoke");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(args)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, args);
    }
    // public override System.Void Invoke(T arg0)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.InvokableCall`1
    // Base method: System.Void InvokableCall_1::Invoke(T arg0)
    void Invoke(T arg0) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::CachedInvokableCall_1::Invoke");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(arg0)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, arg0);
    }
  }; // UnityEngine.Events.CachedInvokableCall`1
  // Could not write size check! Type: UnityEngine.Events.CachedInvokableCall`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::CachedInvokableCall_1, "UnityEngine.Events", "CachedInvokableCall`1");
