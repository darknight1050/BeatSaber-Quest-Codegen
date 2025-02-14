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
  // Forward declaring type: Compositor_CumulativeStats
  struct Compositor_CumulativeStats;
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
  // Autogenerated type: Valve.VR.IVRCompositor/_GetCumulativeStats
  // [UnmanagedFunctionPointerAttribute] Offset: DD3D24
  class IVRCompositor::_GetCumulativeStats : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetCumulativeStats
    _GetCumulativeStats() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FA0EC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetCumulativeStats* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_GetCumulativeStats::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetCumulativeStats*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref Valve.VR.Compositor_CumulativeStats pStats, System.UInt32 nStatsSizeInBytes)
    // Offset: 0x1FA0ED8
    void Invoke(Valve::VR::Compositor_CumulativeStats& pStats, uint nStatsSizeInBytes);
    // public System.IAsyncResult BeginInvoke(ref Valve.VR.Compositor_CumulativeStats pStats, System.UInt32 nStatsSizeInBytes, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FA114C
    System::IAsyncResult* BeginInvoke(Valve::VR::Compositor_CumulativeStats& pStats, uint nStatsSizeInBytes, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref Valve.VR.Compositor_CumulativeStats pStats, System.IAsyncResult result)
    // Offset: 0x1FA1200
    void EndInvoke(Valve::VR::Compositor_CumulativeStats& pStats, System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_GetCumulativeStats
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetCumulativeStats*, "Valve.VR", "IVRCompositor/_GetCumulativeStats");
