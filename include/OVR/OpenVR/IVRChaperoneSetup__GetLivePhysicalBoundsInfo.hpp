// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
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
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_GetLivePhysicalBoundsInfo
  class IVRChaperoneSetup::_GetLivePhysicalBoundsInfo : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xEBE404
    static IVRChaperoneSetup::_GetLivePhysicalBoundsInfo* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.Boolean Invoke(OVR.OpenVR.HmdQuad_t[] pQuadsBuffer, System.UInt32 punQuadsCount)
    // Offset: 0xEB6DD4
    bool Invoke(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer, uint& punQuadsCount);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.HmdQuad_t[] pQuadsBuffer, System.UInt32 punQuadsCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0xEBE418
    System::IAsyncResult* BeginInvoke(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer, uint& punQuadsCount, System::AsyncCallback* callback, ::CsObject* object);
    // public System.Boolean EndInvoke(System.UInt32 punQuadsCount, System.IAsyncResult result)
    // Offset: 0xEBE4B4
    bool EndInvoke(uint& punQuadsCount, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_GetLivePhysicalBoundsInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_GetLivePhysicalBoundsInfo");
#pragma pack(pop)
