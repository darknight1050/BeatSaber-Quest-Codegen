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
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: SimpleAsyncResult
  class SimpleAsyncResult;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.SimpleAsyncCallback
  class SimpleAsyncCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: SimpleAsyncCallback
    SimpleAsyncCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x147E4D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleAsyncCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::SimpleAsyncCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleAsyncCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Net.SimpleAsyncResult result)
    // Offset: 0x147E4E8
    void Invoke(System::Net::SimpleAsyncResult* result);
    // public System.IAsyncResult BeginInvoke(System.Net.SimpleAsyncResult result, System.AsyncCallback callback, System.Object object)
    // Offset: 0x147E87C
    System::IAsyncResult* BeginInvoke(System::Net::SimpleAsyncResult* result, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x147E8A0
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Net.SimpleAsyncCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::SimpleAsyncCallback*, "System.Net", "SimpleAsyncCallback");
