// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: UnityEngine.PrimitiveType
#include "UnityEngine/PrimitiveType.hpp"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: UnityEngine.SendMessageOptions
#include "UnityEngine/SendMessageOptions.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.GameObject.CreatePrimitive
UnityEngine::GameObject* UnityEngine::GameObject::CreatePrimitive(UnityEngine::PrimitiveType type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::GameObject*>("UnityEngine", "GameObject", "CreatePrimitive", type));
}
// Autogenerated method: UnityEngine.GameObject.GetComponent
UnityEngine::Component* UnityEngine::GameObject::GetComponent(System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Component*>(this, "GetComponent", type));
}
// Autogenerated method: UnityEngine.GameObject.GetComponentFastPath
void UnityEngine::GameObject::GetComponentFastPath(System::Type* type, System::IntPtr oneFurtherThanResultValue) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetComponentFastPath", type, oneFurtherThanResultValue));
}
// Autogenerated method: UnityEngine.GameObject.GetComponentByName
UnityEngine::Component* UnityEngine::GameObject::GetComponentByName(::CsString* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Component*>(this, "GetComponentByName", type));
}
// Autogenerated method: UnityEngine.GameObject.GetComponent
UnityEngine::Component* UnityEngine::GameObject::GetComponent(::CsString* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Component*>(this, "GetComponent", type));
}
// Autogenerated method: UnityEngine.GameObject.GetComponentInChildren
UnityEngine::Component* UnityEngine::GameObject::GetComponentInChildren(System::Type* type, bool includeInactive) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Component*>(this, "GetComponentInChildren", type, includeInactive));
}
// Autogenerated method: UnityEngine.GameObject.GetComponentInChildren
UnityEngine::Component* UnityEngine::GameObject::GetComponentInChildren(System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Component*>(this, "GetComponentInChildren", type));
}
// Autogenerated method: UnityEngine.GameObject.GetComponentInParent
UnityEngine::Component* UnityEngine::GameObject::GetComponentInParent(System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Component*>(this, "GetComponentInParent", type));
}
// Autogenerated method: UnityEngine.GameObject.GetComponentsInternal
System::Array* UnityEngine::GameObject::GetComponentsInternal(System::Type* type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, ::CsObject* resultList) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Array*>(this, "GetComponentsInternal", type, useSearchTypeAsArrayReturnType, recursive, includeInactive, reverse, resultList));
}
// Autogenerated method: UnityEngine.GameObject.GetComponents
::Array<UnityEngine::Component*>* UnityEngine::GameObject::GetComponents(System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::Component*>*>(this, "GetComponents", type));
}
// Autogenerated method: UnityEngine.GameObject.GetComponentsInChildren
::Array<UnityEngine::Component*>* UnityEngine::GameObject::GetComponentsInChildren(System::Type* type, bool includeInactive) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::Component*>*>(this, "GetComponentsInChildren", type, includeInactive));
}
// Autogenerated method: UnityEngine.GameObject.GetComponentsInParent
::Array<UnityEngine::Component*>* UnityEngine::GameObject::GetComponentsInParent(System::Type* type, bool includeInactive) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::Component*>*>(this, "GetComponentsInParent", type, includeInactive));
}
// Autogenerated method: UnityEngine.GameObject.Internal_AddComponentWithType
UnityEngine::Component* UnityEngine::GameObject::Internal_AddComponentWithType(System::Type* componentType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Component*>(this, "Internal_AddComponentWithType", componentType));
}
// Autogenerated method: UnityEngine.GameObject.AddComponent
UnityEngine::Component* UnityEngine::GameObject::AddComponent(System::Type* componentType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Component*>(this, "AddComponent", componentType));
}
// Autogenerated method: UnityEngine.GameObject.get_transform
UnityEngine::Transform* UnityEngine::GameObject::get_transform() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Transform*>(this, "get_transform"));
}
// Autogenerated method: UnityEngine.GameObject.get_layer
int UnityEngine::GameObject::get_layer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_layer"));
}
// Autogenerated method: UnityEngine.GameObject.set_layer
void UnityEngine::GameObject::set_layer(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_layer", value));
}
// Autogenerated method: UnityEngine.GameObject.SetActive
void UnityEngine::GameObject::SetActive(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetActive", value));
}
// Autogenerated method: UnityEngine.GameObject.get_activeSelf
bool UnityEngine::GameObject::get_activeSelf() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_activeSelf"));
}
// Autogenerated method: UnityEngine.GameObject.get_activeInHierarchy
bool UnityEngine::GameObject::get_activeInHierarchy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_activeInHierarchy"));
}
// Autogenerated method: UnityEngine.GameObject.get_tag
::CsString* UnityEngine::GameObject::get_tag() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_tag"));
}
// Autogenerated method: UnityEngine.GameObject.set_tag
void UnityEngine::GameObject::set_tag(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_tag", value));
}
// Autogenerated method: UnityEngine.GameObject.CompareTag
bool UnityEngine::GameObject::CompareTag(::CsString* tag) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "CompareTag", tag));
}
// Autogenerated method: UnityEngine.GameObject.FindGameObjectsWithTag
::Array<UnityEngine::GameObject*>* UnityEngine::GameObject::FindGameObjectsWithTag(::CsString* tag) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::GameObject*>*>("UnityEngine", "GameObject", "FindGameObjectsWithTag", tag));
}
// Autogenerated method: UnityEngine.GameObject.SendMessage
void UnityEngine::GameObject::SendMessage(::CsString* methodName, ::CsObject* value, UnityEngine::SendMessageOptions options) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SendMessage", methodName, value, options));
}
// Autogenerated method: UnityEngine.GameObject.BroadcastMessage
void UnityEngine::GameObject::BroadcastMessage(::CsString* methodName, ::CsObject* parameter, UnityEngine::SendMessageOptions options) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "BroadcastMessage", methodName, parameter, options));
}
// Autogenerated method: UnityEngine.GameObject..ctor
UnityEngine::GameObject* UnityEngine::GameObject::New_ctor(::CsString* name) {
  return (GameObject*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "GameObject", name));
}
// Autogenerated method: UnityEngine.GameObject..ctor
UnityEngine::GameObject* UnityEngine::GameObject::New_ctor(::CsString* name, ::Array<System::Type*>* components) {
  return (GameObject*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "GameObject", name, components));
}
// Autogenerated method: UnityEngine.GameObject.Internal_CreateGameObject
void UnityEngine::GameObject::Internal_CreateGameObject(UnityEngine::GameObject* self, ::CsString* name) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "GameObject", "Internal_CreateGameObject", self, name));
}
// Autogenerated method: UnityEngine.GameObject.Find
UnityEngine::GameObject* UnityEngine::GameObject::Find(::CsString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::GameObject*>("UnityEngine", "GameObject", "Find", name));
}
// Autogenerated method: UnityEngine.GameObject.get_scene
UnityEngine::SceneManagement::Scene UnityEngine::GameObject::get_scene() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::SceneManagement::Scene>(this, "get_scene"));
}
// Autogenerated method: UnityEngine.GameObject.get_gameObject
UnityEngine::GameObject* UnityEngine::GameObject::get_gameObject() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::GameObject*>(this, "get_gameObject"));
}
// Autogenerated method: UnityEngine.GameObject.get_scene_Injected
void UnityEngine::GameObject::get_scene_Injected(UnityEngine::SceneManagement::Scene& ret) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "get_scene_Injected", ret));
}
// Autogenerated method: UnityEngine.GameObject..ctor
UnityEngine::GameObject* UnityEngine::GameObject::New_ctor() {
  return (GameObject*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "GameObject"));
}
