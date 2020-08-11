// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: INoteController
  class INoteController {
    public:
    // public NoteData get_noteData()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::NoteData* get_noteData();
    // public UnityEngine.Transform get_noteTransform()
    // Offset: 0xFFFFFFFF
    UnityEngine::Transform* get_noteTransform();
    // public UnityEngine.Quaternion get_worldRotation()
    // Offset: 0xFFFFFFFF
    UnityEngine::Quaternion get_worldRotation();
    // public UnityEngine.Quaternion get_inverseWorldRotation()
    // Offset: 0xFFFFFFFF
    UnityEngine::Quaternion get_inverseWorldRotation();
    // public UnityEngine.Vector3 get_jumpMoveVec()
    // Offset: 0xFFFFFFFF
    UnityEngine::Vector3 get_jumpMoveVec();
  }; // INoteController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteController*, "", "INoteController");
#pragma pack(pop)
