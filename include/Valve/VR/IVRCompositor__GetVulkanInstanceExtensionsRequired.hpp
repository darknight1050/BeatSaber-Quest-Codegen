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
  // Autogenerated type: Valve.VR.IVRCompositor/_GetVulkanInstanceExtensionsRequired
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D898E4
  class IVRCompositor::_GetVulkanInstanceExtensionsRequired : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetVulkanInstanceExtensionsRequired
    _GetVulkanInstanceExtensionsRequired() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18E8AA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetVulkanInstanceExtensionsRequired* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_GetVulkanInstanceExtensionsRequired::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetVulkanInstanceExtensionsRequired*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.Text.StringBuilder pchValue, System.UInt32 unBufferSize)
    // Offset: 0x18E8AB4
    uint Invoke(System::Text::StringBuilder* pchValue, uint unBufferSize);
    // public System.IAsyncResult BeginInvoke(System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18E8EE8
    System::IAsyncResult* BeginInvoke(System::Text::StringBuilder* pchValue, uint unBufferSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x18E8F84
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_GetVulkanInstanceExtensionsRequired
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetVulkanInstanceExtensionsRequired*, "Valve.VR", "IVRCompositor/_GetVulkanInstanceExtensionsRequired");
#pragma pack(pop)
