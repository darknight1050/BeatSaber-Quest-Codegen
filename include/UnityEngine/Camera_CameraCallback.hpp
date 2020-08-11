// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
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
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Camera/CameraCallback
  class Camera::CameraCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x12EDE28
    static Camera::CameraCallback* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.Void Invoke(UnityEngine.Camera cam)
    // Offset: 0x12ED99C
    void Invoke(UnityEngine::Camera* cam);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Camera cam, System.AsyncCallback callback, System.Object object)
    // Offset: 0x12EDE3C
    System::IAsyncResult* BeginInvoke(UnityEngine::Camera* cam, System::AsyncCallback* callback, ::CsObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x12EDE60
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.Camera/CameraCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Camera::CameraCallback*, "UnityEngine", "Camera/CameraCallback");
#pragma pack(pop)
