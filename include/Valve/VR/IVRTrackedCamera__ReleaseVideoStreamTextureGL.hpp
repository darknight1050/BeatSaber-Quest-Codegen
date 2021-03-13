// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRTrackedCamera
#include "Valve/VR/IVRTrackedCamera.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamTextureGL
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE5874
  class IVRTrackedCamera::_ReleaseVideoStreamTextureGL : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ReleaseVideoStreamTextureGL
    _ReleaseVideoStreamTextureGL() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A9FED0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_ReleaseVideoStreamTextureGL* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_ReleaseVideoStreamTextureGL*, creationType>(object, method)));
    }
    // public Valve.VR.EVRTrackedCameraError Invoke(System.UInt64 hTrackedCamera, System.UInt32 glTextureId)
    // Offset: 0x1A9FEE0
    Valve::VR::EVRTrackedCameraError Invoke_NEW(uint64_t hTrackedCamera, uint glTextureId);
    // public System.IAsyncResult BeginInvoke(System.UInt64 hTrackedCamera, System.UInt32 glTextureId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1AA0164
    System::IAsyncResult* BeginInvoke_NEW(uint64_t hTrackedCamera, uint glTextureId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRTrackedCameraError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1AA0210
    Valve::VR::EVRTrackedCameraError EndInvoke_NEW(System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamTextureGL
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL*, "Valve.VR", "IVRTrackedCamera/_ReleaseVideoStreamTextureGL");
