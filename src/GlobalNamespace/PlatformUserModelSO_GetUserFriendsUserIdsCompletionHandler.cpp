// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformUserModelSO/GetUserFriendsUserIdsCompletionHandler
#include "GlobalNamespace/PlatformUserModelSO_GetUserFriendsUserIdsCompletionHandler.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
// Including type: PlatformUserModelSO/GetUserFriendsUserIdsResult
#include "GlobalNamespace/PlatformUserModelSO_GetUserFriendsUserIdsResult.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: PlatformUserModelSO/GetUserFriendsUserIdsCompletionHandler..ctor
GlobalNamespace::PlatformUserModelSO::GetUserFriendsUserIdsCompletionHandler* GlobalNamespace::PlatformUserModelSO::GetUserFriendsUserIdsCompletionHandler::New_ctor(::CsObject* object, System::IntPtr method) {
  return (PlatformUserModelSO::GetUserFriendsUserIdsCompletionHandler*)THROW_UNLESS(il2cpp_utils::New("", "PlatformUserModelSO/GetUserFriendsUserIdsCompletionHandler", object, method));
}
// Autogenerated method: PlatformUserModelSO/GetUserFriendsUserIdsCompletionHandler.Invoke
void GlobalNamespace::PlatformUserModelSO::GetUserFriendsUserIdsCompletionHandler::Invoke(GlobalNamespace::PlatformUserModelSO::GetUserFriendsUserIdsResult result, ::Array<::CsString*>* friendsUserIds) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", result, friendsUserIds));
}
// Autogenerated method: PlatformUserModelSO/GetUserFriendsUserIdsCompletionHandler.BeginInvoke
System::IAsyncResult* GlobalNamespace::PlatformUserModelSO::GetUserFriendsUserIdsCompletionHandler::BeginInvoke(GlobalNamespace::PlatformUserModelSO::GetUserFriendsUserIdsResult result, ::Array<::CsString*>* friendsUserIds, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", result, friendsUserIds, callback, object));
}
// Autogenerated method: PlatformUserModelSO/GetUserFriendsUserIdsCompletionHandler.EndInvoke
void GlobalNamespace::PlatformUserModelSO::GetUserFriendsUserIdsCompletionHandler::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
