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
  // Autogenerated type: Valve.VR.IVRSettings/_GetBool
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D8A1A4
  class IVRSettings::_GetBool : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetBool
    _GetBool() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1923ED8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSettings::_GetBool* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSettings::_GetBool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSettings::_GetBool*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pchSection, System.String pchSettingsKey, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x1923EEC
    bool Invoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, Valve::VR::EVRSettingsError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchSection, System.String pchSettingsKey, ref Valve.VR.EVRSettingsError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1924320
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, Valve::VR::EVRSettingsError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.EVRSettingsError peError, System.IAsyncResult result)
    // Offset: 0x19243C8
    bool EndInvoke(Valve::VR::EVRSettingsError& peError, System::IAsyncResult* result);
  }; // Valve.VR.IVRSettings/_GetBool
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSettings::_GetBool*, "Valve.VR", "IVRSettings/_GetBool");
#pragma pack(pop)
