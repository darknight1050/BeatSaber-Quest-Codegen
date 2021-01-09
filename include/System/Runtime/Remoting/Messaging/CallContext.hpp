// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x10
  // Autogenerated type: System.Runtime.Remoting.Messaging.CallContext
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3B0C8
  class CallContext : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CallContext
    CallContext() noexcept {}
    // static System.Object SetCurrentCallContext(System.Runtime.Remoting.Messaging.LogicalCallContext ctx)
    // Offset: 0x117A8A8
    static ::Il2CppObject* SetCurrentCallContext(System::Runtime::Remoting::Messaging::LogicalCallContext* ctx);
    // static System.Runtime.Remoting.Messaging.LogicalCallContext SetLogicalCallContext(System.Runtime.Remoting.Messaging.LogicalCallContext callCtx)
    // Offset: 0x117A8B0
    static System::Runtime::Remoting::Messaging::LogicalCallContext* SetLogicalCallContext(System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx);
    // static public System.Object LogicalGetData(System.String name)
    // Offset: 0x117A914
    static ::Il2CppObject* LogicalGetData(::Il2CppString* name);
    // static private System.Object IllogicalGetData(System.String name)
    // Offset: 0x117A978
    static ::Il2CppObject* IllogicalGetData(::Il2CppString* name);
    // static public System.Object GetData(System.String name)
    // Offset: 0x117A9DC
    static ::Il2CppObject* GetData(::Il2CppString* name);
    // static public System.Void SetData(System.String name, System.Object data)
    // Offset: 0x117AA10
    static void SetData(::Il2CppString* name, ::Il2CppObject* data);
    // static public System.Void LogicalSetData(System.String name, System.Object data)
    // Offset: 0x117AAD4
    static void LogicalSetData(::Il2CppString* name, ::Il2CppObject* data);
    // private System.Void .ctor()
    // Offset: 0x117A8A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::CallContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallContext*, creationType>()));
    }
  }; // System.Runtime.Remoting.Messaging.CallContext
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::CallContext*, "System.Runtime.Remoting.Messaging", "CallContext");
#pragma pack(pop)
