// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.IMethodReturnMessage
#include "System/Runtime/Remoting/Messaging/IMethodReturnMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.IInternalMessage
#include "System/Runtime/Remoting/Messaging/IInternalMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
  // Forward declaring type: MethodReturnDictionary
  class MethodReturnDictionary;
  // Forward declaring type: ArgInfo
  class ArgInfo;
  // Forward declaring type: IMethodCallMessage
  class IMethodCallMessage;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: Identity
  class Identity;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.ReturnMessage
  // [ComVisibleAttribute] Offset: D7E888
  class ReturnMessage : public ::Il2CppObject/*, public System::Runtime::Remoting::Messaging::IMethodReturnMessage, public System::Runtime::Remoting::Messaging::IInternalMessage*/ {
    public:
    // private System.Object[] _outArgs
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppObject*>* outArgs;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // private System.Object[] _args
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppObject*>* args;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // private System.Runtime.Remoting.Messaging.LogicalCallContext _callCtx
    // Size: 0x8
    // Offset: 0x20
    System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::LogicalCallContext*) == 0x8);
    // private System.Object _returnValue
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* returnValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.String _uri
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* uri;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Exception _exception
    // Size: 0x8
    // Offset: 0x38
    System::Exception* exception;
    // Field size check
    static_assert(sizeof(System::Exception*) == 0x8);
    // private System.Reflection.MethodBase _methodBase
    // Size: 0x8
    // Offset: 0x40
    System::Reflection::MethodBase* methodBase;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodBase*) == 0x8);
    // private System.String _methodName
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* methodName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Type[] _methodSignature
    // Size: 0x8
    // Offset: 0x50
    ::Array<System::Type*>* methodSignature;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // private System.String _typeName
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* typeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Runtime.Remoting.Messaging.MethodReturnDictionary _properties
    // Size: 0x8
    // Offset: 0x60
    System::Runtime::Remoting::Messaging::MethodReturnDictionary* properties;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::MethodReturnDictionary*) == 0x8);
    // private System.Runtime.Remoting.Identity _targetIdentity
    // Size: 0x8
    // Offset: 0x68
    System::Runtime::Remoting::Identity* targetIdentity;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Identity*) == 0x8);
    // private System.Runtime.Remoting.Messaging.ArgInfo _inArgInfo
    // Size: 0x8
    // Offset: 0x70
    System::Runtime::Remoting::Messaging::ArgInfo* inArgInfo;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::ArgInfo*) == 0x8);
    // Creating value type constructor for type: ReturnMessage
    ReturnMessage(::Array<::Il2CppObject*>* outArgs_ = {}, ::Array<::Il2CppObject*>* args_ = {}, System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx_ = {}, ::Il2CppObject* returnValue_ = {}, ::Il2CppString* uri_ = {}, System::Exception* exception_ = {}, System::Reflection::MethodBase* methodBase_ = {}, ::Il2CppString* methodName_ = {}, ::Array<System::Type*>* methodSignature_ = {}, ::Il2CppString* typeName_ = {}, System::Runtime::Remoting::Messaging::MethodReturnDictionary* properties_ = {}, System::Runtime::Remoting::Identity* targetIdentity_ = {}, System::Runtime::Remoting::Messaging::ArgInfo* inArgInfo_ = {}) noexcept : outArgs{outArgs_}, args{args_}, callCtx{callCtx_}, returnValue{returnValue_}, uri{uri_}, exception{exception_}, methodBase{methodBase_}, methodName{methodName_}, methodSignature{methodSignature_}, typeName{typeName_}, properties{properties_}, targetIdentity{targetIdentity_}, inArgInfo{inArgInfo_} {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IMethodReturnMessage
    operator System::Runtime::Remoting::Messaging::IMethodReturnMessage() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IInternalMessage
    operator System::Runtime::Remoting::Messaging::IInternalMessage() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IInternalMessage*>(this);
    }
    // public System.Void .ctor(System.Object ret, System.Object[] outArgs, System.Int32 outArgsCount, System.Runtime.Remoting.Messaging.LogicalCallContext callCtx, System.Runtime.Remoting.Messaging.IMethodCallMessage mcm)
    // Offset: 0x1A2A24C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReturnMessage* New_ctor(::Il2CppObject* ret, ::Array<::Il2CppObject*>* outArgs, int outArgsCount, System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx, System::Runtime::Remoting::Messaging::IMethodCallMessage* mcm) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::ReturnMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReturnMessage*, creationType>(ret, outArgs, outArgsCount, callCtx, mcm)));
    }
    // public System.Void .ctor(System.Exception e, System.Runtime.Remoting.Messaging.IMethodCallMessage mcm)
    // Offset: 0x1A19014
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReturnMessage* New_ctor(System::Exception* e, System::Runtime::Remoting::Messaging::IMethodCallMessage* mcm) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::ReturnMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReturnMessage*, creationType>(e, mcm)));
    }
    // public System.Int32 get_ArgCount()
    // Offset: 0x1A2A3C8
    int get_ArgCount();
    // public System.Object[] get_Args()
    // Offset: 0x1A2A3E4
    ::Array<::Il2CppObject*>* get_Args();
    // public System.Runtime.Remoting.Messaging.LogicalCallContext get_LogicalCallContext()
    // Offset: 0x1A2A3EC
    System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
    // public System.Reflection.MethodBase get_MethodBase()
    // Offset: 0x1A2A458
    System::Reflection::MethodBase* get_MethodBase();
    // public System.String get_MethodName()
    // Offset: 0x1A2A460
    ::Il2CppString* get_MethodName();
    // public System.Object get_MethodSignature()
    // Offset: 0x1A2A4BC
    ::Il2CppObject* get_MethodSignature();
    // public System.Collections.IDictionary get_Properties()
    // Offset: 0x1A2A600
    System::Collections::IDictionary* get_Properties();
    // public System.String get_TypeName()
    // Offset: 0x1A2A66C
    ::Il2CppString* get_TypeName();
    // public System.String get_Uri()
    // Offset: 0x1A2A6DC
    ::Il2CppString* get_Uri();
    // public System.Void set_Uri(System.String value)
    // Offset: 0x1A2A6E4
    void set_Uri(::Il2CppString* value);
    // private System.String System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri()
    // Offset: 0x1A2A6EC
    ::Il2CppString* System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String value)
    // Offset: 0x1A2A6F4
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::Il2CppString* value);
    // public System.Object GetArg(System.Int32 argNum)
    // Offset: 0x1A2A6FC
    ::Il2CppObject* GetArg(int argNum);
    // public System.Exception get_Exception()
    // Offset: 0x1A2A738
    System::Exception* get_Exception();
    // public System.Object[] get_OutArgs()
    // Offset: 0x1A2A740
    ::Array<::Il2CppObject*>* get_OutArgs();
    // public System.Object get_ReturnValue()
    // Offset: 0x1A2A7E8
    ::Il2CppObject* get_ReturnValue();
    // private System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity()
    // Offset: 0x1A2A7F0
    System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity(System.Runtime.Remoting.Identity value)
    // Offset: 0x1A2A7F8
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(System::Runtime::Remoting::Identity* value);
  }; // System.Runtime.Remoting.Messaging.ReturnMessage
  #pragma pack(pop)
  static check_size<sizeof(ReturnMessage), 112 + sizeof(System::Runtime::Remoting::Messaging::ArgInfo*)> __System_Runtime_Remoting_Messaging_ReturnMessageSizeCheck;
  static_assert(sizeof(ReturnMessage) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ReturnMessage*, "System.Runtime.Remoting.Messaging", "ReturnMessage");
