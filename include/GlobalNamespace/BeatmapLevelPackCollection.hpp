// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapLevelPackCollection
#include "GlobalNamespace/IBeatmapLevelPackCollection.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelPackCollection
  class BeatmapLevelPackCollection : public GlobalNamespace::IBeatmapLevelPackCollection, public ::Il2CppObject {
    public:
    // private IBeatmapLevelPack[] _beatmapLevelPacks
    // Offset: 0x10
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks;
    // public System.Void .ctor(IBeatmapLevelPack[] beatmapLevelPacks)
    // Offset: 0x18D85F4
    static BeatmapLevelPackCollection* New_ctor(::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks);
    // public IBeatmapLevelPack[] get_beatmapLevelPacks()
    // Offset: 0x18D85EC
    // Implemented from: IBeatmapLevelPackCollection
    // Base method: IBeatmapLevelPack[] IBeatmapLevelPackCollection::get_beatmapLevelPacks()
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* get_beatmapLevelPacks();
  }; // BeatmapLevelPackCollection
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelPackCollection*, "", "BeatmapLevelPackCollection");
#pragma pack(pop)
