// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AppStaticSettingsSO
  class AppStaticSettingsSO : public UnityEngine::ScriptableObject {
    public:
    // public System.Boolean requirePrivacyPolicy
    // Offset: 0x18
    bool requirePrivacyPolicy;
    // public System.Boolean enable360DegreeLevels
    // Offset: 0x19
    bool enable360DegreeLevels;
    // public System.Void .ctor()
    // Offset: 0x18EF3B4
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AppStaticSettingsSO* New_ctor();
  }; // AppStaticSettingsSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppStaticSettingsSO*, "", "AppStaticSettingsSO");
#pragma pack(pop)
