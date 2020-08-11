// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CharacterController
  class CharacterController;
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ControllerColliderHit
  class ControllerColliderHit : public ::CsObject {
    public:
    // UnityEngine.CharacterController m_Controller
    // Offset: 0x10
    UnityEngine::CharacterController* m_Controller;
    // UnityEngine.Collider m_Collider
    // Offset: 0x18
    UnityEngine::Collider* m_Collider;
    // UnityEngine.Vector3 m_Point
    // Offset: 0x20
    UnityEngine::Vector3 m_Point;
    // UnityEngine.Vector3 m_Normal
    // Offset: 0x2C
    UnityEngine::Vector3 m_Normal;
    // UnityEngine.Vector3 m_MoveDirection
    // Offset: 0x38
    UnityEngine::Vector3 m_MoveDirection;
    // System.Single m_MoveLength
    // Offset: 0x44
    float m_MoveLength;
    // System.Int32 m_Push
    // Offset: 0x48
    int m_Push;
  }; // UnityEngine.ControllerColliderHit
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ControllerColliderHit*, "UnityEngine", "ControllerColliderHit");
#pragma pack(pop)
