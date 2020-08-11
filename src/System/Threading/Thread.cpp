// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Thread
#include "System/Threading/Thread.hpp"
// Including type: System.Threading.InternalThread
#include "System/Threading/InternalThread.hpp"
// Including type: System.Security.Principal.IPrincipal
#include "System/Security/Principal/IPrincipal.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: System.Delegate
#include "System/Delegate.hpp"
// Including type: System.LocalDataStoreMgr
#include "System/LocalDataStoreMgr.hpp"
// Including type: System.LocalDataStoreHolder
#include "System/LocalDataStoreHolder.hpp"
// Including type: System.Globalization.CultureInfo
#include "System/Globalization/CultureInfo.hpp"
// Including type: System.Threading.AsyncLocal`1
#include "System/Threading/AsyncLocal_1.hpp"
// Including type: System.Threading.ThreadStart
#include "System/Threading/ThreadStart.hpp"
// Including type: System.Threading.ParameterizedThreadStart
#include "System/Threading/ParameterizedThreadStart.hpp"
// Including type: System.Threading.StackCrawlMark
#include "System/Threading/StackCrawlMark.hpp"
// Including type: System.Runtime.Remoting.Contexts.Context
#include "System/Runtime/Remoting/Contexts/Context.hpp"
// Including type: System.AppDomain
#include "System/AppDomain.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Threading.ThreadState
#include "System/Threading/ThreadState.hpp"
// Including type: System.Threading.ExecutionContext/Reader
#include "System/Threading/ExecutionContext_Reader.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.LocalDataStoreMgr s_LocalDataStoreMgr
System::LocalDataStoreMgr* System::Threading::Thread::_get_s_LocalDataStoreMgr() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::LocalDataStoreMgr*>("System.Threading", "Thread", "s_LocalDataStoreMgr"));
}
// Autogenerated static field setter
// Set static field: static private System.LocalDataStoreMgr s_LocalDataStoreMgr
void System::Threading::Thread::_set_s_LocalDataStoreMgr(System::LocalDataStoreMgr* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "Thread", "s_LocalDataStoreMgr", value));
}
// Autogenerated static field getter
// Get static field: static private System.LocalDataStoreHolder s_LocalDataStore
System::LocalDataStoreHolder* System::Threading::Thread::_get_s_LocalDataStore() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::LocalDataStoreHolder*>("System.Threading", "Thread", "s_LocalDataStore"));
}
// Autogenerated static field setter
// Set static field: static private System.LocalDataStoreHolder s_LocalDataStore
void System::Threading::Thread::_set_s_LocalDataStore(System::LocalDataStoreHolder* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "Thread", "s_LocalDataStore", value));
}
// Autogenerated static field getter
// Get static field: static System.Globalization.CultureInfo m_CurrentCulture
System::Globalization::CultureInfo* System::Threading::Thread::_get_m_CurrentCulture() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Globalization::CultureInfo*>("System.Threading", "Thread", "m_CurrentCulture"));
}
// Autogenerated static field setter
// Set static field: static System.Globalization.CultureInfo m_CurrentCulture
void System::Threading::Thread::_set_m_CurrentCulture(System::Globalization::CultureInfo* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "Thread", "m_CurrentCulture", value));
}
// Autogenerated static field getter
// Get static field: static System.Globalization.CultureInfo m_CurrentUICulture
System::Globalization::CultureInfo* System::Threading::Thread::_get_m_CurrentUICulture() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Globalization::CultureInfo*>("System.Threading", "Thread", "m_CurrentUICulture"));
}
// Autogenerated static field setter
// Set static field: static System.Globalization.CultureInfo m_CurrentUICulture
void System::Threading::Thread::_set_m_CurrentUICulture(System::Globalization::CultureInfo* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "Thread", "m_CurrentUICulture", value));
}
// Autogenerated static field getter
// Get static field: static private System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> s_asyncLocalCurrentCulture
System::Threading::AsyncLocal_1<System::Globalization::CultureInfo*>* System::Threading::Thread::_get_s_asyncLocalCurrentCulture() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::AsyncLocal_1<System::Globalization::CultureInfo*>*>("System.Threading", "Thread", "s_asyncLocalCurrentCulture"));
}
// Autogenerated static field setter
// Set static field: static private System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> s_asyncLocalCurrentCulture
void System::Threading::Thread::_set_s_asyncLocalCurrentCulture(System::Threading::AsyncLocal_1<System::Globalization::CultureInfo*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "Thread", "s_asyncLocalCurrentCulture", value));
}
// Autogenerated static field getter
// Get static field: static private System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> s_asyncLocalCurrentUICulture
System::Threading::AsyncLocal_1<System::Globalization::CultureInfo*>* System::Threading::Thread::_get_s_asyncLocalCurrentUICulture() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::AsyncLocal_1<System::Globalization::CultureInfo*>*>("System.Threading", "Thread", "s_asyncLocalCurrentUICulture"));
}
// Autogenerated static field setter
// Set static field: static private System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> s_asyncLocalCurrentUICulture
void System::Threading::Thread::_set_s_asyncLocalCurrentUICulture(System::Threading::AsyncLocal_1<System::Globalization::CultureInfo*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "Thread", "s_asyncLocalCurrentUICulture", value));
}
// Autogenerated static field getter
// Get static field: static private System.Threading.Thread current_thread
System::Threading::Thread* System::Threading::Thread::_get_current_thread() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::Thread*>("System.Threading", "Thread", "current_thread"));
}
// Autogenerated static field setter
// Set static field: static private System.Threading.Thread current_thread
void System::Threading::Thread::_set_current_thread(System::Threading::Thread* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "Thread", "current_thread", value));
}
// Autogenerated method: System.Threading.Thread..ctor
System::Threading::Thread* System::Threading::Thread::New_ctor(System::Threading::ThreadStart* start) {
  return (Thread*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "Thread", start));
}
// Autogenerated method: System.Threading.Thread..ctor
System::Threading::Thread* System::Threading::Thread::New_ctor(System::Threading::ParameterizedThreadStart* start) {
  return (Thread*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "Thread", start));
}
// Autogenerated method: System.Threading.Thread.Start
void System::Threading::Thread::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: System.Threading.Thread.Start
void System::Threading::Thread::Start(::CsObject* parameter) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start", parameter));
}
// Autogenerated method: System.Threading.Thread.Start
void System::Threading::Thread::Start(System::Threading::StackCrawlMark& stackMark) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start", stackMark));
}
// Autogenerated method: System.Threading.Thread.GetExecutionContextReader
System::Threading::ExecutionContext::Reader System::Threading::Thread::GetExecutionContextReader() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::ExecutionContext::Reader>(this, "GetExecutionContextReader"));
}
// Autogenerated method: System.Threading.Thread.get_ExecutionContextBelongsToCurrentScope
bool System::Threading::Thread::get_ExecutionContextBelongsToCurrentScope() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_ExecutionContextBelongsToCurrentScope"));
}
// Autogenerated method: System.Threading.Thread.set_ExecutionContextBelongsToCurrentScope
void System::Threading::Thread::set_ExecutionContextBelongsToCurrentScope(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_ExecutionContextBelongsToCurrentScope", value));
}
// Autogenerated method: System.Threading.Thread.GetMutableExecutionContext
System::Threading::ExecutionContext* System::Threading::Thread::GetMutableExecutionContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::ExecutionContext*>(this, "GetMutableExecutionContext"));
}
// Autogenerated method: System.Threading.Thread.SetExecutionContext
void System::Threading::Thread::SetExecutionContext(System::Threading::ExecutionContext* value, bool belongsToCurrentScope) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetExecutionContext", value, belongsToCurrentScope));
}
// Autogenerated method: System.Threading.Thread.SetExecutionContext
void System::Threading::Thread::SetExecutionContext(System::Threading::ExecutionContext::Reader value, bool belongsToCurrentScope) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetExecutionContext", value, belongsToCurrentScope));
}
// Autogenerated method: System.Threading.Thread.ResetAbort
void System::Threading::Thread::ResetAbort() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Thread", "ResetAbort"));
}
// Autogenerated method: System.Threading.Thread.ResetAbortNative
void System::Threading::Thread::ResetAbortNative() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ResetAbortNative"));
}
// Autogenerated method: System.Threading.Thread.SleepInternal
void System::Threading::Thread::SleepInternal(int millisecondsTimeout) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Thread", "SleepInternal", millisecondsTimeout));
}
// Autogenerated method: System.Threading.Thread.Sleep
void System::Threading::Thread::Sleep(int millisecondsTimeout) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Thread", "Sleep", millisecondsTimeout));
}
// Autogenerated method: System.Threading.Thread.YieldInternal
bool System::Threading::Thread::YieldInternal() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Threading", "Thread", "YieldInternal"));
}
// Autogenerated method: System.Threading.Thread.Yield
bool System::Threading::Thread::Yield() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Threading", "Thread", "Yield"));
}
// Autogenerated method: System.Threading.Thread.SetStartHelper
void System::Threading::Thread::SetStartHelper(System::Delegate* start, int maxStackSize) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetStartHelper", start, maxStackSize));
}
// Autogenerated method: System.Threading.Thread.get_CurrentUICulture
System::Globalization::CultureInfo* System::Threading::Thread::get_CurrentUICulture() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::CultureInfo*>(this, "get_CurrentUICulture"));
}
// Autogenerated method: System.Threading.Thread.GetCurrentUICultureNoAppX
System::Globalization::CultureInfo* System::Threading::Thread::GetCurrentUICultureNoAppX() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::CultureInfo*>(this, "GetCurrentUICultureNoAppX"));
}
// Autogenerated method: System.Threading.Thread.get_CurrentCulture
System::Globalization::CultureInfo* System::Threading::Thread::get_CurrentCulture() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::CultureInfo*>(this, "get_CurrentCulture"));
}
// Autogenerated method: System.Threading.Thread.GetCurrentCultureNoAppX
System::Globalization::CultureInfo* System::Threading::Thread::GetCurrentCultureNoAppX() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::CultureInfo*>(this, "GetCurrentCultureNoAppX"));
}
// Autogenerated method: System.Threading.Thread.MemoryBarrier
void System::Threading::Thread::MemoryBarrier() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Thread", "MemoryBarrier"));
}
// Autogenerated method: System.Threading.Thread.ConstructInternalThread
void System::Threading::Thread::ConstructInternalThread() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ConstructInternalThread"));
}
// Autogenerated method: System.Threading.Thread.get_Internal
System::Threading::InternalThread* System::Threading::Thread::get_Internal() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::InternalThread*>(this, "get_Internal"));
}
// Autogenerated method: System.Threading.Thread.get_CurrentContext
System::Runtime::Remoting::Contexts::Context* System::Threading::Thread::get_CurrentContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Contexts::Context*>("System.Threading", "Thread", "get_CurrentContext"));
}
// Autogenerated method: System.Threading.Thread.ByteArrayToCurrentDomain
::Array<uint8_t>* System::Threading::Thread::ByteArrayToCurrentDomain(::Array<uint8_t>* arr) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("System.Threading", "Thread", "ByteArrayToCurrentDomain", arr));
}
// Autogenerated method: System.Threading.Thread.DeserializePrincipal
void System::Threading::Thread::DeserializePrincipal(System::Threading::Thread* th) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Thread", "DeserializePrincipal", th));
}
// Autogenerated method: System.Threading.Thread.get_CurrentPrincipal
System::Security::Principal::IPrincipal* System::Threading::Thread::get_CurrentPrincipal() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Principal::IPrincipal*>("System.Threading", "Thread", "get_CurrentPrincipal"));
}
// Autogenerated method: System.Threading.Thread.GetCurrentThread
System::Threading::Thread* System::Threading::Thread::GetCurrentThread() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Thread*>("System.Threading", "Thread", "GetCurrentThread"));
}
// Autogenerated method: System.Threading.Thread.get_CurrentThread
System::Threading::Thread* System::Threading::Thread::get_CurrentThread() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Thread*>("System.Threading", "Thread", "get_CurrentThread"));
}
// Autogenerated method: System.Threading.Thread.get_CurrentThreadId
int System::Threading::Thread::get_CurrentThreadId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Threading", "Thread", "get_CurrentThreadId"));
}
// Autogenerated method: System.Threading.Thread.GetDomain
System::AppDomain* System::Threading::Thread::GetDomain() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::AppDomain*>("System.Threading", "Thread", "GetDomain"));
}
// Autogenerated method: System.Threading.Thread.GetDomainID
int System::Threading::Thread::GetDomainID() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Threading", "Thread", "GetDomainID"));
}
// Autogenerated method: System.Threading.Thread.Thread_internal
System::IntPtr System::Threading::Thread::Thread_internal(System::MulticastDelegate* start) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "Thread_internal", start));
}
// Autogenerated method: System.Threading.Thread.get_IsThreadPoolThread
bool System::Threading::Thread::get_IsThreadPoolThread() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsThreadPoolThread"));
}
// Autogenerated method: System.Threading.Thread.get_IsThreadPoolThreadInternal
bool System::Threading::Thread::get_IsThreadPoolThreadInternal() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsThreadPoolThreadInternal"));
}
// Autogenerated method: System.Threading.Thread.set_IsBackground
void System::Threading::Thread::set_IsBackground(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_IsBackground", value));
}
// Autogenerated method: System.Threading.Thread.SetName_internal
void System::Threading::Thread::SetName_internal(System::Threading::InternalThread* thread, ::CsString* name) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Thread", "SetName_internal", thread, name));
}
// Autogenerated method: System.Threading.Thread.set_Name
void System::Threading::Thread::set_Name(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Name", value));
}
// Autogenerated method: System.Threading.Thread.get_ThreadState
System::Threading::ThreadState System::Threading::Thread::get_ThreadState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::ThreadState>(this, "get_ThreadState"));
}
// Autogenerated method: System.Threading.Thread.ClearAbortReason
void System::Threading::Thread::ClearAbortReason() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClearAbortReason"));
}
// Autogenerated method: System.Threading.Thread.SpinWait_nop
void System::Threading::Thread::SpinWait_nop() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Thread", "SpinWait_nop"));
}
// Autogenerated method: System.Threading.Thread.SpinWait
void System::Threading::Thread::SpinWait(int iterations) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Thread", "SpinWait", iterations));
}
// Autogenerated method: System.Threading.Thread.StartInternal
void System::Threading::Thread::StartInternal(System::Security::Principal::IPrincipal* principal, System::Threading::StackCrawlMark& stackMark) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartInternal", principal, stackMark));
}
// Autogenerated method: System.Threading.Thread.SetState
void System::Threading::Thread::SetState(System::Threading::InternalThread* thread, System::Threading::ThreadState set) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Thread", "SetState", thread, set));
}
// Autogenerated method: System.Threading.Thread.ClrState
void System::Threading::Thread::ClrState(System::Threading::InternalThread* thread, System::Threading::ThreadState clr) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Thread", "ClrState", thread, clr));
}
// Autogenerated method: System.Threading.Thread.GetState
System::Threading::ThreadState System::Threading::Thread::GetState(System::Threading::InternalThread* thread) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::ThreadState>("System.Threading", "Thread", "GetState", thread));
}
// Autogenerated method: System.Threading.Thread.SystemMaxStackStize
int System::Threading::Thread::SystemMaxStackStize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Threading", "Thread", "SystemMaxStackStize"));
}
// Autogenerated method: System.Threading.Thread.GetProcessDefaultStackSize
int System::Threading::Thread::GetProcessDefaultStackSize(int maxStackSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Threading", "Thread", "GetProcessDefaultStackSize", maxStackSize));
}
// Autogenerated method: System.Threading.Thread.SetStart
void System::Threading::Thread::SetStart(System::MulticastDelegate* start, int maxStackSize) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetStart", start, maxStackSize));
}
// Autogenerated method: System.Threading.Thread.get_ManagedThreadId
int System::Threading::Thread::get_ManagedThreadId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_ManagedThreadId"));
}
// Autogenerated method: System.Threading.Thread.BeginCriticalRegion
void System::Threading::Thread::BeginCriticalRegion() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Thread", "BeginCriticalRegion"));
}
// Autogenerated method: System.Threading.Thread.EndCriticalRegion
void System::Threading::Thread::EndCriticalRegion() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Thread", "EndCriticalRegion"));
}
// Autogenerated method: System.Threading.Thread.ValidateThreadState
System::Threading::ThreadState System::Threading::Thread::ValidateThreadState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::ThreadState>(this, "ValidateThreadState"));
}
// Autogenerated method: System.Threading.Thread.Finalize
void System::Threading::Thread::Finalize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Finalize"));
}
// Autogenerated method: System.Threading.Thread.GetHashCode
int System::Threading::Thread::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
