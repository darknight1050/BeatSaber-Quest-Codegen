// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRExtendedDisplay/_GetDXGIOutputInfo
#include "Valve/VR/IVRExtendedDisplay__GetDXGIOutputInfo.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRExtendedDisplay/_GetDXGIOutputInfo..ctor
Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo* Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRExtendedDisplay::_GetDXGIOutputInfo*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRExtendedDisplay/_GetDXGIOutputInfo", object, method));
}
// Autogenerated method: Valve.VR.IVRExtendedDisplay/_GetDXGIOutputInfo.Invoke
void Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo::Invoke(int& pnAdapterIndex, int& pnAdapterOutputIndex) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", pnAdapterIndex, pnAdapterOutputIndex));
}
// Autogenerated method: Valve.VR.IVRExtendedDisplay/_GetDXGIOutputInfo.BeginInvoke
System::IAsyncResult* Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo::BeginInvoke(int& pnAdapterIndex, int& pnAdapterOutputIndex, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pnAdapterIndex, pnAdapterOutputIndex, callback, object));
}
// Autogenerated method: Valve.VR.IVRExtendedDisplay/_GetDXGIOutputInfo.EndInvoke
void Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo::EndInvoke(int& pnAdapterIndex, int& pnAdapterOutputIndex, System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", pnAdapterIndex, pnAdapterOutputIndex, result));
}
