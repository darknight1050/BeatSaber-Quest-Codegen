// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.RaycastHit2D
#include "UnityEngine/RaycastHit2D.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody2D
  class Rigidbody2D;
  // Forward declaring type: PhysicsScene2D
  struct PhysicsScene2D;
  // Forward declaring type: Ray
  struct Ray;
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: ContactFilter2D
  struct ContactFilter2D;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Physics2D
  // [StaticAccessorAttribute] Offset: DB2AC0
  // [NativeHeaderAttribute] Offset: DB2AC0
  // [NativeHeaderAttribute] Offset: DB2AC0
  // [NativeHeaderAttribute] Offset: DB2AC0
  class Physics2D : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Physics2D
    Physics2D() noexcept {}
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.Rigidbody2D> m_LastDisabledRigidbody2D
    static System::Collections::Generic::List_1<UnityEngine::Rigidbody2D*>* _get_m_LastDisabledRigidbody2D();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.Rigidbody2D> m_LastDisabledRigidbody2D
    static void _set_m_LastDisabledRigidbody2D(System::Collections::Generic::List_1<UnityEngine::Rigidbody2D*>* value);
    // static public UnityEngine.PhysicsScene2D get_defaultPhysicsScene()
    // Offset: 0x23CECE8
    static UnityEngine::PhysicsScene2D get_defaultPhysicsScene();
    // static public System.Boolean get_queriesHitTriggers()
    // Offset: 0x23CECB4
    static bool get_queriesHitTriggers();
    // static public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction)
    // Offset: 0x23CECF0
    static UnityEngine::RaycastHit2D Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction);
    // static public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance)
    // Offset: 0x23CEE98
    static UnityEngine::RaycastHit2D Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance);
    // static public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, System.Int32 layerMask)
    // Offset: 0x23CEF7C
    static UnityEngine::RaycastHit2D Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, int layerMask);
    // static public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, System.Int32 layerMask, System.Single minDepth)
    // Offset: 0x23CF124
    static UnityEngine::RaycastHit2D Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, int layerMask, float minDepth);
    // static public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, System.Int32 layerMask, System.Single minDepth, System.Single maxDepth)
    // Offset: 0x23CF264
    static UnityEngine::RaycastHit2D Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, int layerMask, float minDepth, float maxDepth);
    // static public System.Int32 Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, UnityEngine.ContactFilter2D contactFilter, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x23CF3AC
    static int Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, UnityEngine::ContactFilter2D contactFilter, ::Array<UnityEngine::RaycastHit2D>* results);
    // static public System.Int32 Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, UnityEngine.ContactFilter2D contactFilter, UnityEngine.RaycastHit2D[] results, System.Single distance)
    // Offset: 0x23CF4AC
    static int Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, UnityEngine::ContactFilter2D contactFilter, ::Array<UnityEngine::RaycastHit2D>* results, float distance);
    // static public System.Int32 Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, UnityEngine.ContactFilter2D contactFilter, System.Collections.Generic.List`1<UnityEngine.RaycastHit2D> results, System.Single distance)
    // Offset: 0x23CF580
    static int Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, UnityEngine::ContactFilter2D contactFilter, System::Collections::Generic::List_1<UnityEngine::RaycastHit2D>* results, float distance);
    // static public UnityEngine.RaycastHit2D[] GetRayIntersectionAll(UnityEngine.Ray ray)
    // Offset: 0x23CF688
    static ::Array<UnityEngine::RaycastHit2D>* GetRayIntersectionAll(UnityEngine::Ray ray);
    // static public UnityEngine.RaycastHit2D[] GetRayIntersectionAll(UnityEngine.Ray ray, System.Single distance)
    // Offset: 0x23CF804
    static ::Array<UnityEngine::RaycastHit2D>* GetRayIntersectionAll(UnityEngine::Ray ray, float distance);
    // static public UnityEngine.RaycastHit2D[] GetRayIntersectionAll(UnityEngine.Ray ray, System.Single distance, System.Int32 layerMask)
    // Offset: 0x23CF8C0
    static ::Array<UnityEngine::RaycastHit2D>* GetRayIntersectionAll(UnityEngine::Ray ray, float distance, int layerMask);
    // static private UnityEngine.RaycastHit2D[] GetRayIntersectionAll_Internal(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single distance, System.Int32 layerMask)
    // Offset: 0x23CF744
    static ::Array<UnityEngine::RaycastHit2D>* GetRayIntersectionAll_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float distance, int layerMask);
    // static public System.Int32 GetRayIntersectionNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x23CFA00
    static int GetRayIntersectionNonAlloc(UnityEngine::Ray ray, ::Array<UnityEngine::RaycastHit2D>* results);
    // static public System.Int32 GetRayIntersectionNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit2D[] results, System.Single distance)
    // Offset: 0x23CFB38
    static int GetRayIntersectionNonAlloc(UnityEngine::Ray ray, ::Array<UnityEngine::RaycastHit2D>* results, float distance);
    // static public System.Int32 GetRayIntersectionNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit2D[] results, System.Single distance, System.Int32 layerMask)
    // Offset: 0x23CFBE8
    static int GetRayIntersectionNonAlloc(UnityEngine::Ray ray, ::Array<UnityEngine::RaycastHit2D>* results, float distance, int layerMask);
    // static private System.Void .cctor()
    // Offset: 0x23CFC9C
    static void _cctor();
    // static private UnityEngine.RaycastHit2D[] GetRayIntersectionAll_Internal_Injected(ref UnityEngine.PhysicsScene2D physicsScene, ref UnityEngine.Vector3 origin, ref UnityEngine.Vector3 direction, System.Single distance, System.Int32 layerMask)
    // Offset: 0x23CF988
    static ::Array<UnityEngine::RaycastHit2D>* GetRayIntersectionAll_Internal_Injected(UnityEngine::PhysicsScene2D& physicsScene, UnityEngine::Vector3& origin, UnityEngine::Vector3& direction, float distance, int layerMask);
  }; // UnityEngine.Physics2D
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Physics2D*, "UnityEngine", "Physics2D");
