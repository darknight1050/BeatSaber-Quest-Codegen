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
  // Forward declaring type: ETrackedDeviceClass
  struct ETrackedDeviceClass;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_GetTrackedDeviceClass
  class IVRSystem::_GetTrackedDeviceClass : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16BFEE4
    static IVRSystem::_GetTrackedDeviceClass* New_ctor(::CsObject* object, System::IntPtr method);
    // public Valve.VR.ETrackedDeviceClass Invoke(System.UInt32 unDeviceIndex)
    // Offset: 0x16BFEF8
    Valve::VR::ETrackedDeviceClass Invoke(uint unDeviceIndex);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16C016C
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, System::AsyncCallback* callback, ::CsObject* object);
    // public Valve.VR.ETrackedDeviceClass EndInvoke(System.IAsyncResult result)
    // Offset: 0x16C01F8
    Valve::VR::ETrackedDeviceClass EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetTrackedDeviceClass
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetTrackedDeviceClass*, "Valve.VR", "IVRSystem/_GetTrackedDeviceClass");
#pragma pack(pop)
