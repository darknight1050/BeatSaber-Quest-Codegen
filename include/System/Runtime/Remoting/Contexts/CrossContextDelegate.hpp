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
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Contexts.CrossContextDelegate
  // [ComVisibleAttribute] Offset: D7E2E0
  class CrossContextDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: CrossContextDelegate
    CrossContextDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A198BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CrossContextDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Contexts::CrossContextDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CrossContextDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke()
    // Offset: 0x1A198CC
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A19AD8
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A19B04
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Runtime.Remoting.Contexts.CrossContextDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::CrossContextDelegate*, "System.Runtime.Remoting.Contexts", "CrossContextDelegate");
