// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: PropertyName
  struct PropertyName;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.IExposedPropertyTable
  class IExposedPropertyTable {
    public:
    // Creating value type constructor for type: IExposedPropertyTable
    IExposedPropertyTable() noexcept {}
    // public UnityEngine.Object GetReferenceValue(UnityEngine.PropertyName id, out System.Boolean idValid)
    // Offset: 0xFFFFFFFF
    UnityEngine::Object* GetReferenceValue(UnityEngine::PropertyName id, bool& idValid);
  }; // UnityEngine.IExposedPropertyTable
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::IExposedPropertyTable*, "UnityEngine", "IExposedPropertyTable");
