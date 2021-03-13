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
  // Forward declaring type: VROverlayInputMethod
  struct VROverlayInputMethod;
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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayInputMethod
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE150C
  class IVROverlay::_GetOverlayInputMethod : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlayInputMethod
    _GetOverlayInputMethod() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D43E60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayInputMethod* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_GetOverlayInputMethod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayInputMethod*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VROverlayInputMethod peInputMethod)
    // Offset: 0x1D43E70
    OVR::OpenVR::EVROverlayError Invoke_NEW(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayInputMethod& peInputMethod);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VROverlayInputMethod peInputMethod, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D440F4
    System::IAsyncResult* BeginInvoke_NEW(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayInputMethod& peInputMethod, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref OVR.OpenVR.VROverlayInputMethod peInputMethod, System.IAsyncResult result)
    // Offset: 0x1D441A4
    OVR::OpenVR::EVROverlayError EndInvoke_NEW(OVR::OpenVR::VROverlayInputMethod& peInputMethod, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayInputMethod
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayInputMethod*, "OVR.OpenVR", "IVROverlay/_GetOverlayInputMethod");
