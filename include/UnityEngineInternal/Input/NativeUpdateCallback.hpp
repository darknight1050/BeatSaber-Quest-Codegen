// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
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
// Forward declaring namespace: UnityEngineInternal::Input
namespace UnityEngineInternal::Input {
  // Forward declaring type: NativeInputUpdateType
  struct NativeInputUpdateType;
  // Forward declaring type: NativeInputEventBuffer
  struct NativeInputEventBuffer;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngineInternal.Input
namespace UnityEngineInternal::Input {
  // Autogenerated type: UnityEngineInternal.Input.NativeUpdateCallback
  class NativeUpdateCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1966A20
    static NativeUpdateCallback* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.Void Invoke(UnityEngineInternal.Input.NativeInputUpdateType updateType, UnityEngineInternal.Input.NativeInputEventBuffer* buffer)
    // Offset: 0x1966658
    void Invoke(UnityEngineInternal::Input::NativeInputUpdateType updateType, UnityEngineInternal::Input::NativeInputEventBuffer* buffer);
    // public System.IAsyncResult BeginInvoke(UnityEngineInternal.Input.NativeInputUpdateType updateType, UnityEngineInternal.Input.NativeInputEventBuffer* buffer, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1966A34
    System::IAsyncResult* BeginInvoke(UnityEngineInternal::Input::NativeInputUpdateType updateType, UnityEngineInternal::Input::NativeInputEventBuffer* buffer, System::AsyncCallback* callback, ::CsObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1966ACC
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngineInternal.Input.NativeUpdateCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::Input::NativeUpdateCallback*, "UnityEngineInternal.Input", "NativeUpdateCallback");
#pragma pack(pop)
