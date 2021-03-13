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
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.WaitOrTimerCallback
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C95960
  class WaitOrTimerCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: WaitOrTimerCallback
    WaitOrTimerCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16E43B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaitOrTimerCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::WaitOrTimerCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaitOrTimerCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object state, System.Boolean timedOut)
    // Offset: 0x16E43C0
    void Invoke_NEW(::Il2CppObject* state, bool timedOut);
    // public System.IAsyncResult BeginInvoke(System.Object state, System.Boolean timedOut, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16E47E8
    System::IAsyncResult* BeginInvoke_NEW(::Il2CppObject* state, bool timedOut, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x16E4888
    void EndInvoke_NEW(System::IAsyncResult* result);
  }; // System.Threading.WaitOrTimerCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::WaitOrTimerCallback*, "System.Threading", "WaitOrTimerCallback");
