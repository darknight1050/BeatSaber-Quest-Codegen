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
  // Skipping declaration: Object because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AssetObjectListSO
  class AssetObjectListSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private UnityEngine.Object[] _objects
    // Offset: 0x18
    ::Array<UnityEngine::Object*>* objects;
    // public UnityEngine.Object[] get_objects()
    // Offset: 0x18EFF04
    ::Array<UnityEngine::Object*>* get_objects();
    // public System.Void .ctor()
    // Offset: 0x18EFF0C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AssetObjectListSO* New_ctor();
  }; // AssetObjectListSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AssetObjectListSO*, "", "AssetObjectListSO");
#pragma pack(pop)
