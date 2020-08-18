// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/OVRP_1_1_0
  class OVRPlugin::OVRP_1_1_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Bool ovrp_GetInitialized()
    // Offset: 0xEA0130
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetInitialized();
    // static private System.IntPtr _ovrp_GetVersion()
    // Offset: 0xEA01A4
    static System::IntPtr _ovrp_GetVersion();
    // static public System.String ovrp_GetVersion()
    // Offset: 0xEA0218
    static ::Il2CppString* ovrp_GetVersion();
    // static private System.IntPtr _ovrp_GetNativeSDKVersion()
    // Offset: 0xEA02A8
    static System::IntPtr _ovrp_GetNativeSDKVersion();
    // static public System.String ovrp_GetNativeSDKVersion()
    // Offset: 0xEA031C
    static ::Il2CppString* ovrp_GetNativeSDKVersion();
    // static public System.IntPtr ovrp_GetAudioOutId()
    // Offset: 0xEA03AC
    static System::IntPtr ovrp_GetAudioOutId();
    // static public System.IntPtr ovrp_GetAudioInId()
    // Offset: 0xEA0420
    static System::IntPtr ovrp_GetAudioInId();
    // static public System.Single ovrp_GetEyeTextureScale()
    // Offset: 0xEA0494
    static float ovrp_GetEyeTextureScale();
    // static public OVRPlugin/Bool ovrp_SetEyeTextureScale(System.Single value)
    // Offset: 0xEA0504
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetEyeTextureScale(float value);
    // static public OVRPlugin/Bool ovrp_GetTrackingOrientationSupported()
    // Offset: 0xEA058C
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetTrackingOrientationSupported();
    // static public OVRPlugin/Bool ovrp_GetTrackingOrientationEnabled()
    // Offset: 0xEA0600
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetTrackingOrientationEnabled();
    // static public OVRPlugin/Bool ovrp_SetTrackingOrientationEnabled(OVRPlugin/Bool value)
    // Offset: 0xEA0674
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetTrackingOrientationEnabled(GlobalNamespace::OVRPlugin::Bool value);
    // static public OVRPlugin/Bool ovrp_GetTrackingPositionSupported()
    // Offset: 0xEA06F4
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetTrackingPositionSupported();
    // static public OVRPlugin/Bool ovrp_GetTrackingPositionEnabled()
    // Offset: 0xEA0768
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetTrackingPositionEnabled();
    // static public OVRPlugin/Bool ovrp_SetTrackingPositionEnabled(OVRPlugin/Bool value)
    // Offset: 0xEA07DC
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetTrackingPositionEnabled(GlobalNamespace::OVRPlugin::Bool value);
    // static public OVRPlugin/Bool ovrp_GetNodePresent(OVRPlugin/Node nodeId)
    // Offset: 0xEA085C
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetNodePresent(GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Bool ovrp_GetNodeOrientationTracked(OVRPlugin/Node nodeId)
    // Offset: 0xEA08DC
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetNodeOrientationTracked(GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Bool ovrp_GetNodePositionTracked(OVRPlugin/Node nodeId)
    // Offset: 0xEA095C
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetNodePositionTracked(GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Frustumf ovrp_GetNodeFrustum(OVRPlugin/Node nodeId)
    // Offset: 0xEA09DC
    static GlobalNamespace::OVRPlugin::Frustumf ovrp_GetNodeFrustum(GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/ControllerState ovrp_GetControllerState(System.UInt32 controllerMask)
    // Offset: 0xEA0A5C
    static GlobalNamespace::OVRPlugin::ControllerState ovrp_GetControllerState(uint controllerMask);
    // static public System.Int32 ovrp_GetSystemCpuLevel()
    // Offset: 0xEA0AEC
    static int ovrp_GetSystemCpuLevel();
    // static public OVRPlugin/Bool ovrp_SetSystemCpuLevel(System.Int32 value)
    // Offset: 0xEA0B60
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetSystemCpuLevel(int value);
    // static public System.Int32 ovrp_GetSystemGpuLevel()
    // Offset: 0xEA0BE0
    static int ovrp_GetSystemGpuLevel();
    // static public OVRPlugin/Bool ovrp_SetSystemGpuLevel(System.Int32 value)
    // Offset: 0xEA0C54
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetSystemGpuLevel(int value);
    // static public OVRPlugin/Bool ovrp_GetSystemPowerSavingMode()
    // Offset: 0xEA0CD4
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetSystemPowerSavingMode();
    // static public System.Single ovrp_GetSystemDisplayFrequency()
    // Offset: 0xEA0D48
    static float ovrp_GetSystemDisplayFrequency();
    // static public System.Int32 ovrp_GetSystemVSyncCount()
    // Offset: 0xEA0DB8
    static int ovrp_GetSystemVSyncCount();
    // static public System.Single ovrp_GetSystemVolume()
    // Offset: 0xEA0E2C
    static float ovrp_GetSystemVolume();
    // static public OVRPlugin/BatteryStatus ovrp_GetSystemBatteryStatus()
    // Offset: 0xEA0E9C
    static GlobalNamespace::OVRPlugin::BatteryStatus ovrp_GetSystemBatteryStatus();
    // static public System.Single ovrp_GetSystemBatteryLevel()
    // Offset: 0xEA0F10
    static float ovrp_GetSystemBatteryLevel();
    // static public System.Single ovrp_GetSystemBatteryTemperature()
    // Offset: 0xEA0F80
    static float ovrp_GetSystemBatteryTemperature();
    // static private System.IntPtr _ovrp_GetSystemProductName()
    // Offset: 0xEA0FF0
    static System::IntPtr _ovrp_GetSystemProductName();
    // static public System.String ovrp_GetSystemProductName()
    // Offset: 0xEA1064
    static ::Il2CppString* ovrp_GetSystemProductName();
    // static public OVRPlugin/Bool ovrp_ShowSystemUI(OVRPlugin/PlatformUI ui)
    // Offset: 0xEA10F4
    static GlobalNamespace::OVRPlugin::Bool ovrp_ShowSystemUI(GlobalNamespace::OVRPlugin::PlatformUI ui);
    // static public OVRPlugin/Bool ovrp_GetAppMonoscopic()
    // Offset: 0xEA1174
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetAppMonoscopic();
    // static public OVRPlugin/Bool ovrp_SetAppMonoscopic(OVRPlugin/Bool value)
    // Offset: 0xEA11E8
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetAppMonoscopic(GlobalNamespace::OVRPlugin::Bool value);
    // static public OVRPlugin/Bool ovrp_GetAppHasVrFocus()
    // Offset: 0xEA1268
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetAppHasVrFocus();
    // static public OVRPlugin/Bool ovrp_GetAppShouldQuit()
    // Offset: 0xEA12DC
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetAppShouldQuit();
    // static public OVRPlugin/Bool ovrp_GetAppShouldRecenter()
    // Offset: 0xEA1350
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetAppShouldRecenter();
    // static private System.IntPtr _ovrp_GetAppLatencyTimings()
    // Offset: 0xEA13C4
    static System::IntPtr _ovrp_GetAppLatencyTimings();
    // static public System.String ovrp_GetAppLatencyTimings()
    // Offset: 0xEA1438
    static ::Il2CppString* ovrp_GetAppLatencyTimings();
    // static public OVRPlugin/Bool ovrp_GetUserPresent()
    // Offset: 0xEA14C8
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetUserPresent();
    // static public System.Single ovrp_GetUserIPD()
    // Offset: 0xEA153C
    static float ovrp_GetUserIPD();
    // static public OVRPlugin/Bool ovrp_SetUserIPD(System.Single value)
    // Offset: 0xEA15AC
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetUserIPD(float value);
    // static public System.Single ovrp_GetUserEyeDepth()
    // Offset: 0xEA1634
    static float ovrp_GetUserEyeDepth();
    // static public OVRPlugin/Bool ovrp_SetUserEyeDepth(System.Single value)
    // Offset: 0xEA16A4
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetUserEyeDepth(float value);
    // static public System.Single ovrp_GetUserEyeHeight()
    // Offset: 0xEA172C
    static float ovrp_GetUserEyeHeight();
    // static public OVRPlugin/Bool ovrp_SetUserEyeHeight(System.Single value)
    // Offset: 0xEA179C
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetUserEyeHeight(float value);
    // static private System.Void .cctor()
    // Offset: 0xEA1824
    static void _cctor();
  }; // OVRPlugin/OVRP_1_1_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_1_0*, "", "OVRPlugin/OVRP_1_1_0");
#pragma pack(pop)
