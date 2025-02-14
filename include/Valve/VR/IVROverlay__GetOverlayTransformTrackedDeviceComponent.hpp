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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
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
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlayTransformTrackedDeviceComponent
  // [UnmanagedFunctionPointerAttribute] Offset: DD429C
  class IVROverlay::_GetOverlayTransformTrackedDeviceComponent : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlayTransformTrackedDeviceComponent
    _GetOverlayTransformTrackedDeviceComponent() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FB05A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayTransformTrackedDeviceComponent* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayTransformTrackedDeviceComponent*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.UInt32 punDeviceIndex, System.Text.StringBuilder pchComponentName, System.UInt32 unComponentNameSize)
    // Offset: 0x1FB05B0
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint& punDeviceIndex, System::Text::StringBuilder* pchComponentName, uint unComponentNameSize);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.UInt32 punDeviceIndex, System.Text.StringBuilder pchComponentName, System.UInt32 unComponentNameSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FB0868
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint& punDeviceIndex, System::Text::StringBuilder* pchComponentName, uint unComponentNameSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref System.UInt32 punDeviceIndex, System.IAsyncResult result)
    // Offset: 0x1FB0938
    Valve::VR::EVROverlayError EndInvoke(uint& punDeviceIndex, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlayTransformTrackedDeviceComponent
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent*, "Valve.VR", "IVROverlay/_GetOverlayTransformTrackedDeviceComponent");
