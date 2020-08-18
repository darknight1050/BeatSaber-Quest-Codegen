// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
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
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
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
  // Autogenerated type: NetEase.DockerWrap
  class DockerWrap : public ::Il2CppObject {
    public:
    // static public System.Void SetInitializeCallback(System.Action`1<NetEase.Docker.InitializeData> callback)
    // Offset: 0x1954E60
    static void SetInitializeCallback(System::Action_1<NetEase::Docker::InitializeData>* callback);
    // static public System.Void Initialize()
    // Offset: 0x1954EC8
    static void Initialize();
    // static public System.Void SetLoginCallback(System.Action`1<NetEase.Docker.LoginData> callback)
    // Offset: 0x1954F28
    static void SetLoginCallback(System::Action_1<NetEase::Docker::LoginData>* callback);
    // static public System.Void Login()
    // Offset: 0x1954F90
    static void Login();
    // static public System.Void SetLogoutCallback(System.Action`1<NetEase.Docker.LogoutData> callback)
    // Offset: 0x1954FF0
    static void SetLogoutCallback(System::Action_1<NetEase::Docker::LogoutData>* callback);
    // static public System.Void Logout()
    // Offset: 0x1955058
    static void Logout();
    // static public System.Void UploadScore(NetEase.Docker.UploadScoreData scoreData)
    // Offset: 0x19550B8
    static void UploadScore(NetEase::Docker::UploadScoreData scoreData);
    // static public System.Boolean WillProvideHighscore()
    // Offset: 0x195514C
    static bool WillProvideHighscore();
    // static public System.Void SetHighscoreReceivedCallback(System.Action`1<NetEase.Docker.ReceivedHighscoreData> callbackAction)
    // Offset: 0x19551AC
    static void SetHighscoreReceivedCallback(System::Action_1<NetEase::Docker::ReceivedHighscoreData>* callbackAction);
    // static public System.Void RequestHighscoreList(NetEase.Docker.RequestHighscoreData highscoreRequest)
    // Offset: 0x1955214
    static void RequestHighscoreList(NetEase::Docker::RequestHighscoreData highscoreRequest);
    // static public System.Void UpdateLoop()
    // Offset: 0x195528C
    static void UpdateLoop();
  }; // NetEase.DockerWrap
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::DockerWrap*, "NetEase", "DockerWrap");
#pragma pack(pop)
