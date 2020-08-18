// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
  // Forward declaring type: AppOverrideKeys_t
  struct AppOverrideKeys_t;
  // Forward declaring type: EVRApplicationProperty
  struct EVRApplicationProperty;
  // Forward declaring type: EVRApplicationTransitionState
  struct EVRApplicationTransitionState;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRApplications
  class CVRApplications : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRApplications FnTable
    // Offset: 0x10
    Valve::VR::IVRApplications FnTable;
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xF36C30
    static CVRApplications* New_ctor(System::IntPtr pInterface);
    // public Valve.VR.EVRApplicationError AddApplicationManifest(System.String pchApplicationManifestFullPath, System.Boolean bTemporary)
    // Offset: 0xF36D44
    Valve::VR::EVRApplicationError AddApplicationManifest(::Il2CppString* pchApplicationManifestFullPath, bool bTemporary);
    // public Valve.VR.EVRApplicationError RemoveApplicationManifest(System.String pchApplicationManifestFullPath)
    // Offset: 0xF371B0
    Valve::VR::EVRApplicationError RemoveApplicationManifest(::Il2CppString* pchApplicationManifestFullPath);
    // public System.Boolean IsApplicationInstalled(System.String pchAppKey)
    // Offset: 0xF37588
    bool IsApplicationInstalled(::Il2CppString* pchAppKey);
    // public System.UInt32 GetApplicationCount()
    // Offset: 0xF37964
    uint GetApplicationCount();
    // public Valve.VR.EVRApplicationError GetApplicationKeyByIndex(System.UInt32 unApplicationIndex, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0xF37B90
    Valve::VR::EVRApplicationError GetApplicationKeyByIndex(uint unApplicationIndex, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public Valve.VR.EVRApplicationError GetApplicationKeyByProcessId(System.UInt32 unProcessId, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0xF37E54
    Valve::VR::EVRApplicationError GetApplicationKeyByProcessId(uint unProcessId, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public Valve.VR.EVRApplicationError LaunchApplication(System.String pchAppKey)
    // Offset: 0xF38118
    Valve::VR::EVRApplicationError LaunchApplication(::Il2CppString* pchAppKey);
    // public Valve.VR.EVRApplicationError LaunchTemplateApplication(System.String pchTemplateAppKey, System.String pchNewAppKey, Valve.VR.AppOverrideKeys_t[] pKeys)
    // Offset: 0xF384F0
    Valve::VR::EVRApplicationError LaunchTemplateApplication(::Il2CppString* pchTemplateAppKey, ::Il2CppString* pchNewAppKey, ::Array<Valve::VR::AppOverrideKeys_t>* pKeys);
    // public Valve.VR.EVRApplicationError LaunchApplicationFromMimeType(System.String pchMimeType, System.String pchArgs)
    // Offset: 0xF38968
    Valve::VR::EVRApplicationError LaunchApplicationFromMimeType(::Il2CppString* pchMimeType, ::Il2CppString* pchArgs);
    // public Valve.VR.EVRApplicationError LaunchDashboardOverlay(System.String pchAppKey)
    // Offset: 0xF38D8C
    Valve::VR::EVRApplicationError LaunchDashboardOverlay(::Il2CppString* pchAppKey);
    // public System.Boolean CancelApplicationLaunch(System.String pchAppKey)
    // Offset: 0xF39164
    bool CancelApplicationLaunch(::Il2CppString* pchAppKey);
    // public Valve.VR.EVRApplicationError IdentifyApplication(System.UInt32 unProcessId, System.String pchAppKey)
    // Offset: 0xF39540
    Valve::VR::EVRApplicationError IdentifyApplication(uint unProcessId, ::Il2CppString* pchAppKey);
    // public System.UInt32 GetApplicationProcessId(System.String pchAppKey)
    // Offset: 0xF397E8
    uint GetApplicationProcessId(::Il2CppString* pchAppKey);
    // public System.String GetApplicationsErrorNameFromEnum(Valve.VR.EVRApplicationError error)
    // Offset: 0xF39BC0
    ::Il2CppString* GetApplicationsErrorNameFromEnum(Valve::VR::EVRApplicationError error);
    // public System.UInt32 GetApplicationPropertyString(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, System.Text.StringBuilder pchPropertyValueBuffer, System.UInt32 unPropertyValueBufferLen, Valve.VR.EVRApplicationError peError)
    // Offset: 0xF39EC4
    uint GetApplicationPropertyString(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, System::Text::StringBuilder* pchPropertyValueBuffer, uint unPropertyValueBufferLen, Valve::VR::EVRApplicationError& peError);
    // public System.Boolean GetApplicationPropertyBool(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, Valve.VR.EVRApplicationError peError)
    // Offset: 0xF3A380
    bool GetApplicationPropertyBool(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, Valve::VR::EVRApplicationError& peError);
    // public System.UInt64 GetApplicationPropertyUint64(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, Valve.VR.EVRApplicationError peError)
    // Offset: 0xF3A7F4
    uint64_t GetApplicationPropertyUint64(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, Valve::VR::EVRApplicationError& peError);
    // public Valve.VR.EVRApplicationError SetApplicationAutoLaunch(System.String pchAppKey, System.Boolean bAutoLaunch)
    // Offset: 0xF3AC64
    Valve::VR::EVRApplicationError SetApplicationAutoLaunch(::Il2CppString* pchAppKey, bool bAutoLaunch);
    // public System.Boolean GetApplicationAutoLaunch(System.String pchAppKey)
    // Offset: 0xF3B0D0
    bool GetApplicationAutoLaunch(::Il2CppString* pchAppKey);
    // public Valve.VR.EVRApplicationError SetDefaultApplicationForMimeType(System.String pchAppKey, System.String pchMimeType)
    // Offset: 0xF3B4AC
    Valve::VR::EVRApplicationError SetDefaultApplicationForMimeType(::Il2CppString* pchAppKey, ::Il2CppString* pchMimeType);
    // public System.Boolean GetDefaultApplicationForMimeType(System.String pchMimeType, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0xF3B8D0
    bool GetDefaultApplicationForMimeType(::Il2CppString* pchMimeType, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public System.Boolean GetApplicationSupportedMimeTypes(System.String pchAppKey, System.Text.StringBuilder pchMimeTypesBuffer, System.UInt32 unMimeTypesBuffer)
    // Offset: 0xF3BD1C
    bool GetApplicationSupportedMimeTypes(::Il2CppString* pchAppKey, System::Text::StringBuilder* pchMimeTypesBuffer, uint unMimeTypesBuffer);
    // public System.UInt32 GetApplicationsThatSupportMimeType(System.String pchMimeType, System.Text.StringBuilder pchAppKeysThatSupportBuffer, System.UInt32 unAppKeysThatSupportBuffer)
    // Offset: 0xF3C168
    uint GetApplicationsThatSupportMimeType(::Il2CppString* pchMimeType, System::Text::StringBuilder* pchAppKeysThatSupportBuffer, uint unAppKeysThatSupportBuffer);
    // public System.UInt32 GetApplicationLaunchArguments(System.UInt32 unHandle, System.Text.StringBuilder pchArgs, System.UInt32 unArgs)
    // Offset: 0xF3C5B0
    uint GetApplicationLaunchArguments(uint unHandle, System::Text::StringBuilder* pchArgs, uint unArgs);
    // public Valve.VR.EVRApplicationError GetStartingApplication(System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0xF3C874
    Valve::VR::EVRApplicationError GetStartingApplication(System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public Valve.VR.EVRApplicationTransitionState GetTransitionState()
    // Offset: 0xF3CCC0
    Valve::VR::EVRApplicationTransitionState GetTransitionState();
    // public Valve.VR.EVRApplicationError PerformApplicationPrelaunchCheck(System.String pchAppKey)
    // Offset: 0xF3CEEC
    Valve::VR::EVRApplicationError PerformApplicationPrelaunchCheck(::Il2CppString* pchAppKey);
    // public System.String GetApplicationsTransitionStateNameFromEnum(Valve.VR.EVRApplicationTransitionState state)
    // Offset: 0xF3D2C4
    ::Il2CppString* GetApplicationsTransitionStateNameFromEnum(Valve::VR::EVRApplicationTransitionState state);
    // public System.Boolean IsQuitUserPromptRequested()
    // Offset: 0xF3D5C8
    bool IsQuitUserPromptRequested();
    // public Valve.VR.EVRApplicationError LaunchInternalProcess(System.String pchBinaryPath, System.String pchArguments, System.String pchWorkingDirectory)
    // Offset: 0xF3D7F8
    Valve::VR::EVRApplicationError LaunchInternalProcess(::Il2CppString* pchBinaryPath, ::Il2CppString* pchArguments, ::Il2CppString* pchWorkingDirectory);
    // public System.UInt32 GetCurrentSceneProcessId()
    // Offset: 0xF3DC40
    uint GetCurrentSceneProcessId();
  }; // Valve.VR.CVRApplications
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRApplications*, "Valve.VR", "CVRApplications");
#pragma pack(pop)
