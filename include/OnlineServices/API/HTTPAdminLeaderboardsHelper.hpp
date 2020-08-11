// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices::API
namespace OnlineServices::API {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: UriBuilder
  class UriBuilder;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.HTTPAdminLeaderboardsHelper
  class HTTPAdminLeaderboardsHelper : public ::CsObject {
    public:
    // Nested type: OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto
    class LeaderboardsIdsDto;
    // Nested type: OnlineServices::API::HTTPAdminLeaderboardsHelper::ServerStatusResultDto
    class ServerStatusResultDto;
    // Nested type: OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto
    class LeaderboardsInfoDto;
    // Nested type: OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto
    class LeaderboardsInfoResultDto;
    // Nested type: OnlineServices::API::HTTPAdminLeaderboardsHelper::$ServerStatus$d__7
    struct $ServerStatus$d__7;
    // Nested type: OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8
    struct $LeaderboardsExist$d__8;
    // Nested type: OnlineServices::API::HTTPAdminLeaderboardsHelper::$CreateOrUpdateLeaderboards$d__9
    struct $CreateOrUpdateLeaderboards$d__9;
    // Nested type: OnlineServices::API::HTTPAdminLeaderboardsHelper::$SendWebRequestAsync$d__10
    struct $SendWebRequestAsync$d__10;
    // Nested type: OnlineServices::API::HTTPAdminLeaderboardsHelper::$SendAndWaitAsync$d__11
    struct $SendAndWaitAsync$d__11;
    // private System.String _secret
    // Offset: 0x10
    ::CsString* secret;
    // private System.UriBuilder _uriBuilder
    // Offset: 0x18
    System::UriBuilder* uriBuilder;
    // public System.Void .ctor(System.String uri, System.String secret)
    // Offset: 0xC29520
    static HTTPAdminLeaderboardsHelper* New_ctor(::CsString* uri, ::CsString* secret);
    // public System.Threading.Tasks.Task`1<OnlineServices.API.HTTPAdminLeaderboardsHelper/ServerStatusResultDto> ServerStatus(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC295B8
    System::Threading::Tasks::Task_1<OnlineServices::API::HTTPAdminLeaderboardsHelper::ServerStatusResultDto*>* ServerStatus(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<OnlineServices.API.HTTPAdminLeaderboardsHelper/LeaderboardsInfoResultDto> LeaderboardsExist(System.String[] leaderboardIds, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC29708
    System::Threading::Tasks::Task_1<OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto*>* LeaderboardsExist(::Array<::CsString*>* leaderboardIds, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<System.Boolean> CreateOrUpdateLeaderboards(System.String[] leaderboardIds, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC2986C
    System::Threading::Tasks::Task_1<bool>* CreateOrUpdateLeaderboards(::Array<::CsString*>* leaderboardIds, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<System.String> SendWebRequestAsync(System.String uri, System.String method, System.String bodyData, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC299D0
    System::Threading::Tasks::Task_1<::CsString*>* SendWebRequestAsync(::CsString* uri, ::CsString* method, ::CsString* bodyData, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task SendAndWaitAsync(UnityEngine.Networking.UnityWebRequest webRequest, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xC29B54
    System::Threading::Tasks::Task* SendAndWaitAsync(UnityEngine::Networking::UnityWebRequest* webRequest, System::Threading::CancellationToken cancellationToken);
  }; // OnlineServices.API.HTTPAdminLeaderboardsHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPAdminLeaderboardsHelper*, "OnlineServices.API", "HTTPAdminLeaderboardsHelper");
#pragma pack(pop)
