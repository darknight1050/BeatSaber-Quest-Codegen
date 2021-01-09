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
  // Autogenerated type: Valve.VR.IVRCompositor/_HideMirrorWindow
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D897E0
  class IVRCompositor::_HideMirrorWindow : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _HideMirrorWindow
    _HideMirrorWindow() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18E8FB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_HideMirrorWindow* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_HideMirrorWindow::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_HideMirrorWindow*, creationType>(object, method)));
    }
    // public System.Void Invoke()
    // Offset: 0x18E8FC4
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x18E91D0
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x18E91FC
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_HideMirrorWindow
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_HideMirrorWindow*, "Valve.VR", "IVRCompositor/_HideMirrorWindow");
#pragma pack(pop)
