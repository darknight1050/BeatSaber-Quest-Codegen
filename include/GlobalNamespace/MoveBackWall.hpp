// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  // Autogenerated type: MoveBackWall
  // [] Offset: FFFFFFFF
  class MoveBackWall : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _fadeInRegion
    // Size: 0x4
    // Offset: 0x18
    float fadeInRegion;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: fadeInRegion and: meshRenderer
    char __padding0[0x4] = {};
    // private UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // [InjectAttribute] Offset: 0xDCA9CC
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerTransforms*) == 0x8);
    // private System.Single _thisZ
    // Size: 0x4
    // Offset: 0x30
    float thisZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _isVisible
    // Size: 0x1
    // Offset: 0x34
    bool isVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isVisible and: material
    char __padding4[0x3] = {};
    // private UnityEngine.Material _material
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: MoveBackWall
    MoveBackWall(float fadeInRegion_ = {}, UnityEngine::MeshRenderer* meshRenderer_ = {}, GlobalNamespace::PlayerTransforms* playerTransforms_ = {}, float thisZ_ = {}, bool isVisible_ = {}, UnityEngine::Material* material_ = {}) noexcept : fadeInRegion{fadeInRegion_}, meshRenderer{meshRenderer_}, playerTransforms{playerTransforms_}, thisZ{thisZ_}, isVisible{isVisible_}, material{material_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xFA54EC
    void Start();
    // protected System.Void Update()
    // Offset: 0xFA5554
    void Update();
    // public System.Void .ctor()
    // Offset: 0xFA5684
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MoveBackWall* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MoveBackWall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MoveBackWall*, creationType>()));
    }
  }; // MoveBackWall
  static check_size<sizeof(MoveBackWall), 56 + sizeof(UnityEngine::Material*)> __GlobalNamespace_MoveBackWallSizeCheck;
  static_assert(sizeof(MoveBackWall) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MoveBackWall*, "", "MoveBackWall");
#pragma pack(pop)
