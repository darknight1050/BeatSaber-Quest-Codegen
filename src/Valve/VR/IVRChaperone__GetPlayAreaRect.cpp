// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperone/_GetPlayAreaRect
#include "Valve/VR/IVRChaperone__GetPlayAreaRect.hpp"
// Including type: Valve.VR.HmdQuad_t
#include "Valve/VR/HmdQuad_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRChaperone/_GetPlayAreaRect..ctor
Valve::VR::IVRChaperone::_GetPlayAreaRect* Valve::VR::IVRChaperone::_GetPlayAreaRect::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRChaperone::_GetPlayAreaRect*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRChaperone/_GetPlayAreaRect", object, method));
}
// Autogenerated method: Valve.VR.IVRChaperone/_GetPlayAreaRect.Invoke
bool Valve::VR::IVRChaperone::_GetPlayAreaRect::Invoke(Valve::VR::HmdQuad_t& rect) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", rect));
}
// Autogenerated method: Valve.VR.IVRChaperone/_GetPlayAreaRect.BeginInvoke
System::IAsyncResult* Valve::VR::IVRChaperone::_GetPlayAreaRect::BeginInvoke(Valve::VR::HmdQuad_t& rect, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", rect, callback, object));
}
// Autogenerated method: Valve.VR.IVRChaperone/_GetPlayAreaRect.EndInvoke
bool Valve::VR::IVRChaperone::_GetPlayAreaRect::EndInvoke(Valve::VR::HmdQuad_t& rect, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", rect, result));
}
