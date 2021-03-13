// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetEase.Docker.InitializeData
#include "NetEase/Docker/InitializeData.hpp"
// Including type: NetEase.Docker.LoginData
#include "NetEase/Docker/LoginData.hpp"
// Including type: NetEase.Docker.LogoutData
#include "NetEase/Docker/LogoutData.hpp"
// Including type: NetEase.Docker.ReceivedHighscoreData
#include "NetEase/Docker/ReceivedHighscoreData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: NetEase::Docker
namespace NetEase::Docker {
  // Forward declaring type: UploadScoreData
  struct UploadScoreData;
  // Forward declaring type: RequestHighscoreData
  struct RequestHighscoreData;
}
// Completed forward declares
// Type namespace: NetEase
namespace NetEase {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NetEase.DockerWrap
  // [] Offset: FFFFFFFF
  class DockerWrap : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: DockerWrap
    DockerWrap() noexcept {}
    // static public System.Void SetInitializeCallback(System.Action`1<NetEase.Docker.InitializeData> callback)
    // Offset: 0xF20758
    static void SetInitializeCallback(System::Action_1<NetEase::Docker::InitializeData>* callback);
    // static public System.Void Initialize()
    // Offset: 0xF207C0
    static void Initialize();
    // static public System.Void SetLoginCallback(System.Action`1<NetEase.Docker.LoginData> callback)
    // Offset: 0xF20820
    static void SetLoginCallback(System::Action_1<NetEase::Docker::LoginData>* callback);
    // static public System.Void Login()
    // Offset: 0xF20888
    static void Login();
    // static public System.Void SetLogoutCallback(System.Action`1<NetEase.Docker.LogoutData> callback)
    // Offset: 0xF208E8
    static void SetLogoutCallback(System::Action_1<NetEase::Docker::LogoutData>* callback);
    // static public System.Void Logout()
    // Offset: 0xF20950
    static void Logout();
    // static public System.Void UploadScore(NetEase.Docker.UploadScoreData scoreData)
    // Offset: 0xF209B0
    static void UploadScore(NetEase::Docker::UploadScoreData scoreData);
    // static public System.Boolean WillProvideHighscore()
    // Offset: 0xF20A44
    static bool WillProvideHighscore();
    // static public System.Void SetHighscoreReceivedCallback(System.Action`1<NetEase.Docker.ReceivedHighscoreData> callbackAction)
    // Offset: 0xF20AA4
    static void SetHighscoreReceivedCallback(System::Action_1<NetEase::Docker::ReceivedHighscoreData>* callbackAction);
    // static public System.Void RequestHighscoreList(NetEase.Docker.RequestHighscoreData highscoreRequest)
    // Offset: 0xF20B0C
    static void RequestHighscoreList(NetEase::Docker::RequestHighscoreData highscoreRequest);
    // static public System.Void UpdateLoop()
    // Offset: 0xF20B84
    static void UpdateLoop();
  }; // NetEase.DockerWrap
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::DockerWrap*, "NetEase", "DockerWrap");
