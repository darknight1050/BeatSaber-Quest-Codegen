// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_SetOverlayTransformAbsolute
  // [UnmanagedFunctionPointerAttribute] Offset: DCF13C
  class IVROverlay::_SetOverlayTransformAbsolute : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetOverlayTransformAbsolute
    _SetOverlayTransformAbsolute() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20830AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetOverlayTransformAbsolute* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_SetOverlayTransformAbsolute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetOverlayTransformAbsolute*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, OVR.OpenVR.ETrackingUniverseOrigin eTrackingOrigin, ref OVR.OpenVR.HmdMatrix34_t pmatTrackingOriginToOverlayTransform)
    // Offset: 0x20830BC
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, OVR.OpenVR.ETrackingUniverseOrigin eTrackingOrigin, ref OVR.OpenVR.HmdMatrix34_t pmatTrackingOriginToOverlayTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2083358
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref OVR.OpenVR.HmdMatrix34_t pmatTrackingOriginToOverlayTransform, System.IAsyncResult result)
    // Offset: 0x208342C
    OVR::OpenVR::EVROverlayError EndInvoke(OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_SetOverlayTransformAbsolute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_SetOverlayTransformAbsolute*, "OVR.OpenVR", "IVROverlay/_SetOverlayTransformAbsolute");
