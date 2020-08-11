// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FormattedFloatListSettingsController
#include "GlobalNamespace/FormattedFloatListSettingsController.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: FormattedFloatListSettingsController.add_valueDidChangeEvent
void GlobalNamespace::FormattedFloatListSettingsController::add_valueDidChangeEvent(System::Action_2<GlobalNamespace::FormattedFloatListSettingsController*, float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_valueDidChangeEvent", value));
}
// Autogenerated method: FormattedFloatListSettingsController.remove_valueDidChangeEvent
void GlobalNamespace::FormattedFloatListSettingsController::remove_valueDidChangeEvent(System::Action_2<GlobalNamespace::FormattedFloatListSettingsController*, float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_valueDidChangeEvent", value));
}
// Autogenerated method: FormattedFloatListSettingsController.get_value
float GlobalNamespace::FormattedFloatListSettingsController::get_value() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_value"));
}
// Autogenerated method: FormattedFloatListSettingsController.SetValue
void GlobalNamespace::FormattedFloatListSettingsController::SetValue(float value, bool callCallback) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetValue", value, callCallback));
}
// Autogenerated method: FormattedFloatListSettingsController.GetInitValues
bool GlobalNamespace::FormattedFloatListSettingsController::GetInitValues(int& idx, int& numberOfElements) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetInitValues", idx, numberOfElements));
}
// Autogenerated method: FormattedFloatListSettingsController.ApplyValue
void GlobalNamespace::FormattedFloatListSettingsController::ApplyValue(int idx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ApplyValue", idx));
}
// Autogenerated method: FormattedFloatListSettingsController.TextForValue
::CsString* GlobalNamespace::FormattedFloatListSettingsController::TextForValue(int idx) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "TextForValue", idx));
}
// Autogenerated method: FormattedFloatListSettingsController..ctor
GlobalNamespace::FormattedFloatListSettingsController* GlobalNamespace::FormattedFloatListSettingsController::New_ctor() {
  return (FormattedFloatListSettingsController*)THROW_UNLESS(il2cpp_utils::New("", "FormattedFloatListSettingsController"));
}
