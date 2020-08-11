// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: ETrackedDeviceProperty
  struct ETrackedDeviceProperty;
  // Forward declaring type: ETrackedPropertyError
  struct ETrackedPropertyError;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_GetInt32TrackedDeviceProperty
  class IVRSystem::_GetInt32TrackedDeviceProperty : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16BD098
    static IVRSystem::_GetInt32TrackedDeviceProperty* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.Int32 Invoke(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, Valve.VR.ETrackedPropertyError pError)
    // Offset: 0x16BD0AC
    int Invoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, Valve.VR.ETrackedPropertyError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16BD358
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError, System::AsyncCallback* callback, ::CsObject* object);
    // public System.Int32 EndInvoke(Valve.VR.ETrackedPropertyError pError, System.IAsyncResult result)
    // Offset: 0x16BD42C
    int EndInvoke(Valve::VR::ETrackedPropertyError& pError, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetInt32TrackedDeviceProperty
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetInt32TrackedDeviceProperty*, "Valve.VR", "IVRSystem/_GetInt32TrackedDeviceProperty");
#pragma pack(pop)
