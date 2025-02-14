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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: MeshType because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: OVRMesh
  // [DefaultExecutionOrder] Offset: DCDCE8
  class OVRMesh : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRMesh::IOVRMeshDataProvider
    class IOVRMeshDataProvider;
    // Nested type: GlobalNamespace::OVRMesh::MeshType
    struct MeshType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRMesh/MeshType
    struct MeshType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: MeshType
      constexpr MeshType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRMesh/MeshType None
      static constexpr const int None = -1;
      // Get static field: static public OVRMesh/MeshType None
      static GlobalNamespace::OVRMesh::MeshType _get_None();
      // Set static field: static public OVRMesh/MeshType None
      static void _set_None(GlobalNamespace::OVRMesh::MeshType value);
      // static field const value: static public OVRMesh/MeshType HandLeft
      static constexpr const int HandLeft = 0;
      // Get static field: static public OVRMesh/MeshType HandLeft
      static GlobalNamespace::OVRMesh::MeshType _get_HandLeft();
      // Set static field: static public OVRMesh/MeshType HandLeft
      static void _set_HandLeft(GlobalNamespace::OVRMesh::MeshType value);
      // static field const value: static public OVRMesh/MeshType HandRight
      static constexpr const int HandRight = 1;
      // Get static field: static public OVRMesh/MeshType HandRight
      static GlobalNamespace::OVRMesh::MeshType _get_HandRight();
      // Set static field: static public OVRMesh/MeshType HandRight
      static void _set_HandRight(GlobalNamespace::OVRMesh::MeshType value);
    }; // OVRMesh/MeshType
    #pragma pack(pop)
    static check_size<sizeof(OVRMesh::MeshType), 0 + sizeof(int)> __GlobalNamespace_OVRMesh_MeshTypeSizeCheck;
    static_assert(sizeof(OVRMesh::MeshType) == 0x4);
    // private OVRMesh/IOVRMeshDataProvider _dataProvider
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::OVRMesh::IOVRMeshDataProvider* dataProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRMesh::IOVRMeshDataProvider*) == 0x8);
    // private OVRMesh/MeshType _meshType
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::OVRMesh::MeshType meshType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRMesh::MeshType) == 0x4);
    // Padding between fields: meshType and: mesh
    char __padding1[0x4] = {};
    // private UnityEngine.Mesh _mesh
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD0F94
    // private System.Boolean <IsInitialized>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool IsInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OVRMesh
    OVRMesh(GlobalNamespace::OVRMesh::IOVRMeshDataProvider* dataProvider_ = {}, GlobalNamespace::OVRMesh::MeshType meshType_ = {}, UnityEngine::Mesh* mesh_ = {}, bool IsInitialized_ = {}) noexcept : dataProvider{dataProvider_}, meshType{meshType_}, mesh{mesh_}, IsInitialized{IsInitialized_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_IsInitialized()
    // Offset: 0x12CF978
    bool get_IsInitialized();
    // private System.Void set_IsInitialized(System.Boolean value)
    // Offset: 0x12CF980
    void set_IsInitialized(bool value);
    // public UnityEngine.Mesh get_Mesh()
    // Offset: 0x12CF98C
    UnityEngine::Mesh* get_Mesh();
    // private System.Void Awake()
    // Offset: 0x12CF994
    void Awake();
    // private System.Boolean ShouldInitialize()
    // Offset: 0x12CFA8C
    bool ShouldInitialize();
    // private System.Void Initialize(OVRMesh/MeshType meshType)
    // Offset: 0x12CFAAC
    void Initialize(GlobalNamespace::OVRMesh::MeshType meshType);
    // public System.Void .ctor()
    // Offset: 0x12D0178
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRMesh* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRMesh*, creationType>()));
    }
  }; // OVRMesh
  #pragma pack(pop)
  static check_size<sizeof(OVRMesh), 48 + sizeof(bool)> __GlobalNamespace_OVRMeshSizeCheck;
  static_assert(sizeof(OVRMesh) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMesh*, "", "OVRMesh");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMesh::MeshType, "", "OVRMesh/MeshType");
