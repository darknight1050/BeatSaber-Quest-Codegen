// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
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
  // Autogenerated type: Valve.VR.IVRApplications/_GetApplicationLaunchArguments
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D89308
  class IVRApplications::_GetApplicationLaunchArguments : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetApplicationLaunchArguments
    _GetApplicationLaunchArguments() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x136DC54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_GetApplicationLaunchArguments* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRApplications::_GetApplicationLaunchArguments::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_GetApplicationLaunchArguments*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.UInt32 unHandle, System.Text.StringBuilder pchArgs, System.UInt32 unArgs)
    // Offset: 0x13656C0
    uint Invoke(uint unHandle, System::Text::StringBuilder* pchArgs, uint unArgs);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unHandle, System.Text.StringBuilder pchArgs, System.UInt32 unArgs, System.AsyncCallback callback, System.Object object)
    // Offset: 0x136DC68
    System::IAsyncResult* BeginInvoke(uint unHandle, System::Text::StringBuilder* pchArgs, uint unArgs, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x136DD18
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_GetApplicationLaunchArguments
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_GetApplicationLaunchArguments*, "Valve.VR", "IVRApplications/_GetApplicationLaunchArguments");
#pragma pack(pop)
