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
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.AsyncCallback
  // [ComVisibleAttribute] Offset: D7A384
  class AsyncCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: AsyncCallback
    AsyncCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1760A74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::AsyncCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IAsyncResult ar)
    // Offset: 0x1760A84
    void Invoke(System::IAsyncResult* ar);
    // public System.IAsyncResult BeginInvoke(System.IAsyncResult ar, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1760E18
    System::IAsyncResult* BeginInvoke(System::IAsyncResult* ar, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1760E3C
    void EndInvoke(System::IAsyncResult* result);
  }; // System.AsyncCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::AsyncCallback*, "System", "AsyncCallback");
