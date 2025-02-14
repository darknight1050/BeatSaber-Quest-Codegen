// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableAsset
#include "UnityEngine/Playables/PlayableAsset.hpp"
// Including type: UnityEngine.Timeline.ITimelineClipAsset
#include "UnityEngine/Timeline/ITimelineClipAsset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: ClipCaps
  struct ClipCaps;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.ActivationPlayableAsset
  class ActivationPlayableAsset : public UnityEngine::Playables::PlayableAsset/*, public UnityEngine::Timeline::ITimelineClipAsset*/ {
    public:
    // Creating value type constructor for type: ActivationPlayableAsset
    ActivationPlayableAsset() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::Timeline::ITimelineClipAsset
    operator UnityEngine::Timeline::ITimelineClipAsset() noexcept {
      return *reinterpret_cast<UnityEngine::Timeline::ITimelineClipAsset*>(this);
    }
    // public UnityEngine.Timeline.ClipCaps get_clipCaps()
    // Offset: 0x17BCE00
    UnityEngine::Timeline::ClipCaps get_clipCaps();
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    // Offset: 0x17BCE08
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go);
    // public System.Void .ctor()
    // Offset: 0x17BCE84
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActivationPlayableAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::ActivationPlayableAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActivationPlayableAsset*, creationType>()));
    }
  }; // UnityEngine.Timeline.ActivationPlayableAsset
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ActivationPlayableAsset*, "UnityEngine.Timeline", "ActivationPlayableAsset");
