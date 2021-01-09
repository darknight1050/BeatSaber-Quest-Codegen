// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRCompositorTimingMode
  struct EVRCompositorTimingMode;
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
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_SetExplicitTimingMode
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D84BDC
  class IVRCompositor::_SetExplicitTimingMode : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetExplicitTimingMode
    _SetExplicitTimingMode() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x185E474
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_SetExplicitTimingMode* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRCompositor::_SetExplicitTimingMode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_SetExplicitTimingMode*, creationType>(object, method)));
    }
    // public System.Void Invoke(OVR.OpenVR.EVRCompositorTimingMode eTimingMode)
    // Offset: 0x185E488
    void Invoke(OVR::OpenVR::EVRCompositorTimingMode eTimingMode);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVRCompositorTimingMode eTimingMode, System.AsyncCallback callback, System.Object object)
    // Offset: 0x185E6F4
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVRCompositorTimingMode eTimingMode, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x185E780
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_SetExplicitTimingMode
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_SetExplicitTimingMode*, "OVR.OpenVR", "IVRCompositor/_SetExplicitTimingMode");
#pragma pack(pop)
