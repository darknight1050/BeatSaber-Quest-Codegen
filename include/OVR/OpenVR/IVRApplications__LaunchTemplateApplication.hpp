// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.AppOverrideKeys_t
#include "OVR/OpenVR/AppOverrideKeys_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  // Autogenerated type: OVR.OpenVR.IVRApplications/_LaunchTemplateApplication
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D84498
  class IVRApplications::_LaunchTemplateApplication : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _LaunchTemplateApplication
    _LaunchTemplateApplication() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11FA91C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_LaunchTemplateApplication* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRApplications::_LaunchTemplateApplication::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_LaunchTemplateApplication*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRApplicationError Invoke(System.String pchTemplateAppKey, System.String pchNewAppKey, in OVR.OpenVR.AppOverrideKeys_t[] pKeys, System.UInt32 unKeys)
    // Offset: 0x11EA31C
    OVR::OpenVR::EVRApplicationError Invoke(::Il2CppString* pchTemplateAppKey, ::Il2CppString* pchNewAppKey, ::Array<OVR::OpenVR::AppOverrideKeys_t>*& pKeys, uint unKeys);
    // public System.IAsyncResult BeginInvoke(System.String pchTemplateAppKey, System.String pchNewAppKey, in OVR.OpenVR.AppOverrideKeys_t[] pKeys, System.UInt32 unKeys, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11FA930
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchTemplateAppKey, ::Il2CppString* pchNewAppKey, ::Array<OVR::OpenVR::AppOverrideKeys_t>*& pKeys, uint unKeys, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x11FA9E0
    OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_LaunchTemplateApplication
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_LaunchTemplateApplication*, "OVR.OpenVR", "IVRApplications/_LaunchTemplateApplication");
#pragma pack(pop)
