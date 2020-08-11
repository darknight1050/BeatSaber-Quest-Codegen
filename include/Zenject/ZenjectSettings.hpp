// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.RootResolveMethods
#include "Zenject/RootResolveMethods.hpp"
// Including type: Zenject.ValidationErrorResponses
#include "Zenject/ValidationErrorResponses.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ZenjectSettings
  class ZenjectSettings : public ::CsObject {
    public:
    // Nested type: Zenject::ZenjectSettings::SignalSettings
    class SignalSettings;
    // Get static field: static public Zenject.ZenjectSettings Default
    static Zenject::ZenjectSettings* _get_Default();
    // Set static field: static public Zenject.ZenjectSettings Default
    static void _set_Default(Zenject::ZenjectSettings* value);
    // private System.Boolean _ensureDeterministicDestructionOrderOnApplicationQuit
    // Offset: 0x10
    bool ensureDeterministicDestructionOrderOnApplicationQuit;
    // private System.Boolean _displayWarningWhenResolvingDuringInstall
    // Offset: 0x11
    bool displayWarningWhenResolvingDuringInstall;
    // private Zenject.RootResolveMethods _validationRootResolveMethod
    // Offset: 0x14
    Zenject::RootResolveMethods validationRootResolveMethod;
    // private Zenject.ValidationErrorResponses _validationErrorResponse
    // Offset: 0x18
    Zenject::ValidationErrorResponses validationErrorResponse;
    // private Zenject.ZenjectSettings/SignalSettings _signalSettings
    // Offset: 0x20
    Zenject::ZenjectSettings::SignalSettings* signalSettings;
    // public System.Void .ctor(Zenject.ValidationErrorResponses validationErrorResponse, Zenject.RootResolveMethods validationRootResolveMethod, System.Boolean displayWarningWhenResolvingDuringInstall, System.Boolean ensureDeterministicDestructionOrderOnApplicationQuit, Zenject.ZenjectSettings/SignalSettings signalSettings)
    // Offset: 0x19295B8
    static ZenjectSettings* New_ctor(Zenject::ValidationErrorResponses validationErrorResponse, Zenject::RootResolveMethods validationRootResolveMethod, bool displayWarningWhenResolvingDuringInstall, bool ensureDeterministicDestructionOrderOnApplicationQuit, Zenject::ZenjectSettings::SignalSettings* signalSettings);
    // public Zenject.ZenjectSettings/SignalSettings get_Signals()
    // Offset: 0x1929698
    Zenject::ZenjectSettings::SignalSettings* get_Signals();
    // public Zenject.ValidationErrorResponses get_ValidationErrorResponse()
    // Offset: 0x19296A0
    Zenject::ValidationErrorResponses get_ValidationErrorResponse();
    // public Zenject.RootResolveMethods get_ValidationRootResolveMethod()
    // Offset: 0x19296A8
    Zenject::RootResolveMethods get_ValidationRootResolveMethod();
    // public System.Boolean get_DisplayWarningWhenResolvingDuringInstall()
    // Offset: 0x19296B0
    bool get_DisplayWarningWhenResolvingDuringInstall();
    // public System.Boolean get_EnsureDeterministicDestructionOrderOnApplicationQuit()
    // Offset: 0x19296B8
    bool get_EnsureDeterministicDestructionOrderOnApplicationQuit();
    // static private System.Void .cctor()
    // Offset: 0x19296C0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1929680
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ZenjectSettings* New_ctor();
  }; // Zenject.ZenjectSettings
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectSettings*, "Zenject", "ZenjectSettings");
#pragma pack(pop)
