// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Completed includes
// Begin il2cpp-utils forward declares
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: IAnalyticsModel
  class IAnalyticsModel {
    public:
    // public System.Boolean get_supportsOpenDataPrivacyPage()
    // Offset: 0xFFFFFFFF
    bool get_supportsOpenDataPrivacyPage();
    // public System.Void OpenDataPrivacyPage()
    // Offset: 0xFFFFFFFF
    void OpenDataPrivacyPage();
    // public System.Void LogEvent(System.String eventCategory, System.String eventAction, System.String eventLabel, System.Int64 value)
    // Offset: 0xFFFFFFFF
    void LogEvent(::CsString* eventCategory, ::CsString* eventAction, ::CsString* eventLabel, int64_t value);
  }; // IAnalyticsModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IAnalyticsModel*, "", "IAnalyticsModel");
#pragma pack(pop)
