// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ColorScheme
#include "GlobalNamespace/ColorScheme.hpp"
// Including type: ColorSchemeSO
#include "GlobalNamespace/ColorSchemeSO.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: ColorScheme.get_colorSchemeId
::CsString* GlobalNamespace::ColorScheme::get_colorSchemeId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_colorSchemeId"));
}
// Autogenerated method: ColorScheme.get_colorSchemeName
::CsString* GlobalNamespace::ColorScheme::get_colorSchemeName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_colorSchemeName"));
}
// Autogenerated method: ColorScheme.get_isEditable
bool GlobalNamespace::ColorScheme::get_isEditable() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isEditable"));
}
// Autogenerated method: ColorScheme.get_saberAColor
UnityEngine::Color GlobalNamespace::ColorScheme::get_saberAColor() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "get_saberAColor"));
}
// Autogenerated method: ColorScheme.get_saberBColor
UnityEngine::Color GlobalNamespace::ColorScheme::get_saberBColor() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "get_saberBColor"));
}
// Autogenerated method: ColorScheme.get_environmentColor0
UnityEngine::Color GlobalNamespace::ColorScheme::get_environmentColor0() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "get_environmentColor0"));
}
// Autogenerated method: ColorScheme.get_environmentColor1
UnityEngine::Color GlobalNamespace::ColorScheme::get_environmentColor1() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "get_environmentColor1"));
}
// Autogenerated method: ColorScheme.get_obstaclesColor
UnityEngine::Color GlobalNamespace::ColorScheme::get_obstaclesColor() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "get_obstaclesColor"));
}
// Autogenerated method: ColorScheme..ctor
GlobalNamespace::ColorScheme* GlobalNamespace::ColorScheme::New_ctor(::CsString* colorSchemeId, ::CsString* colorSchemeName, bool isEditable, UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color environmentColor0, UnityEngine::Color environmentColor1, UnityEngine::Color obstaclesColor) {
  return (ColorScheme*)THROW_UNLESS(il2cpp_utils::New("", "ColorScheme", colorSchemeId, colorSchemeName, isEditable, saberAColor, saberBColor, environmentColor0, environmentColor1, obstaclesColor));
}
// Autogenerated method: ColorScheme..ctor
GlobalNamespace::ColorScheme* GlobalNamespace::ColorScheme::New_ctor(GlobalNamespace::ColorScheme* colorScheme, UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color environmentColor0, UnityEngine::Color environmentColor1, UnityEngine::Color obstaclesColor) {
  return (ColorScheme*)THROW_UNLESS(il2cpp_utils::New("", "ColorScheme", colorScheme, saberAColor, saberBColor, environmentColor0, environmentColor1, obstaclesColor));
}
// Autogenerated method: ColorScheme..ctor
GlobalNamespace::ColorScheme* GlobalNamespace::ColorScheme::New_ctor(GlobalNamespace::ColorScheme* colorScheme) {
  return (ColorScheme*)THROW_UNLESS(il2cpp_utils::New("", "ColorScheme", colorScheme));
}
// Autogenerated method: ColorScheme..ctor
GlobalNamespace::ColorScheme* GlobalNamespace::ColorScheme::New_ctor(GlobalNamespace::ColorSchemeSO* colorScheme) {
  return (ColorScheme*)THROW_UNLESS(il2cpp_utils::New("", "ColorScheme", colorScheme));
}
