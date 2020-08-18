// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRExtendedDisplay
#include "OVR/OpenVR/IVRExtendedDisplay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
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
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRExtendedDisplay/_GetDXGIOutputInfo
  class IVRExtendedDisplay::_GetDXGIOutputInfo : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1471174
    static IVRExtendedDisplay::_GetDXGIOutputInfo* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Int32 pnAdapterIndex, System.Int32 pnAdapterOutputIndex)
    // Offset: 0x1471188
    void Invoke(int& pnAdapterIndex, int& pnAdapterOutputIndex);
    // public System.IAsyncResult BeginInvoke(System.Int32 pnAdapterIndex, System.Int32 pnAdapterOutputIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14713F4
    System::IAsyncResult* BeginInvoke(int& pnAdapterIndex, int& pnAdapterOutputIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.Int32 pnAdapterIndex, System.Int32 pnAdapterOutputIndex, System.IAsyncResult result)
    // Offset: 0x14714A0
    void EndInvoke(int& pnAdapterIndex, int& pnAdapterOutputIndex, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRExtendedDisplay/_GetDXGIOutputInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo*, "OVR.OpenVR", "IVRExtendedDisplay/_GetDXGIOutputInfo");
#pragma pack(pop)
