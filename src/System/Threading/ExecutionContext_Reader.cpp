// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.ExecutionContext/Reader
#include "System/Threading/ExecutionContext_Reader.hpp"
// Including type: System.Threading.SynchronizationContext
#include "System/Threading/SynchronizationContext.hpp"
// Including type: System.Threading.IAsyncLocal
#include "System/Threading/IAsyncLocal.hpp"
// Including type: System.Runtime.Remoting.Messaging.LogicalCallContext/Reader
#include "System/Runtime/Remoting/Messaging/LogicalCallContext_Reader.hpp"
// Including type: System.Runtime.Remoting.Messaging.IllogicalCallContext/Reader
#include "System/Runtime/Remoting/Messaging/IllogicalCallContext_Reader.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Threading.ExecutionContext/Reader..ctor
System::Threading::ExecutionContext::Reader* System::Threading::ExecutionContext::Reader::New_ctor(System::Threading::ExecutionContext* ec) {
  return (ExecutionContext::Reader*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "ExecutionContext/Reader", ec));
}
// Autogenerated method: System.Threading.ExecutionContext/Reader.DangerousGetRawExecutionContext
System::Threading::ExecutionContext* System::Threading::ExecutionContext::Reader::DangerousGetRawExecutionContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::ExecutionContext*>(*this, "DangerousGetRawExecutionContext"));
}
// Autogenerated method: System.Threading.ExecutionContext/Reader.get_IsNull
bool System::Threading::ExecutionContext::Reader::get_IsNull() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "get_IsNull"));
}
// Autogenerated method: System.Threading.ExecutionContext/Reader.IsDefaultFTContext
bool System::Threading::ExecutionContext::Reader::IsDefaultFTContext(bool ignoreSyncCtx) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "IsDefaultFTContext", ignoreSyncCtx));
}
// Autogenerated method: System.Threading.ExecutionContext/Reader.get_IsFlowSuppressed
bool System::Threading::ExecutionContext::Reader::get_IsFlowSuppressed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "get_IsFlowSuppressed"));
}
// Autogenerated method: System.Threading.ExecutionContext/Reader.get_SynchronizationContext
System::Threading::SynchronizationContext* System::Threading::ExecutionContext::Reader::get_SynchronizationContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::SynchronizationContext*>(*this, "get_SynchronizationContext"));
}
// Autogenerated method: System.Threading.ExecutionContext/Reader.get_SynchronizationContextNoFlow
System::Threading::SynchronizationContext* System::Threading::ExecutionContext::Reader::get_SynchronizationContextNoFlow() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::SynchronizationContext*>(*this, "get_SynchronizationContextNoFlow"));
}
// Autogenerated method: System.Threading.ExecutionContext/Reader.get_LogicalCallContext
System::Runtime::Remoting::Messaging::LogicalCallContext::Reader System::Threading::ExecutionContext::Reader::get_LogicalCallContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::LogicalCallContext::Reader>(*this, "get_LogicalCallContext"));
}
// Autogenerated method: System.Threading.ExecutionContext/Reader.get_IllogicalCallContext
System::Runtime::Remoting::Messaging::IllogicalCallContext::Reader System::Threading::ExecutionContext::Reader::get_IllogicalCallContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IllogicalCallContext::Reader>(*this, "get_IllogicalCallContext"));
}
// Autogenerated method: System.Threading.ExecutionContext/Reader.GetLocalValue
::CsObject* System::Threading::ExecutionContext::Reader::GetLocalValue(System::Threading::IAsyncLocal* local) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(*this, "GetLocalValue", local));
}
// Autogenerated method: System.Threading.ExecutionContext/Reader.HasSameLocalValues
bool System::Threading::ExecutionContext::Reader::HasSameLocalValues(System::Threading::ExecutionContext* other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "HasSameLocalValues", other));
}
