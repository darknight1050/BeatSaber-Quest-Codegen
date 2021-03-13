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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayWidthInMeters
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE1340
  class IVROverlay::_GetOverlayWidthInMeters : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlayWidthInMeters
    _GetOverlayWidthInMeters() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D47D60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayWidthInMeters* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_GetOverlayWidthInMeters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayWidthInMeters*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.Single pfWidthInMeters)
    // Offset: 0x1D47D70
    OVR::OpenVR::EVROverlayError Invoke_NEW(uint64_t ulOverlayHandle, float& pfWidthInMeters);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.Single pfWidthInMeters, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D47FF4
    System::IAsyncResult* BeginInvoke_NEW(uint64_t ulOverlayHandle, float& pfWidthInMeters, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref System.Single pfWidthInMeters, System.IAsyncResult result)
    // Offset: 0x1D480A4
    OVR::OpenVR::EVROverlayError EndInvoke_NEW(float& pfWidthInMeters, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayWidthInMeters
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayWidthInMeters*, "OVR.OpenVR", "IVROverlay/_GetOverlayWidthInMeters");
