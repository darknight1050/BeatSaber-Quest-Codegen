// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NamedIntListSettingsController
#include "GlobalNamespace/NamedIntListSettingsController.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NamedIntListSettingsController/TextValuePair
  class NamedIntListSettingsController::TextValuePair : public ::Il2CppObject {
    public:
    // public System.String text
    // Offset: 0x10
    ::Il2CppString* text;
    // public System.Int32 value
    // Offset: 0x18
    int value;
    // public System.String get_localizedText()
    // Offset: 0x1954E2C
    ::Il2CppString* get_localizedText();
    // public System.Void .ctor()
    // Offset: 0x1954E40
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NamedIntListSettingsController::TextValuePair* New_ctor();
  }; // NamedIntListSettingsController/TextValuePair
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NamedIntListSettingsController::TextValuePair*, "", "NamedIntListSettingsController/TextValuePair");
#pragma pack(pop)
