// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.AppDomain
#include "System/AppDomain.hpp"
// Including type: System.AssemblyLoadEventHandler
#include "System/AssemblyLoadEventHandler.hpp"
// Including type: System.ResolveEventHandler
#include "System/ResolveEventHandler.hpp"
// Including type: System.EventHandler
#include "System/EventHandler.hpp"
// Including type: System.UnhandledExceptionEventHandler
#include "System/UnhandledExceptionEventHandler.hpp"
// Including type: System.EventHandler`1
#include "System/EventHandler_1.hpp"
// Including type: System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs
#include "System/Runtime/ExceptionServices/FirstChanceExceptionEventArgs.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Security.Principal.IPrincipal
#include "System/Security/Principal/IPrincipal.hpp"
// Including type: System.Reflection.Assembly
#include "System/Reflection/Assembly.hpp"
// Including type: System.Security.Policy.Evidence
#include "System/Security/Policy/Evidence.hpp"
// Including type: System.Reflection.AssemblyName
#include "System/Reflection/AssemblyName.hpp"
// Including type: System.Runtime.Remoting.Contexts.Context
#include "System/Runtime/Remoting/Contexts/Context.hpp"
// Including type: System.Reflection.MethodInfo
#include "System/Reflection/MethodInfo.hpp"
// Including type: System.Runtime.Remoting.Messaging.CADMethodCallMessage
#include "System/Runtime/Remoting/Messaging/CADMethodCallMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.CADMethodReturnMessage
#include "System/Runtime/Remoting/Messaging/CADMethodReturnMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String _process_guid
::CsString* System::AppDomain::_get__process_guid() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("System", "AppDomain", "_process_guid"));
}
// Autogenerated static field setter
// Set static field: static private System.String _process_guid
void System::AppDomain::_set__process_guid(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "AppDomain", "_process_guid", value));
}
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Object> type_resolve_in_progress
System::Collections::Generic::Dictionary_2<::CsString*, ::CsObject*>* System::AppDomain::_get_type_resolve_in_progress() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::Dictionary_2<::CsString*, ::CsObject*>*>("System", "AppDomain", "type_resolve_in_progress")));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Object> type_resolve_in_progress
void System::AppDomain::_set_type_resolve_in_progress(System::Collections::Generic::Dictionary_2<::CsString*, ::CsObject*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "AppDomain", "type_resolve_in_progress", value));
}
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Object> assembly_resolve_in_progress
System::Collections::Generic::Dictionary_2<::CsString*, ::CsObject*>* System::AppDomain::_get_assembly_resolve_in_progress() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::Dictionary_2<::CsString*, ::CsObject*>*>("System", "AppDomain", "assembly_resolve_in_progress")));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Object> assembly_resolve_in_progress
void System::AppDomain::_set_assembly_resolve_in_progress(System::Collections::Generic::Dictionary_2<::CsString*, ::CsObject*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "AppDomain", "assembly_resolve_in_progress", value));
}
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Object> assembly_resolve_in_progress_refonly
System::Collections::Generic::Dictionary_2<::CsString*, ::CsObject*>* System::AppDomain::_get_assembly_resolve_in_progress_refonly() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::Dictionary_2<::CsString*, ::CsObject*>*>("System", "AppDomain", "assembly_resolve_in_progress_refonly")));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Object> assembly_resolve_in_progress_refonly
void System::AppDomain::_set_assembly_resolve_in_progress_refonly(System::Collections::Generic::Dictionary_2<::CsString*, ::CsObject*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "AppDomain", "assembly_resolve_in_progress_refonly", value));
}
// Autogenerated static field getter
// Get static field: static private System.Object _principal
::CsObject* System::AppDomain::_get__principal() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsObject*>("System", "AppDomain", "_principal"));
}
// Autogenerated static field setter
// Set static field: static private System.Object _principal
void System::AppDomain::_set__principal(::CsObject* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "AppDomain", "_principal", value));
}
// Autogenerated static field getter
// Get static field: static private System.AppDomain default_domain
System::AppDomain* System::AppDomain::_get_default_domain() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::AppDomain*>("System", "AppDomain", "default_domain"));
}
// Autogenerated static field setter
// Set static field: static private System.AppDomain default_domain
void System::AppDomain::_set_default_domain(System::AppDomain* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "AppDomain", "default_domain", value));
}
// Autogenerated method: System.AppDomain.getFriendlyName
::CsString* System::AppDomain::getFriendlyName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "getFriendlyName"));
}
// Autogenerated method: System.AppDomain.get_FriendlyName
::CsString* System::AppDomain::get_FriendlyName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_FriendlyName"));
}
// Autogenerated method: System.AppDomain.get_DefaultPrincipal
System::Security::Principal::IPrincipal* System::AppDomain::get_DefaultPrincipal() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Principal::IPrincipal*>(this, "get_DefaultPrincipal"));
}
// Autogenerated method: System.AppDomain.getCurDomain
System::AppDomain* System::AppDomain::getCurDomain() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::AppDomain*>("System", "AppDomain", "getCurDomain"));
}
// Autogenerated method: System.AppDomain.get_CurrentDomain
System::AppDomain* System::AppDomain::get_CurrentDomain() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::AppDomain*>("System", "AppDomain", "get_CurrentDomain"));
}
// Autogenerated method: System.AppDomain.GetAssemblies
::Array<System::Reflection::Assembly*>* System::AppDomain::GetAssemblies(bool refOnly) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Reflection::Assembly*>*>(this, "GetAssemblies", refOnly));
}
// Autogenerated method: System.AppDomain.GetAssemblies
::Array<System::Reflection::Assembly*>* System::AppDomain::GetAssemblies() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Reflection::Assembly*>*>(this, "GetAssemblies"));
}
// Autogenerated method: System.AppDomain.GetData
::CsObject* System::AppDomain::GetData(::CsString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "GetData", name));
}
// Autogenerated method: System.AppDomain.LoadAssembly
System::Reflection::Assembly* System::AppDomain::LoadAssembly(::CsString* assemblyRef, System::Security::Policy::Evidence* securityEvidence, bool refOnly) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::Assembly*>(this, "LoadAssembly", assemblyRef, securityEvidence, refOnly));
}
// Autogenerated method: System.AppDomain.LoadSatellite
System::Reflection::Assembly* System::AppDomain::LoadSatellite(System::Reflection::AssemblyName* assemblyRef, bool throwOnError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::Assembly*>(this, "LoadSatellite", assemblyRef, throwOnError));
}
// Autogenerated method: System.AppDomain.Load
System::Reflection::Assembly* System::AppDomain::Load(::CsString* assemblyString) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::Assembly*>(this, "Load", assemblyString));
}
// Autogenerated method: System.AppDomain.Load
System::Reflection::Assembly* System::AppDomain::Load(::CsString* assemblyString, System::Security::Policy::Evidence* assemblySecurity, bool refonly) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::Assembly*>(this, "Load", assemblyString, assemblySecurity, refonly));
}
// Autogenerated method: System.AppDomain.InternalSetDomainByID
System::AppDomain* System::AppDomain::InternalSetDomainByID(int domain_id) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::AppDomain*>("System", "AppDomain", "InternalSetDomainByID", domain_id));
}
// Autogenerated method: System.AppDomain.InternalSetDomain
System::AppDomain* System::AppDomain::InternalSetDomain(System::AppDomain* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::AppDomain*>("System", "AppDomain", "InternalSetDomain", context));
}
// Autogenerated method: System.AppDomain.InternalPushDomainRefByID
void System::AppDomain::InternalPushDomainRefByID(int domain_id) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "AppDomain", "InternalPushDomainRefByID", domain_id));
}
// Autogenerated method: System.AppDomain.InternalPopDomainRef
void System::AppDomain::InternalPopDomainRef() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "AppDomain", "InternalPopDomainRef"));
}
// Autogenerated method: System.AppDomain.InternalSetContext
System::Runtime::Remoting::Contexts::Context* System::AppDomain::InternalSetContext(System::Runtime::Remoting::Contexts::Context* context) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Contexts::Context*>("System", "AppDomain", "InternalSetContext", context));
}
// Autogenerated method: System.AppDomain.InternalGetContext
System::Runtime::Remoting::Contexts::Context* System::AppDomain::InternalGetContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Contexts::Context*>("System", "AppDomain", "InternalGetContext"));
}
// Autogenerated method: System.AppDomain.InternalGetDefaultContext
System::Runtime::Remoting::Contexts::Context* System::AppDomain::InternalGetDefaultContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Contexts::Context*>("System", "AppDomain", "InternalGetDefaultContext"));
}
// Autogenerated method: System.AppDomain.InternalGetProcessGuid
::CsString* System::AppDomain::InternalGetProcessGuid(::CsString* newguid) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System", "AppDomain", "InternalGetProcessGuid", newguid));
}
// Autogenerated method: System.AppDomain.InvokeInDomainByID
::CsObject* System::AppDomain::InvokeInDomainByID(int domain_id, System::Reflection::MethodInfo* method, ::CsObject* obj, ::Array<::CsObject*>* args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>("System", "AppDomain", "InvokeInDomainByID", domain_id, method, obj, args));
}
// Autogenerated method: System.AppDomain.GetProcessGuid
::CsString* System::AppDomain::GetProcessGuid() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System", "AppDomain", "GetProcessGuid"));
}
// Autogenerated method: System.AppDomain.InternalIsFinalizingForUnload
bool System::AppDomain::InternalIsFinalizingForUnload(int domain_id) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "AppDomain", "InternalIsFinalizingForUnload", domain_id));
}
// Autogenerated method: System.AppDomain.IsFinalizingForUnload
bool System::AppDomain::IsFinalizingForUnload() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsFinalizingForUnload"));
}
// Autogenerated method: System.AppDomain.getDomainID
int System::AppDomain::getDomainID() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "getDomainID"));
}
// Autogenerated method: System.AppDomain.GetCurrentThreadId
int System::AppDomain::GetCurrentThreadId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System", "AppDomain", "GetCurrentThreadId"));
}
// Autogenerated method: System.AppDomain.DoAssemblyLoad
void System::AppDomain::DoAssemblyLoad(System::Reflection::Assembly* assembly) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DoAssemblyLoad", assembly));
}
// Autogenerated method: System.AppDomain.DoAssemblyResolve
System::Reflection::Assembly* System::AppDomain::DoAssemblyResolve(::CsString* name, System::Reflection::Assembly* requestingAssembly, bool refonly) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::Assembly*>(this, "DoAssemblyResolve", name, requestingAssembly, refonly));
}
// Autogenerated method: System.AppDomain.DoTypeResolve
System::Reflection::Assembly* System::AppDomain::DoTypeResolve(::CsObject* name_or_tb) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::Assembly*>(this, "DoTypeResolve", name_or_tb));
}
// Autogenerated method: System.AppDomain.DoResourceResolve
System::Reflection::Assembly* System::AppDomain::DoResourceResolve(::CsString* name, System::Reflection::Assembly* requesting) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::Assembly*>(this, "DoResourceResolve", name, requesting));
}
// Autogenerated method: System.AppDomain.DoDomainUnload
void System::AppDomain::DoDomainUnload() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DoDomainUnload"));
}
// Autogenerated method: System.AppDomain.GetMarshalledDomainObjRef
::Array<uint8_t>* System::AppDomain::GetMarshalledDomainObjRef() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GetMarshalledDomainObjRef"));
}
// Autogenerated method: System.AppDomain.ProcessMessageInDomain
void System::AppDomain::ProcessMessageInDomain(::Array<uint8_t>* arrRequest, System::Runtime::Remoting::Messaging::CADMethodCallMessage* cadMsg, ::Array<uint8_t>*& arrResponse, System::Runtime::Remoting::Messaging::CADMethodReturnMessage*& cadMrm) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessMessageInDomain", arrRequest, cadMsg, arrResponse, cadMrm));
}
// Autogenerated method: System.AppDomain.add_DomainUnload
void System::AppDomain::add_DomainUnload(System::EventHandler* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_DomainUnload", value));
}
// Autogenerated method: System.AppDomain.remove_DomainUnload
void System::AppDomain::remove_DomainUnload(System::EventHandler* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_DomainUnload", value));
}
// Autogenerated method: System.AppDomain.add_ProcessExit
void System::AppDomain::add_ProcessExit(System::EventHandler* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_ProcessExit", value));
}
// Autogenerated method: System.AppDomain.remove_ProcessExit
void System::AppDomain::remove_ProcessExit(System::EventHandler* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_ProcessExit", value));
}
// Autogenerated method: System.AppDomain.add_UnhandledException
void System::AppDomain::add_UnhandledException(System::UnhandledExceptionEventHandler* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_UnhandledException", value));
}
// Autogenerated method: System.AppDomain.remove_UnhandledException
void System::AppDomain::remove_UnhandledException(System::UnhandledExceptionEventHandler* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_UnhandledException", value));
}
// Autogenerated method: System.AppDomain..ctor
System::AppDomain* System::AppDomain::New_ctor() {
  return (AppDomain*)THROW_UNLESS(il2cpp_utils::New("System", "AppDomain"));
}
// Autogenerated method: System.AppDomain.InitializeLifetimeService
::CsObject* System::AppDomain::InitializeLifetimeService() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "InitializeLifetimeService"));
}
// Autogenerated method: System.AppDomain.ToString
::CsString* System::AppDomain::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ToString"));
}
