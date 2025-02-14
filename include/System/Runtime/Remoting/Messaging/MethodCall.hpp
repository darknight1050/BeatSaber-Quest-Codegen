// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.IMethodCallMessage
#include "System/Runtime/Remoting/Messaging/IMethodCallMessage.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Remoting.Messaging.IInternalMessage
#include "System/Runtime/Remoting/Messaging/IInternalMessage.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
  // Forward declaring type: CADMethodCallMessage
  class CADMethodCallMessage;
  // Skipping declaration: IMethodMessage because it is already included!
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
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.MethodCall
  // [CLSCompliantAttribute] Offset: D7E77C
  // [ComVisibleAttribute] Offset: D7E77C
  class MethodCall : public ::Il2CppObject/*, public System::Runtime::Remoting::Messaging::IMethodCallMessage, public System::Runtime::Serialization::ISerializable, public System::Runtime::Remoting::Messaging::IInternalMessage*/ {
    public:
    // private System.String _uri
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* uri;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _typeName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* typeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _methodName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* methodName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Object[] _args
    // Size: 0x8
    // Offset: 0x28
    ::Array<::Il2CppObject*>* args;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // private System.Type[] _methodSignature
    // Size: 0x8
    // Offset: 0x30
    ::Array<System::Type*>* methodSignature;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // private System.Reflection.MethodBase _methodBase
    // Size: 0x8
    // Offset: 0x38
    System::Reflection::MethodBase* methodBase;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodBase*) == 0x8);
    // private System.Runtime.Remoting.Messaging.LogicalCallContext _callContext
    // Size: 0x8
    // Offset: 0x40
    System::Runtime::Remoting::Messaging::LogicalCallContext* callContext;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::LogicalCallContext*) == 0x8);
    // private System.Runtime.Remoting.Identity _targetIdentity
    // Size: 0x8
    // Offset: 0x48
    System::Runtime::Remoting::Identity* targetIdentity;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Identity*) == 0x8);
    // private System.Type[] _genericArguments
    // Size: 0x8
    // Offset: 0x50
    ::Array<System::Type*>* genericArguments;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // protected System.Collections.IDictionary ExternalProperties
    // Size: 0x8
    // Offset: 0x58
    System::Collections::IDictionary* ExternalProperties;
    // Field size check
    static_assert(sizeof(System::Collections::IDictionary*) == 0x8);
    // protected System.Collections.IDictionary InternalProperties
    // Size: 0x8
    // Offset: 0x60
    System::Collections::IDictionary* InternalProperties;
    // Field size check
    static_assert(sizeof(System::Collections::IDictionary*) == 0x8);
    // Creating value type constructor for type: MethodCall
    MethodCall(::Il2CppString* uri_ = {}, ::Il2CppString* typeName_ = {}, ::Il2CppString* methodName_ = {}, ::Array<::Il2CppObject*>* args_ = {}, ::Array<System::Type*>* methodSignature_ = {}, System::Reflection::MethodBase* methodBase_ = {}, System::Runtime::Remoting::Messaging::LogicalCallContext* callContext_ = {}, System::Runtime::Remoting::Identity* targetIdentity_ = {}, ::Array<System::Type*>* genericArguments_ = {}, System::Collections::IDictionary* ExternalProperties_ = {}, System::Collections::IDictionary* InternalProperties_ = {}) noexcept : uri{uri_}, typeName{typeName_}, methodName{methodName_}, args{args_}, methodSignature{methodSignature_}, methodBase{methodBase_}, callContext{callContext_}, targetIdentity{targetIdentity_}, genericArguments{genericArguments_}, ExternalProperties{ExternalProperties_}, InternalProperties{InternalProperties_} {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IMethodCallMessage
    operator System::Runtime::Remoting::Messaging::IMethodCallMessage() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IMethodCallMessage*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IInternalMessage
    operator System::Runtime::Remoting::Messaging::IInternalMessage() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IInternalMessage*>(this);
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1A210A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodCall* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::MethodCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodCall*, creationType>(info, context)));
    }
    // System.Void .ctor(System.Runtime.Remoting.Messaging.CADMethodCallMessage msg)
    // Offset: 0x1A2642C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodCall* New_ctor(System::Runtime::Remoting::Messaging::CADMethodCallMessage* msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::MethodCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodCall*, creationType>(msg)));
    }
    // System.Void CopyFrom(System.Runtime.Remoting.Messaging.IMethodMessage call)
    // Offset: 0x1A26544
    void CopyFrom(System::Runtime::Remoting::Messaging::IMethodMessage* call);
    // System.Void InitMethodProperty(System.String key, System.Object value)
    // Offset: 0x1A21608
    void InitMethodProperty(::Il2CppString* key, ::Il2CppObject* value);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1A21ADC
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Int32 get_ArgCount()
    // Offset: 0x1A268BC
    int get_ArgCount();
    // public System.Object[] get_Args()
    // Offset: 0x1A268D8
    ::Array<::Il2CppObject*>* get_Args();
    // public System.Runtime.Remoting.Messaging.LogicalCallContext get_LogicalCallContext()
    // Offset: 0x1A268E0
    System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
    // public System.Reflection.MethodBase get_MethodBase()
    // Offset: 0x1A2694C
    System::Reflection::MethodBase* get_MethodBase();
    // public System.String get_MethodName()
    // Offset: 0x1A27008
    ::Il2CppString* get_MethodName();
    // public System.Object get_MethodSignature()
    // Offset: 0x1A27048
    ::Il2CppObject* get_MethodSignature();
    // public System.Collections.IDictionary get_Properties()
    // Offset: 0x1A21EB4
    System::Collections::IDictionary* get_Properties();
    // System.Void InitDictionary()
    // Offset: 0x1A2718C
    void InitDictionary();
    // public System.String get_TypeName()
    // Offset: 0x1A27218
    ::Il2CppString* get_TypeName();
    // public System.String get_Uri()
    // Offset: 0x1A2726C
    ::Il2CppString* get_Uri();
    // public System.Void set_Uri(System.String value)
    // Offset: 0x1A27274
    void set_Uri(::Il2CppString* value);
    // private System.String System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri()
    // Offset: 0x1A2727C
    ::Il2CppString* System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String value)
    // Offset: 0x1A27284
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::Il2CppString* value);
    // public System.Object GetArg(System.Int32 argNum)
    // Offset: 0x1A2728C
    ::Il2CppObject* GetArg(int argNum);
    // public System.Void Init()
    // Offset: 0x1A272C8
    void Init();
    // public System.Void ResolveMethod()
    // Offset: 0x1A26988
    void ResolveMethod();
    // private System.Type CastTo(System.String clientType, System.Type serverType)
    // Offset: 0x1A2738C
    System::Type* CastTo(::Il2CppString* clientType, System::Type* serverType);
    // static private System.String GetTypeNameFromAssemblyQualifiedName(System.String aqname)
    // Offset: 0x1A27A38
    static ::Il2CppString* GetTypeNameFromAssemblyQualifiedName(::Il2CppString* aqname);
    // private System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity()
    // Offset: 0x1A27AE8
    System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity(System.Runtime.Remoting.Identity value)
    // Offset: 0x1A27AF0
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(System::Runtime::Remoting::Identity* value);
    // private System.Type[] get_GenericArguments()
    // Offset: 0x1A279F0
    ::Array<System::Type*>* get_GenericArguments();
    // System.Void .ctor()
    // Offset: 0x1A2109C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodCall* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::MethodCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodCall*, creationType>()));
    }
  }; // System.Runtime.Remoting.Messaging.MethodCall
  #pragma pack(pop)
  static check_size<sizeof(MethodCall), 96 + sizeof(System::Collections::IDictionary*)> __System_Runtime_Remoting_Messaging_MethodCallSizeCheck;
  static_assert(sizeof(MethodCall) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::MethodCall*, "System.Runtime.Remoting.Messaging", "MethodCall");
