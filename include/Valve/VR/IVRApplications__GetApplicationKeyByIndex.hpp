// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRApplications/_GetApplicationKeyByIndex
  class IVRApplications::_GetApplicationKeyByIndex : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xF4497C
    static IVRApplications::_GetApplicationKeyByIndex* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRApplicationError Invoke(System.UInt32 unApplicationIndex, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0xF37BA8
    Valve::VR::EVRApplicationError Invoke(uint unApplicationIndex, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unApplicationIndex, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen, System.AsyncCallback callback, System.Object object)
    // Offset: 0xF44990
    System::IAsyncResult* BeginInvoke(uint unApplicationIndex, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0xF44A40
    Valve::VR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_GetApplicationKeyByIndex
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_GetApplicationKeyByIndex*, "Valve.VR", "IVRApplications/_GetApplicationKeyByIndex");
#pragma pack(pop)
