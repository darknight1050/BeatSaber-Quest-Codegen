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
  // Forward declaring type: EVREye
  struct EVREye;
  // Forward declaring type: DistortionCoordinates_t
  struct DistortionCoordinates_t;
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
  // Autogenerated type: OVR.OpenVR.IVRSystem/_ComputeDistortion
  // [UnmanagedFunctionPointerAttribute] Offset: DCE214
  class IVRSystem::_ComputeDistortion : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ComputeDistortion
    _ComputeDistortion() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2091C9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_ComputeDistortion* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_ComputeDistortion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_ComputeDistortion*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(OVR.OpenVR.EVREye eEye, System.Single fU, System.Single fV, ref OVR.OpenVR.DistortionCoordinates_t pDistortionCoordinates)
    // Offset: 0x2091CAC
    bool Invoke(OVR::OpenVR::EVREye eEye, float fU, float fV, OVR::OpenVR::DistortionCoordinates_t& pDistortionCoordinates);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREye eEye, System.Single fU, System.Single fV, ref OVR.OpenVR.DistortionCoordinates_t pDistortionCoordinates, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2091F88
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVREye eEye, float fU, float fV, OVR::OpenVR::DistortionCoordinates_t& pDistortionCoordinates, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.DistortionCoordinates_t pDistortionCoordinates, System.IAsyncResult result)
    // Offset: 0x2092074
    bool EndInvoke(OVR::OpenVR::DistortionCoordinates_t& pDistortionCoordinates, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_ComputeDistortion
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_ComputeDistortion*, "OVR.OpenVR", "IVRSystem/_ComputeDistortion");
