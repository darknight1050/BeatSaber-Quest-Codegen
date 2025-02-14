// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectType
  struct BeatmapObjectType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectData
  class BeatmapObjectData : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDCCFC8
    // private System.Single <time>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDCCFD8
    // private System.Int32 <lineIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int lineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BeatmapObjectData
    BeatmapObjectData(float time_ = {}, int lineIndex_ = {}) noexcept : time{time_}, lineIndex{lineIndex_} {}
    // public BeatmapObjectType get_beatmapObjectType()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BeatmapObjectType get_beatmapObjectType();
    // public System.Single get_time()
    // Offset: 0x23C46FC
    float get_time();
    // private System.Void set_time(System.Single value)
    // Offset: 0x23C4704
    void set_time(float value);
    // public System.Int32 get_lineIndex()
    // Offset: 0x23C470C
    int get_lineIndex();
    // protected System.Void set_lineIndex(System.Int32 value)
    // Offset: 0x23C4714
    void set_lineIndex(int value);
    // protected System.Void .ctor(System.Single time, System.Int32 lineIndex)
    // Offset: 0x23C471C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectData* New_ctor(float time, int lineIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectData*, creationType>(time, lineIndex)));
    }
    // public System.Void MirrorLineIndex(System.Int32 lineCount)
    // Offset: 0x23C4758
    void MirrorLineIndex(int lineCount);
    // public System.Void MoveTime(System.Single newTime)
    // Offset: 0x23C476C
    void MoveTime(float newTime);
    // public BeatmapObjectData GetCopy()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BeatmapObjectData* GetCopy();
  }; // BeatmapObjectData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectData), 20 + sizeof(int)> __GlobalNamespace_BeatmapObjectDataSizeCheck;
  static_assert(sizeof(BeatmapObjectData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectData*, "", "BeatmapObjectData");
