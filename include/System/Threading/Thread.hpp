// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.InteropServices._Thread
#include "System/Runtime/InteropServices/_Thread.hpp"
// Including type: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "System/Runtime/ConstrainedExecution/CriticalFinalizerObject.hpp"
// Including type: System.Threading.ExecutionContext
#include "System/Threading/ExecutionContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: InternalThread
  class InternalThread;
  // Forward declaring type: AsyncLocal`1<T>
  template<typename T>
  class AsyncLocal_1;
  // Forward declaring type: ThreadStart
  class ThreadStart;
  // Forward declaring type: ParameterizedThreadStart
  class ParameterizedThreadStart;
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
  // Forward declaring type: ThreadState
  struct ThreadState;
}
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: IPrincipal
  class IPrincipal;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: MulticastDelegate
  class MulticastDelegate;
  // Forward declaring type: Delegate
  class Delegate;
  // Forward declaring type: LocalDataStoreMgr
  class LocalDataStoreMgr;
  // Forward declaring type: LocalDataStoreHolder
  class LocalDataStoreHolder;
  // Forward declaring type: AppDomain
  class AppDomain;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.Thread
  class Thread : public System::Runtime::InteropServices::_Thread, public System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
    public:
    // private System.Threading.InternalThread internal_thread
    // Offset: 0x10
    System::Threading::InternalThread* internal_thread;
    // private System.Object m_ThreadStartArg
    // Offset: 0x18
    ::Il2CppObject* m_ThreadStartArg;
    // private System.Object pending_exception
    // Offset: 0x20
    ::Il2CppObject* pending_exception;
    // private System.Security.Principal.IPrincipal principal
    // Offset: 0x28
    System::Security::Principal::IPrincipal* principal;
    // private System.Int32 principal_version
    // Offset: 0x30
    int principal_version;
    // private System.MulticastDelegate m_Delegate
    // Offset: 0x38
    System::MulticastDelegate* m_Delegate;
    // private System.Threading.ExecutionContext m_ExecutionContext
    // Offset: 0x40
    System::Threading::ExecutionContext* m_ExecutionContext;
    // private System.Boolean m_ExecutionContextBelongsToOuterScope
    // Offset: 0x48
    bool m_ExecutionContextBelongsToOuterScope;
    // Get static field: static private System.LocalDataStoreMgr s_LocalDataStoreMgr
    static System::LocalDataStoreMgr* _get_s_LocalDataStoreMgr();
    // Set static field: static private System.LocalDataStoreMgr s_LocalDataStoreMgr
    static void _set_s_LocalDataStoreMgr(System::LocalDataStoreMgr* value);
    // Get static field: static private System.LocalDataStoreHolder s_LocalDataStore
    static System::LocalDataStoreHolder* _get_s_LocalDataStore();
    // Set static field: static private System.LocalDataStoreHolder s_LocalDataStore
    static void _set_s_LocalDataStore(System::LocalDataStoreHolder* value);
    // Get static field: static System.Globalization.CultureInfo m_CurrentCulture
    static System::Globalization::CultureInfo* _get_m_CurrentCulture();
    // Set static field: static System.Globalization.CultureInfo m_CurrentCulture
    static void _set_m_CurrentCulture(System::Globalization::CultureInfo* value);
    // Get static field: static System.Globalization.CultureInfo m_CurrentUICulture
    static System::Globalization::CultureInfo* _get_m_CurrentUICulture();
    // Set static field: static System.Globalization.CultureInfo m_CurrentUICulture
    static void _set_m_CurrentUICulture(System::Globalization::CultureInfo* value);
    // Get static field: static private System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> s_asyncLocalCurrentCulture
    static System::Threading::AsyncLocal_1<System::Globalization::CultureInfo*>* _get_s_asyncLocalCurrentCulture();
    // Set static field: static private System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> s_asyncLocalCurrentCulture
    static void _set_s_asyncLocalCurrentCulture(System::Threading::AsyncLocal_1<System::Globalization::CultureInfo*>* value);
    // Get static field: static private System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> s_asyncLocalCurrentUICulture
    static System::Threading::AsyncLocal_1<System::Globalization::CultureInfo*>* _get_s_asyncLocalCurrentUICulture();
    // Set static field: static private System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> s_asyncLocalCurrentUICulture
    static void _set_s_asyncLocalCurrentUICulture(System::Threading::AsyncLocal_1<System::Globalization::CultureInfo*>* value);
    // Get static field: static private System.Threading.Thread current_thread
    static System::Threading::Thread* _get_current_thread();
    // Set static field: static private System.Threading.Thread current_thread
    static void _set_current_thread(System::Threading::Thread* value);
    // public System.Void .ctor(System.Threading.ThreadStart start)
    // Offset: 0xC45A10
    static Thread* New_ctor(System::Threading::ThreadStart* start);
    // public System.Void .ctor(System.Threading.ParameterizedThreadStart start)
    // Offset: 0xC4558C
    static Thread* New_ctor(System::Threading::ParameterizedThreadStart* start);
    // public System.Void Start()
    // Offset: 0xC45BC4
    void Start();
    // public System.Void Start(System.Object parameter)
    // Offset: 0xC4567C
    void Start(::Il2CppObject* parameter);
    // private System.Void Start(System.Threading.StackCrawlMark stackMark)
    // Offset: 0xC45BEC
    void Start(System::Threading::StackCrawlMark& stackMark);
    // System.Threading.ExecutionContext/Reader GetExecutionContextReader()
    // Offset: 0xC3A66C
    System::Threading::ExecutionContext::Reader GetExecutionContextReader();
    // System.Boolean get_ExecutionContextBelongsToCurrentScope()
    // Offset: 0xC45D74
    bool get_ExecutionContextBelongsToCurrentScope();
    // System.Void set_ExecutionContextBelongsToCurrentScope(System.Boolean value)
    // Offset: 0xC45D84
    void set_ExecutionContextBelongsToCurrentScope(bool value);
    // System.Threading.ExecutionContext GetMutableExecutionContext()
    // Offset: 0xC3A568
    System::Threading::ExecutionContext* GetMutableExecutionContext();
    // System.Void SetExecutionContext(System.Threading.ExecutionContext value, System.Boolean belongsToCurrentScope)
    // Offset: 0xC45D94
    void SetExecutionContext(System::Threading::ExecutionContext* value, bool belongsToCurrentScope);
    // System.Void SetExecutionContext(System.Threading.ExecutionContext/Reader value, System.Boolean belongsToCurrentScope)
    // Offset: 0xC45DCC
    void SetExecutionContext(System::Threading::ExecutionContext::Reader value, bool belongsToCurrentScope);
    // static public System.Void ResetAbort()
    // Offset: 0xC45E04
    static void ResetAbort();
    // private System.Void ResetAbortNative()
    // Offset: 0xC45EDC
    void ResetAbortNative();
    // static private System.Void SleepInternal(System.Int32 millisecondsTimeout)
    // Offset: 0xC45EE4
    static void SleepInternal(int millisecondsTimeout);
    // static public System.Void Sleep(System.Int32 millisecondsTimeout)
    // Offset: 0xC3A074
    static void Sleep(int millisecondsTimeout);
    // static private System.Boolean YieldInternal()
    // Offset: 0xC45EE8
    static bool YieldInternal();
    // static public System.Boolean Yield()
    // Offset: 0xC3A11C
    static bool Yield();
    // private System.Void SetStartHelper(System.Delegate start, System.Int32 maxStackSize)
    // Offset: 0xC45AB4
    void SetStartHelper(System::Delegate* start, int maxStackSize);
    // public System.Globalization.CultureInfo get_CurrentUICulture()
    // Offset: 0xC46048
    System::Globalization::CultureInfo* get_CurrentUICulture();
    // System.Globalization.CultureInfo GetCurrentUICultureNoAppX()
    // Offset: 0xC4604C
    System::Globalization::CultureInfo* GetCurrentUICultureNoAppX();
    // public System.Globalization.CultureInfo get_CurrentCulture()
    // Offset: 0xC46104
    System::Globalization::CultureInfo* get_CurrentCulture();
    // private System.Globalization.CultureInfo GetCurrentCultureNoAppX()
    // Offset: 0xC46108
    System::Globalization::CultureInfo* GetCurrentCultureNoAppX();
    // static public System.Void MemoryBarrier()
    // Offset: 0xC461C0
    static void MemoryBarrier();
    // private System.Void ConstructInternalThread()
    // Offset: 0xC461C4
    void ConstructInternalThread();
    // private System.Threading.InternalThread get_Internal()
    // Offset: 0xC461C8
    System::Threading::InternalThread* get_Internal();
    // static public System.Runtime.Remoting.Contexts.Context get_CurrentContext()
    // Offset: 0xC461F8
    static System::Runtime::Remoting::Contexts::Context* get_CurrentContext();
    // static private System.Byte[] ByteArrayToCurrentDomain(System.Byte[] arr)
    // Offset: 0xC46200
    static ::Array<uint8_t>* ByteArrayToCurrentDomain(::Array<uint8_t>* arr);
    // static private System.Void DeserializePrincipal(System.Threading.Thread th)
    // Offset: 0xC46204
    static void DeserializePrincipal(System::Threading::Thread* th);
    // static public System.Security.Principal.IPrincipal get_CurrentPrincipal()
    // Offset: 0xC46588
    static System::Security::Principal::IPrincipal* get_CurrentPrincipal();
    // static private System.Threading.Thread GetCurrentThread()
    // Offset: 0xC46708
    static System::Threading::Thread* GetCurrentThread();
    // static public System.Threading.Thread get_CurrentThread()
    // Offset: 0xC3A120
    static System::Threading::Thread* get_CurrentThread();
    // static System.Int32 get_CurrentThreadId()
    // Offset: 0xC4670C
    static int get_CurrentThreadId();
    // static public System.AppDomain GetDomain()
    // Offset: 0xC46700
    static System::AppDomain* GetDomain();
    // static public System.Int32 GetDomainID()
    // Offset: 0xC46734
    static int GetDomainID();
    // private System.IntPtr Thread_internal(System.MulticastDelegate start)
    // Offset: 0xC46738
    System::IntPtr Thread_internal(System::MulticastDelegate* start);
    // public System.Boolean get_IsThreadPoolThread()
    // Offset: 0xC451B0
    bool get_IsThreadPoolThread();
    // System.Boolean get_IsThreadPoolThreadInternal()
    // Offset: 0xC46744
    bool get_IsThreadPoolThreadInternal();
    // public System.Void set_IsBackground(System.Boolean value)
    // Offset: 0xC45630
    void set_IsBackground(bool value);
    // static private System.Void SetName_internal(System.Threading.InternalThread thread, System.String name)
    // Offset: 0xC46818
    static void SetName_internal(System::Threading::InternalThread* thread, ::Il2CppString* name);
    // public System.Void set_Name(System.String value)
    // Offset: 0xC4681C
    void set_Name(::Il2CppString* value);
    // public System.Threading.ThreadState get_ThreadState()
    // Offset: 0xC419C4
    System::Threading::ThreadState get_ThreadState();
    // private System.Void ClearAbortReason()
    // Offset: 0xC45EE0
    void ClearAbortReason();
    // static private System.Void SpinWait_nop()
    // Offset: 0xC46858
    static void SpinWait_nop();
    // static public System.Void SpinWait(System.Int32 iterations)
    // Offset: 0xC3A040
    static void SpinWait(int iterations);
    // private System.Void StartInternal(System.Security.Principal.IPrincipal principal, System.Threading.StackCrawlMark stackMark)
    // Offset: 0xC45CD0
    void StartInternal(System::Security::Principal::IPrincipal* principal, System::Threading::StackCrawlMark& stackMark);
    // static private System.Void SetState(System.Threading.InternalThread thread, System.Threading.ThreadState set)
    // Offset: 0xC46810
    static void SetState(System::Threading::InternalThread* thread, System::Threading::ThreadState set);
    // static private System.Void ClrState(System.Threading.InternalThread thread, System.Threading.ThreadState clr)
    // Offset: 0xC46814
    static void ClrState(System::Threading::InternalThread* thread, System::Threading::ThreadState clr);
    // static private System.Threading.ThreadState GetState(System.Threading.InternalThread thread)
    // Offset: 0xC46854
    static System::Threading::ThreadState GetState(System::Threading::InternalThread* thread);
    // static private System.Int32 SystemMaxStackStize()
    // Offset: 0xC4685C
    static int SystemMaxStackStize();
    // static private System.Int32 GetProcessDefaultStackSize(System.Int32 maxStackSize)
    // Offset: 0xC45EEC
    static int GetProcessDefaultStackSize(int maxStackSize);
    // private System.Void SetStart(System.MulticastDelegate start, System.Int32 maxStackSize)
    // Offset: 0xC45FF0
    void SetStart(System::MulticastDelegate* start, int maxStackSize);
    // public System.Int32 get_ManagedThreadId()
    // Offset: 0xC3A178
    int get_ManagedThreadId();
    // static public System.Void BeginCriticalRegion()
    // Offset: 0xC398A0
    static void BeginCriticalRegion();
    // static public System.Void EndCriticalRegion()
    // Offset: 0xC39E00
    static void EndCriticalRegion();
    // private System.Threading.ThreadState ValidateThreadState()
    // Offset: 0xC4677C
    System::Threading::ThreadState ValidateThreadState();
    // protected override System.Void Finalize()
    // Offset: 0xC4673C
    // Implemented from: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
    // Base method: System.Void CriticalFinalizerObject::Finalize()
    void Finalize();
    // public override System.Int32 GetHashCode()
    // Offset: 0xC46860
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Threading.Thread
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Thread*, "System.Threading", "Thread");
#pragma pack(pop)
