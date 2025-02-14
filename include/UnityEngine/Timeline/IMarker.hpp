// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.IMarker
  class IMarker {
    public:
    // Creating value type constructor for type: IMarker
    IMarker() noexcept {}
    // public System.Double get_time()
    // Offset: 0xFFFFFFFF
    double get_time();
    // public System.Void set_time(System.Double value)
    // Offset: 0xFFFFFFFF
    void set_time(double value);
    // public UnityEngine.Timeline.TrackAsset get_parent()
    // Offset: 0xFFFFFFFF
    UnityEngine::Timeline::TrackAsset* get_parent();
    // public System.Void Initialize(UnityEngine.Timeline.TrackAsset parent)
    // Offset: 0xFFFFFFFF
    void Initialize(UnityEngine::Timeline::TrackAsset* parent);
  }; // UnityEngine.Timeline.IMarker
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::IMarker*, "UnityEngine.Timeline", "IMarker");
