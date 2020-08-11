// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine/EventSystems/BaseRaycaster.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData
#include "UnityEngine/EventSystems/PointerEventData.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.EventSystems.BaseRaycaster.Raycast
void UnityEngine::EventSystems::BaseRaycaster::Raycast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Raycast", eventData, resultAppendList));
}
// Autogenerated method: UnityEngine.EventSystems.BaseRaycaster.get_eventCamera
UnityEngine::Camera* UnityEngine::EventSystems::BaseRaycaster::get_eventCamera() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Camera*>(this, "get_eventCamera"));
}
// Autogenerated method: UnityEngine.EventSystems.BaseRaycaster.get_priority
int UnityEngine::EventSystems::BaseRaycaster::get_priority() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_priority"));
}
// Autogenerated method: UnityEngine.EventSystems.BaseRaycaster.get_sortOrderPriority
int UnityEngine::EventSystems::BaseRaycaster::get_sortOrderPriority() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_sortOrderPriority"));
}
// Autogenerated method: UnityEngine.EventSystems.BaseRaycaster.get_renderOrderPriority
int UnityEngine::EventSystems::BaseRaycaster::get_renderOrderPriority() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_renderOrderPriority"));
}
// Autogenerated method: UnityEngine.EventSystems.BaseRaycaster.get_rootRaycaster
UnityEngine::EventSystems::BaseRaycaster* UnityEngine::EventSystems::BaseRaycaster::get_rootRaycaster() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::EventSystems::BaseRaycaster*>(this, "get_rootRaycaster"));
}
// Autogenerated method: UnityEngine.EventSystems.BaseRaycaster.ToString
::CsString* UnityEngine::EventSystems::BaseRaycaster::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ToString"));
}
// Autogenerated method: UnityEngine.EventSystems.BaseRaycaster.OnEnable
void UnityEngine::EventSystems::BaseRaycaster::OnEnable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnEnable"));
}
// Autogenerated method: UnityEngine.EventSystems.BaseRaycaster.OnDisable
void UnityEngine::EventSystems::BaseRaycaster::OnDisable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDisable"));
}
// Autogenerated method: UnityEngine.EventSystems.BaseRaycaster.OnCanvasHierarchyChanged
void UnityEngine::EventSystems::BaseRaycaster::OnCanvasHierarchyChanged() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnCanvasHierarchyChanged"));
}
// Autogenerated method: UnityEngine.EventSystems.BaseRaycaster.OnTransformParentChanged
void UnityEngine::EventSystems::BaseRaycaster::OnTransformParentChanged() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnTransformParentChanged"));
}
// Autogenerated method: UnityEngine.EventSystems.BaseRaycaster..ctor
UnityEngine::EventSystems::BaseRaycaster* UnityEngine::EventSystems::BaseRaycaster::New_ctor() {
  return (BaseRaycaster*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.EventSystems", "BaseRaycaster"));
}
