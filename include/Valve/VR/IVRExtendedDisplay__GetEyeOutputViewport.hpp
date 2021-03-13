// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRExtendedDisplay
#include "Valve/VR/IVRExtendedDisplay.hpp"
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
  // Forward declaring type: EVREye
  struct EVREye;
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
  // Autogenerated type: Valve.VR.IVRExtendedDisplay/_GetEyeOutputViewport
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE5770
  class IVRExtendedDisplay::_GetEyeOutputViewport : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetEyeOutputViewport
    _GetEyeOutputViewport() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E3F6A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRExtendedDisplay::_GetEyeOutputViewport* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRExtendedDisplay::_GetEyeOutputViewport*, creationType>(object, method)));
    }
    // public System.Void Invoke(Valve.VR.EVREye eEye, ref System.UInt32 pnX, ref System.UInt32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x1E3F6B0
    void Invoke_NEW(Valve::VR::EVREye eEye, uint& pnX, uint& pnY, uint& pnWidth, uint& pnHeight);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREye eEye, ref System.UInt32 pnX, ref System.UInt32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E3F9A0
    System::IAsyncResult* BeginInvoke_NEW(Valve::VR::EVREye eEye, uint& pnX, uint& pnY, uint& pnWidth, uint& pnHeight, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.UInt32 pnX, ref System.UInt32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.IAsyncResult result)
    // Offset: 0x1E3FAA4
    void EndInvoke_NEW(uint& pnX, uint& pnY, uint& pnWidth, uint& pnHeight, System::IAsyncResult* result);
  }; // Valve.VR.IVRExtendedDisplay/_GetEyeOutputViewport
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport*, "Valve.VR", "IVRExtendedDisplay/_GetEyeOutputViewport");
