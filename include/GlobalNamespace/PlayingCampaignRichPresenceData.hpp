// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: IRichPresenceData
#include "GlobalNamespace/IRichPresenceData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayingCampaignRichPresenceData
  class PlayingCampaignRichPresenceData : public ::CsObject, public GlobalNamespace::IRichPresenceData {
    public:
    // private System.String <localizedDescription>k__BackingField
    // Offset: 0x10
    ::CsString* localizedDescription;
    // static field const value: static private System.String kPlayingCampaignRichPresenceLocalizationKey
    static constexpr const char* kPlayingCampaignRichPresenceLocalizationKey = "PLAYING_CAMPAIGN_PRESENCE";
    // Get static field: static private System.String kPlayingCampaignRichPresenceLocalizationKey
    static ::CsString* _get_kPlayingCampaignRichPresenceLocalizationKey();
    // Set static field: static private System.String kPlayingCampaignRichPresenceLocalizationKey
    static void _set_kPlayingCampaignRichPresenceLocalizationKey(::CsString* value);
    // private System.Void set_localizedDescription(System.String value)
    // Offset: 0xC070C0
    void set_localizedDescription(::CsString* value);
    // public System.String get_apiName()
    // Offset: 0xC07070
    // Implemented from: IRichPresenceData
    // Base method: System.String IRichPresenceData::get_apiName()
    ::CsString* get_apiName();
    // public System.String get_localizedDescription()
    // Offset: 0xC070B8
    // Implemented from: IRichPresenceData
    // Base method: System.String IRichPresenceData::get_localizedDescription()
    ::CsString* get_localizedDescription();
    // public System.Void .ctor()
    // Offset: 0xC070C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayingCampaignRichPresenceData* New_ctor();
  }; // PlayingCampaignRichPresenceData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayingCampaignRichPresenceData*, "", "PlayingCampaignRichPresenceData");
#pragma pack(pop)
