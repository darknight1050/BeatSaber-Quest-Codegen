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
  // Forward declaring type: EVREventType
  struct EVREventType;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_GetEventTypeNameFromEnum
  class IVRSystem::_GetEventTypeNameFromEnum : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16BC278
    static IVRSystem::_GetEventTypeNameFromEnum* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.IntPtr Invoke(Valve.VR.EVREventType eType)
    // Offset: 0x16BC28C
    System::IntPtr Invoke(Valve::VR::EVREventType eType);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREventType eType, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16BC500
    System::IAsyncResult* BeginInvoke(Valve::VR::EVREventType eType, System::AsyncCallback* callback, ::CsObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x16BC58C
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetEventTypeNameFromEnum
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetEventTypeNameFromEnum*, "Valve.VR", "IVRSystem/_GetEventTypeNameFromEnum");
#pragma pack(pop)
