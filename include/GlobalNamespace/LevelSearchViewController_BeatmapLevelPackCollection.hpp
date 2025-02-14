// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LevelSearchViewController
#include "GlobalNamespace/LevelSearchViewController.hpp"
// Including type: IAnnotatedBeatmapLevelCollection
#include "GlobalNamespace/IAnnotatedBeatmapLevelCollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: LevelSearchViewController/BeatmapLevelPackCollection
  class LevelSearchViewController::BeatmapLevelPackCollection : public ::Il2CppObject/*, public GlobalNamespace::IAnnotatedBeatmapLevelCollection*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE2A5B8
    // private IBeatmapLevelCollection <beatmapLevelCollection>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelCollection*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelPackCollection
    BeatmapLevelPackCollection(GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection_ = {}) noexcept : beatmapLevelCollection{beatmapLevelCollection_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IAnnotatedBeatmapLevelCollection
    operator GlobalNamespace::IAnnotatedBeatmapLevelCollection() noexcept {
      return *reinterpret_cast<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::IBeatmapLevelCollection*
    constexpr operator GlobalNamespace::IBeatmapLevelCollection*() const noexcept {
      return beatmapLevelCollection;
    }
    // public System.String get_collectionName()
    // Offset: 0x11FBE58
    ::Il2CppString* get_collectionName();
    // public UnityEngine.Sprite get_coverImage()
    // Offset: 0x11FBE60
    UnityEngine::Sprite* get_coverImage();
    // public IBeatmapLevelCollection get_beatmapLevelCollection()
    // Offset: 0x11FBE68
    GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();
    // private System.Void set_beatmapLevelCollection(IBeatmapLevelCollection value)
    // Offset: 0x11FBE70
    void set_beatmapLevelCollection(GlobalNamespace::IBeatmapLevelCollection* value);
    // public System.Void .ctor(IBeatmapLevelCollection beatmapLevelCollection)
    // Offset: 0x11FBE20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelSearchViewController::BeatmapLevelPackCollection* New_ctor(GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelSearchViewController::BeatmapLevelPackCollection*, creationType>(beatmapLevelCollection)));
    }
  }; // LevelSearchViewController/BeatmapLevelPackCollection
  #pragma pack(pop)
  static check_size<sizeof(LevelSearchViewController::BeatmapLevelPackCollection), 16 + sizeof(GlobalNamespace::IBeatmapLevelCollection*)> __GlobalNamespace_LevelSearchViewController_BeatmapLevelPackCollectionSizeCheck;
  static_assert(sizeof(LevelSearchViewController::BeatmapLevelPackCollection) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection*, "", "LevelSearchViewController/BeatmapLevelPackCollection");
