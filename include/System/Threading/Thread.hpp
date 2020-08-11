// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "System/Runtime/ConstrainedExecution/CriticalFinalizerObject.hpp"
// Including type: System.Runtime.InteropServices._Thread
#include "System/Runtime/InteropServices/_Thread.hpp"
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
  class Thread : public System::Runtime::ConstrainedExecution::CriticalFinalizerObject, public System::Runtime::InteropServices::_Thread {
    public:
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
    // private System.Threading.InternalThread internal_thread
    // Offset: 0x10
    System::Threading::InternalThread* internal_thread;
    // private System.Object m_ThreadStartArg
    // Offset: 0x18
    ::CsObject* m_ThreadStartArg;
    // private System.Object pending_exception
    // Offset: 0x20
    ::CsObject* pending_exception;
    // private System.Security.Principal.IPrincipal principal
    // Offset: 0x28
    System::Security::Principal::IPrincipal* principal;
    // private System.Int32 principal_version
    // Offset: 0x30
    int principal_version;
    // Get static field: static private System.Threading.Thread current_thread
    static System::Threading::Thread* _get_current_thread();
    // Set static field: static private System.Threading.Thread current_thread
    static void _set_current_thread(System::Threading::Thread* value);
    // private System.MulticastDelegate m_Delegate
    // Offset: 0x38
    System::MulticastDelegate* m_Delegate;
    // private System.Threading.ExecutionContext m_ExecutionContext
    // Offset: 0x40
    System::Threading::ExecutionContext* m_ExecutionContext;
    // private System.Boolean m_ExecutionContextBelongsToOuterScope
    // Offset: 0x48
    bool m_ExecutionContextBelongsToOuterScope;
    // public System.Void .ctor(System.Threading.ThreadStart start)
    // Offset: 0xCD2D08
    static Thread* New_ctor(System::Threading::ThreadStart* start);
    // public System.Void .ctor(System.Threading.ParameterizedThreadStart start)
    // Offset: 0xCD2884
    static Thread* New_ctor(System::Threading::ParameterizedThreadStart* start);
    // public System.Void Start()
    // Offset: 0xCD2EBC
    void Start();
    // public System.Void Start(System.Object parameter)
    // Offset: 0xCD2974
    void Start(::CsObject* parameter);
    // private System.Void Start(System.Threading.StackCrawlMark stackMark)
    // Offset: 0xCD2EE4
    void Start(System::Threading::StackCrawlMark& stackMark);
    // System.Threading.ExecutionContext/Reader GetExecutionContextReader()
    // Offset: 0xCC7964
    System::Threading::ExecutionContext::Reader GetExecutionContextReader();
    // System.Boolean get_ExecutionContextBelongsToCurrentScope()
    // Offset: 0xCD306C
    bool get_ExecutionContextBelongsToCurrentScope();
    // System.Void set_ExecutionContextBelongsToCurrentScope(System.Boolean value)
    // Offset: 0xCD307C
    void set_ExecutionContextBelongsToCurrentScope(bool value);
    // System.Threading.ExecutionContext GetMutableExecutionContext()
    // Offset: 0xCC7860
    System::Threading::ExecutionContext* GetMutableExecutionContext();
    // System.Void SetExecutionContext(System.Threading.ExecutionContext value, System.Boolean belongsToCurrentScope)
    // Offset: 0xCD308C
    void SetExecutionContext(System::Threading::ExecutionContext* value, bool belongsToCurrentScope);
    // System.Void SetExecutionContext(System.Threading.ExecutionContext/Reader value, System.Boolean belongsToCurrentScope)
    // Offset: 0xCD30C4
    void SetExecutionContext(System::Threading::ExecutionContext::Reader value, bool belongsToCurrentScope);
    // static public System.Void ResetAbort()
    // Offset: 0xCD30FC
    static void ResetAbort();
    // private System.Void ResetAbortNative()
    // Offset: 0xCD31D4
    void ResetAbortNative();
    // static private System.Void SleepInternal(System.Int32 millisecondsTimeout)
    // Offset: 0xCD31DC
    static void SleepInternal(int millisecondsTimeout);
    // static public System.Void Sleep(System.Int32 millisecondsTimeout)
    // Offset: 0xCC736C
    static void Sleep(int millisecondsTimeout);
    // static private System.Boolean YieldInternal()
    // Offset: 0xCD31E0
    static bool YieldInternal();
    // static public System.Boolean Yield()
    // Offset: 0xCC7414
    static bool Yield();
    // private System.Void SetStartHelper(System.Delegate start, System.Int32 maxStackSize)
    // Offset: 0xCD2DAC
    void SetStartHelper(System::Delegate* start, int maxStackSize);
    // public System.Globalization.CultureInfo get_CurrentUICulture()
    // Offset: 0xCD3340
    System::Globalization::CultureInfo* get_CurrentUICulture();
    // System.Globalization.CultureInfo GetCurrentUICultureNoAppX()
    // Offset: 0xCD3344
    System::Globalization::CultureInfo* GetCurrentUICultureNoAppX();
    // public System.Globalization.CultureInfo get_CurrentCulture()
    // Offset: 0xCD33FC
    System::Globalization::CultureInfo* get_CurrentCulture();
    // private System.Globalization.CultureInfo GetCurrentCultureNoAppX()
    // Offset: 0xCD3400
    System::Globalization::CultureInfo* GetCurrentCultureNoAppX();
    // static public System.Void MemoryBarrier()
    // Offset: 0xCD34B8
    static void MemoryBarrier();
    // private System.Void ConstructInternalThread()
    // Offset: 0xCD34BC
    void ConstructInternalThread();
    // private System.Threading.InternalThread get_Internal()
    // Offset: 0xCD34C0
    System::Threading::InternalThread* get_Internal();
    // static public System.Runtime.Remoting.Contexts.Context get_CurrentContext()
    // Offset: 0xCD34F0
    static System::Runtime::Remoting::Contexts::Context* get_CurrentContext();
    // static private System.Byte[] ByteArrayToCurrentDomain(System.Byte[] arr)
    // Offset: 0xCD34F8
    static ::Array<uint8_t>* ByteArrayToCurrentDomain(::Array<uint8_t>* arr);
    // static private System.Void DeserializePrincipal(System.Threading.Thread th)
    // Offset: 0xCD34FC
    static void DeserializePrincipal(System::Threading::Thread* th);
    // static public System.Security.Principal.IPrincipal get_CurrentPrincipal()
    // Offset: 0xCD3880
    static System::Security::Principal::IPrincipal* get_CurrentPrincipal();
    // static private System.Threading.Thread GetCurrentThread()
    // Offset: 0xCD3A00
    static System::Threading::Thread* GetCurrentThread();
    // static public System.Threading.Thread get_CurrentThread()
    // Offset: 0xCC7418
    static System::Threading::Thread* get_CurrentThread();
    // static System.Int32 get_CurrentThreadId()
    // Offset: 0xCD3A04
    static int get_CurrentThreadId();
    // static public System.AppDomain GetDomain()
    // Offset: 0xCD39F8
    static System::AppDomain* GetDomain();
    // static public System.Int32 GetDomainID()
    // Offset: 0xCD3A2C
    static int GetDomainID();
    // private System.IntPtr Thread_internal(System.MulticastDelegate start)
    // Offset: 0xCD3A30
    System::IntPtr Thread_internal(System::MulticastDelegate* start);
    // public System.Boolean get_IsThreadPoolThread()
    // Offset: 0xCD24A8
    bool get_IsThreadPoolThread();
    // System.Boolean get_IsThreadPoolThreadInternal()
    // Offset: 0xCD3A3C
    bool get_IsThreadPoolThreadInternal();
    // public System.Void set_IsBackground(System.Boolean value)
    // Offset: 0xCD2928
    void set_IsBackground(bool value);
    // static private System.Void SetName_internal(System.Threading.InternalThread thread, System.String name)
    // Offset: 0xCD3B10
    static void SetName_internal(System::Threading::InternalThread* thread, ::CsString* name);
    // public System.Void set_Name(System.String value)
    // Offset: 0xCD3B14
    void set_Name(::CsString* value);
    // public System.Threading.ThreadState get_ThreadState()
    // Offset: 0xCCECBC
    System::Threading::ThreadState get_ThreadState();
    // private System.Void ClearAbortReason()
    // Offset: 0xCD31D8
    void ClearAbortReason();
    // static private System.Void SpinWait_nop()
    // Offset: 0xCD3B50
    static void SpinWait_nop();
    // static public System.Void SpinWait(System.Int32 iterations)
    // Offset: 0xCC7338
    static void SpinWait(int iterations);
    // private System.Void StartInternal(System.Security.Principal.IPrincipal principal, System.Threading.StackCrawlMark stackMark)
    // Offset: 0xCD2FC8
    void StartInternal(System::Security::Principal::IPrincipal* principal, System::Threading::StackCrawlMark& stackMark);
    // static private System.Void SetState(System.Threading.InternalThread thread, System.Threading.ThreadState set)
    // Offset: 0xCD3B08
    static void SetState(System::Threading::InternalThread* thread, System::Threading::ThreadState set);
    // static private System.Void ClrState(System.Threading.InternalThread thread, System.Threading.ThreadState clr)
    // Offset: 0xCD3B0C
    static void ClrState(System::Threading::InternalThread* thread, System::Threading::ThreadState clr);
    // static private System.Threading.ThreadState GetState(System.Threading.InternalThread thread)
    // Offset: 0xCD3B4C
    static System::Threading::ThreadState GetState(System::Threading::InternalThread* thread);
    // static private System.Int32 SystemMaxStackStize()
    // Offset: 0xCD3B54
    static int SystemMaxStackStize();
    // static private System.Int32 GetProcessDefaultStackSize(System.Int32 maxStackSize)
    // Offset: 0xCD31E4
    static int GetProcessDefaultStackSize(int maxStackSize);
    // private System.Void SetStart(System.MulticastDelegate start, System.Int32 maxStackSize)
    // Offset: 0xCD32E8
    void SetStart(System::MulticastDelegate* start, int maxStackSize);
    // public System.Int32 get_ManagedThreadId()
    // Offset: 0xCC7470
    int get_ManagedThreadId();
    // static public System.Void BeginCriticalRegion()
    // Offset: 0xCC6B98
    static void BeginCriticalRegion();
    // static public System.Void EndCriticalRegion()
    // Offset: 0xCC70F8
    static void EndCriticalRegion();
    // private System.Threading.ThreadState ValidateThreadState()
    // Offset: 0xCD3A74
    System::Threading::ThreadState ValidateThreadState();
    // protected override System.Void Finalize()
    // Offset: 0xCD3A34
    // Implemented from: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
    // Base method: System.Void CriticalFinalizerObject::Finalize()
    void Finalize();
    // public override System.Int32 GetHashCode()
    // Offset: 0xCD3B58
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Threading.Thread
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Thread*, "System.Threading", "Thread");
#pragma pack(pop)
