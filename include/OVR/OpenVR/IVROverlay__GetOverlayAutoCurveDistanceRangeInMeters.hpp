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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayAutoCurveDistanceRangeInMeters
  // [UnmanagedFunctionPointerAttribute] Offset: DCF09C
  class IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlayAutoCurveDistanceRangeInMeters
    _GetOverlayAutoCurveDistanceRangeInMeters() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1ED43B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.Single pfMinDistanceInMeters, ref System.Single pfMaxDistanceInMeters)
    // Offset: 0x1ED43C4
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float& pfMinDistanceInMeters, float& pfMaxDistanceInMeters);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.Single pfMinDistanceInMeters, ref System.Single pfMaxDistanceInMeters, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1ED4660
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float& pfMinDistanceInMeters, float& pfMaxDistanceInMeters, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref System.Single pfMinDistanceInMeters, ref System.Single pfMaxDistanceInMeters, System.IAsyncResult result)
    // Offset: 0x1ED472C
    OVR::OpenVR::EVROverlayError EndInvoke(float& pfMinDistanceInMeters, float& pfMaxDistanceInMeters, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayAutoCurveDistanceRangeInMeters
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters*, "OVR.OpenVR", "IVROverlay/_GetOverlayAutoCurveDistanceRangeInMeters");
