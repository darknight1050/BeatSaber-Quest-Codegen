// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.EntityBehaviour
#include "UnityEngine/ProBuilder/EntityBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
  // Forward declaring type: LoadSceneMode
  struct LoadSceneMode;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x19
  // Autogenerated type: UnityEngine.ProBuilder.TriggerBehaviour
  // [] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: DE2E24
  class TriggerBehaviour : public UnityEngine::ProBuilder::EntityBehaviour {
    public:
    // Creating value type constructor for type: TriggerBehaviour
    TriggerBehaviour() noexcept {}
    // public override System.Void Initialize()
    // Offset: 0x194E7D8
    // Implemented from: UnityEngine.ProBuilder.EntityBehaviour
    // Base method: System.Void EntityBehaviour::Initialize()
    void Initialize();
    // public override System.Void OnEnterPlayMode()
    // Offset: 0x194E9D0
    // Implemented from: UnityEngine.ProBuilder.EntityBehaviour
    // Base method: System.Void EntityBehaviour::OnEnterPlayMode()
    void OnEnterPlayMode();
    // public override System.Void OnSceneLoaded(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode mode)
    // Offset: 0x194EA80
    // Implemented from: UnityEngine.ProBuilder.EntityBehaviour
    // Base method: System.Void EntityBehaviour::OnSceneLoaded(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode mode)
    void OnSceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode mode);
    // public System.Void .ctor()
    // Offset: 0x194EB30
    // Implemented from: UnityEngine.ProBuilder.EntityBehaviour
    // Base method: System.Void EntityBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TriggerBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::TriggerBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TriggerBehaviour*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.TriggerBehaviour
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::TriggerBehaviour*, "UnityEngine.ProBuilder", "TriggerBehaviour");
#pragma pack(pop)
