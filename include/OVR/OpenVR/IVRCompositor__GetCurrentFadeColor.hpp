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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
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
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_GetCurrentFadeColor
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE0F1C
  class IVRCompositor::_GetCurrentFadeColor : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetCurrentFadeColor
    _GetCurrentFadeColor() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D31DC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetCurrentFadeColor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetCurrentFadeColor*, creationType>(object, method)));
    }
    // public OVR.OpenVR.HmdColor_t Invoke(System.Boolean bBackground)
    // Offset: 0x1D31DD8
    OVR::OpenVR::HmdColor_t Invoke_NEW(bool bBackground);
    // public System.IAsyncResult BeginInvoke(System.Boolean bBackground, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D3205C
    System::IAsyncResult* BeginInvoke_NEW(bool bBackground, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.HmdColor_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x1D320EC
    OVR::OpenVR::HmdColor_t EndInvoke_NEW(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_GetCurrentFadeColor
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_GetCurrentFadeColor*, "OVR.OpenVR", "IVRCompositor/_GetCurrentFadeColor");
