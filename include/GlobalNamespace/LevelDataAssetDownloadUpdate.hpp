// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: AssetDownloadingState because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LevelDataAssetDownloadUpdate
  struct LevelDataAssetDownloadUpdate : public System::ValueType {
    public:
    // Nested type: GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState
    struct AssetDownloadingState;
    // Autogenerated type: LevelDataAssetDownloadUpdate/AssetDownloadingState
    struct AssetDownloadingState : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public LevelDataAssetDownloadUpdate/AssetDownloadingState PreparingToDownload
      static constexpr const int PreparingToDownload = 0;
      // Get static field: static public LevelDataAssetDownloadUpdate/AssetDownloadingState PreparingToDownload
      static GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState _get_PreparingToDownload();
      // Set static field: static public LevelDataAssetDownloadUpdate/AssetDownloadingState PreparingToDownload
      static void _set_PreparingToDownload(GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState value);
      // static field const value: static public LevelDataAssetDownloadUpdate/AssetDownloadingState Downloading
      static constexpr const int Downloading = 1;
      // Get static field: static public LevelDataAssetDownloadUpdate/AssetDownloadingState Downloading
      static GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState _get_Downloading();
      // Set static field: static public LevelDataAssetDownloadUpdate/AssetDownloadingState Downloading
      static void _set_Downloading(GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState value);
      // static field const value: static public LevelDataAssetDownloadUpdate/AssetDownloadingState Completed
      static constexpr const int Completed = 2;
      // Get static field: static public LevelDataAssetDownloadUpdate/AssetDownloadingState Completed
      static GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState _get_Completed();
      // Set static field: static public LevelDataAssetDownloadUpdate/AssetDownloadingState Completed
      static void _set_Completed(GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState value);
      // Creating value type constructor for type: AssetDownloadingState
      AssetDownloadingState(int value_ = {}) : value{value_} {}
    }; // LevelDataAssetDownloadUpdate/AssetDownloadingState
    // public readonly System.String levelID
    // Offset: 0x0
    ::Il2CppString* levelID;
    // public readonly System.UInt32 bytesTotal
    // Offset: 0x8
    uint bytesTotal;
    // public readonly System.UInt32 bytesTransferred
    // Offset: 0xC
    uint bytesTransferred;
    // public readonly LevelDataAssetDownloadUpdate/AssetDownloadingState assetDownloadingState
    // Offset: 0x10
    GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState assetDownloadingState;
    // Creating value type constructor for type: LevelDataAssetDownloadUpdate
    LevelDataAssetDownloadUpdate(::Il2CppString* levelID_ = {}, uint bytesTotal_ = {}, uint bytesTransferred_ = {}, GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState assetDownloadingState_ = {}) : levelID{levelID_}, bytesTotal{bytesTotal_}, bytesTransferred{bytesTransferred_}, assetDownloadingState{assetDownloadingState_} {}
    // public System.Void .ctor(System.String levelID, System.UInt32 bytesTotal, System.UInt32 bytesTransferred, LevelDataAssetDownloadUpdate/AssetDownloadingState assetDownloadingState)
    // Offset: 0x9917E0
    static LevelDataAssetDownloadUpdate* New_ctor(::Il2CppString* levelID, uint bytesTotal, uint bytesTransferred, GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState assetDownloadingState);
  }; // LevelDataAssetDownloadUpdate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelDataAssetDownloadUpdate, "", "LevelDataAssetDownloadUpdate");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelDataAssetDownloadUpdate::AssetDownloadingState, "", "LevelDataAssetDownloadUpdate/AssetDownloadingState");
#pragma pack(pop)
