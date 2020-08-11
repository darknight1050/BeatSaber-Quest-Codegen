// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications/_LaunchInternalProcess
#include "Valve/VR/IVRApplications__LaunchInternalProcess.hpp"
// Including type: Valve.VR.EVRApplicationError
#include "Valve/VR/EVRApplicationError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRApplications/_LaunchInternalProcess..ctor
Valve::VR::IVRApplications::_LaunchInternalProcess* Valve::VR::IVRApplications::_LaunchInternalProcess::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRApplications::_LaunchInternalProcess*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRApplications/_LaunchInternalProcess", object, method));
}
// Autogenerated method: Valve.VR.IVRApplications/_LaunchInternalProcess.Invoke
Valve::VR::EVRApplicationError Valve::VR::IVRApplications::_LaunchInternalProcess::Invoke(::CsString* pchBinaryPath, ::CsString* pchArguments, ::CsString* pchWorkingDirectory) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "Invoke", pchBinaryPath, pchArguments, pchWorkingDirectory));
}
// Autogenerated method: Valve.VR.IVRApplications/_LaunchInternalProcess.BeginInvoke
System::IAsyncResult* Valve::VR::IVRApplications::_LaunchInternalProcess::BeginInvoke(::CsString* pchBinaryPath, ::CsString* pchArguments, ::CsString* pchWorkingDirectory, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchBinaryPath, pchArguments, pchWorkingDirectory, callback, object));
}
// Autogenerated method: Valve.VR.IVRApplications/_LaunchInternalProcess.EndInvoke
Valve::VR::EVRApplicationError Valve::VR::IVRApplications::_LaunchInternalProcess::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "EndInvoke", result));
}
