// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
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
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRApplications/_SetApplicationAutoLaunch
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE0AD0
  class IVRApplications::_SetApplicationAutoLaunch : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetApplicationAutoLaunch
    _SetApplicationAutoLaunch() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x13FC714
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_SetApplicationAutoLaunch* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRApplications::_SetApplicationAutoLaunch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_SetApplicationAutoLaunch*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRApplicationError Invoke(System.String pchAppKey, System.Boolean bAutoLaunch)
    // Offset: 0x13EE9E0
    OVR::OpenVR::EVRApplicationError Invoke_NEW(::Il2CppString* pchAppKey, bool bAutoLaunch);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, System.Boolean bAutoLaunch, System.AsyncCallback callback, System.Object object)
    // Offset: 0x13FC724
    System::IAsyncResult* BeginInvoke_NEW(::Il2CppString* pchAppKey, bool bAutoLaunch, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x13FC7C4
    OVR::OpenVR::EVRApplicationError EndInvoke_NEW(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_SetApplicationAutoLaunch
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_SetApplicationAutoLaunch*, "OVR.OpenVR", "IVRApplications/_SetApplicationAutoLaunch");
