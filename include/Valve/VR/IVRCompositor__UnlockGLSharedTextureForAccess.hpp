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
  // Autogenerated type: Valve.VR.IVRCompositor/_UnlockGLSharedTextureForAccess
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE601C
  class IVRCompositor::_UnlockGLSharedTextureForAccess : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _UnlockGLSharedTextureForAccess
    _UnlockGLSharedTextureForAccess() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E3E6A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_UnlockGLSharedTextureForAccess* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_UnlockGLSharedTextureForAccess::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_UnlockGLSharedTextureForAccess*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IntPtr glSharedTextureHandle)
    // Offset: 0x1E3E6B8
    void Invoke_NEW(System::IntPtr glSharedTextureHandle);
    // public System.IAsyncResult BeginInvoke(System.IntPtr glSharedTextureHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E3E914
    System::IAsyncResult* BeginInvoke_NEW(System::IntPtr glSharedTextureHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1E3E9A0
    void EndInvoke_NEW(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_UnlockGLSharedTextureForAccess
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_UnlockGLSharedTextureForAccess*, "Valve.VR", "IVRCompositor/_UnlockGLSharedTextureForAccess");
