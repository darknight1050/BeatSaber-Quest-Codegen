// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.InteractionSystem/InteractionDelegate
#include "RootMotion/FinalIK/InteractionSystem_InteractionDelegate.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
// Including type: RootMotion.FinalIK.InteractionObject
#include "RootMotion/FinalIK/InteractionObject.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.InteractionSystem/InteractionDelegate..ctor
RootMotion::FinalIK::InteractionSystem::InteractionDelegate* RootMotion::FinalIK::InteractionSystem::InteractionDelegate::New_ctor(::CsObject* object, System::IntPtr method) {
  return (InteractionSystem::InteractionDelegate*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "InteractionSystem/InteractionDelegate", object, method));
}
// Autogenerated method: RootMotion.FinalIK.InteractionSystem/InteractionDelegate.Invoke
void RootMotion::FinalIK::InteractionSystem::InteractionDelegate::Invoke(RootMotion::FinalIK::FullBodyBipedEffector effectorType, RootMotion::FinalIK::InteractionObject* interactionObject) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", effectorType, interactionObject));
}
// Autogenerated method: RootMotion.FinalIK.InteractionSystem/InteractionDelegate.BeginInvoke
System::IAsyncResult* RootMotion::FinalIK::InteractionSystem::InteractionDelegate::BeginInvoke(RootMotion::FinalIK::FullBodyBipedEffector effectorType, RootMotion::FinalIK::InteractionObject* interactionObject, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", effectorType, interactionObject, callback, object));
}
// Autogenerated method: RootMotion.FinalIK.InteractionSystem/InteractionDelegate.EndInvoke
void RootMotion::FinalIK::InteractionSystem::InteractionDelegate::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
