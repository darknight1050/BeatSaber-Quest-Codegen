// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSpatialAnchors
#include "OVR/OpenVR/IVRSpatialAnchors.hpp"
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
  // Forward declaring type: EVRSpatialAnchorError
  struct EVRSpatialAnchorError;
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: SpatialAnchorPose_t
  struct SpatialAnchorPose_t;
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
  // Autogenerated type: OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE1D40
  class IVRSpatialAnchors::_CreateSpatialAnchorFromPose : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _CreateSpatialAnchorFromPose
    _CreateSpatialAnchorFromPose() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EE45D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSpatialAnchors::_CreateSpatialAnchorFromPose* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSpatialAnchors::_CreateSpatialAnchorFromPose*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRSpatialAnchorError Invoke(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, ref OVR.OpenVR.SpatialAnchorPose_t pPose, ref System.UInt32 pHandleOut)
    // Offset: 0x1EE45E4
    OVR::OpenVR::EVRSpatialAnchorError Invoke_NEW(uint unDeviceIndex, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::SpatialAnchorPose_t& pPose, uint& pHandleOut);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, ref OVR.OpenVR.SpatialAnchorPose_t pPose, ref System.UInt32 pHandleOut, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EE48A0
    System::IAsyncResult* BeginInvoke_NEW(uint unDeviceIndex, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::SpatialAnchorPose_t& pPose, uint& pHandleOut, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRSpatialAnchorError EndInvoke(ref OVR.OpenVR.SpatialAnchorPose_t pPose, ref System.UInt32 pHandleOut, System.IAsyncResult result)
    // Offset: 0x1EE4988
    OVR::OpenVR::EVRSpatialAnchorError EndInvoke_NEW(OVR::OpenVR::SpatialAnchorPose_t& pPose, uint& pHandleOut, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose*, "OVR.OpenVR", "IVRSpatialAnchors/_CreateSpatialAnchorFromPose");
