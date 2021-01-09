// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  // Autogenerated type: Valve.VR.IVRCompositor/_SetExplicitTimingMode
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D8990C
  class IVRCompositor::_SetExplicitTimingMode : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetExplicitTimingMode
    _SetExplicitTimingMode() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18EA300
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_SetExplicitTimingMode* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_SetExplicitTimingMode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_SetExplicitTimingMode*, creationType>(object, method)));
    }
    // public System.Void Invoke(Valve.VR.EVRCompositorTimingMode eTimingMode)
    // Offset: 0x18EA314
    void Invoke(Valve::VR::EVRCompositorTimingMode eTimingMode);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVRCompositorTimingMode eTimingMode, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18EA580
    System::IAsyncResult* BeginInvoke(Valve::VR::EVRCompositorTimingMode eTimingMode, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x18EA60C
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_SetExplicitTimingMode
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_SetExplicitTimingMode*, "Valve.VR", "IVRCompositor/_SetExplicitTimingMode");
#pragma pack(pop)
