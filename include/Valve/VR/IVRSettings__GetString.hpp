// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRSettings
#include "Valve/VR/IVRSettings.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRSettingsError
  struct EVRSettingsError;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSettings/_GetString
  class IVRSettings::_GetString : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16B66E0
    static IVRSettings::_GetString* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.Void Invoke(System.String pchSection, System.String pchSettingsKey, System.Text.StringBuilder pchValue, System.UInt32 unValueLen, Valve.VR.EVRSettingsError peError)
    // Offset: 0x16B66F4
    void Invoke(::CsString* pchSection, ::CsString* pchSettingsKey, System::Text::StringBuilder* pchValue, uint unValueLen, Valve::VR::EVRSettingsError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchSection, System.String pchSettingsKey, System.Text.StringBuilder pchValue, System.UInt32 unValueLen, Valve.VR.EVRSettingsError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16B6B60
    System::IAsyncResult* BeginInvoke(::CsString* pchSection, ::CsString* pchSettingsKey, System::Text::StringBuilder* pchValue, uint unValueLen, Valve::VR::EVRSettingsError& peError, System::AsyncCallback* callback, ::CsObject* object);
    // public System.Void EndInvoke(Valve.VR.EVRSettingsError peError, System.IAsyncResult result)
    // Offset: 0x16B6C30
    void EndInvoke(Valve::VR::EVRSettingsError& peError, System::IAsyncResult* result);
  }; // Valve.VR.IVRSettings/_GetString
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSettings::_GetString*, "Valve.VR", "IVRSettings/_GetString");
#pragma pack(pop)
