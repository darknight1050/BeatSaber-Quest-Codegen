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
  // Autogenerated type: Valve.VR.IVROverlay/_GetPrimaryDashboardDevice
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE660C
  class IVROverlay::_GetPrimaryDashboardDevice : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetPrimaryDashboardDevice
    _GetPrimaryDashboardDevice() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E48F6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetPrimaryDashboardDevice* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_GetPrimaryDashboardDevice::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetPrimaryDashboardDevice*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke()
    // Offset: 0x1E48F7C
    uint Invoke_NEW();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E49190
    System::IAsyncResult* BeginInvoke_NEW(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1E491BC
    uint EndInvoke_NEW(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetPrimaryDashboardDevice
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetPrimaryDashboardDevice*, "Valve.VR", "IVROverlay/_GetPrimaryDashboardDevice");
