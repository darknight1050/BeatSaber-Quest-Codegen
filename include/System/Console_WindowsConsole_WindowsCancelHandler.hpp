// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Console/WindowsConsole
#include "System/Console_WindowsConsole.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
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
// Type namespace: System
namespace System {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Console/WindowsConsole/WindowsCancelHandler
  // [] Offset: FFFFFFFF
  class Console::WindowsConsole::WindowsCancelHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: WindowsCancelHandler
    WindowsCancelHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x181B290
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Console::WindowsConsole::WindowsCancelHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Console::WindowsConsole::WindowsCancelHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Console::WindowsConsole::WindowsCancelHandler*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Int32 keyCode)
    // Offset: 0x181B2A0
    bool Invoke_NEW(int keyCode);
    // public System.IAsyncResult BeginInvoke(System.Int32 keyCode, System.AsyncCallback callback, System.Object object)
    // Offset: 0x181B50C
    System::IAsyncResult* BeginInvoke_NEW(int keyCode, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x181B598
    bool EndInvoke_NEW(System::IAsyncResult* result);
  }; // System.Console/WindowsConsole/WindowsCancelHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Console::WindowsConsole::WindowsCancelHandler*, "System", "Console/WindowsConsole/WindowsCancelHandler");
