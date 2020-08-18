// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Joint
  class Joint : public UnityEngine::Component {
    public:
    // public UnityEngine.Rigidbody get_connectedBody()
    // Offset: 0x18B6420
    UnityEngine::Rigidbody* get_connectedBody();
    // public System.Void set_connectedAnchor(UnityEngine.Vector3 value)
    // Offset: 0x18B6460
    void set_connectedAnchor(UnityEngine::Vector3 value);
    // private System.Void set_connectedAnchor_Injected(UnityEngine.Vector3 value)
    // Offset: 0x18B64B8
    void set_connectedAnchor_Injected(UnityEngine::Vector3& value);
  }; // UnityEngine.Joint
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Joint*, "UnityEngine", "Joint");
#pragma pack(pop)
