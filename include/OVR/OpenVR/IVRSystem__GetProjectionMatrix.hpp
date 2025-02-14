// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
  // Forward declaring type: HmdMatrix44_t
  struct HmdMatrix44_t;
  // Forward declaring type: EVREye
  struct EVREye;
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
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetProjectionMatrix
  // [UnmanagedFunctionPointerAttribute] Offset: DCE1EC
  class IVRSystem::_GetProjectionMatrix : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetProjectionMatrix
    _GetProjectionMatrix() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x209610C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetProjectionMatrix* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_GetProjectionMatrix::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetProjectionMatrix*, creationType>(object, method)));
    }
    // public OVR.OpenVR.HmdMatrix44_t Invoke(OVR.OpenVR.EVREye eEye, System.Single fNearZ, System.Single fFarZ)
    // Offset: 0x209611C
    OVR::OpenVR::HmdMatrix44_t Invoke(OVR::OpenVR::EVREye eEye, float fNearZ, float fFarZ);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREye eEye, System.Single fNearZ, System.Single fFarZ, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2096428
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVREye eEye, float fNearZ, float fFarZ, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.HmdMatrix44_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x20964E8
    OVR::OpenVR::HmdMatrix44_t EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetProjectionMatrix
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetProjectionMatrix*, "OVR.OpenVR", "IVRSystem/_GetProjectionMatrix");
