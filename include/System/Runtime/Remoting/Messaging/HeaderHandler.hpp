// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: Header
  class Header;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x70
  // Autogenerated type: System.Runtime.Remoting.Messaging.HeaderHandler
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3B1AC
  class HeaderHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: HeaderHandler
    HeaderHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x117C694
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HeaderHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::HeaderHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HeaderHandler*, creationType>(object, method)));
    }
    // public System.Object Invoke(System.Runtime.Remoting.Messaging.Header[] headers)
    // Offset: 0x117C6A8
    ::Il2CppObject* Invoke(::Array<System::Runtime::Remoting::Messaging::Header*>* headers);
    // public System.IAsyncResult BeginInvoke(System.Runtime.Remoting.Messaging.Header[] headers, System.AsyncCallback callback, System.Object object)
    // Offset: 0x117CA68
    System::IAsyncResult* BeginInvoke(::Array<System::Runtime::Remoting::Messaging::Header*>* headers, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Object EndInvoke(System.IAsyncResult result)
    // Offset: 0x117CA8C
    ::Il2CppObject* EndInvoke(System::IAsyncResult* result);
  }; // System.Runtime.Remoting.Messaging.HeaderHandler
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::HeaderHandler*, "System.Runtime.Remoting.Messaging", "HeaderHandler");
#pragma pack(pop)
