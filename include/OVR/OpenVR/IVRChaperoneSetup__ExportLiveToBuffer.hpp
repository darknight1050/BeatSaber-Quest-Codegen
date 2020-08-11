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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_ExportLiveToBuffer
  class IVRChaperoneSetup::_ExportLiveToBuffer : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xEBE14C
    static IVRChaperoneSetup::_ExportLiveToBuffer* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.Text.StringBuilder pBuffer, System.UInt32 pnBufferLength)
    // Offset: 0xEB7068
    bool Invoke(System::Text::StringBuilder* pBuffer, uint& pnBufferLength);
    // public System.IAsyncResult BeginInvoke(System.Text.StringBuilder pBuffer, System.UInt32 pnBufferLength, System.AsyncCallback callback, System.Object object)
    // Offset: 0xEBE160
    System::IAsyncResult* BeginInvoke(System::Text::StringBuilder* pBuffer, uint& pnBufferLength, System::AsyncCallback* callback, ::CsObject* object);
    // public System.Boolean EndInvoke(System.UInt32 pnBufferLength, System.IAsyncResult result)
    // Offset: 0xEBE1FC
    bool EndInvoke(uint& pnBufferLength, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_ExportLiveToBuffer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_ExportLiveToBuffer*, "OVR.OpenVR", "IVRChaperoneSetup/_ExportLiveToBuffer");
#pragma pack(pop)
