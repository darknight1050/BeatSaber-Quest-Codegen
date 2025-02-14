// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
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
  // Forward declaring type: Compositor_FrameTiming
  struct Compositor_FrameTiming;
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
  // Autogenerated type: Valve.VR.IVRCompositor/_GetFrameTimings
  // [UnmanagedFunctionPointerAttribute] Offset: DD3CFC
  class IVRCompositor::_GetFrameTimings : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetFrameTimings
    _GetFrameTimings() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FA206C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetFrameTimings* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_GetFrameTimings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetFrameTimings*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(ref Valve.VR.Compositor_FrameTiming pTiming, System.UInt32 nFrames)
    // Offset: 0x1FA207C
    uint Invoke(Valve::VR::Compositor_FrameTiming& pTiming, uint nFrames);
    // public System.IAsyncResult BeginInvoke(ref Valve.VR.Compositor_FrameTiming pTiming, System.UInt32 nFrames, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FA22F8
    System::IAsyncResult* BeginInvoke(Valve::VR::Compositor_FrameTiming& pTiming, uint nFrames, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref Valve.VR.Compositor_FrameTiming pTiming, System.IAsyncResult result)
    // Offset: 0x1FA23AC
    uint EndInvoke(Valve::VR::Compositor_FrameTiming& pTiming, System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_GetFrameTimings
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetFrameTimings*, "Valve.VR", "IVRCompositor/_GetFrameTimings");
