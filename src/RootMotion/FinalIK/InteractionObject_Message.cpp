// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.InteractionObject/Message
#include "RootMotion/FinalIK/InteractionObject_Message.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: System.String
#include "System/String.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String empty
::CsString* RootMotion::FinalIK::InteractionObject::Message::_get_empty() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("RootMotion.FinalIK", "InteractionObject/Message", "empty"));
}
// Autogenerated static field setter
// Set static field: static private System.String empty
void RootMotion::FinalIK::InteractionObject::Message::_set_empty(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("RootMotion.FinalIK", "InteractionObject/Message", "empty", value));
}
// Autogenerated method: RootMotion.FinalIK.InteractionObject/Message.Send
void RootMotion::FinalIK::InteractionObject::Message::Send(UnityEngine::Transform* t) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Send", t));
}
// Autogenerated method: RootMotion.FinalIK.InteractionObject/Message..ctor
RootMotion::FinalIK::InteractionObject::Message* RootMotion::FinalIK::InteractionObject::Message::New_ctor() {
  return (InteractionObject::Message*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "InteractionObject/Message"));
}
