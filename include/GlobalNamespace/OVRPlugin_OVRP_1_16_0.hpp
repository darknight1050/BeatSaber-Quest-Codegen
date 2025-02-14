// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_16_0
  class OVRPlugin::OVRP_1_16_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_16_0
    OVRP_1_16_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Result ovrp_UpdateCameraDevices()
    // Offset: 0x160689C
    static GlobalNamespace::OVRPlugin::Result ovrp_UpdateCameraDevices();
    // static public OVRPlugin/Bool ovrp_IsCameraDeviceAvailable(OVRPlugin/CameraDevice cameraDevice)
    // Offset: 0x1606910
    static GlobalNamespace::OVRPlugin::Bool ovrp_IsCameraDeviceAvailable(GlobalNamespace::OVRPlugin::CameraDevice cameraDevice);
    // static public OVRPlugin/Result ovrp_SetCameraDevicePreferredColorFrameSize(OVRPlugin/CameraDevice cameraDevice, OVRPlugin/Sizei preferredColorFrameSize)
    // Offset: 0x1606990
    static GlobalNamespace::OVRPlugin::Result ovrp_SetCameraDevicePreferredColorFrameSize(GlobalNamespace::OVRPlugin::CameraDevice cameraDevice, GlobalNamespace::OVRPlugin::Sizei preferredColorFrameSize);
    // static public OVRPlugin/Result ovrp_OpenCameraDevice(OVRPlugin/CameraDevice cameraDevice)
    // Offset: 0x1606A20
    static GlobalNamespace::OVRPlugin::Result ovrp_OpenCameraDevice(GlobalNamespace::OVRPlugin::CameraDevice cameraDevice);
    // static public OVRPlugin/Result ovrp_CloseCameraDevice(OVRPlugin/CameraDevice cameraDevice)
    // Offset: 0x1606AA0
    static GlobalNamespace::OVRPlugin::Result ovrp_CloseCameraDevice(GlobalNamespace::OVRPlugin::CameraDevice cameraDevice);
    // static public OVRPlugin/Bool ovrp_HasCameraDeviceOpened(OVRPlugin/CameraDevice cameraDevice)
    // Offset: 0x1606B20
    static GlobalNamespace::OVRPlugin::Bool ovrp_HasCameraDeviceOpened(GlobalNamespace::OVRPlugin::CameraDevice cameraDevice);
    // static public OVRPlugin/Bool ovrp_IsCameraDeviceColorFrameAvailable(OVRPlugin/CameraDevice cameraDevice)
    // Offset: 0x1606BA0
    static GlobalNamespace::OVRPlugin::Bool ovrp_IsCameraDeviceColorFrameAvailable(GlobalNamespace::OVRPlugin::CameraDevice cameraDevice);
    // static public OVRPlugin/Result ovrp_GetCameraDeviceColorFrameSize(OVRPlugin/CameraDevice cameraDevice, out OVRPlugin/Sizei colorFrameSize)
    // Offset: 0x1606C20
    static GlobalNamespace::OVRPlugin::Result ovrp_GetCameraDeviceColorFrameSize(GlobalNamespace::OVRPlugin::CameraDevice cameraDevice, GlobalNamespace::OVRPlugin::Sizei& colorFrameSize);
    // static public OVRPlugin/Result ovrp_GetCameraDeviceColorFrameBgraPixels(OVRPlugin/CameraDevice cameraDevice, out System.IntPtr colorFrameBgraPixels, out System.Int32 colorFrameRowPitch)
    // Offset: 0x1606CB0
    static GlobalNamespace::OVRPlugin::Result ovrp_GetCameraDeviceColorFrameBgraPixels(GlobalNamespace::OVRPlugin::CameraDevice cameraDevice, System::IntPtr& colorFrameBgraPixels, int& colorFrameRowPitch);
    // static public OVRPlugin/Result ovrp_GetControllerState4(System.UInt32 controllerMask, ref OVRPlugin/ControllerState4 controllerState)
    // Offset: 0x1606D48
    static GlobalNamespace::OVRPlugin::Result ovrp_GetControllerState4(uint controllerMask, GlobalNamespace::OVRPlugin::ControllerState4& controllerState);
    // static private System.Void .cctor()
    // Offset: 0x1606DD8
    static void _cctor();
  }; // OVRPlugin/OVRP_1_16_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_16_0*, "", "OVRPlugin/OVRP_1_16_0");
