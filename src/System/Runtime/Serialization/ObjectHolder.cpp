// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ObjectHolder
#include "System/Runtime/Serialization/ObjectHolder.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.ISerializationSurrogate
#include "System/Runtime/Serialization/ISerializationSurrogate.hpp"
// Including type: System.Runtime.Serialization.FixupHolderList
#include "System/Runtime/Serialization/FixupHolderList.hpp"
// Including type: System.Runtime.Serialization.LongList
#include "System/Runtime/Serialization/LongList.hpp"
// Including type: System.Runtime.Serialization.ValueTypeFixupInfo
#include "System/Runtime/Serialization/ValueTypeFixupInfo.hpp"
// Including type: System.Runtime.Serialization.TypeLoadExceptionHolder
#include "System/Runtime/Serialization/TypeLoadExceptionHolder.hpp"
// Including type: System.Reflection.FieldInfo
#include "System/Reflection/FieldInfo.hpp"
// Including type: System.Runtime.Serialization.ObjectManager
#include "System/Runtime/Serialization/ObjectManager.hpp"
// Including type: System.Runtime.Serialization.FixupHolder
#include "System/Runtime/Serialization/FixupHolder.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Serialization.ObjectHolder..ctor
System::Runtime::Serialization::ObjectHolder* System::Runtime::Serialization::ObjectHolder::New_ctor(int64_t objID) {
  return (ObjectHolder*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization", "ObjectHolder", objID));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder..ctor
System::Runtime::Serialization::ObjectHolder* System::Runtime::Serialization::ObjectHolder::New_ctor(::CsObject* obj, int64_t objID, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainingObj, System::Reflection::FieldInfo* field, ::Array<int>* arrayIndex) {
  return (ObjectHolder*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization", "ObjectHolder", obj, objID, info, surrogate, idOfContainingObj, field, arrayIndex));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder..ctor
System::Runtime::Serialization::ObjectHolder* System::Runtime::Serialization::ObjectHolder::New_ctor(::CsString* obj, int64_t objID, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainingObj, System::Reflection::FieldInfo* field, ::Array<int>* arrayIndex) {
  return (ObjectHolder*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization", "ObjectHolder", obj, objID, info, surrogate, idOfContainingObj, field, arrayIndex));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.IncrementDescendentFixups
void System::Runtime::Serialization::ObjectHolder::IncrementDescendentFixups(int amount) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "IncrementDescendentFixups", amount));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.DecrementFixupsRemaining
void System::Runtime::Serialization::ObjectHolder::DecrementFixupsRemaining(System::Runtime::Serialization::ObjectManager* manager) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DecrementFixupsRemaining", manager));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.RemoveDependency
void System::Runtime::Serialization::ObjectHolder::RemoveDependency(int64_t id) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveDependency", id));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.AddFixup
void System::Runtime::Serialization::ObjectHolder::AddFixup(System::Runtime::Serialization::FixupHolder* fixup, System::Runtime::Serialization::ObjectManager* manager) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddFixup", fixup, manager));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.UpdateDescendentDependencyChain
void System::Runtime::Serialization::ObjectHolder::UpdateDescendentDependencyChain(int amount, System::Runtime::Serialization::ObjectManager* manager) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateDescendentDependencyChain", amount, manager));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.AddDependency
void System::Runtime::Serialization::ObjectHolder::AddDependency(int64_t dependentObject) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddDependency", dependentObject));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.UpdateData
void System::Runtime::Serialization::ObjectHolder::UpdateData(::CsObject* obj, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainer, System::Reflection::FieldInfo* field, ::Array<int>* arrayIndex, System::Runtime::Serialization::ObjectManager* manager) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateData", obj, info, surrogate, idOfContainer, field, arrayIndex, manager));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.MarkForCompletionWhenAvailable
void System::Runtime::Serialization::ObjectHolder::MarkForCompletionWhenAvailable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MarkForCompletionWhenAvailable"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.SetFlags
void System::Runtime::Serialization::ObjectHolder::SetFlags() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetFlags"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_IsIncompleteObjectReference
bool System::Runtime::Serialization::ObjectHolder::get_IsIncompleteObjectReference() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsIncompleteObjectReference"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.set_IsIncompleteObjectReference
void System::Runtime::Serialization::ObjectHolder::set_IsIncompleteObjectReference(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_IsIncompleteObjectReference", value));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_RequiresDelayedFixup
bool System::Runtime::Serialization::ObjectHolder::get_RequiresDelayedFixup() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_RequiresDelayedFixup"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_RequiresValueTypeFixup
bool System::Runtime::Serialization::ObjectHolder::get_RequiresValueTypeFixup() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_RequiresValueTypeFixup"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_ValueTypeFixupPerformed
bool System::Runtime::Serialization::ObjectHolder::get_ValueTypeFixupPerformed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_ValueTypeFixupPerformed"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.set_ValueTypeFixupPerformed
void System::Runtime::Serialization::ObjectHolder::set_ValueTypeFixupPerformed(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_ValueTypeFixupPerformed", value));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_HasISerializable
bool System::Runtime::Serialization::ObjectHolder::get_HasISerializable() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_HasISerializable"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_HasSurrogate
bool System::Runtime::Serialization::ObjectHolder::get_HasSurrogate() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_HasSurrogate"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_CanSurrogatedObjectValueChange
bool System::Runtime::Serialization::ObjectHolder::get_CanSurrogatedObjectValueChange() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CanSurrogatedObjectValueChange"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_CanObjectValueChange
bool System::Runtime::Serialization::ObjectHolder::get_CanObjectValueChange() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CanObjectValueChange"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_DirectlyDependentObjects
int System::Runtime::Serialization::ObjectHolder::get_DirectlyDependentObjects() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_DirectlyDependentObjects"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_TotalDependentObjects
int System::Runtime::Serialization::ObjectHolder::get_TotalDependentObjects() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_TotalDependentObjects"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_Reachable
bool System::Runtime::Serialization::ObjectHolder::get_Reachable() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_Reachable"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.set_Reachable
void System::Runtime::Serialization::ObjectHolder::set_Reachable(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Reachable", value));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_TypeLoadExceptionReachable
bool System::Runtime::Serialization::ObjectHolder::get_TypeLoadExceptionReachable() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_TypeLoadExceptionReachable"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_TypeLoadException
System::Runtime::Serialization::TypeLoadExceptionHolder* System::Runtime::Serialization::ObjectHolder::get_TypeLoadException() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::TypeLoadExceptionHolder*>(this, "get_TypeLoadException"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.set_TypeLoadException
void System::Runtime::Serialization::ObjectHolder::set_TypeLoadException(System::Runtime::Serialization::TypeLoadExceptionHolder* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_TypeLoadException", value));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_ObjectValue
::CsObject* System::Runtime::Serialization::ObjectHolder::get_ObjectValue() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "get_ObjectValue"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.SetObjectValue
void System::Runtime::Serialization::ObjectHolder::SetObjectValue(::CsObject* obj, System::Runtime::Serialization::ObjectManager* manager) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetObjectValue", obj, manager));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_SerializationInfo
System::Runtime::Serialization::SerializationInfo* System::Runtime::Serialization::ObjectHolder::get_SerializationInfo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::SerializationInfo*>(this, "get_SerializationInfo"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.set_SerializationInfo
void System::Runtime::Serialization::ObjectHolder::set_SerializationInfo(System::Runtime::Serialization::SerializationInfo* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_SerializationInfo", value));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_Surrogate
System::Runtime::Serialization::ISerializationSurrogate* System::Runtime::Serialization::ObjectHolder::get_Surrogate() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::ISerializationSurrogate*>(this, "get_Surrogate"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_DependentObjects
System::Runtime::Serialization::LongList* System::Runtime::Serialization::ObjectHolder::get_DependentObjects() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::LongList*>(this, "get_DependentObjects"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.set_DependentObjects
void System::Runtime::Serialization::ObjectHolder::set_DependentObjects(System::Runtime::Serialization::LongList* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_DependentObjects", value));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_RequiresSerInfoFixup
bool System::Runtime::Serialization::ObjectHolder::get_RequiresSerInfoFixup() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_RequiresSerInfoFixup"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.set_RequiresSerInfoFixup
void System::Runtime::Serialization::ObjectHolder::set_RequiresSerInfoFixup(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_RequiresSerInfoFixup", value));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_ValueFixup
System::Runtime::Serialization::ValueTypeFixupInfo* System::Runtime::Serialization::ObjectHolder::get_ValueFixup() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::ValueTypeFixupInfo*>(this, "get_ValueFixup"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_CompletelyFixed
bool System::Runtime::Serialization::ObjectHolder::get_CompletelyFixed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CompletelyFixed"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectHolder.get_ContainerID
int64_t System::Runtime::Serialization::ObjectHolder::get_ContainerID() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "get_ContainerID"));
}
