// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: IPropertyCollector
  class IPropertyCollector;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.IPropertyPreview
  class IPropertyPreview {
    public:
    // Creating value type constructor for type: IPropertyPreview
    IPropertyPreview() noexcept {}
    // public System.Void GatherProperties(UnityEngine.Playables.PlayableDirector director, UnityEngine.Timeline.IPropertyCollector driver)
    // Offset: 0xFFFFFFFF
    void GatherProperties(UnityEngine::Playables::PlayableDirector* director, UnityEngine::Timeline::IPropertyCollector* driver);
  }; // UnityEngine.Timeline.IPropertyPreview
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::IPropertyPreview*, "UnityEngine.Timeline", "IPropertyPreview");
