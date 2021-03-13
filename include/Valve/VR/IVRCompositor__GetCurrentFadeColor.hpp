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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRCompositor/_GetCurrentFadeColor
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE5E28
  class IVRCompositor::_GetCurrentFadeColor : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetCurrentFadeColor
    _GetCurrentFadeColor() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E38D74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetCurrentFadeColor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_GetCurrentFadeColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetCurrentFadeColor*, creationType>(object, method)));
    }
    // public Valve.VR.HmdColor_t Invoke(System.Boolean bBackground)
    // Offset: 0x1E38D84
    Valve::VR::HmdColor_t Invoke_NEW(bool bBackground);
    // public System.IAsyncResult BeginInvoke(System.Boolean bBackground, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E39008
    System::IAsyncResult* BeginInvoke_NEW(bool bBackground, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.HmdColor_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x1E39098
    Valve::VR::HmdColor_t EndInvoke_NEW(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_GetCurrentFadeColor
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetCurrentFadeColor*, "Valve.VR", "IVRCompositor/_GetCurrentFadeColor");
