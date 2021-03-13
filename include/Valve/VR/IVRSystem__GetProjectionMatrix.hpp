// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
  // Forward declaring type: HmdMatrix44_t
  struct HmdMatrix44_t;
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
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/_GetProjectionMatrix
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE53C4
  class IVRSystem::_GetProjectionMatrix : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetProjectionMatrix
    _GetProjectionMatrix() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A98688
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetProjectionMatrix* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetProjectionMatrix::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetProjectionMatrix*, creationType>(object, method)));
    }
    // public Valve.VR.HmdMatrix44_t Invoke(Valve.VR.EVREye eEye, System.Single fNearZ, System.Single fFarZ)
    // Offset: 0x1A98698
    Valve::VR::HmdMatrix44_t Invoke_NEW(Valve::VR::EVREye eEye, float fNearZ, float fFarZ);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREye eEye, System.Single fNearZ, System.Single fFarZ, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A989A4
    System::IAsyncResult* BeginInvoke_NEW(Valve::VR::EVREye eEye, float fNearZ, float fFarZ, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.HmdMatrix44_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A98A64
    Valve::VR::HmdMatrix44_t EndInvoke_NEW(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetProjectionMatrix
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetProjectionMatrix*, "Valve.VR", "IVRSystem/_GetProjectionMatrix");
