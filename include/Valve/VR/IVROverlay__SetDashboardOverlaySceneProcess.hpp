// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/_SetDashboardOverlaySceneProcess
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE65D0
  class IVROverlay::_SetDashboardOverlaySceneProcess : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetDashboardOverlaySceneProcess
    _SetDashboardOverlaySceneProcess() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E4B228
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetDashboardOverlaySceneProcess* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_SetDashboardOverlaySceneProcess::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetDashboardOverlaySceneProcess*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.UInt32 unProcessId)
    // Offset: 0x1E4B238
    Valve::VR::EVROverlayError Invoke_NEW(uint64_t ulOverlayHandle, uint unProcessId);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.UInt32 unProcessId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E4B4BC
    System::IAsyncResult* BeginInvoke_NEW(uint64_t ulOverlayHandle, uint unProcessId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1E4B568
    Valve::VR::EVROverlayError EndInvoke_NEW(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_SetDashboardOverlaySceneProcess
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_SetDashboardOverlaySceneProcess*, "Valve.VR", "IVROverlay/_SetDashboardOverlaySceneProcess");
