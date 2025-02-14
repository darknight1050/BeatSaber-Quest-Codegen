// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapDataAssetFileModel
#include "GlobalNamespace/IBeatmapDataAssetFileModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PS4BeatmapDataAssetFileModel
  class PS4BeatmapDataAssetFileModel : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapDataAssetFileModel*/ {
    public:
    // Nested type: GlobalNamespace::PS4BeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__3
    struct $GetAssetBundleFileForPreviewLevelAsync$d__3;
    // Nested type: GlobalNamespace::PS4BeatmapDataAssetFileModel::$TryDeleteAssetBundleFileForPreviewLevelAsync$d__4
    struct $TryDeleteAssetBundleFileForPreviewLevelAsync$d__4;
    // [CompilerGeneratedAttribute] Offset: 0xE181D4
    // private System.Action`1<LevelDataAssetDownloadUpdate> levelDataAssetDownloadUpdateEvent
    // Size: 0x8
    // Offset: 0x10
    System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* levelDataAssetDownloadUpdateEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*) == 0x8);
    // Creating value type constructor for type: PS4BeatmapDataAssetFileModel
    PS4BeatmapDataAssetFileModel(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* levelDataAssetDownloadUpdateEvent_ = {}) noexcept : levelDataAssetDownloadUpdateEvent{levelDataAssetDownloadUpdateEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapDataAssetFileModel
    operator GlobalNamespace::IBeatmapDataAssetFileModel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapDataAssetFileModel*>(this);
    }
    // Creating conversion operator: operator System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*
    constexpr operator System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*() const noexcept {
      return levelDataAssetDownloadUpdateEvent;
    }
    // public System.Void add_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    // Offset: 0x10054E0
    void add_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* value);
    // public System.Void remove_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    // Offset: 0x1005584
    void remove_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* value);
    // public System.Threading.Tasks.Task`1<GetAssetBundleFileResult> GetAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1005628
    System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<System.Boolean> TryDeleteAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1005728
    System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0x1005828
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4BeatmapDataAssetFileModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PS4BeatmapDataAssetFileModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4BeatmapDataAssetFileModel*, creationType>()));
    }
  }; // PS4BeatmapDataAssetFileModel
  #pragma pack(pop)
  static check_size<sizeof(PS4BeatmapDataAssetFileModel), 16 + sizeof(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*)> __GlobalNamespace_PS4BeatmapDataAssetFileModelSizeCheck;
  static_assert(sizeof(PS4BeatmapDataAssetFileModel) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4BeatmapDataAssetFileModel*, "", "PS4BeatmapDataAssetFileModel");
