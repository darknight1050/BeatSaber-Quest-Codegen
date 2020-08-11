// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Rooms
#include "Oculus/Platform/Rooms.hpp"
// Including type: Oculus.Platform.Request`1
#include "Oculus/Platform/Request_1.hpp"
// Including type: Oculus.Platform.Models.Room
#include "Oculus/Platform/Models/Room.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: Oculus.Platform.RoomJoinPolicy
#include "Oculus/Platform/RoomJoinPolicy.hpp"
// Including type: Oculus.Platform.RoomOptions
#include "Oculus/Platform/RoomOptions.hpp"
// Including type: Oculus.Platform.Models.UserList
#include "Oculus/Platform/Models/UserList.hpp"
// Including type: Oculus.Platform.Models.RoomList
#include "Oculus/Platform/Models/RoomList.hpp"
// Including type: Oculus.Platform.Request
#include "Oculus/Platform/Request.hpp"
// Including type: Oculus.Platform.RoomMembershipLockStatus
#include "Oculus/Platform/RoomMembershipLockStatus.hpp"
// Including type: Oculus.Platform.Models.RoomInviteNotification
#include "Oculus/Platform/Models/RoomInviteNotification.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.Rooms.UpdateDataStore
Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::UpdateDataStore(uint64_t roomID, System::Collections::Generic::Dictionary_2<::CsString*, ::CsString*>* data) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>*>("Oculus.Platform", "Rooms", "UpdateDataStore", roomID, data));
}
// Autogenerated method: Oculus.Platform.Rooms.SetRoomInviteNotificationCallback
void Oculus::Platform::Rooms::SetRoomInviteNotificationCallback(typename Oculus::Platform::Message_1<::CsString*>::Callback* callback) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Oculus.Platform", "Rooms", "SetRoomInviteNotificationCallback", callback));
}
// Autogenerated method: Oculus.Platform.Rooms.CreateAndJoinPrivate
Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::CreateAndJoinPrivate(Oculus::Platform::RoomJoinPolicy joinPolicy, uint maxUsers, bool subscribeToUpdates) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>*>("Oculus.Platform", "Rooms", "CreateAndJoinPrivate", joinPolicy, maxUsers, subscribeToUpdates));
}
// Autogenerated method: Oculus.Platform.Rooms.CreateAndJoinPrivate2
Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::CreateAndJoinPrivate2(Oculus::Platform::RoomJoinPolicy joinPolicy, uint maxUsers, Oculus::Platform::RoomOptions* roomOptions) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>*>("Oculus.Platform", "Rooms", "CreateAndJoinPrivate2", joinPolicy, maxUsers, roomOptions));
}
// Autogenerated method: Oculus.Platform.Rooms.Get
Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::Get(uint64_t roomID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>*>("Oculus.Platform", "Rooms", "Get", roomID));
}
// Autogenerated method: Oculus.Platform.Rooms.GetCurrent
Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::GetCurrent() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>*>("Oculus.Platform", "Rooms", "GetCurrent"));
}
// Autogenerated method: Oculus.Platform.Rooms.GetCurrentForUser
Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::GetCurrentForUser(uint64_t userID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>*>("Oculus.Platform", "Rooms", "GetCurrentForUser", userID));
}
// Autogenerated method: Oculus.Platform.Rooms.GetInvitableUsers
Oculus::Platform::Request_1<Oculus::Platform::Models::UserList*>* Oculus::Platform::Rooms::GetInvitableUsers() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::UserList*>*>("Oculus.Platform", "Rooms", "GetInvitableUsers"));
}
// Autogenerated method: Oculus.Platform.Rooms.GetInvitableUsers2
Oculus::Platform::Request_1<Oculus::Platform::Models::UserList*>* Oculus::Platform::Rooms::GetInvitableUsers2(Oculus::Platform::RoomOptions* roomOptions) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::UserList*>*>("Oculus.Platform", "Rooms", "GetInvitableUsers2", roomOptions));
}
// Autogenerated method: Oculus.Platform.Rooms.GetModeratedRooms
Oculus::Platform::Request_1<Oculus::Platform::Models::RoomList*>* Oculus::Platform::Rooms::GetModeratedRooms() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::RoomList*>*>("Oculus.Platform", "Rooms", "GetModeratedRooms"));
}
// Autogenerated method: Oculus.Platform.Rooms.InviteUser
Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::InviteUser(uint64_t roomID, ::CsString* inviteToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>*>("Oculus.Platform", "Rooms", "InviteUser", roomID, inviteToken));
}
// Autogenerated method: Oculus.Platform.Rooms.Join
Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::Join(uint64_t roomID, bool subscribeToUpdates) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>*>("Oculus.Platform", "Rooms", "Join", roomID, subscribeToUpdates));
}
// Autogenerated method: Oculus.Platform.Rooms.Join2
Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::Join2(uint64_t roomID, Oculus::Platform::RoomOptions* roomOptions) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>*>("Oculus.Platform", "Rooms", "Join2", roomID, roomOptions));
}
// Autogenerated method: Oculus.Platform.Rooms.KickUser
Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::KickUser(uint64_t roomID, uint64_t userID, int kickDurationSeconds) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>*>("Oculus.Platform", "Rooms", "KickUser", roomID, userID, kickDurationSeconds));
}
// Autogenerated method: Oculus.Platform.Rooms.LaunchInvitableUserFlow
Oculus::Platform::Request* Oculus::Platform::Rooms::LaunchInvitableUserFlow(uint64_t roomID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request*>("Oculus.Platform", "Rooms", "LaunchInvitableUserFlow", roomID));
}
// Autogenerated method: Oculus.Platform.Rooms.Leave
Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::Leave(uint64_t roomID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>*>("Oculus.Platform", "Rooms", "Leave", roomID));
}
// Autogenerated method: Oculus.Platform.Rooms.SetDescription
Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::SetDescription(uint64_t roomID, ::CsString* description) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>*>("Oculus.Platform", "Rooms", "SetDescription", roomID, description));
}
// Autogenerated method: Oculus.Platform.Rooms.UpdateMembershipLockStatus
Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::UpdateMembershipLockStatus(uint64_t roomID, Oculus::Platform::RoomMembershipLockStatus membershipLockStatus) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>*>("Oculus.Platform", "Rooms", "UpdateMembershipLockStatus", roomID, membershipLockStatus));
}
// Autogenerated method: Oculus.Platform.Rooms.UpdateOwner
Oculus::Platform::Request* Oculus::Platform::Rooms::UpdateOwner(uint64_t roomID, uint64_t userID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request*>("Oculus.Platform", "Rooms", "UpdateOwner", roomID, userID));
}
// Autogenerated method: Oculus.Platform.Rooms.UpdatePrivateRoomJoinPolicy
Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>* Oculus::Platform::Rooms::UpdatePrivateRoomJoinPolicy(uint64_t roomID, Oculus::Platform::RoomJoinPolicy newJoinPolicy) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>*>("Oculus.Platform", "Rooms", "UpdatePrivateRoomJoinPolicy", roomID, newJoinPolicy));
}
// Autogenerated method: Oculus.Platform.Rooms.SetRoomInviteAcceptedNotificationCallback
void Oculus::Platform::Rooms::SetRoomInviteAcceptedNotificationCallback(typename Oculus::Platform::Message_1<::CsString*>::Callback* callback) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Oculus.Platform", "Rooms", "SetRoomInviteAcceptedNotificationCallback", callback));
}
// Autogenerated method: Oculus.Platform.Rooms.SetRoomInviteReceivedNotificationCallback
void Oculus::Platform::Rooms::SetRoomInviteReceivedNotificationCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::RoomInviteNotification*>::Callback* callback) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Oculus.Platform", "Rooms", "SetRoomInviteReceivedNotificationCallback", callback));
}
// Autogenerated method: Oculus.Platform.Rooms.SetUpdateNotificationCallback
void Oculus::Platform::Rooms::SetUpdateNotificationCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::Room*>::Callback* callback) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Oculus.Platform", "Rooms", "SetUpdateNotificationCallback", callback));
}
// Autogenerated method: Oculus.Platform.Rooms.GetNextRoomListPage
Oculus::Platform::Request_1<Oculus::Platform::Models::RoomList*>* Oculus::Platform::Rooms::GetNextRoomListPage(Oculus::Platform::Models::RoomList* list) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::RoomList*>*>("Oculus.Platform", "Rooms", "GetNextRoomListPage", list));
}
