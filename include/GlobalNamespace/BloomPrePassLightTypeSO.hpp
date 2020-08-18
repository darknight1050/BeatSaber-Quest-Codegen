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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomPrePassLightTypeSO
  class BloomPrePassLightTypeSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.Int32 _renderingPriority
    // Offset: 0x18
    int renderingPriority;
    // private UnityEngine.Material _material
    // Offset: 0x20
    UnityEngine::Material* material;
    // public System.Int32 get_renderingPriority()
    // Offset: 0x177CAE4
    int get_renderingPriority();
    // public UnityEngine.Material get_material()
    // Offset: 0x177CAEC
    UnityEngine::Material* get_material();
    // public System.Void .ctor()
    // Offset: 0x177CAF4
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BloomPrePassLightTypeSO* New_ctor();
  }; // BloomPrePassLightTypeSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassLightTypeSO*, "", "BloomPrePassLightTypeSO");
#pragma pack(pop)
