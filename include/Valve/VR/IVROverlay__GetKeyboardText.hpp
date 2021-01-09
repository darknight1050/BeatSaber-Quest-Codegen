// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
  // Autogenerated type: Valve.VR.IVROverlay/_GetKeyboardText
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D89EFC
  class IVROverlay::_GetKeyboardText : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetKeyboardText
    _GetKeyboardText() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18EFF14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetKeyboardText* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_GetKeyboardText::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetKeyboardText*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.Text.StringBuilder pchText, System.UInt32 cchText)
    // Offset: 0x18EFF28
    uint Invoke(System::Text::StringBuilder* pchText, uint cchText);
    // public System.IAsyncResult BeginInvoke(System.Text.StringBuilder pchText, System.UInt32 cchText, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18F035C
    System::IAsyncResult* BeginInvoke(System::Text::StringBuilder* pchText, uint cchText, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x18F03F8
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetKeyboardText
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetKeyboardText*, "Valve.VR", "IVROverlay/_GetKeyboardText");
#pragma pack(pop)
