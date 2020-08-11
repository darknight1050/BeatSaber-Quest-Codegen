// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapLevelDataLoaderSO
  class BeatmapLevelDataLoaderSO;
  // Forward declaring type: IBeatmapDataAssetFileModel
  class IBeatmapDataAssetFileModel;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
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
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelLoader
  class BeatmapLevelLoader : public ::CsObject {
    public:
    // Nested type: GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelResult
    struct LoadBeatmapLevelResult;
    // Nested type: GlobalNamespace::BeatmapLevelLoader::$LoadBeatmapLevelAsync$d__4
    struct $LoadBeatmapLevelAsync$d__4;
    // Autogenerated type: BeatmapLevelLoader/LoadBeatmapLevelResult
    struct LoadBeatmapLevelResult : public System::ValueType {
      public:
      // public readonly System.Boolean isError
      // Offset: 0x0
      bool isError;
      // public readonly IBeatmapLevel beatmapLevel
      // Offset: 0x8
      GlobalNamespace::IBeatmapLevel* beatmapLevel;
      // Creating value type constructor for type: LoadBeatmapLevelResult
      LoadBeatmapLevelResult(bool isError_ = {}, GlobalNamespace::IBeatmapLevel* beatmapLevel_ = {}) : isError{isError_}, beatmapLevel{beatmapLevel_} {}
      // public System.Void .ctor(System.Boolean isError, IBeatmapLevel beatmapLevel)
      // Offset: 0xA2696C
      static BeatmapLevelLoader::LoadBeatmapLevelResult* New_ctor(bool isError, GlobalNamespace::IBeatmapLevel* beatmapLevel);
    }; // BeatmapLevelLoader/LoadBeatmapLevelResult
    // private BeatmapLevelDataLoaderSO _beatmapLevelDataLoader
    // Offset: 0x10
    GlobalNamespace::BeatmapLevelDataLoaderSO* beatmapLevelDataLoader;
    // private IBeatmapDataAssetFileModel _beatmapDataAssetFileModel
    // Offset: 0x18
    GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel;
    // public System.Void .ctor(BeatmapLevelDataLoaderSO beatmapLevelDataLoader, IBeatmapDataAssetFileModel beatmapDataAssetFileModel)
    // Offset: 0xB52424
    static BeatmapLevelLoader* New_ctor(GlobalNamespace::BeatmapLevelDataLoaderSO* beatmapLevelDataLoader, GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel);
    // public System.Threading.Tasks.Task`1<BeatmapLevelLoader/LoadBeatmapLevelResult> LoadBeatmapLevelAsync(IPreviewBeatmapLevel previewLevel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xB52474
    System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelResult>* LoadBeatmapLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewLevel, System::Threading::CancellationToken cancellationToken);
  }; // BeatmapLevelLoader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelLoader*, "", "BeatmapLevelLoader");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelResult, "", "BeatmapLevelLoader/LoadBeatmapLevelResult");
#pragma pack(pop)
