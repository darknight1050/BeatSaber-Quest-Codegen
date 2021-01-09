// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRExtendedDisplay
#include "Valve/VR/IVRExtendedDisplay.hpp"
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
  // Autogenerated type: Valve.VR.IVRExtendedDisplay/_GetDXGIOutputInfo
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D89038
  class IVRExtendedDisplay::_GetDXGIOutputInfo : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetDXGIOutputInfo
    _GetDXGIOutputInfo() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18EC7C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRExtendedDisplay::_GetDXGIOutputInfo* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRExtendedDisplay::_GetDXGIOutputInfo*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref System.Int32 pnAdapterIndex, ref System.Int32 pnAdapterOutputIndex)
    // Offset: 0x18EC7DC
    void Invoke(int& pnAdapterIndex, int& pnAdapterOutputIndex);
    // public System.IAsyncResult BeginInvoke(ref System.Int32 pnAdapterIndex, ref System.Int32 pnAdapterOutputIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18ECA48
    System::IAsyncResult* BeginInvoke(int& pnAdapterIndex, int& pnAdapterOutputIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.Int32 pnAdapterIndex, ref System.Int32 pnAdapterOutputIndex, System.IAsyncResult result)
    // Offset: 0x18ECAF4
    void EndInvoke(int& pnAdapterIndex, int& pnAdapterOutputIndex, System::IAsyncResult* result);
  }; // Valve.VR.IVRExtendedDisplay/_GetDXGIOutputInfo
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo*, "Valve.VR", "IVRExtendedDisplay/_GetDXGIOutputInfo");
#pragma pack(pop)
