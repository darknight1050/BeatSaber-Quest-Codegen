// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: UnityEngine.UI.ReflectionMethodsCache
#include "UnityEngine/UI/ReflectionMethodsCache.hpp"
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RaycastHit
  struct RaycastHit;
  // Forward declaring type: Ray
  struct Ray;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback
  class ReflectionMethodsCache::RaycastAllCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11F2F14
    static ReflectionMethodsCache::RaycastAllCallback* New_ctor(::CsObject* object, System::IntPtr method);
    // public UnityEngine.RaycastHit[] Invoke(UnityEngine.Ray r, System.Single f, System.Int32 i)
    // Offset: 0x11F2F28
    ::Array<UnityEngine::RaycastHit>* Invoke(UnityEngine::Ray r, float f, int i);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Ray r, System.Single f, System.Int32 i, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11F3290
    System::IAsyncResult* BeginInvoke(UnityEngine::Ray r, float f, int i, System::AsyncCallback* callback, ::CsObject* object);
    // public UnityEngine.RaycastHit[] EndInvoke(System.IAsyncResult result)
    // Offset: 0x11F3364
    ::Array<UnityEngine::RaycastHit>* EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback*, "UnityEngine.UI", "ReflectionMethodsCache/RaycastAllCallback");
#pragma pack(pop)
