// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: UnityScenesHelper
  class UnityScenesHelper : public ::CsObject {
    public:
    // static public System.Void SetActiveRootObjectsInScene(UnityEngine.SceneManagement.Scene scene, System.Boolean active)
    // Offset: 0xC9E3F0
    static void SetActiveRootObjectsInScene(UnityEngine::SceneManagement::Scene scene, bool active);
  }; // UnityScenesHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityScenesHelper*, "", "UnityScenesHelper");
#pragma pack(pop)
