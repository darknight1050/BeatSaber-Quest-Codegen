// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.XR.MeshId
#include "UnityEngine/XR/MeshId.hpp"
// Including type: UnityEngine.XR.MeshGenerationStatus
#include "UnityEngine/XR/MeshGenerationStatus.hpp"
// Including type: UnityEngine.XR.MeshVertexAttributes
#include "UnityEngine/XR/MeshVertexAttributes.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: MeshCollider
  class MeshCollider;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Autogenerated type: UnityEngine.XR.MeshGenerationResult
  struct MeshGenerationResult : public System::ValueType, public System::IEquatable_1<UnityEngine::XR::MeshGenerationResult> {
    public:
    // private readonly UnityEngine.XR.MeshId <MeshId>k__BackingField
    // Offset: 0x0
    UnityEngine::XR::MeshId MeshId;
    // private readonly UnityEngine.Mesh <Mesh>k__BackingField
    // Offset: 0x10
    UnityEngine::Mesh* Mesh;
    // private readonly UnityEngine.MeshCollider <MeshCollider>k__BackingField
    // Offset: 0x18
    UnityEngine::MeshCollider* MeshCollider;
    // private readonly UnityEngine.XR.MeshGenerationStatus <Status>k__BackingField
    // Offset: 0x20
    UnityEngine::XR::MeshGenerationStatus Status;
    // private readonly UnityEngine.XR.MeshVertexAttributes <Attributes>k__BackingField
    // Offset: 0x24
    UnityEngine::XR::MeshVertexAttributes Attributes;
    // Creating value type constructor for type: MeshGenerationResult
    MeshGenerationResult(UnityEngine::XR::MeshId MeshId_ = {}, UnityEngine::Mesh* Mesh_ = {}, UnityEngine::MeshCollider* MeshCollider_ = {}, UnityEngine::XR::MeshGenerationStatus Status_ = {}, UnityEngine::XR::MeshVertexAttributes Attributes_ = {}) : MeshId{MeshId_}, Mesh{Mesh_}, MeshCollider{MeshCollider_}, Status{Status_}, Attributes{Attributes_} {}
    // public UnityEngine.XR.MeshId get_MeshId()
    // Offset: 0xA5B454
    UnityEngine::XR::MeshId get_MeshId();
    // public UnityEngine.Mesh get_Mesh()
    // Offset: 0xA5B460
    UnityEngine::Mesh* get_Mesh();
    // public UnityEngine.MeshCollider get_MeshCollider()
    // Offset: 0xA5B468
    UnityEngine::MeshCollider* get_MeshCollider();
    // public UnityEngine.XR.MeshGenerationStatus get_Status()
    // Offset: 0xA5B470
    UnityEngine::XR::MeshGenerationStatus get_Status();
    // public UnityEngine.XR.MeshVertexAttributes get_Attributes()
    // Offset: 0xA5B478
    UnityEngine::XR::MeshVertexAttributes get_Attributes();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA5B480
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::CsObject* obj);
    // public System.Boolean Equals(UnityEngine.XR.MeshGenerationResult other)
    // Offset: 0xA5B488
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.XR.MeshGenerationResult other)
    bool Equals(UnityEngine::XR::MeshGenerationResult other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA5B4C0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.XR.MeshGenerationResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::MeshGenerationResult, "UnityEngine.XR", "MeshGenerationResult");
#pragma pack(pop)
