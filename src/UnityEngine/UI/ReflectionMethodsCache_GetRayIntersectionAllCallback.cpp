// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback
#include "UnityEngine/UI/ReflectionMethodsCache_GetRayIntersectionAllCallback.hpp"
// Including type: UnityEngine.RaycastHit2D
#include "UnityEngine/RaycastHit2D.hpp"
// Including type: UnityEngine.Ray
#include "UnityEngine/Ray.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback..ctor
UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback* UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback::New_ctor(::CsObject* object, System::IntPtr method) {
  return (ReflectionMethodsCache::GetRayIntersectionAllCallback*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.UI", "ReflectionMethodsCache/GetRayIntersectionAllCallback", object, method));
}
// Autogenerated method: UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback.Invoke
::Array<UnityEngine::RaycastHit2D>* UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback::Invoke(UnityEngine::Ray r, float f, int i) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::RaycastHit2D>*>(this, "Invoke", r, f, i));
}
// Autogenerated method: UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback.BeginInvoke
System::IAsyncResult* UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback::BeginInvoke(UnityEngine::Ray r, float f, int i, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", r, f, i, callback, object));
}
// Autogenerated method: UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback.EndInvoke
::Array<UnityEngine::RaycastHit2D>* UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::RaycastHit2D>*>(this, "EndInvoke", result));
}
