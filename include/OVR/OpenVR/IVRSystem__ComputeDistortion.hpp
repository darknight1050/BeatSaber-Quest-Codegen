// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVREye
  struct EVREye;
  // Forward declaring type: DistortionCoordinates_t
  struct DistortionCoordinates_t;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_ComputeDistortion
  class IVRSystem::_ComputeDistortion : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16A1060
    static IVRSystem::_ComputeDistortion* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.Boolean Invoke(OVR.OpenVR.EVREye eEye, System.Single fU, System.Single fV, OVR.OpenVR.DistortionCoordinates_t pDistortionCoordinates)
    // Offset: 0x16A1074
    bool Invoke(OVR::OpenVR::EVREye eEye, float fU, float fV, OVR::OpenVR::DistortionCoordinates_t& pDistortionCoordinates);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREye eEye, System.Single fU, System.Single fV, OVR.OpenVR.DistortionCoordinates_t pDistortionCoordinates, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16A1340
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVREye eEye, float fU, float fV, OVR::OpenVR::DistortionCoordinates_t& pDistortionCoordinates, System::AsyncCallback* callback, ::CsObject* object);
    // public System.Boolean EndInvoke(OVR.OpenVR.DistortionCoordinates_t pDistortionCoordinates, System.IAsyncResult result)
    // Offset: 0x16A142C
    bool EndInvoke(OVR::OpenVR::DistortionCoordinates_t& pDistortionCoordinates, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_ComputeDistortion
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_ComputeDistortion*, "OVR.OpenVR", "IVRSystem/_ComputeDistortion");
#pragma pack(pop)
