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
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_ReleaseSharedGLTexture
  // [UnmanagedFunctionPointerAttribute] Offset: DCEE1C
  class IVRCompositor::_ReleaseSharedGLTexture : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ReleaseSharedGLTexture
    _ReleaseSharedGLTexture() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EC7B08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_ReleaseSharedGLTexture* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_ReleaseSharedGLTexture*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.UInt32 glTextureId, System.IntPtr glSharedTextureHandle)
    // Offset: 0x1EC7B18
    bool Invoke(uint glTextureId, System::IntPtr glSharedTextureHandle);
    // public System.IAsyncResult BeginInvoke(System.UInt32 glTextureId, System.IntPtr glSharedTextureHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EC7DA0
    System::IAsyncResult* BeginInvoke(uint glTextureId, System::IntPtr glSharedTextureHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x1EC7E4C
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_ReleaseSharedGLTexture
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_ReleaseSharedGLTexture*, "OVR.OpenVR", "IVRCompositor/_ReleaseSharedGLTexture");
