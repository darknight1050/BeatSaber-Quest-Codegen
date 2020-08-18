// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.RaycastHit2D
#include "UnityEngine/RaycastHit2D.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: ContactFilter2D
  struct ContactFilter2D;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.PhysicsScene2D
  struct PhysicsScene2D : public System::IEquatable_1<UnityEngine::PhysicsScene2D>, public System::ValueType {
    public:
    // private System.Int32 m_Handle
    // Offset: 0x0
    int m_Handle;
    // Creating value type constructor for type: PhysicsScene2D
    PhysicsScene2D(int m_Handle_ = {}) : m_Handle{m_Handle_} {}
    // public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, System.Int32 layerMask)
    // Offset: 0x9C6C6C
    UnityEngine::RaycastHit2D Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, int layerMask);
    // public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter)
    // Offset: 0x9C6C74
    UnityEngine::RaycastHit2D Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter);
    // static private UnityEngine.RaycastHit2D Raycast_Internal(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter)
    // Offset: 0x18C631C
    static UnityEngine::RaycastHit2D Raycast_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter);
    // public System.Int32 Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x9C6CEC
    int Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter, ::Array<UnityEngine::RaycastHit2D>* results);
    // static private System.Int32 RaycastArray_Internal(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x18C643C
    static int RaycastArray_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter, ::Array<UnityEngine::RaycastHit2D>* results);
    // public System.Int32 Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter, System.Collections.Generic.List`1<UnityEngine.RaycastHit2D> results)
    // Offset: 0x9C6D30
    int Raycast(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter, System::Collections::Generic::List_1<UnityEngine::RaycastHit2D>* results);
    // static private System.Int32 RaycastList_Internal(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter, System.Collections.Generic.List`1<UnityEngine.RaycastHit2D> results)
    // Offset: 0x18C6540
    static int RaycastList_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector2 origin, UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter, System::Collections::Generic::List_1<UnityEngine::RaycastHit2D>* results);
    // public System.Int32 GetRayIntersection(UnityEngine.Ray ray, System.Single distance, UnityEngine.RaycastHit2D[] results, System.Int32 layerMask)
    // Offset: 0x9C6D74
    int GetRayIntersection(UnityEngine::Ray ray, float distance, ::Array<UnityEngine::RaycastHit2D>* results, int layerMask);
    // static private System.Int32 GetRayIntersectionArray_Internal(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single distance, System.Int32 layerMask, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x18C6644
    static int GetRayIntersectionArray_Internal(UnityEngine::PhysicsScene2D physicsScene, UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float distance, int layerMask, ::Array<UnityEngine::RaycastHit2D>* results);
    // static private System.Void Raycast_Internal_Injected(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter, UnityEngine.RaycastHit2D ret)
    // Offset: 0x18C63BC
    static void Raycast_Internal_Injected(UnityEngine::PhysicsScene2D& physicsScene, UnityEngine::Vector2& origin, UnityEngine::Vector2& direction, float distance, UnityEngine::ContactFilter2D& contactFilter, UnityEngine::RaycastHit2D& ret);
    // static private System.Int32 RaycastArray_Internal_Injected(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x18C64C0
    static int RaycastArray_Internal_Injected(UnityEngine::PhysicsScene2D& physicsScene, UnityEngine::Vector2& origin, UnityEngine::Vector2& direction, float distance, UnityEngine::ContactFilter2D& contactFilter, ::Array<UnityEngine::RaycastHit2D>* results);
    // static private System.Int32 RaycastList_Internal_Injected(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, UnityEngine.ContactFilter2D contactFilter, System.Collections.Generic.List`1<UnityEngine.RaycastHit2D> results)
    // Offset: 0x18C65C4
    static int RaycastList_Internal_Injected(UnityEngine::PhysicsScene2D& physicsScene, UnityEngine::Vector2& origin, UnityEngine::Vector2& direction, float distance, UnityEngine::ContactFilter2D& contactFilter, System::Collections::Generic::List_1<UnityEngine::RaycastHit2D>* results);
    // static private System.Int32 GetRayIntersectionArray_Internal_Injected(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single distance, System.Int32 layerMask, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x18C66D0
    static int GetRayIntersectionArray_Internal_Injected(UnityEngine::PhysicsScene2D& physicsScene, UnityEngine::Vector3& origin, UnityEngine::Vector3& direction, float distance, int layerMask, ::Array<UnityEngine::RaycastHit2D>* results);
    // public override System.String ToString()
    // Offset: 0x9C6C44
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x9C6C4C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x9C6C54
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(UnityEngine.PhysicsScene2D other)
    // Offset: 0x9C6C5C
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.PhysicsScene2D other)
    bool Equals(UnityEngine::PhysicsScene2D other);
  }; // UnityEngine.PhysicsScene2D
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PhysicsScene2D, "UnityEngine", "PhysicsScene2D");
#pragma pack(pop)
