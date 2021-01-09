// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
  // Forward declaring type: EVREye
  struct EVREye;
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
  // Autogenerated type: Valve.VR.IVRSystem/_GetEyeToHeadTransform
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D88CB4
  class IVRSystem::_GetEyeToHeadTransform : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetEyeToHeadTransform
    _GetEyeToHeadTransform() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x192B060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetEyeToHeadTransform* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetEyeToHeadTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetEyeToHeadTransform*, creationType>(object, method)));
    }
    // public Valve.VR.HmdMatrix34_t Invoke(Valve.VR.EVREye eEye)
    // Offset: 0x192B074
    Valve::VR::HmdMatrix34_t Invoke(Valve::VR::EVREye eEye);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREye eEye, System.AsyncCallback callback, System.Object object)
    // Offset: 0x192B324
    System::IAsyncResult* BeginInvoke(Valve::VR::EVREye eEye, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.HmdMatrix34_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x192B3B0
    Valve::VR::HmdMatrix34_t EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetEyeToHeadTransform
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetEyeToHeadTransform*, "Valve.VR", "IVRSystem/_GetEyeToHeadTransform");
#pragma pack(pop)
