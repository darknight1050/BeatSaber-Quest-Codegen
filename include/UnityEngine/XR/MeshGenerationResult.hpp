// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.MeshGenerationResult
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: CC9C90
  // [NativeHeaderAttribute] Offset: CC9C90
  struct MeshGenerationResult/*, public System::ValueType, public System::IEquatable_1<UnityEngine::XR::MeshGenerationResult>*/ {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xCCA0D0
    // [CompilerGeneratedAttribute] Offset: 0xCCA0D0
    // private readonly UnityEngine.XR.MeshId <MeshId>k__BackingField
    // Size: 0x10
    // Offset: 0x0
    UnityEngine::XR::MeshId MeshId;
    // Field size check
    static_assert(sizeof(UnityEngine::XR::MeshId) == 0x10);
    // [DebuggerBrowsableAttribute] Offset: 0xCCA10C
    // [CompilerGeneratedAttribute] Offset: 0xCCA10C
    // private readonly UnityEngine.Mesh <Mesh>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Mesh* Mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xCCA148
    // [CompilerGeneratedAttribute] Offset: 0xCCA148
    // private readonly UnityEngine.MeshCollider <MeshCollider>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::MeshCollider* MeshCollider;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshCollider*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xCCA184
    // [CompilerGeneratedAttribute] Offset: 0xCCA184
    // private readonly UnityEngine.XR.MeshGenerationStatus <Status>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    UnityEngine::XR::MeshGenerationStatus Status;
    // Field size check
    static_assert(sizeof(UnityEngine::XR::MeshGenerationStatus) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xCCA1C0
    // [DebuggerBrowsableAttribute] Offset: 0xCCA1C0
    // private readonly UnityEngine.XR.MeshVertexAttributes <Attributes>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    UnityEngine::XR::MeshVertexAttributes Attributes;
    // Field size check
    static_assert(sizeof(UnityEngine::XR::MeshVertexAttributes) == 0x4);
    // Creating value type constructor for type: MeshGenerationResult
    constexpr MeshGenerationResult(UnityEngine::XR::MeshId MeshId_ = {}, UnityEngine::Mesh* Mesh_ = {}, UnityEngine::MeshCollider* MeshCollider_ = {}, UnityEngine::XR::MeshGenerationStatus Status_ = {}, UnityEngine::XR::MeshVertexAttributes Attributes_ = {}) noexcept : MeshId{MeshId_}, Mesh{Mesh_}, MeshCollider{MeshCollider_}, Status{Status_}, Attributes{Attributes_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::XR::MeshGenerationResult>
    operator System::IEquatable_1<UnityEngine::XR::MeshGenerationResult>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::XR::MeshGenerationResult>*>(this);
    }
    // public UnityEngine.XR.MeshId get_MeshId()
    // Offset: 0xE16474
    UnityEngine::XR::MeshId get_MeshId();
    // public UnityEngine.Mesh get_Mesh()
    // Offset: 0xE16480
    UnityEngine::Mesh* get_Mesh();
    // public UnityEngine.MeshCollider get_MeshCollider()
    // Offset: 0xE16488
    UnityEngine::MeshCollider* get_MeshCollider();
    // public UnityEngine.XR.MeshGenerationStatus get_Status()
    // Offset: 0xE16490
    UnityEngine::XR::MeshGenerationStatus get_Status();
    // public UnityEngine.XR.MeshVertexAttributes get_Attributes()
    // Offset: 0xE16498
    UnityEngine::XR::MeshVertexAttributes get_Attributes();
    // public System.Boolean Equals(UnityEngine.XR.MeshGenerationResult other)
    // Offset: 0xE164A8
    bool Equals_NEW(UnityEngine::XR::MeshGenerationResult other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xE164A0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE164E0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.XR.MeshGenerationResult
  #pragma pack(pop)
  static check_size<sizeof(MeshGenerationResult), 36 + sizeof(UnityEngine::XR::MeshVertexAttributes)> __UnityEngine_XR_MeshGenerationResultSizeCheck;
  static_assert(sizeof(MeshGenerationResult) == 0x28);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::MeshGenerationResult, "UnityEngine.XR", "MeshGenerationResult");
