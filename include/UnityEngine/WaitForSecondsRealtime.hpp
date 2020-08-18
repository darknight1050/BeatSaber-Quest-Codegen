// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.CustomYieldInstruction
#include "UnityEngine/CustomYieldInstruction.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.WaitForSecondsRealtime
  class WaitForSecondsRealtime : public UnityEngine::CustomYieldInstruction {
    public:
    // private System.Single <waitTime>k__BackingField
    // Offset: 0x10
    float waitTime;
    // private System.Single m_WaitUntilTime
    // Offset: 0x14
    float m_WaitUntilTime;
    // public System.Single get_waitTime()
    // Offset: 0x12F7EA4
    float get_waitTime();
    // public System.Void set_waitTime(System.Single value)
    // Offset: 0x12F7EAC
    void set_waitTime(float value);
    // public System.Void .ctor(System.Single time)
    // Offset: 0x12F7F44
    static WaitForSecondsRealtime* New_ctor(float time);
    // public override System.Boolean get_keepWaiting()
    // Offset: 0x12F7EB4
    // Implemented from: UnityEngine.CustomYieldInstruction
    // Base method: System.Boolean CustomYieldInstruction::get_keepWaiting()
    bool get_keepWaiting();
  }; // UnityEngine.WaitForSecondsRealtime
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::WaitForSecondsRealtime*, "UnityEngine", "WaitForSecondsRealtime");
#pragma pack(pop)
