// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AchievementSO
  class AchievementSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.String _achievementId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* achievementId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AchievementSO
    AchievementSO(::Il2CppString* achievementId_ = {}) noexcept : achievementId{achievementId_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_achievementId()
    // Offset: 0x1124F6C
    ::Il2CppString* get_achievementId();
    // public System.Void .ctor()
    // Offset: 0x1124F74
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AchievementSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AchievementSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AchievementSO*, creationType>()));
    }
  }; // AchievementSO
  #pragma pack(pop)
  static check_size<sizeof(AchievementSO), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_AchievementSOSizeCheck;
  static_assert(sizeof(AchievementSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AchievementSO*, "", "AchievementSO");
