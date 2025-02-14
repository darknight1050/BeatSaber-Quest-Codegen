// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IRichPresenceData
#include "GlobalNamespace/IRichPresenceData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayingDifficultyBeatmapRichPresenceData
  class PlayingDifficultyBeatmapRichPresenceData : public ::Il2CppObject/*, public GlobalNamespace::IRichPresenceData*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE18A84
    // private System.String <apiName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* apiName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE18A94
    // private System.String <localizedDescription>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* localizedDescription;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: PlayingDifficultyBeatmapRichPresenceData
    PlayingDifficultyBeatmapRichPresenceData(::Il2CppString* apiName_ = {}, ::Il2CppString* localizedDescription_ = {}) noexcept : apiName{apiName_}, localizedDescription{localizedDescription_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IRichPresenceData
    operator GlobalNamespace::IRichPresenceData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IRichPresenceData*>(this);
    }
    // public System.String get_apiName()
    // Offset: 0x10A1E70
    ::Il2CppString* get_apiName();
    // private System.Void set_apiName(System.String value)
    // Offset: 0x10A1E78
    void set_apiName(::Il2CppString* value);
    // public System.String get_localizedDescription()
    // Offset: 0x10A1E80
    ::Il2CppString* get_localizedDescription();
    // private System.Void set_localizedDescription(System.String value)
    // Offset: 0x10A1E88
    void set_localizedDescription(::Il2CppString* value);
    // public System.Void .ctor(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x10A1E90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayingDifficultyBeatmapRichPresenceData* New_ctor(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayingDifficultyBeatmapRichPresenceData*, creationType>(difficultyBeatmap)));
    }
    // private System.String GetDestinationLocalizedString(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x10A1ED4
    ::Il2CppString* GetDestinationLocalizedString(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
  }; // PlayingDifficultyBeatmapRichPresenceData
  #pragma pack(pop)
  static check_size<sizeof(PlayingDifficultyBeatmapRichPresenceData), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_PlayingDifficultyBeatmapRichPresenceDataSizeCheck;
  static_assert(sizeof(PlayingDifficultyBeatmapRichPresenceData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*, "", "PlayingDifficultyBeatmapRichPresenceData");
