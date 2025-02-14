// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.UIntPtr
#include "System/UIntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
  // Forward declaring type: IMessage
  class IMessage;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: IContextProperty
  class IContextProperty;
  // Forward declaring type: DynamicPropertyCollection
  class DynamicPropertyCollection;
  // Forward declaring type: ContextCallbackObject
  class ContextCallbackObject;
  // Forward declaring type: IDynamicProperty
  class IDynamicProperty;
  // Forward declaring type: CrossContextDelegate
  class CrossContextDelegate;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: LocalDataStoreHolder
  class LocalDataStoreHolder;
  // Forward declaring type: LocalDataStoreMgr
  class LocalDataStoreMgr;
  // Forward declaring type: ContextBoundObject
  class ContextBoundObject;
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
  // Forward declaring type: LocalDataStore
  class LocalDataStore;
  // Forward declaring type: LocalDataStoreSlot
  class LocalDataStoreSlot;
}
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Size: 0x58
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.Remoting.Contexts.Context
  // [ComVisibleAttribute] Offset: D7E2CC
  class Context : public ::Il2CppObject {
    public:
    // private System.Int32 domain_id
    // Size: 0x4
    // Offset: 0x10
    int domain_id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 context_id
    // Size: 0x4
    // Offset: 0x14
    int context_id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UIntPtr static_data
    // Size: 0x8
    // Offset: 0x18
    System::UIntPtr static_data;
    // Field size check
    static_assert(sizeof(System::UIntPtr) == 0x8);
    // private System.UIntPtr data
    // Size: 0x8
    // Offset: 0x20
    System::UIntPtr data;
    // Field size check
    static_assert(sizeof(System::UIntPtr) == 0x8);
    // private System.Runtime.Remoting.Messaging.IMessageSink server_context_sink_chain
    // Size: 0x8
    // Offset: 0x28
    System::Runtime::Remoting::Messaging::IMessageSink* server_context_sink_chain;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::IMessageSink*) == 0x8);
    // private System.Runtime.Remoting.Messaging.IMessageSink client_context_sink_chain
    // Size: 0x8
    // Offset: 0x30
    System::Runtime::Remoting::Messaging::IMessageSink* client_context_sink_chain;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::IMessageSink*) == 0x8);
    // private System.Collections.Generic.List`1<System.Runtime.Remoting.Contexts.IContextProperty> context_properties
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<System::Runtime::Remoting::Contexts::IContextProperty*>* context_properties;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Runtime::Remoting::Contexts::IContextProperty*>*) == 0x8);
    // private System.LocalDataStoreHolder _localDataStore
    // Size: 0x8
    // Offset: 0x40
    System::LocalDataStoreHolder* localDataStore;
    // Field size check
    static_assert(sizeof(System::LocalDataStoreHolder*) == 0x8);
    // private System.Runtime.Remoting.Contexts.DynamicPropertyCollection context_dynamic_properties
    // Size: 0x8
    // Offset: 0x48
    System::Runtime::Remoting::Contexts::DynamicPropertyCollection* context_dynamic_properties;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Contexts::DynamicPropertyCollection*) == 0x8);
    // private System.Runtime.Remoting.Contexts.ContextCallbackObject callback_object
    // Size: 0x8
    // Offset: 0x50
    System::Runtime::Remoting::Contexts::ContextCallbackObject* callback_object;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Contexts::ContextCallbackObject*) == 0x8);
    // Creating value type constructor for type: Context
    Context(int domain_id_ = {}, int context_id_ = {}, System::UIntPtr static_data_ = {}, System::UIntPtr data_ = {}, System::Runtime::Remoting::Messaging::IMessageSink* server_context_sink_chain_ = {}, System::Runtime::Remoting::Messaging::IMessageSink* client_context_sink_chain_ = {}, System::Collections::Generic::List_1<System::Runtime::Remoting::Contexts::IContextProperty*>* context_properties_ = {}, System::LocalDataStoreHolder* localDataStore_ = {}, System::Runtime::Remoting::Contexts::DynamicPropertyCollection* context_dynamic_properties_ = {}, System::Runtime::Remoting::Contexts::ContextCallbackObject* callback_object_ = {}) noexcept : domain_id{domain_id_}, context_id{context_id_}, static_data{static_data_}, data{data_}, server_context_sink_chain{server_context_sink_chain_}, client_context_sink_chain{client_context_sink_chain_}, context_properties{context_properties_}, localDataStore{localDataStore_}, context_dynamic_properties{context_dynamic_properties_}, callback_object{callback_object_} {}
    // [ContextStaticAttribute] Offset: 0xD82200
    // Get static field: static private System.Object[] local_slots
    static ::Array<::Il2CppObject*>* _get_local_slots();
    // Set static field: static private System.Object[] local_slots
    static void _set_local_slots(::Array<::Il2CppObject*>* value);
    // Get static field: static private System.Runtime.Remoting.Messaging.IMessageSink default_server_context_sink
    static System::Runtime::Remoting::Messaging::IMessageSink* _get_default_server_context_sink();
    // Set static field: static private System.Runtime.Remoting.Messaging.IMessageSink default_server_context_sink
    static void _set_default_server_context_sink(System::Runtime::Remoting::Messaging::IMessageSink* value);
    // Get static field: static private System.Int32 global_count
    static int _get_global_count();
    // Set static field: static private System.Int32 global_count
    static void _set_global_count(int value);
    // Get static field: static private System.LocalDataStoreMgr _localDataStoreMgr
    static System::LocalDataStoreMgr* _get__localDataStoreMgr();
    // Set static field: static private System.LocalDataStoreMgr _localDataStoreMgr
    static void _set__localDataStoreMgr(System::LocalDataStoreMgr* value);
    // Get static field: static private System.Runtime.Remoting.Contexts.DynamicPropertyCollection global_dynamic_properties
    static System::Runtime::Remoting::Contexts::DynamicPropertyCollection* _get_global_dynamic_properties();
    // Set static field: static private System.Runtime.Remoting.Contexts.DynamicPropertyCollection global_dynamic_properties
    static void _set_global_dynamic_properties(System::Runtime::Remoting::Contexts::DynamicPropertyCollection* value);
    // static private System.Void RegisterContext(System.Runtime.Remoting.Contexts.Context ctx)
    // Offset: 0x140FD8C
    static void RegisterContext(System::Runtime::Remoting::Contexts::Context* ctx);
    // static private System.Void ReleaseContext(System.Runtime.Remoting.Contexts.Context ctx)
    // Offset: 0x140FD90
    static void ReleaseContext(System::Runtime::Remoting::Contexts::Context* ctx);
    // static public System.Runtime.Remoting.Contexts.Context get_DefaultContext()
    // Offset: 0x140FED8
    static System::Runtime::Remoting::Contexts::Context* get_DefaultContext();
    // public System.Int32 get_ContextID()
    // Offset: 0x140FEE0
    int get_ContextID();
    // public System.Runtime.Remoting.Contexts.IContextProperty[] get_ContextProperties()
    // Offset: 0x140FEE8
    ::Array<System::Runtime::Remoting::Contexts::IContextProperty*>* get_ContextProperties();
    // System.Boolean get_IsDefaultContext()
    // Offset: 0x140FF58
    bool get_IsDefaultContext();
    // System.Boolean get_NeedsContextSink()
    // Offset: 0x140FF68
    bool get_NeedsContextSink();
    // static public System.Boolean RegisterDynamicProperty(System.Runtime.Remoting.Contexts.IDynamicProperty prop, System.ContextBoundObject obj, System.Runtime.Remoting.Contexts.Context ctx)
    // Offset: 0x1410034
    static bool RegisterDynamicProperty(System::Runtime::Remoting::Contexts::IDynamicProperty* prop, System::ContextBoundObject* obj, System::Runtime::Remoting::Contexts::Context* ctx);
    // static public System.Boolean UnregisterDynamicProperty(System.String name, System.ContextBoundObject obj, System.Runtime.Remoting.Contexts.Context ctx)
    // Offset: 0x14102B8
    static bool UnregisterDynamicProperty(::Il2CppString* name, System::ContextBoundObject* obj, System::Runtime::Remoting::Contexts::Context* ctx);
    // static private System.Runtime.Remoting.Contexts.DynamicPropertyCollection GetDynamicPropertyCollection(System.ContextBoundObject obj, System.Runtime.Remoting.Contexts.Context ctx)
    // Offset: 0x14100C0
    static System::Runtime::Remoting::Contexts::DynamicPropertyCollection* GetDynamicPropertyCollection(System::ContextBoundObject* obj, System::Runtime::Remoting::Contexts::Context* ctx);
    // static System.Void NotifyGlobalDynamicSinks(System.Boolean start, System.Runtime.Remoting.Messaging.IMessage req_msg, System.Boolean client_site, System.Boolean async)
    // Offset: 0x1410344
    static void NotifyGlobalDynamicSinks(bool start, System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async);
    // static System.Boolean get_HasGlobalDynamicSinks()
    // Offset: 0x1410458
    static bool get_HasGlobalDynamicSinks();
    // System.Void NotifyDynamicSinks(System.Boolean start, System.Runtime.Remoting.Messaging.IMessage req_msg, System.Boolean client_site, System.Boolean async)
    // Offset: 0x1410504
    void NotifyDynamicSinks(bool start, System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async);
    // System.Boolean get_HasDynamicSinks()
    // Offset: 0x1410588
    bool get_HasDynamicSinks();
    // System.Boolean get_HasExitSinks()
    // Offset: 0x1405218
    bool get_HasExitSinks();
    // public System.Runtime.Remoting.Contexts.IContextProperty GetProperty(System.String name)
    // Offset: 0x141059C
    System::Runtime::Remoting::Contexts::IContextProperty* GetProperty(::Il2CppString* name);
    // public System.Void SetProperty(System.Runtime.Remoting.Contexts.IContextProperty prop)
    // Offset: 0x1410720
    void SetProperty(System::Runtime::Remoting::Contexts::IContextProperty* prop);
    // public System.Void Freeze()
    // Offset: 0x1410854
    void Freeze();
    // System.Runtime.Remoting.Messaging.IMessageSink GetServerContextSinkChain()
    // Offset: 0x1406B3C
    System::Runtime::Remoting::Messaging::IMessageSink* GetServerContextSinkChain();
    // System.Runtime.Remoting.Messaging.IMessageSink GetClientContextSinkChain()
    // Offset: 0x14052DC
    System::Runtime::Remoting::Messaging::IMessageSink* GetClientContextSinkChain();
    // System.Runtime.Remoting.Messaging.IMessageSink CreateServerObjectSinkChain(System.MarshalByRefObject obj, System.Boolean forceInternalExecute)
    // Offset: 0x140C480
    System::Runtime::Remoting::Messaging::IMessageSink* CreateServerObjectSinkChain(System::MarshalByRefObject* obj, bool forceInternalExecute);
    // System.Runtime.Remoting.Messaging.IMessageSink CreateEnvoySink(System.MarshalByRefObject serverObject)
    // Offset: 0x1410A38
    System::Runtime::Remoting::Messaging::IMessageSink* CreateEnvoySink(System::MarshalByRefObject* serverObject);
    // static System.Runtime.Remoting.Contexts.Context SwitchToContext(System.Runtime.Remoting.Contexts.Context newContext)
    // Offset: 0x14077C8
    static System::Runtime::Remoting::Contexts::Context* SwitchToContext(System::Runtime::Remoting::Contexts::Context* newContext);
    // static System.Runtime.Remoting.Contexts.Context CreateNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage msg)
    // Offset: 0x1407014
    static System::Runtime::Remoting::Contexts::Context* CreateNewContext(System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);
    // public System.Void DoCallBack(System.Runtime.Remoting.Contexts.CrossContextDelegate deleg)
    // Offset: 0x1410BE8
    void DoCallBack(System::Runtime::Remoting::Contexts::CrossContextDelegate* deleg);
    // private System.LocalDataStore get_MyLocalStore()
    // Offset: 0x1410D24
    System::LocalDataStore* get_MyLocalStore();
    // static public System.LocalDataStoreSlot AllocateDataSlot()
    // Offset: 0x1410E80
    static System::LocalDataStoreSlot* AllocateDataSlot();
    // static public System.LocalDataStoreSlot AllocateNamedDataSlot(System.String name)
    // Offset: 0x1410EF4
    static System::LocalDataStoreSlot* AllocateNamedDataSlot(::Il2CppString* name);
    // static public System.Void FreeNamedDataSlot(System.String name)
    // Offset: 0x1410F70
    static void FreeNamedDataSlot(::Il2CppString* name);
    // static public System.LocalDataStoreSlot GetNamedDataSlot(System.String name)
    // Offset: 0x1410FEC
    static System::LocalDataStoreSlot* GetNamedDataSlot(::Il2CppString* name);
    // static public System.Object GetData(System.LocalDataStoreSlot slot)
    // Offset: 0x1411068
    static ::Il2CppObject* GetData(System::LocalDataStoreSlot* slot);
    // static public System.Void SetData(System.LocalDataStoreSlot slot, System.Object data)
    // Offset: 0x14110A4
    static void SetData(System::LocalDataStoreSlot* slot, ::Il2CppObject* data);
    // static private System.Void .cctor()
    // Offset: 0x14110E8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x140FD94
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Context* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Contexts::Context::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Context*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x140FE28
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.String ToString()
    // Offset: 0x14109B8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Runtime.Remoting.Contexts.Context
  #pragma pack(pop)
  static check_size<sizeof(Context), 80 + sizeof(System::Runtime::Remoting::Contexts::ContextCallbackObject*)> __System_Runtime_Remoting_Contexts_ContextSizeCheck;
  static_assert(sizeof(Context) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::Context*, "System.Runtime.Remoting.Contexts", "Context");
