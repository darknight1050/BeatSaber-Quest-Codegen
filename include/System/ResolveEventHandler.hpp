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
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ResolveEventArgs
  class ResolveEventArgs;
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
  // Autogenerated type: System.ResolveEventHandler
  // [ComVisibleAttribute] Offset: D7B3A8
  class ResolveEventHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ResolveEventHandler
    ResolveEventHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x13F9520
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResolveEventHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ResolveEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResolveEventHandler*, creationType>(object, method)));
    }
    // public System.Reflection.Assembly Invoke(System.Object sender, System.ResolveEventArgs args)
    // Offset: 0x13F9530
    System::Reflection::Assembly* Invoke(::Il2CppObject* sender, System::ResolveEventArgs* args);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.ResolveEventArgs args, System.AsyncCallback callback, System.Object object)
    // Offset: 0x13F9920
    System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, System::ResolveEventArgs* args, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Reflection.Assembly EndInvoke(System.IAsyncResult result)
    // Offset: 0x13F9950
    System::Reflection::Assembly* EndInvoke(System::IAsyncResult* result);
  }; // System.ResolveEventHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::ResolveEventHandler*, "System", "ResolveEventHandler");
