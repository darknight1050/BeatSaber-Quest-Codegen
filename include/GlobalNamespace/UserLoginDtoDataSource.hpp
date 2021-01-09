// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.IUserLoginDtoDataSource
#include "OnlineServices/API/IUserLoginDtoDataSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPlatformUserModel
  class IPlatformUserModel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: UserAuthenticationData
  class UserAuthenticationData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  // Autogenerated type: UserLoginDtoDataSource
  // [] Offset: FFFFFFFF
  class UserLoginDtoDataSource : public ::Il2CppObject/*, public OnlineServices::API::IUserLoginDtoDataSource*/ {
    public:
    // Nested type: GlobalNamespace::UserLoginDtoDataSource::$GetPlatformUserIdAsync$d__2
    struct $GetPlatformUserIdAsync$d__2;
    // Nested type: GlobalNamespace::UserLoginDtoDataSource::$UserAuthenticationDataAsync$d__3
    struct $UserAuthenticationDataAsync$d__3;
    // Nested type: GlobalNamespace::UserLoginDtoDataSource::$GetUserFriendsUserIds$d__4
    struct $GetUserFriendsUserIds$d__4;
    // [InjectAttribute] Offset: 0xDC490C
    // private readonly IPlatformUserModel _platformUserModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IPlatformUserModel* platformUserModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPlatformUserModel*) == 0x8);
    // Creating value type constructor for type: UserLoginDtoDataSource
    UserLoginDtoDataSource(GlobalNamespace::IPlatformUserModel* platformUserModel_ = {}) noexcept : platformUserModel{platformUserModel_} {}
    // Creating interface conversion operator: operator OnlineServices::API::IUserLoginDtoDataSource
    operator OnlineServices::API::IUserLoginDtoDataSource() noexcept {
      return *reinterpret_cast<OnlineServices::API::IUserLoginDtoDataSource*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::IPlatformUserModel*
    constexpr operator GlobalNamespace::IPlatformUserModel*() const noexcept {
      return platformUserModel;
    }
    // static field const value: static private System.String kVersion
    static constexpr const char* kVersion = "0.0.1";
    // Get static field: static private System.String kVersion
    static ::Il2CppString* _get_kVersion();
    // Set static field: static private System.String kVersion
    static void _set_kVersion(::Il2CppString* value);
    // public System.Threading.Tasks.Task`1<System.String> GetPlatformUserIdAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFD358
    // Implemented from: OnlineServices.API.IUserLoginDtoDataSource
    // Base method: System.Threading.Tasks.Task`1<System.String> IUserLoginDtoDataSource::GetPlatformUserIdAsync(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<::Il2CppString*>* GetPlatformUserIdAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<BeatSaberAPI.DataTransferObjects.UserAuthenticationData> UserAuthenticationDataAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFD470
    // Implemented from: OnlineServices.API.IUserLoginDtoDataSource
    // Base method: System.Threading.Tasks.Task`1<BeatSaberAPI.DataTransferObjects.UserAuthenticationData> IUserLoginDtoDataSource::UserAuthenticationDataAsync(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<BeatSaberAPI::DataTransferObjects::UserAuthenticationData*>* UserAuthenticationDataAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<System.String[]> GetUserFriendsUserIds(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFD58C
    // Implemented from: OnlineServices.API.IUserLoginDtoDataSource
    // Base method: System.Threading.Tasks.Task`1<System.String[]> IUserLoginDtoDataSource::GetUserFriendsUserIds(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<::Array<::Il2CppString*>*>* GetUserFriendsUserIds(System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0xFFD6A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserLoginDtoDataSource* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UserLoginDtoDataSource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserLoginDtoDataSource*, creationType>()));
    }
  }; // UserLoginDtoDataSource
  static check_size<sizeof(UserLoginDtoDataSource), 16 + sizeof(GlobalNamespace::IPlatformUserModel*)> __GlobalNamespace_UserLoginDtoDataSourceSizeCheck;
  static_assert(sizeof(UserLoginDtoDataSource) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UserLoginDtoDataSource*, "", "UserLoginDtoDataSource");
#pragma pack(pop)
