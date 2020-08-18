// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.IPlayableAsset
#include "UnityEngine/Playables/IPlayableAsset.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Playables.PlayableBinding
#include "UnityEngine/Playables/PlayableBinding.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Autogenerated type: UnityEngine.Playables.PlayableAsset
  class PlayableAsset : public UnityEngine::Playables::IPlayableAsset, public UnityEngine::ScriptableObject {
    public:
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> get_outputs()
    // Offset: 0x1373760
    System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>* get_outputs();
    // static System.Void Internal_CreatePlayable(UnityEngine.Playables.PlayableAsset asset, UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go, System.IntPtr ptr)
    // Offset: 0x13737C8
    static void Internal_CreatePlayable(UnityEngine::Playables::PlayableAsset* asset, UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go, System::IntPtr ptr);
    // static System.Void Internal_GetPlayableAssetDuration(UnityEngine.Playables.PlayableAsset asset, System.IntPtr ptrToDouble)
    // Offset: 0x13738A8
    static void Internal_GetPlayableAssetDuration(UnityEngine::Playables::PlayableAsset* asset, System::IntPtr ptrToDouble);
    // public UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Playables.IPlayableAsset
    // Base method: UnityEngine.Playables.Playable IPlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* owner);
    // public System.Double get_duration()
    // Offset: 0x13736F8
    // Implemented from: UnityEngine.Playables.IPlayableAsset
    // Base method: System.Double IPlayableAsset::get_duration()
    double get_duration();
    // protected System.Void .ctor()
    // Offset: 0x13738DC
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlayableAsset* New_ctor();
  }; // UnityEngine.Playables.PlayableAsset
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableAsset*, "UnityEngine.Playables", "PlayableAsset");
#pragma pack(pop)
