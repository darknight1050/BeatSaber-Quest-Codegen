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
  // Autogenerated type: OVR.OpenVR.IVRApplications/_IdentifyApplication
  // [UnmanagedFunctionPointerAttribute] Offset: DCE78C
  class IVRApplications::_IdentifyApplication : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _IdentifyApplication
    _IdentifyApplication() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x159B11C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_IdentifyApplication* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRApplications::_IdentifyApplication::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_IdentifyApplication*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRApplicationError Invoke(System.UInt32 unProcessId, System.String pchAppKey)
    // Offset: 0x158C218
    OVR::OpenVR::EVRApplicationError Invoke(uint unProcessId, ::Il2CppString* pchAppKey);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unProcessId, System.String pchAppKey, System.AsyncCallback callback, System.Object object)
    // Offset: 0x159B12C
    System::IAsyncResult* BeginInvoke(uint unProcessId, ::Il2CppString* pchAppKey, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x159B1C4
    OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_IdentifyApplication
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_IdentifyApplication*, "OVR.OpenVR", "IVRApplications/_IdentifyApplication");
