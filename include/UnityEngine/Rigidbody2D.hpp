// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rigidbody2D
  // [NativeHeaderAttribute] Offset: DB2D48
  // [RequireComponent] Offset: DB2D48
  class Rigidbody2D : public UnityEngine::Component {
    public:
    // Creating value type constructor for type: Rigidbody2D
    Rigidbody2D() noexcept {}
    // public UnityEngine.Vector2 get_position()
    // Offset: 0x23D0390
    UnityEngine::Vector2 get_position();
    // public UnityEngine.Vector2 get_velocity()
    // Offset: 0x23D0438
    UnityEngine::Vector2 get_velocity();
    // public System.Void set_velocity(UnityEngine.Vector2 value)
    // Offset: 0x23D04E0
    void set_velocity(UnityEngine::Vector2 value);
    // public System.Void Sleep()
    // Offset: 0x23D0584
    void Sleep();
    // private System.Void get_position_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x23D03E8
    void get_position_Injected(UnityEngine::Vector2& ret);
    // private System.Void get_velocity_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x23D0490
    void get_velocity_Injected(UnityEngine::Vector2& ret);
    // private System.Void set_velocity_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x23D0534
    void set_velocity_Injected(UnityEngine::Vector2& value);
  }; // UnityEngine.Rigidbody2D
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rigidbody2D*, "UnityEngine", "Rigidbody2D");
