// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelLoader
  class BeatmapLevelLoader : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelResult
    struct LoadBeatmapLevelResult;
    // Nested type: GlobalNamespace::BeatmapLevelLoader::$LoadBeatmapLevelAsync$d__4
    struct $LoadBeatmapLevelAsync$d__4;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: BeatmapLevelLoader/LoadBeatmapLevelResult
    struct LoadBeatmapLevelResult/*, public System::ValueType*/ {
      public:
      // public readonly System.Boolean isError
      // Size: 0x1
      // Offset: 0x0
      bool isError;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: isError and: beatmapLevel
      char __padding0[0x7] = {};
      // public readonly IBeatmapLevel beatmapLevel
      // Size: 0x8
      // Offset: 0x8
      GlobalNamespace::IBeatmapLevel* beatmapLevel;
      // Field size check
      static_assert(sizeof(GlobalNamespace::IBeatmapLevel*) == 0x8);
      // Creating value type constructor for type: LoadBeatmapLevelResult
      constexpr LoadBeatmapLevelResult(bool isError_ = {}, GlobalNamespace::IBeatmapLevel* beatmapLevel_ = {}) noexcept : isError{isError_}, beatmapLevel{beatmapLevel_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Void .ctor(System.Boolean isError, IBeatmapLevel beatmapLevel)
      // Offset: 0xEE3B8C
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  LoadBeatmapLevelResult(bool isError, GlobalNamespace::IBeatmapLevel* beatmapLevel)
    }; // BeatmapLevelLoader/LoadBeatmapLevelResult
    #pragma pack(pop)
    static check_size<sizeof(BeatmapLevelLoader::LoadBeatmapLevelResult), 8 + sizeof(GlobalNamespace::IBeatmapLevel*)> __GlobalNamespace_BeatmapLevelLoader_LoadBeatmapLevelResultSizeCheck;
    static_assert(sizeof(BeatmapLevelLoader::LoadBeatmapLevelResult) == 0x10);
    // private BeatmapLevelDataLoaderSO _beatmapLevelDataLoader
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BeatmapLevelDataLoaderSO* beatmapLevelDataLoader;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelDataLoaderSO*) == 0x8);
    // private IBeatmapDataAssetFileModel _beatmapDataAssetFileModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapDataAssetFileModel*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelLoader
    BeatmapLevelLoader(GlobalNamespace::BeatmapLevelDataLoaderSO* beatmapLevelDataLoader_ = {}, GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel_ = {}) noexcept : beatmapLevelDataLoader{beatmapLevelDataLoader_}, beatmapDataAssetFileModel{beatmapDataAssetFileModel_} {}
    // public System.Void .ctor(BeatmapLevelDataLoaderSO beatmapLevelDataLoader, IBeatmapDataAssetFileModel beatmapDataAssetFileModel)
    // Offset: 0x1075904
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelLoader* New_ctor(GlobalNamespace::BeatmapLevelDataLoaderSO* beatmapLevelDataLoader, GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelLoader*, creationType>(beatmapLevelDataLoader, beatmapDataAssetFileModel)));
    }
    // public System.Threading.Tasks.Task`1<BeatmapLevelLoader/LoadBeatmapLevelResult> LoadBeatmapLevelAsync(IPreviewBeatmapLevel previewLevel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x107593C
    System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelResult>* LoadBeatmapLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewLevel, System::Threading::CancellationToken cancellationToken);
  }; // BeatmapLevelLoader
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelLoader), 24 + sizeof(GlobalNamespace::IBeatmapDataAssetFileModel*)> __GlobalNamespace_BeatmapLevelLoaderSizeCheck;
  static_assert(sizeof(BeatmapLevelLoader) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelLoader*, "", "BeatmapLevelLoader");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelResult, "", "BeatmapLevelLoader/LoadBeatmapLevelResult");
