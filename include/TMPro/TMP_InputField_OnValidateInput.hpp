// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_InputField
#include "TMPro/TMP_InputField.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
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
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_InputField/OnValidateInput
  class TMP_InputField::OnValidateInput : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xB6D204
    static TMP_InputField::OnValidateInput* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Char Invoke(System.String text, System.Int32 charIndex, System.Char addedChar)
    // Offset: 0xB6D218
    ::Il2CppChar Invoke(::Il2CppString* text, int charIndex, ::Il2CppChar addedChar);
    // public System.IAsyncResult BeginInvoke(System.String text, System.Int32 charIndex, System.Char addedChar, System.AsyncCallback callback, System.Object object)
    // Offset: 0xB6D670
    System::IAsyncResult* BeginInvoke(::Il2CppString* text, int charIndex, ::Il2CppChar addedChar, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Char EndInvoke(System.IAsyncResult result)
    // Offset: 0xB6D72C
    ::Il2CppChar EndInvoke(System::IAsyncResult* result);
  }; // TMPro.TMP_InputField/OnValidateInput
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_InputField::OnValidateInput*, "TMPro", "TMP_InputField/OnValidateInput");
#pragma pack(pop)
