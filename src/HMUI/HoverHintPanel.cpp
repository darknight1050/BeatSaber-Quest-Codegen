// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.HoverHintPanel
#include "HMUI/HoverHintPanel.hpp"
// Including type: TMPro.TextMeshProUGUI
#include "TMPro/TextMeshProUGUI.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: HMUI.HoverHintPanel.get_isShown
bool HMUI::HoverHintPanel::get_isShown() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isShown"));
}
// Autogenerated method: HMUI.HoverHintPanel.set_isShown
void HMUI::HoverHintPanel::set_isShown(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_isShown", value));
}
// Autogenerated method: HMUI.HoverHintPanel.Awake
void HMUI::HoverHintPanel::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: HMUI.HoverHintPanel.Show
void HMUI::HoverHintPanel::Show(::CsString* text, UnityEngine::Transform* parent, UnityEngine::Vector2 containerSize, UnityEngine::Rect spawnRect) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Show", text, parent, containerSize, spawnRect));
}
// Autogenerated method: HMUI.HoverHintPanel.Hide
void HMUI::HoverHintPanel::Hide() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Hide"));
}
// Autogenerated method: HMUI.HoverHintPanel.CalculatePanelPosition
UnityEngine::Vector2 HMUI::HoverHintPanel::CalculatePanelPosition(UnityEngine::Vector2 containerSize, UnityEngine::Rect spawnRect, UnityEngine::Vector2 panelSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector2>(this, "CalculatePanelPosition", containerSize, spawnRect, panelSize));
}
// Autogenerated method: HMUI.HoverHintPanel..ctor
HMUI::HoverHintPanel* HMUI::HoverHintPanel::New_ctor() {
  return (HoverHintPanel*)THROW_UNLESS(il2cpp_utils::New("HMUI", "HoverHintPanel"));
}
