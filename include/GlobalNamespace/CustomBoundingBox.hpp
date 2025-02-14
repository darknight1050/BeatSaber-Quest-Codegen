// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: CustomBoundingBox
  class CustomBoundingBox : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.MeshFilter _meshFilter
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::MeshFilter* meshFilter;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshFilter*) == 0x8);
    // private UnityEngine.Vector3 _boundingBoxCenter
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Vector3 boundingBoxCenter;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _boundingBoxSize
    // Size: 0xC
    // Offset: 0x2C
    UnityEngine::Vector3 boundingBoxSize;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // Creating value type constructor for type: CustomBoundingBox
    CustomBoundingBox(UnityEngine::MeshFilter* meshFilter_ = {}, UnityEngine::Vector3 boundingBoxCenter_ = {}, UnityEngine::Vector3 boundingBoxSize_ = {}, UnityEngine::MeshRenderer* meshRenderer_ = {}) noexcept : meshFilter{meshFilter_}, boundingBoxCenter{boundingBoxCenter_}, boundingBoxSize{boundingBoxSize_}, meshRenderer{meshRenderer_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x12242E8
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x12243F8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomBoundingBox* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CustomBoundingBox::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomBoundingBox*, creationType>()));
    }
  }; // CustomBoundingBox
  #pragma pack(pop)
  static check_size<sizeof(CustomBoundingBox), 56 + sizeof(UnityEngine::MeshRenderer*)> __GlobalNamespace_CustomBoundingBoxSizeCheck;
  static_assert(sizeof(CustomBoundingBox) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomBoundingBox*, "", "CustomBoundingBox");
