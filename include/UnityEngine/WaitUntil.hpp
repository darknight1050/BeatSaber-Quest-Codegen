// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.CustomYieldInstruction
#include "UnityEngine/CustomYieldInstruction.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.WaitUntil
  class WaitUntil : public UnityEngine::CustomYieldInstruction {
    public:
    // private System.Func`1<System.Boolean> m_Predicate
    // Offset: 0x10
    System::Func_1<bool>* m_Predicate;
    // public System.Void .ctor(System.Func`1<System.Boolean> predicate)
    // Offset: 0x13842DC
    static WaitUntil* New_ctor(System::Func_1<bool>* predicate);
    // public override System.Boolean get_keepWaiting()
    // Offset: 0x1384278
    // Implemented from: UnityEngine.CustomYieldInstruction
    // Base method: System.Boolean CustomYieldInstruction::get_keepWaiting()
    bool get_keepWaiting();
  }; // UnityEngine.WaitUntil
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::WaitUntil*, "UnityEngine", "WaitUntil");
#pragma pack(pop)
