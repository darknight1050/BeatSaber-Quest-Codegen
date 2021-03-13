// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
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
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
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
  // Autogenerated type: Valve.VR.IVRApplications/_LaunchInternalProcess
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE5ACC
  class IVRApplications::_LaunchInternalProcess : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _LaunchInternalProcess
    _LaunchInternalProcess() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1509294
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_LaunchInternalProcess* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRApplications::_LaunchInternalProcess::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_LaunchInternalProcess*, creationType>(object, method)));
    }
    // public Valve.VR.EVRApplicationError Invoke(System.String pchBinaryPath, System.String pchArguments, System.String pchWorkingDirectory)
    // Offset: 0x1501170
    Valve::VR::EVRApplicationError Invoke_NEW(::Il2CppString* pchBinaryPath, ::Il2CppString* pchArguments, ::Il2CppString* pchWorkingDirectory);
    // public System.IAsyncResult BeginInvoke(System.String pchBinaryPath, System.String pchArguments, System.String pchWorkingDirectory, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15092A4
    System::IAsyncResult* BeginInvoke_NEW(::Il2CppString* pchBinaryPath, ::Il2CppString* pchArguments, ::Il2CppString* pchWorkingDirectory, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x15092D4
    Valve::VR::EVRApplicationError EndInvoke_NEW(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_LaunchInternalProcess
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_LaunchInternalProcess*, "Valve.VR", "IVRApplications/_LaunchInternalProcess");
