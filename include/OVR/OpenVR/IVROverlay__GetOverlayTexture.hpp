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
  // Forward declaring type: ETextureType
  struct ETextureType;
  // Forward declaring type: EColorSpace
  struct EColorSpace;
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayTexture
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE164C
  class IVROverlay::_GetOverlayTexture : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlayTexture
    _GetOverlayTexture() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D45B48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayTexture* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_GetOverlayTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayTexture*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.IntPtr pNativeTextureHandle, System.IntPtr pNativeTextureRef, ref System.UInt32 pWidth, ref System.UInt32 pHeight, ref System.UInt32 pNativeFormat, ref OVR.OpenVR.ETextureType pAPIType, ref OVR.OpenVR.EColorSpace pColorSpace, ref OVR.OpenVR.VRTextureBounds_t pTextureBounds)
    // Offset: 0x1D45B58
    OVR::OpenVR::EVROverlayError Invoke_NEW(uint64_t ulOverlayHandle, System::IntPtr& pNativeTextureHandle, System::IntPtr pNativeTextureRef, uint& pWidth, uint& pHeight, uint& pNativeFormat, OVR::OpenVR::ETextureType& pAPIType, OVR::OpenVR::EColorSpace& pColorSpace, OVR::OpenVR::VRTextureBounds_t& pTextureBounds);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.IntPtr pNativeTextureHandle, System.IntPtr pNativeTextureRef, ref System.UInt32 pWidth, ref System.UInt32 pHeight, ref System.UInt32 pNativeFormat, ref OVR.OpenVR.ETextureType pAPIType, ref OVR.OpenVR.EColorSpace pColorSpace, ref OVR.OpenVR.VRTextureBounds_t pTextureBounds, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D45E7C
    System::IAsyncResult* BeginInvoke_NEW(uint64_t ulOverlayHandle, System::IntPtr& pNativeTextureHandle, System::IntPtr pNativeTextureRef, uint& pWidth, uint& pHeight, uint& pNativeFormat, OVR::OpenVR::ETextureType& pAPIType, OVR::OpenVR::EColorSpace& pColorSpace, OVR::OpenVR::VRTextureBounds_t& pTextureBounds, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref System.IntPtr pNativeTextureHandle, ref System.UInt32 pWidth, ref System.UInt32 pHeight, ref System.UInt32 pNativeFormat, ref OVR.OpenVR.ETextureType pAPIType, ref OVR.OpenVR.EColorSpace pColorSpace, ref OVR.OpenVR.VRTextureBounds_t pTextureBounds, System.IAsyncResult result)
    // Offset: 0x1D46008
    OVR::OpenVR::EVROverlayError EndInvoke_NEW(System::IntPtr& pNativeTextureHandle, uint& pWidth, uint& pHeight, uint& pNativeFormat, OVR::OpenVR::ETextureType& pAPIType, OVR::OpenVR::EColorSpace& pColorSpace, OVR::OpenVR::VRTextureBounds_t& pTextureBounds, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayTexture
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayTexture*, "OVR.OpenVR", "IVROverlay/_GetOverlayTexture");
