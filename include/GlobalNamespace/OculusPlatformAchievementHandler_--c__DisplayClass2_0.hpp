// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusPlatformAchievementHandler
#include "GlobalNamespace/OculusPlatformAchievementHandler.hpp"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AchievementUpdate
  class AchievementUpdate;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformAchievementHandler/<>c__DisplayClass2_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1C1C4
  class OculusPlatformAchievementHandler::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    // public PlatformAchievementsModelSO/UnlockAchievementCompletionHandler completionHandler
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler* completionHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass2_0
    $$c__DisplayClass2_0(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler* completionHandler_ = {}) noexcept : completionHandler{completionHandler_} {}
    // Creating conversion operator: operator GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler*
    constexpr operator GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler*() const noexcept {
      return completionHandler;
    }
    // System.Void <UnlockAchievement>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.AchievementUpdate> message)
    // Offset: 0x10D70DC
    void $UnlockAchievement$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AchievementUpdate*>* message);
    // public System.Void .ctor()
    // Offset: 0x10D6FF4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformAchievementHandler::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformAchievementHandler::$$c__DisplayClass2_0*, creationType>()));
    }
  }; // OculusPlatformAchievementHandler/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(OculusPlatformAchievementHandler::$$c__DisplayClass2_0), 16 + sizeof(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler*)> __GlobalNamespace_OculusPlatformAchievementHandler_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(OculusPlatformAchievementHandler::$$c__DisplayClass2_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass2_0*, "", "OculusPlatformAchievementHandler/<>c__DisplayClass2_0");
