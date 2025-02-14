// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
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
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
  // Forward declaring type: EVREye
  struct EVREye;
  // Forward declaring type: Texture_t
  struct Texture_t;
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
  // Forward declaring type: EVRSubmitFlags
  struct EVRSubmitFlags;
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
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_Submit
  // [UnmanagedFunctionPointerAttribute] Offset: DCEBB0
  class IVRCompositor::_Submit : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _Submit
    _Submit() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EC8CCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_Submit* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRCompositor::_Submit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_Submit*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRCompositorError Invoke(OVR.OpenVR.EVREye eEye, ref OVR.OpenVR.Texture_t pTexture, ref OVR.OpenVR.VRTextureBounds_t pBounds, OVR.OpenVR.EVRSubmitFlags nSubmitFlags)
    // Offset: 0x1EC8CDC
    OVR::OpenVR::EVRCompositorError Invoke(OVR::OpenVR::EVREye eEye, OVR::OpenVR::Texture_t& pTexture, OVR::OpenVR::VRTextureBounds_t& pBounds, OVR::OpenVR::EVRSubmitFlags nSubmitFlags);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREye eEye, ref OVR.OpenVR.Texture_t pTexture, ref OVR.OpenVR.VRTextureBounds_t pBounds, OVR.OpenVR.EVRSubmitFlags nSubmitFlags, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EC8FB4
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVREye eEye, OVR::OpenVR::Texture_t& pTexture, OVR::OpenVR::VRTextureBounds_t& pBounds, OVR::OpenVR::EVRSubmitFlags nSubmitFlags, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRCompositorError EndInvoke(ref OVR.OpenVR.Texture_t pTexture, ref OVR.OpenVR.VRTextureBounds_t pBounds, System.IAsyncResult result)
    // Offset: 0x1EC90A4
    OVR::OpenVR::EVRCompositorError EndInvoke(OVR::OpenVR::Texture_t& pTexture, OVR::OpenVR::VRTextureBounds_t& pBounds, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_Submit
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_Submit*, "OVR.OpenVR", "IVRCompositor/_Submit");
