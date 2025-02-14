// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSettings
#include "OVR/OpenVR/IVRSettings.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSettings/_GetInt32
  // [UnmanagedFunctionPointerAttribute] Offset: DCF740
  class IVRSettings::_GetInt32 : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetInt32
    _GetInt32() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x208D474
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSettings::_GetInt32* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSettings::_GetInt32::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSettings::_GetInt32*, creationType>(object, method)));
    }
    // public System.Int32 Invoke(System.String pchSection, System.String pchSettingsKey, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x208D484
    int Invoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, OVR::OpenVR::EVRSettingsError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchSection, System.String pchSettingsKey, ref OVR.OpenVR.EVRSettingsError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x208D89C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, OVR::OpenVR::EVRSettingsError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Int32 EndInvoke(ref OVR.OpenVR.EVRSettingsError peError, System.IAsyncResult result)
    // Offset: 0x208D944
    int EndInvoke(OVR::OpenVR::EVRSettingsError& peError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSettings/_GetInt32
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSettings::_GetInt32*, "OVR.OpenVR", "IVRSettings/_GetInt32");
