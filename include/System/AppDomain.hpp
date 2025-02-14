// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AssemblyLoadEventHandler
  class AssemblyLoadEventHandler;
  // Forward declaring type: ResolveEventHandler
  class ResolveEventHandler;
  // Forward declaring type: EventHandler
  class EventHandler;
  // Forward declaring type: UnhandledExceptionEventHandler
  class UnhandledExceptionEventHandler;
  // Forward declaring type: EventHandler`1<TEventArgs>
  template<typename TEventArgs>
  class EventHandler_1;
}
// Forward declaring namespace: System::Runtime::ExceptionServices
namespace System::Runtime::ExceptionServices {
  // Forward declaring type: FirstChanceExceptionEventArgs
  class FirstChanceExceptionEventArgs;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: IPrincipal
  class IPrincipal;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Security::Policy
namespace System::Security::Policy {
  // Forward declaring type: Evidence
  class Evidence;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: CADMethodCallMessage
  class CADMethodCallMessage;
  // Forward declaring type: CADMethodReturnMessage
  class CADMethodReturnMessage;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0xA0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.AppDomain
  // [ClassInterfaceAttribute] Offset: D7B1AC
  // [ComVisibleAttribute] Offset: D7B1AC
  class AppDomain : public System::MarshalByRefObject {
    public:
    // private System.IntPtr _mono_app_domain
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr mono_app_domain;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Object _evidence
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* evidence;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _granted
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* granted;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 _principalPolicy
    // Size: 0x4
    // Offset: 0x30
    int principalPolicy;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: principalPolicy and: AssemblyLoad
    char __padding3[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD8115C
    // private System.AssemblyLoadEventHandler AssemblyLoad
    // Size: 0x8
    // Offset: 0x38
    System::AssemblyLoadEventHandler* AssemblyLoad;
    // Field size check
    static_assert(sizeof(System::AssemblyLoadEventHandler*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD8116C
    // private System.ResolveEventHandler AssemblyResolve
    // Size: 0x8
    // Offset: 0x40
    System::ResolveEventHandler* AssemblyResolve;
    // Field size check
    static_assert(sizeof(System::ResolveEventHandler*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD8117C
    // private System.EventHandler DomainUnload
    // Size: 0x8
    // Offset: 0x48
    System::EventHandler* DomainUnload;
    // Field size check
    static_assert(sizeof(System::EventHandler*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD8118C
    // private System.EventHandler ProcessExit
    // Size: 0x8
    // Offset: 0x50
    System::EventHandler* ProcessExit;
    // Field size check
    static_assert(sizeof(System::EventHandler*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD8119C
    // private System.ResolveEventHandler ResourceResolve
    // Size: 0x8
    // Offset: 0x58
    System::ResolveEventHandler* ResourceResolve;
    // Field size check
    static_assert(sizeof(System::ResolveEventHandler*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD811AC
    // private System.ResolveEventHandler TypeResolve
    // Size: 0x8
    // Offset: 0x60
    System::ResolveEventHandler* TypeResolve;
    // Field size check
    static_assert(sizeof(System::ResolveEventHandler*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD811BC
    // private System.UnhandledExceptionEventHandler UnhandledException
    // Size: 0x8
    // Offset: 0x68
    System::UnhandledExceptionEventHandler* UnhandledException;
    // Field size check
    static_assert(sizeof(System::UnhandledExceptionEventHandler*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD811CC
    // private System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> FirstChanceException
    // Size: 0x8
    // Offset: 0x70
    System::EventHandler_1<System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*>* FirstChanceException;
    // Field size check
    static_assert(sizeof(System::EventHandler_1<System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*>*) == 0x8);
    // private System.Object _domain_manager
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppObject* domain_manager;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD811DC
    // private System.ResolveEventHandler ReflectionOnlyAssemblyResolve
    // Size: 0x8
    // Offset: 0x80
    System::ResolveEventHandler* ReflectionOnlyAssemblyResolve;
    // Field size check
    static_assert(sizeof(System::ResolveEventHandler*) == 0x8);
    // private System.Object _activation
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppObject* activation;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _applicationIdentity
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppObject* applicationIdentity;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> compatibility_switch
    // Size: 0x8
    // Offset: 0x98
    System::Collections::Generic::List_1<::Il2CppString*>* compatibility_switch;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: AppDomain
    AppDomain(System::IntPtr mono_app_domain_ = {}, ::Il2CppObject* evidence_ = {}, ::Il2CppObject* granted_ = {}, int principalPolicy_ = {}, System::AssemblyLoadEventHandler* AssemblyLoad_ = {}, System::ResolveEventHandler* AssemblyResolve_ = {}, System::EventHandler* DomainUnload_ = {}, System::EventHandler* ProcessExit_ = {}, System::ResolveEventHandler* ResourceResolve_ = {}, System::ResolveEventHandler* TypeResolve_ = {}, System::UnhandledExceptionEventHandler* UnhandledException_ = {}, System::EventHandler_1<System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*>* FirstChanceException_ = {}, ::Il2CppObject* domain_manager_ = {}, System::ResolveEventHandler* ReflectionOnlyAssemblyResolve_ = {}, ::Il2CppObject* activation_ = {}, ::Il2CppObject* applicationIdentity_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* compatibility_switch_ = {}) noexcept : mono_app_domain{mono_app_domain_}, evidence{evidence_}, granted{granted_}, principalPolicy{principalPolicy_}, AssemblyLoad{AssemblyLoad_}, AssemblyResolve{AssemblyResolve_}, DomainUnload{DomainUnload_}, ProcessExit{ProcessExit_}, ResourceResolve{ResourceResolve_}, TypeResolve{TypeResolve_}, UnhandledException{UnhandledException_}, FirstChanceException{FirstChanceException_}, domain_manager{domain_manager_}, ReflectionOnlyAssemblyResolve{ReflectionOnlyAssemblyResolve_}, activation{activation_}, applicationIdentity{applicationIdentity_}, compatibility_switch{compatibility_switch_} {}
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get static field: static private System.String _process_guid
    static ::Il2CppString* _get__process_guid();
    // Set static field: static private System.String _process_guid
    static void _set__process_guid(::Il2CppString* value);
    // [ThreadStaticAttribute] Offset: 0xD8111C
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Object> type_resolve_in_progress
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* _get_type_resolve_in_progress();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Object> type_resolve_in_progress
    static void _set_type_resolve_in_progress(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* value);
    // [ThreadStaticAttribute] Offset: 0xD8112C
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Object> assembly_resolve_in_progress
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* _get_assembly_resolve_in_progress();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Object> assembly_resolve_in_progress
    static void _set_assembly_resolve_in_progress(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* value);
    // [ThreadStaticAttribute] Offset: 0xD8113C
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Object> assembly_resolve_in_progress_refonly
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* _get_assembly_resolve_in_progress_refonly();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Object> assembly_resolve_in_progress_refonly
    static void _set_assembly_resolve_in_progress_refonly(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* value);
    // [ThreadStaticAttribute] Offset: 0xD8114C
    // Get static field: static private System.Object _principal
    static ::Il2CppObject* _get__principal();
    // Set static field: static private System.Object _principal
    static void _set__principal(::Il2CppObject* value);
    // Get static field: static private System.AppDomain default_domain
    static System::AppDomain* _get_default_domain();
    // Set static field: static private System.AppDomain default_domain
    static void _set_default_domain(System::AppDomain* value);
    // private System.String getFriendlyName()
    // Offset: 0x17582C4
    ::Il2CppString* getFriendlyName();
    // public System.String get_FriendlyName()
    // Offset: 0x17582C8
    ::Il2CppString* get_FriendlyName();
    // System.Security.Principal.IPrincipal get_DefaultPrincipal()
    // Offset: 0x17582CC
    System::Security::Principal::IPrincipal* get_DefaultPrincipal();
    // static private System.AppDomain getCurDomain()
    // Offset: 0x1758444
    static System::AppDomain* getCurDomain();
    // static public System.AppDomain get_CurrentDomain()
    // Offset: 0x1758448
    static System::AppDomain* get_CurrentDomain();
    // private System.Reflection.Assembly[] GetAssemblies(System.Boolean refOnly)
    // Offset: 0x175844C
    ::Array<System::Reflection::Assembly*>* GetAssemblies(bool refOnly);
    // public System.Reflection.Assembly[] GetAssemblies()
    // Offset: 0x1758454
    ::Array<System::Reflection::Assembly*>* GetAssemblies();
    // public System.Object GetData(System.String name)
    // Offset: 0x175845C
    ::Il2CppObject* GetData(::Il2CppString* name);
    // System.Reflection.Assembly LoadAssembly(System.String assemblyRef, System.Security.Policy.Evidence securityEvidence, System.Boolean refOnly)
    // Offset: 0x1758468
    System::Reflection::Assembly* LoadAssembly(::Il2CppString* assemblyRef, System::Security::Policy::Evidence* securityEvidence, bool refOnly);
    // public System.Reflection.Assembly Load(System.String assemblyString)
    // Offset: 0x1758470
    System::Reflection::Assembly* Load(::Il2CppString* assemblyString);
    // System.Reflection.Assembly Load(System.String assemblyString, System.Security.Policy.Evidence assemblySecurity, System.Boolean refonly)
    // Offset: 0x175847C
    System::Reflection::Assembly* Load(::Il2CppString* assemblyString, System::Security::Policy::Evidence* assemblySecurity, bool refonly);
    // static private System.AppDomain InternalSetDomainByID(System.Int32 domain_id)
    // Offset: 0x17585A8
    static System::AppDomain* InternalSetDomainByID(int domain_id);
    // static private System.AppDomain InternalSetDomain(System.AppDomain context)
    // Offset: 0x17585AC
    static System::AppDomain* InternalSetDomain(System::AppDomain* context);
    // static System.Void InternalPushDomainRefByID(System.Int32 domain_id)
    // Offset: 0x17585B0
    static void InternalPushDomainRefByID(int domain_id);
    // static System.Void InternalPopDomainRef()
    // Offset: 0x17585B4
    static void InternalPopDomainRef();
    // static System.Runtime.Remoting.Contexts.Context InternalSetContext(System.Runtime.Remoting.Contexts.Context context)
    // Offset: 0x17585B8
    static System::Runtime::Remoting::Contexts::Context* InternalSetContext(System::Runtime::Remoting::Contexts::Context* context);
    // static System.Runtime.Remoting.Contexts.Context InternalGetContext()
    // Offset: 0x17585BC
    static System::Runtime::Remoting::Contexts::Context* InternalGetContext();
    // static System.Runtime.Remoting.Contexts.Context InternalGetDefaultContext()
    // Offset: 0x17585C0
    static System::Runtime::Remoting::Contexts::Context* InternalGetDefaultContext();
    // static System.String InternalGetProcessGuid(System.String newguid)
    // Offset: 0x17585C4
    static ::Il2CppString* InternalGetProcessGuid(::Il2CppString* newguid);
    // static System.Object InvokeInDomainByID(System.Int32 domain_id, System.Reflection.MethodInfo method, System.Object obj, System.Object[] args)
    // Offset: 0x17585C8
    static ::Il2CppObject* InvokeInDomainByID(int domain_id, System::Reflection::MethodInfo* method, ::Il2CppObject* obj, ::Array<::Il2CppObject*>* args);
    // static System.String GetProcessGuid()
    // Offset: 0x1758724
    static ::Il2CppString* GetProcessGuid();
    // static private System.Boolean InternalIsFinalizingForUnload(System.Int32 domain_id)
    // Offset: 0x17587D8
    static bool InternalIsFinalizingForUnload(int domain_id);
    // public System.Boolean IsFinalizingForUnload()
    // Offset: 0x17587DC
    bool IsFinalizingForUnload();
    // private System.Int32 getDomainID()
    // Offset: 0x17587F4
    int getDomainID();
    // private System.Void DoAssemblyLoad(System.Reflection.Assembly assembly)
    // Offset: 0x1758800
    void DoAssemblyLoad(System::Reflection::Assembly* assembly);
    // private System.Reflection.Assembly DoAssemblyResolve(System.String name, System.Reflection.Assembly requestingAssembly, System.Boolean refonly)
    // Offset: 0x1758CF0
    System::Reflection::Assembly* DoAssemblyResolve(::Il2CppString* name, System::Reflection::Assembly* requestingAssembly, bool refonly);
    // System.Reflection.Assembly DoTypeResolve(System.Object name_or_tb)
    // Offset: 0x1758F84
    System::Reflection::Assembly* DoTypeResolve(::Il2CppObject* name_or_tb);
    // private System.Void DoDomainUnload()
    // Offset: 0x17591F0
    void DoDomainUnload();
    // System.Byte[] GetMarshalledDomainObjRef()
    // Offset: 0x175920C
    ::Array<uint8_t>* GetMarshalledDomainObjRef();
    // System.Void ProcessMessageInDomain(System.Byte[] arrRequest, System.Runtime.Remoting.Messaging.CADMethodCallMessage cadMsg, out System.Byte[] arrResponse, out System.Runtime.Remoting.Messaging.CADMethodReturnMessage cadMrm)
    // Offset: 0x17592E4
    void ProcessMessageInDomain(::Array<uint8_t>* arrRequest, System::Runtime::Remoting::Messaging::CADMethodCallMessage* cadMsg, ::Array<uint8_t>*& arrResponse, System::Runtime::Remoting::Messaging::CADMethodReturnMessage*& cadMrm);
    // public System.Void add_DomainUnload(System.EventHandler value)
    // Offset: 0x175940C
    void add_DomainUnload(System::EventHandler* value);
    // public System.Void remove_DomainUnload(System.EventHandler value)
    // Offset: 0x17594B0
    void remove_DomainUnload(System::EventHandler* value);
    // public System.Void add_UnhandledException(System.UnhandledExceptionEventHandler value)
    // Offset: 0x1759554
    void add_UnhandledException(System::UnhandledExceptionEventHandler* value);
    // public System.Void remove_UnhandledException(System.UnhandledExceptionEventHandler value)
    // Offset: 0x17595F8
    void remove_UnhandledException(System::UnhandledExceptionEventHandler* value);
    // private System.Void .ctor()
    // Offset: 0x17582BC
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppDomain* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::AppDomain::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppDomain*, creationType>()));
    }
    // public override System.Object InitializeLifetimeService()
    // Offset: 0x1758460
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Object MarshalByRefObject::InitializeLifetimeService()
    ::Il2CppObject* InitializeLifetimeService();
    // public override System.String ToString()
    // Offset: 0x17587FC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.AppDomain
  #pragma pack(pop)
  static check_size<sizeof(AppDomain), 152 + sizeof(System::Collections::Generic::List_1<::Il2CppString*>*)> __System_AppDomainSizeCheck;
  static_assert(sizeof(AppDomain) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(System::AppDomain*, "System", "AppDomain");
