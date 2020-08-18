// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IAnalyticsModel
#include "GlobalNamespace/IAnalyticsModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: UnityAnalyticsModel
  class UnityAnalyticsModel : public GlobalNamespace::IAnalyticsModel, public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::UnityAnalyticsModel::$$c
    class $$c;
    // public System.Boolean get_supportsOpenDataPrivacyPage()
    // Offset: 0x1967A70
    // Implemented from: IAnalyticsModel
    // Base method: System.Boolean IAnalyticsModel::get_supportsOpenDataPrivacyPage()
    bool get_supportsOpenDataPrivacyPage();
    // public System.Void OpenDataPrivacyPage()
    // Offset: 0x1967A78
    // Implemented from: IAnalyticsModel
    // Base method: System.Void IAnalyticsModel::OpenDataPrivacyPage()
    void OpenDataPrivacyPage();
    // public System.Void LogEvent(System.String eventCategory, System.String eventAction, System.String eventLabel, System.Int64 value)
    // Offset: 0x1967B60
    // Implemented from: IAnalyticsModel
    // Base method: System.Void IAnalyticsModel::LogEvent(System.String eventCategory, System.String eventAction, System.String eventLabel, System.Int64 value)
    void LogEvent(::Il2CppString* eventCategory, ::Il2CppString* eventAction, ::Il2CppString* eventLabel, int64_t value);
    // public System.Void .ctor()
    // Offset: 0x1967C74
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static UnityAnalyticsModel* New_ctor();
  }; // UnityAnalyticsModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityAnalyticsModel*, "", "UnityAnalyticsModel");
#pragma pack(pop)
