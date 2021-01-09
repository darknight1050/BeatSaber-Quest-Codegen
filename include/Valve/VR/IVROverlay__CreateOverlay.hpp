// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
  // Autogenerated type: Valve.VR.IVROverlay/_CreateOverlay
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D89948
  class IVROverlay::_CreateOverlay : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _CreateOverlay
    _CreateOverlay() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18EE948
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_CreateOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_CreateOverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_CreateOverlay*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.String pchOverlayKey, System.String pchOverlayName, ref System.UInt64 pOverlayHandle)
    // Offset: 0x18EE95C
    Valve::VR::EVROverlayError Invoke(::Il2CppString* pchOverlayKey, ::Il2CppString* pchOverlayName, uint64_t& pOverlayHandle);
    // public System.IAsyncResult BeginInvoke(System.String pchOverlayKey, System.String pchOverlayName, ref System.UInt64 pOverlayHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18EED8C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchOverlayKey, ::Il2CppString* pchOverlayName, uint64_t& pOverlayHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref System.UInt64 pOverlayHandle, System.IAsyncResult result)
    // Offset: 0x18EEE34
    Valve::VR::EVROverlayError EndInvoke(uint64_t& pOverlayHandle, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_CreateOverlay
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_CreateOverlay*, "Valve.VR", "IVROverlay/_CreateOverlay");
#pragma pack(pop)
