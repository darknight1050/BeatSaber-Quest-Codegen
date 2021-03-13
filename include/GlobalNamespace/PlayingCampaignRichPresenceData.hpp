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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayingCampaignRichPresenceData
  // [] Offset: FFFFFFFF
  class PlayingCampaignRichPresenceData : public ::Il2CppObject/*, public GlobalNamespace::IRichPresenceData*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD22384
    // private System.String <localizedDescription>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* localizedDescription;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: PlayingCampaignRichPresenceData
    PlayingCampaignRichPresenceData(::Il2CppString* localizedDescription_ = {}) noexcept : localizedDescription{localizedDescription_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IRichPresenceData
    operator GlobalNamespace::IRichPresenceData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IRichPresenceData*>(this);
    }
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return localizedDescription;
    }
    // [LocalizationKeyAttribute] Offset: 0xD22394
    // static field const value: static private System.String kPlayingCampaignRichPresenceLocalizationKey
    static constexpr const char* kPlayingCampaignRichPresenceLocalizationKey = "PLAYING_CAMPAIGN_PRESENCE";
    // Get static field: static private System.String kPlayingCampaignRichPresenceLocalizationKey
    static ::Il2CppString* _get_kPlayingCampaignRichPresenceLocalizationKey();
    // Set static field: static private System.String kPlayingCampaignRichPresenceLocalizationKey
    static void _set_kPlayingCampaignRichPresenceLocalizationKey(::Il2CppString* value);
    // public System.String get_apiName()
    // Offset: 0xF9AB5C
    ::Il2CppString* get_apiName_NEW();
    // public System.String get_localizedDescription()
    // Offset: 0xF9ABA4
    ::Il2CppString* get_localizedDescription_NEW();
    // private System.Void set_localizedDescription(System.String value)
    // Offset: 0xF9ABAC
    void set_localizedDescription(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0xF9ABB4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayingCampaignRichPresenceData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayingCampaignRichPresenceData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayingCampaignRichPresenceData*, creationType>()));
    }
  }; // PlayingCampaignRichPresenceData
  #pragma pack(pop)
  static check_size<sizeof(PlayingCampaignRichPresenceData), 16 + sizeof(::Il2CppString*)> __GlobalNamespace_PlayingCampaignRichPresenceDataSizeCheck;
  static_assert(sizeof(PlayingCampaignRichPresenceData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayingCampaignRichPresenceData*, "", "PlayingCampaignRichPresenceData");
