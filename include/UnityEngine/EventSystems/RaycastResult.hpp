// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseRaycaster
  class BaseRaycaster;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x48
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.EventSystems.RaycastResult
  struct RaycastResult/*, public System::ValueType*/ {
    public:
    // private UnityEngine.GameObject m_GameObject
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::GameObject* m_GameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.EventSystems.BaseRaycaster module
    // Size: 0x8
    // Offset: 0x8
    UnityEngine::EventSystems::BaseRaycaster* module;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::BaseRaycaster*) == 0x8);
    // public System.Single distance
    // Size: 0x4
    // Offset: 0x10
    float distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single index
    // Size: 0x4
    // Offset: 0x14
    float index;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 depth
    // Size: 0x4
    // Offset: 0x18
    int depth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 sortingLayer
    // Size: 0x4
    // Offset: 0x1C
    int sortingLayer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 sortingOrder
    // Size: 0x4
    // Offset: 0x20
    int sortingOrder;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Vector3 worldPosition
    // Size: 0xC
    // Offset: 0x24
    UnityEngine::Vector3 worldPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 worldNormal
    // Size: 0xC
    // Offset: 0x30
    UnityEngine::Vector3 worldNormal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector2 screenPosition
    // Size: 0x8
    // Offset: 0x3C
    UnityEngine::Vector2 screenPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // public System.Int32 displayIndex
    // Size: 0x4
    // Offset: 0x44
    int displayIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RaycastResult
    constexpr RaycastResult(UnityEngine::GameObject* m_GameObject_ = {}, UnityEngine::EventSystems::BaseRaycaster* module_ = {}, float distance_ = {}, float index_ = {}, int depth_ = {}, int sortingLayer_ = {}, int sortingOrder_ = {}, UnityEngine::Vector3 worldPosition_ = {}, UnityEngine::Vector3 worldNormal_ = {}, UnityEngine::Vector2 screenPosition_ = {}, int displayIndex_ = {}) noexcept : m_GameObject{m_GameObject_}, module{module_}, distance{distance_}, index{index_}, depth{depth_}, sortingLayer{sortingLayer_}, sortingOrder{sortingOrder_}, worldPosition{worldPosition_}, worldNormal{worldNormal_}, screenPosition{screenPosition_}, displayIndex{displayIndex_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public UnityEngine.GameObject get_gameObject()
    // Offset: 0xEED410
    UnityEngine::GameObject* get_gameObject();
    // public System.Void set_gameObject(UnityEngine.GameObject value)
    // Offset: 0xEED418
    void set_gameObject(UnityEngine::GameObject* value);
    // public System.Boolean get_isValid()
    // Offset: 0xEED420
    bool get_isValid();
    // public System.Void Clear()
    // Offset: 0xEED428
    void Clear();
    // public override System.String ToString()
    // Offset: 0xEED430
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.EventSystems.RaycastResult
  #pragma pack(pop)
  static check_size<sizeof(RaycastResult), 68 + sizeof(int)> __UnityEngine_EventSystems_RaycastResultSizeCheck;
  static_assert(sizeof(RaycastResult) == 0x48);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::RaycastResult, "UnityEngine.EventSystems", "RaycastResult");
