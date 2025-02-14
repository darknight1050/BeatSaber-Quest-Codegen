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
  // Forward declaring type: EVRApplicationTransitionState
  struct EVRApplicationTransitionState;
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
  // Autogenerated type: OVR.OpenVR.IVRApplications/_GetTransitionState
  // [UnmanagedFunctionPointerAttribute] Offset: DCE8A4
  class IVRApplications::_GetTransitionState : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetTransitionState
    _GetTransitionState() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x159B0B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_GetTransitionState* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRApplications::_GetTransitionState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_GetTransitionState*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRApplicationTransitionState Invoke()
    // Offset: 0x158F84C
    OVR::OpenVR::EVRApplicationTransitionState Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x159B0C4
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRApplicationTransitionState EndInvoke(System.IAsyncResult result)
    // Offset: 0x159B0F0
    OVR::OpenVR::EVRApplicationTransitionState EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_GetTransitionState
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_GetTransitionState*, "OVR.OpenVR", "IVRApplications/_GetTransitionState");
