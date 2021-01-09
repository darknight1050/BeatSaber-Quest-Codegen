// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.InputField
#include "UnityEngine/UI/InputField.hpp"
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
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x70
  // Autogenerated type: UnityEngine.UI.InputField/OnValidateInput
  // [] Offset: FFFFFFFF
  class InputField::OnValidateInput : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: OnValidateInput
    OnValidateInput() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x155F9A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputField::OnValidateInput* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::InputField::OnValidateInput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputField::OnValidateInput*, creationType>(object, method)));
    }
    // public System.Char Invoke(System.String text, System.Int32 charIndex, System.Char addedChar)
    // Offset: 0x155F9B8
    ::Il2CppChar Invoke(::Il2CppString* text, int charIndex, ::Il2CppChar addedChar);
    // public System.IAsyncResult BeginInvoke(System.String text, System.Int32 charIndex, System.Char addedChar, System.AsyncCallback callback, System.Object object)
    // Offset: 0x155FE10
    System::IAsyncResult* BeginInvoke(::Il2CppString* text, int charIndex, ::Il2CppChar addedChar, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Char EndInvoke(System.IAsyncResult result)
    // Offset: 0x155FECC
    ::Il2CppChar EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.UI.InputField/OnValidateInput
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::InputField::OnValidateInput*, "UnityEngine.UI", "InputField/OnValidateInput");
#pragma pack(pop)
