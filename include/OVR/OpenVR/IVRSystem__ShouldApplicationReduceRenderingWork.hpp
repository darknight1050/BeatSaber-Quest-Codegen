// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSystem/_ShouldApplicationReduceRenderingWork
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE07EC
  class IVRSystem::_ShouldApplicationReduceRenderingWork : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ShouldApplicationReduceRenderingWork
    _ShouldApplicationReduceRenderingWork() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EEE874
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_ShouldApplicationReduceRenderingWork* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_ShouldApplicationReduceRenderingWork*, creationType>(object, method)));
    }
    // public System.Boolean Invoke()
    // Offset: 0x1EEE884
    bool Invoke_NEW();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EEEA9C
    System::IAsyncResult* BeginInvoke_NEW(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x1EEEAC8
    bool EndInvoke_NEW(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_ShouldApplicationReduceRenderingWork
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork*, "OVR.OpenVR", "IVRSystem/_ShouldApplicationReduceRenderingWork");
