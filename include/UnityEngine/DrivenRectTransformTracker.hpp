// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: DrivenTransformProperties
  struct DrivenTransformProperties;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.DrivenRectTransformTracker
  struct DrivenRectTransformTracker/*, public System::ValueType*/ {
    public:
    // Creating value type constructor for type: DrivenRectTransformTracker
    constexpr DrivenRectTransformTracker() noexcept {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void Add(UnityEngine.Object driver, UnityEngine.RectTransform rectTransform, UnityEngine.DrivenTransformProperties drivenProperties)
    // Offset: 0xF06A48
    void Add(UnityEngine::Object* driver, UnityEngine::RectTransform* rectTransform, UnityEngine::DrivenTransformProperties drivenProperties);
    // public System.Void Clear()
    // Offset: 0xF06A4C
    void Clear();
  }; // UnityEngine.DrivenRectTransformTracker
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::DrivenRectTransformTracker, "UnityEngine", "DrivenRectTransformTracker");
