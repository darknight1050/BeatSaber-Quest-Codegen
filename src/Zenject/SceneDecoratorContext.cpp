// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SceneDecoratorContext
#include "Zenject/SceneDecoratorContext.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
// Including type: Zenject.ScriptableObjectInstaller
#include "Zenject/ScriptableObjectInstaller.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.SceneDecoratorContext.get_LateInstallers
System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller*>* Zenject::SceneDecoratorContext::get_LateInstallers() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller*>*>(this, "get_LateInstallers"));
}
// Autogenerated method: Zenject.SceneDecoratorContext.set_LateInstallers
void Zenject::SceneDecoratorContext::set_LateInstallers(System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_LateInstallers", value));
}
// Autogenerated method: Zenject.SceneDecoratorContext.get_LateInstallerPrefabs
System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller*>* Zenject::SceneDecoratorContext::get_LateInstallerPrefabs() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller*>*>(this, "get_LateInstallerPrefabs"));
}
// Autogenerated method: Zenject.SceneDecoratorContext.set_LateInstallerPrefabs
void Zenject::SceneDecoratorContext::set_LateInstallerPrefabs(System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_LateInstallerPrefabs", value));
}
// Autogenerated method: Zenject.SceneDecoratorContext.get_LateScriptableObjectInstallers
System::Collections::Generic::IEnumerable_1<Zenject::ScriptableObjectInstaller*>* Zenject::SceneDecoratorContext::get_LateScriptableObjectInstallers() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<Zenject::ScriptableObjectInstaller*>*>(this, "get_LateScriptableObjectInstallers"));
}
// Autogenerated method: Zenject.SceneDecoratorContext.set_LateScriptableObjectInstallers
void Zenject::SceneDecoratorContext::set_LateScriptableObjectInstallers(System::Collections::Generic::IEnumerable_1<Zenject::ScriptableObjectInstaller*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_LateScriptableObjectInstallers", value));
}
// Autogenerated method: Zenject.SceneDecoratorContext.get_DecoratedContractName
::CsString* Zenject::SceneDecoratorContext::get_DecoratedContractName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_DecoratedContractName"));
}
// Autogenerated method: Zenject.SceneDecoratorContext.Initialize
void Zenject::SceneDecoratorContext::Initialize(Zenject::DiContainer* container) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Initialize", container));
}
// Autogenerated method: Zenject.SceneDecoratorContext.InstallDecoratorSceneBindings
void Zenject::SceneDecoratorContext::InstallDecoratorSceneBindings() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InstallDecoratorSceneBindings"));
}
// Autogenerated method: Zenject.SceneDecoratorContext.InstallDecoratorInstallers
void Zenject::SceneDecoratorContext::InstallDecoratorInstallers() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InstallDecoratorInstallers"));
}
// Autogenerated method: Zenject.SceneDecoratorContext.InstallLateDecoratorInstallers
void Zenject::SceneDecoratorContext::InstallLateDecoratorInstallers() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InstallLateDecoratorInstallers"));
}
// Autogenerated method: Zenject.SceneDecoratorContext.get_Container
Zenject::DiContainer* Zenject::SceneDecoratorContext::get_Container() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "get_Container"));
}
// Autogenerated method: Zenject.SceneDecoratorContext.GetRootGameObjects
System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* Zenject::SceneDecoratorContext::GetRootGameObjects() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>*>(this, "GetRootGameObjects"));
}
// Autogenerated method: Zenject.SceneDecoratorContext.GetInjectableMonoBehaviours
void Zenject::SceneDecoratorContext::GetInjectableMonoBehaviours(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* monoBehaviours) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetInjectableMonoBehaviours", monoBehaviours));
}
// Autogenerated method: Zenject.SceneDecoratorContext..ctor
Zenject::SceneDecoratorContext* Zenject::SceneDecoratorContext::New_ctor() {
  return (SceneDecoratorContext*)THROW_UNLESS(il2cpp_utils::New("Zenject", "SceneDecoratorContext"));
}
