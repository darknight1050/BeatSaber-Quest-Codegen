// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRSpatialAnchors
#include "OVR/OpenVR/IVRSpatialAnchors.hpp"
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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRSpatialAnchorError
  struct EVRSpatialAnchorError;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor
  class IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x169F7B4
    static IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor* New_ctor(::CsObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRSpatialAnchorError Invoke(System.String pchDescriptor, System.UInt32 pHandleOut)
    // Offset: 0x169F7C8
    OVR::OpenVR::EVRSpatialAnchorError Invoke(::CsString* pchDescriptor, uint& pHandleOut);
    // public System.IAsyncResult BeginInvoke(System.String pchDescriptor, System.UInt32 pHandleOut, System.AsyncCallback callback, System.Object object)
    // Offset: 0x169FBD4
    System::IAsyncResult* BeginInvoke(::CsString* pchDescriptor, uint& pHandleOut, System::AsyncCallback* callback, ::CsObject* object);
    // public OVR.OpenVR.EVRSpatialAnchorError EndInvoke(System.UInt32 pHandleOut, System.IAsyncResult result)
    // Offset: 0x169FC70
    OVR::OpenVR::EVRSpatialAnchorError EndInvoke(uint& pHandleOut, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor*, "OVR.OpenVR", "IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor");
#pragma pack(pop)
