// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_LockGLSharedTextureForAccess
  // [UnmanagedFunctionPointerAttribute] Offset: DCEE30
  class IVRCompositor::_LockGLSharedTextureForAccess : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _LockGLSharedTextureForAccess
    _LockGLSharedTextureForAccess() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EC72AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_LockGLSharedTextureForAccess* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRCompositor::_LockGLSharedTextureForAccess::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_LockGLSharedTextureForAccess*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IntPtr glSharedTextureHandle)
    // Offset: 0x1EC72BC
    void Invoke(System::IntPtr glSharedTextureHandle);
    // public System.IAsyncResult BeginInvoke(System.IntPtr glSharedTextureHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EC7518
    System::IAsyncResult* BeginInvoke(System::IntPtr glSharedTextureHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1EC75A4
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_LockGLSharedTextureForAccess
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_LockGLSharedTextureForAccess*, "OVR.OpenVR", "IVRCompositor/_LockGLSharedTextureForAccess");
