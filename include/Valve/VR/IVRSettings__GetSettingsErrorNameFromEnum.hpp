// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSettings
#include "Valve/VR/IVRSettings.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRSettingsError
  struct EVRSettingsError;
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
  // Autogenerated type: Valve.VR.IVRSettings/_GetSettingsErrorNameFromEnum
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D8A12C
  class IVRSettings::_GetSettingsErrorNameFromEnum : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetSettingsErrorNameFromEnum
    _GetSettingsErrorNameFromEnum() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1924E48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSettings::_GetSettingsErrorNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSettings::_GetSettingsErrorNameFromEnum::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSettings::_GetSettingsErrorNameFromEnum*, creationType>(object, method)));
    }
    // public System.IntPtr Invoke(Valve.VR.EVRSettingsError eError)
    // Offset: 0x1924E5C
    System::IntPtr Invoke(Valve::VR::EVRSettingsError eError);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVRSettingsError eError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19250D0
    System::IAsyncResult* BeginInvoke(Valve::VR::EVRSettingsError eError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x192515C
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSettings/_GetSettingsErrorNameFromEnum
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSettings::_GetSettingsErrorNameFromEnum*, "Valve.VR", "IVRSettings/_GetSettingsErrorNameFromEnum");
#pragma pack(pop)
