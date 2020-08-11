// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: OculusPlatformUserHandler
#include "GlobalNamespace/OculusPlatformUserHandler.hpp"
// Including type: PlatformUserModelSO
#include "GlobalNamespace/PlatformUserModelSO.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserList
  class UserList;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusPlatformUserHandler/<>c__DisplayClass5_0
  class OculusPlatformUserHandler::$$c__DisplayClass5_0 : public ::CsObject {
    public:
    // public HMAsyncRequest asyncRequest
    // Offset: 0x10
    GlobalNamespace::HMAsyncRequest* asyncRequest;
    // public PlatformUserModelSO/GetUserFriendsUserIdsCompletionHandler completionHandler
    // Offset: 0x18
    GlobalNamespace::PlatformUserModelSO::GetUserFriendsUserIdsCompletionHandler* completionHandler;
    // public OculusPlatformUserHandler <>4__this
    // Offset: 0x20
    GlobalNamespace::OculusPlatformUserHandler* $$4__this;
    // System.Void <GetUserFriendsUserIds>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.UserList> message)
    // Offset: 0xC28E00
    void $GetUserFriendsUserIds$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::UserList*>* message);
    // public System.Void .ctor()
    // Offset: 0xC28B00
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusPlatformUserHandler::$$c__DisplayClass5_0* New_ctor();
  }; // OculusPlatformUserHandler/<>c__DisplayClass5_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformUserHandler::$$c__DisplayClass5_0*, "", "OculusPlatformUserHandler/<>c__DisplayClass5_0");
#pragma pack(pop)
