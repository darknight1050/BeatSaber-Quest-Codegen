// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: ConsoleCancelEventArgs
  class ConsoleCancelEventArgs;
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
  // Autogenerated type: System.ConsoleCancelEventHandler
  class ConsoleCancelEventHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ConsoleCancelEventHandler
    ConsoleCancelEventHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1963D68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConsoleCancelEventHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ConsoleCancelEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConsoleCancelEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.ConsoleCancelEventArgs e)
    // Offset: 0x19631E0
    void Invoke(::Il2CppObject* sender, System::ConsoleCancelEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.ConsoleCancelEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1963D78
    System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, System::ConsoleCancelEventArgs* e, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1963DA8
    void EndInvoke(System::IAsyncResult* result);
  }; // System.ConsoleCancelEventHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::ConsoleCancelEventHandler*, "System", "ConsoleCancelEventHandler");
