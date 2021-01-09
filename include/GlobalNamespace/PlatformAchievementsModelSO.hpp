// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PS4AchievementIdsModelSO
  class PS4AchievementIdsModelSO;
  // Forward declaring type: AchievementIdsModelSO
  class AchievementIdsModelSO;
  // Forward declaring type: PlatformAchievementsHandler
  class PlatformAchievementsHandler;
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  // Autogenerated type: PlatformAchievementsModelSO
  // [] Offset: FFFFFFFF
  class PlatformAchievementsModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult
    struct UnlockAchievementResult;
    // Nested type: GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult
    struct GetUnlockedAchievementsResult;
    // Nested type: GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler
    class UnlockAchievementCompletionHandler;
    // Nested type: GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler
    class GetUnlockedAchievementsCompletionHandler;
    // private PS4AchievementIdsModelSO _ps4AchievementIdsModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PS4AchievementIdsModelSO* ps4AchievementIdsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PS4AchievementIdsModelSO*) == 0x8);
    // private AchievementIdsModelSO _achievementIdsModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AchievementIdsModelSO* achievementIdsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementIdsModelSO*) == 0x8);
    // private PlatformAchievementsHandler _platformAchievementsHandler
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PlatformAchievementsHandler* platformAchievementsHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformAchievementsHandler*) == 0x8);
    // Creating value type constructor for type: PlatformAchievementsModelSO
    PlatformAchievementsModelSO(GlobalNamespace::PS4AchievementIdsModelSO* ps4AchievementIdsModel_ = {}, GlobalNamespace::AchievementIdsModelSO* achievementIdsModel_ = {}, GlobalNamespace::PlatformAchievementsHandler* platformAchievementsHandler_ = {}) noexcept : ps4AchievementIdsModel{ps4AchievementIdsModel_}, achievementIdsModel{achievementIdsModel_}, platformAchievementsHandler{platformAchievementsHandler_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private PlatformAchievementsHandler get_platformAchievementsHandler()
    // Offset: 0xF07C6C
    GlobalNamespace::PlatformAchievementsHandler* get_platformAchievementsHandler();
    // public System.Void Initialize()
    // Offset: 0xF07D30
    void Initialize();
    // private System.Void CreatePlatformAchievementsHandler()
    // Offset: 0xF07C9C
    void CreatePlatformAchievementsHandler();
    // public HMAsyncRequest UnlockAchievement(System.String achievementId, PlatformAchievementsModelSO/UnlockAchievementCompletionHandler completionHandler)
    // Offset: 0xF07D34
    GlobalNamespace::HMAsyncRequest* UnlockAchievement(::Il2CppString* achievementId, GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler* completionHandler);
    // public HMAsyncRequest GetUnlockedAchievements(PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler completionHandler)
    // Offset: 0xF08018
    GlobalNamespace::HMAsyncRequest* GetUnlockedAchievements(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler* completionHandler);
    // public System.Void .ctor()
    // Offset: 0xF08308
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformAchievementsModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlatformAchievementsModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformAchievementsModelSO*, creationType>()));
    }
  }; // PlatformAchievementsModelSO
  static check_size<sizeof(PlatformAchievementsModelSO), 40 + sizeof(GlobalNamespace::PlatformAchievementsHandler*)> __GlobalNamespace_PlatformAchievementsModelSOSizeCheck;
  static_assert(sizeof(PlatformAchievementsModelSO) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformAchievementsModelSO*, "", "PlatformAchievementsModelSO");
#pragma pack(pop)
