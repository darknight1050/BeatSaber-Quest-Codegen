// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRResources
#include "Valve/VR/IVRResources.hpp"
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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRResources/_GetResourceFullPath
  class IVRResources::_GetResourceFullPath : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1621DE4
    static IVRResources::_GetResourceFullPath* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.String pchResourceName, System.String pchResourceTypeDirectory, System.Text.StringBuilder pchPathBuffer, System.UInt32 unBufferLen)
    // Offset: 0x1621DF8
    uint Invoke(::Il2CppString* pchResourceName, ::Il2CppString* pchResourceTypeDirectory, System::Text::StringBuilder* pchPathBuffer, uint unBufferLen);
    // public System.IAsyncResult BeginInvoke(System.String pchResourceName, System.String pchResourceTypeDirectory, System.Text.StringBuilder pchPathBuffer, System.UInt32 unBufferLen, System.AsyncCallback callback, System.Object object)
    // Offset: 0x162224C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchResourceName, ::Il2CppString* pchResourceTypeDirectory, System::Text::StringBuilder* pchPathBuffer, uint unBufferLen, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x16222FC
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRResources/_GetResourceFullPath
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRResources::_GetResourceFullPath*, "Valve.VR", "IVRResources/_GetResourceFullPath");
#pragma pack(pop)
