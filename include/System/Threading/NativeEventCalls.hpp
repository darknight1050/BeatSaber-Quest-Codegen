// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Microsoft::Win32::SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeWaitHandle
  class SafeWaitHandle;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.NativeEventCalls
  class NativeEventCalls : public ::CsObject {
    public:
    // static public System.IntPtr CreateEvent_internal(System.Boolean manual, System.Boolean initial, System.String name, System.Int32 errorCode)
    // Offset: 0x13C2FBC
    static System::IntPtr CreateEvent_internal(bool manual, bool initial, ::CsString* name, int& errorCode);
    // static public System.Boolean SetEvent(Microsoft.Win32.SafeHandles.SafeWaitHandle handle)
    // Offset: 0x13C310C
    static bool SetEvent(Microsoft::Win32::SafeHandles::SafeWaitHandle* handle);
    // static private System.Boolean SetEvent_internal(System.IntPtr handle)
    // Offset: 0x13C62D8
    static bool SetEvent_internal(System::IntPtr handle);
    // static public System.Boolean ResetEvent(Microsoft.Win32.SafeHandles.SafeWaitHandle handle)
    // Offset: 0x13C3050
    static bool ResetEvent(Microsoft::Win32::SafeHandles::SafeWaitHandle* handle);
    // static private System.Boolean ResetEvent_internal(System.IntPtr handle)
    // Offset: 0x13C62DC
    static bool ResetEvent_internal(System::IntPtr handle);
    // static public System.Void CloseEvent_internal(System.IntPtr handle)
    // Offset: 0x13C62E0
    static void CloseEvent_internal(System::IntPtr handle);
  }; // System.Threading.NativeEventCalls
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::NativeEventCalls*, "System.Threading", "NativeEventCalls");
#pragma pack(pop)
