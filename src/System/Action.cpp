// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Action..ctor
System::Action* System::Action::New_ctor(::CsObject* object, System::IntPtr method) {
  return (Action*)THROW_UNLESS(il2cpp_utils::New("System", "Action", object, method));
}
// Autogenerated method: System.Action.Invoke
void System::Action::Invoke() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke"));
}
// Autogenerated method: System.Action.BeginInvoke
System::IAsyncResult* System::Action::BeginInvoke(System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
}
// Autogenerated method: System.Action.EndInvoke
void System::Action::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
