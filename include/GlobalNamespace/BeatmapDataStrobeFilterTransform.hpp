// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: EnvironmentIntensityReductionOptions
  class EnvironmentIntensityReductionOptions;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataStrobeFilterTransform
  class BeatmapDataStrobeFilterTransform : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData
    class StrobeStreakData;
    // Nested type: GlobalNamespace::BeatmapDataStrobeFilterTransform::$$c__DisplayClass2_0
    struct $$c__DisplayClass2_0;
    // Creating value type constructor for type: BeatmapDataStrobeFilterTransform
    BeatmapDataStrobeFilterTransform() noexcept {}
    // static field const value: static private System.Single kMaxSecondsToConsiderStrobe
    static constexpr const float kMaxSecondsToConsiderStrobe = 0.1;
    // Get static field: static private System.Single kMaxSecondsToConsiderStrobe
    static float _get_kMaxSecondsToConsiderStrobe();
    // Set static field: static private System.Single kMaxSecondsToConsiderStrobe
    static void _set_kMaxSecondsToConsiderStrobe(float value);
    // static public IReadonlyBeatmapData CreateTransformedData(IReadonlyBeatmapData beatmapData, EnvironmentIntensityReductionOptions environmentIntensityReductionOptions)
    // Offset: 0x11ABE54
    static GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(GlobalNamespace::IReadonlyBeatmapData* beatmapData, GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions);
    // static System.Void <CreateTransformedData>g__IncreaseAllLaterStrobeStartEndIndexes|2_0(System.Single insertionTime, ref BeatmapDataStrobeFilterTransform/<>c__DisplayClass2_0 )
    // Offset: 0x11AC654
    static void $CreateTransformedData$g__IncreaseAllLaterStrobeStartEndIndexes_2_0(float insertionTime, GlobalNamespace::BeatmapDataStrobeFilterTransform::$$c__DisplayClass2_0& param_1);
  }; // BeatmapDataStrobeFilterTransform
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataStrobeFilterTransform*, "", "BeatmapDataStrobeFilterTransform");
