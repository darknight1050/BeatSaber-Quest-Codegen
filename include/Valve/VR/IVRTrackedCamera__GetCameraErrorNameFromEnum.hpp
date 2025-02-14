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
  // Autogenerated type: Valve.VR.IVRTrackedCamera/_GetCameraErrorNameFromEnum
  // [UnmanagedFunctionPointerAttribute] Offset: DD36BC
  class IVRTrackedCamera::_GetCameraErrorNameFromEnum : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetCameraErrorNameFromEnum
    _GetCameraErrorNameFromEnum() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C83260
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_GetCameraErrorNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRTrackedCamera::_GetCameraErrorNameFromEnum::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_GetCameraErrorNameFromEnum*, creationType>(object, method)));
    }
    // public System.IntPtr Invoke(Valve.VR.EVRTrackedCameraError eCameraError)
    // Offset: 0x1C83270
    System::IntPtr Invoke(Valve::VR::EVRTrackedCameraError eCameraError);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVRTrackedCameraError eCameraError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C834E8
    System::IAsyncResult* BeginInvoke(Valve::VR::EVRTrackedCameraError eCameraError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C83574
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/_GetCameraErrorNameFromEnum
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRTrackedCamera::_GetCameraErrorNameFromEnum*, "Valve.VR", "IVRTrackedCamera/_GetCameraErrorNameFromEnum");
