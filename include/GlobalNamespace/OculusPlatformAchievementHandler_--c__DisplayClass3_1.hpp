// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusPlatformAchievementHandler
#include "GlobalNamespace/OculusPlatformAchievementHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AchievementProgress
  class AchievementProgress;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AchievementSO
  class AchievementSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusPlatformAchievementHandler/<>c__DisplayClass3_1
  class OculusPlatformAchievementHandler::$$c__DisplayClass3_1 : public ::Il2CppObject {
    public:
    // public Oculus.Platform.Models.AchievementProgress achievement
    // Offset: 0x10
    Oculus::Platform::Models::AchievementProgress* achievement;
    // System.Boolean <GetUnlockedAchievements>b__1(AchievementSO x)
    // Offset: 0xBADA80
    bool $GetUnlockedAchievements$b__1(GlobalNamespace::AchievementSO* x);
    // public System.Void .ctor()
    // Offset: 0xBADA78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusPlatformAchievementHandler::$$c__DisplayClass3_1* New_ctor();
  }; // OculusPlatformAchievementHandler/<>c__DisplayClass3_1
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_1*, "", "OculusPlatformAchievementHandler/<>c__DisplayClass3_1");
#pragma pack(pop)
