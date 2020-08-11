// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private BeatmapCharacteristicSO[] _beatmapCharacteristics
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapCharacteristicSO*>* beatmapCharacteristics;
    // public BeatmapCharacteristicSO[] get_beatmapCharacteristics()
    // Offset: 0x19766C0
    ::Array<GlobalNamespace::BeatmapCharacteristicSO*>* get_beatmapCharacteristics();
    // public System.Void set_beatmapCharacteristics(BeatmapCharacteristicSO[] value)
    // Offset: 0x19766C8
    void set_beatmapCharacteristics(::Array<GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public BeatmapCharacteristicSO GetBeatmapCharacteristicBySerializedName(System.String serializedName)
    // Offset: 0x19766D0
    GlobalNamespace::BeatmapCharacteristicSO* GetBeatmapCharacteristicBySerializedName(::CsString* serializedName);
    // public System.Boolean ContainsBeatmapCharacteristic(BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x197675C
    bool ContainsBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // public System.Void .ctor()
    // Offset: 0x197683C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapCharacteristicCollectionSO* New_ctor();
  }; // BeatmapCharacteristicCollectionSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicCollectionSO*, "", "BeatmapCharacteristicCollectionSO");
#pragma pack(pop)
