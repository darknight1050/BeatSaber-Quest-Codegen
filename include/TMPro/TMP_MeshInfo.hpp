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
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: VertexSortingOrder
  struct VertexSortingOrder;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x48
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.TMP_MeshInfo
  struct TMP_MeshInfo/*, public System::ValueType*/ {
    public:
    // public UnityEngine.Mesh mesh
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    // public System.Int32 vertexCount
    // Size: 0x4
    // Offset: 0x8
    int vertexCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: vertexCount and: vertices
    char __padding1[0x4] = {};
    // public UnityEngine.Vector3[] vertices
    // Size: 0x8
    // Offset: 0x10
    ::Array<UnityEngine::Vector3>* vertices;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // public UnityEngine.Vector3[] normals
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::Vector3>* normals;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // public UnityEngine.Vector4[] tangents
    // Size: 0x8
    // Offset: 0x20
    ::Array<UnityEngine::Vector4>* tangents;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector4>*) == 0x8);
    // public UnityEngine.Vector2[] uvs0
    // Size: 0x8
    // Offset: 0x28
    ::Array<UnityEngine::Vector2>* uvs0;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector2>*) == 0x8);
    // public UnityEngine.Vector2[] uvs2
    // Size: 0x8
    // Offset: 0x30
    ::Array<UnityEngine::Vector2>* uvs2;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector2>*) == 0x8);
    // public UnityEngine.Color32[] colors32
    // Size: 0x8
    // Offset: 0x38
    ::Array<UnityEngine::Color32>* colors32;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Color32>*) == 0x8);
    // public System.Int32[] triangles
    // Size: 0x8
    // Offset: 0x40
    ::Array<int>* triangles;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // Creating value type constructor for type: TMP_MeshInfo
    constexpr TMP_MeshInfo(UnityEngine::Mesh* mesh_ = {}, int vertexCount_ = {}, ::Array<UnityEngine::Vector3>* vertices_ = {}, ::Array<UnityEngine::Vector3>* normals_ = {}, ::Array<UnityEngine::Vector4>* tangents_ = {}, ::Array<UnityEngine::Vector2>* uvs0_ = {}, ::Array<UnityEngine::Vector2>* uvs2_ = {}, ::Array<UnityEngine::Color32>* colors32_ = {}, ::Array<int>* triangles_ = {}) noexcept : mesh{mesh_}, vertexCount{vertexCount_}, vertices{vertices_}, normals{normals_}, tangents{tangents_}, uvs0{uvs0_}, uvs2{uvs2_}, colors32{colors32_}, triangles{triangles_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get static field: static private readonly UnityEngine.Color32 s_DefaultColor
    static UnityEngine::Color32 _get_s_DefaultColor();
    // Set static field: static private readonly UnityEngine.Color32 s_DefaultColor
    static void _set_s_DefaultColor(UnityEngine::Color32 value);
    // Get static field: static private readonly UnityEngine.Vector3 s_DefaultNormal
    static UnityEngine::Vector3 _get_s_DefaultNormal();
    // Set static field: static private readonly UnityEngine.Vector3 s_DefaultNormal
    static void _set_s_DefaultNormal(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
    static UnityEngine::Vector4 _get_s_DefaultTangent();
    // Set static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
    static void _set_s_DefaultTangent(UnityEngine::Vector4 value);
    // Get static field: static private readonly UnityEngine.Bounds s_DefaultBounds
    static UnityEngine::Bounds _get_s_DefaultBounds();
    // Set static field: static private readonly UnityEngine.Bounds s_DefaultBounds
    static void _set_s_DefaultBounds(UnityEngine::Bounds value);
    // public System.Void .ctor(UnityEngine.Mesh mesh, System.Int32 size)
    // Offset: 0xEE4F3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    TMP_MeshInfo(UnityEngine::Mesh* mesh, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_MeshInfo::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(mesh), ::il2cpp_utils::ExtractType(size)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, mesh, size);
    }
    // public System.Void .ctor(UnityEngine.Mesh mesh, System.Int32 size, System.Boolean isVolumetric)
    // Offset: 0xEE4F44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    TMP_MeshInfo(UnityEngine::Mesh* mesh, int size, bool isVolumetric) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_MeshInfo::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(mesh), ::il2cpp_utils::ExtractType(size), ::il2cpp_utils::ExtractType(isVolumetric)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, mesh, size, isVolumetric);
    }
    // public System.Void ResizeMeshInfo(System.Int32 size)
    // Offset: 0xEE4F50
    void ResizeMeshInfo(int size);
    // public System.Void ResizeMeshInfo(System.Int32 size, System.Boolean isVolumetric)
    // Offset: 0xEE4F58
    void ResizeMeshInfo(int size, bool isVolumetric);
    // public System.Void Clear()
    // Offset: 0xEE4F64
    void Clear();
    // public System.Void Clear(System.Boolean uploadChanges)
    // Offset: 0xEE4F6C
    void Clear(bool uploadChanges);
    // public System.Void ClearUnusedVertices()
    // Offset: 0xEE4F78
    void ClearUnusedVertices();
    // public System.Void ClearUnusedVertices(System.Int32 startIndex)
    // Offset: 0xEE4F80
    void ClearUnusedVertices(int startIndex);
    // public System.Void ClearUnusedVertices(System.Int32 startIndex, System.Boolean updateMesh)
    // Offset: 0xEE4F88
    void ClearUnusedVertices(int startIndex, bool updateMesh);
    // public System.Void SortGeometry(TMPro.VertexSortingOrder order)
    // Offset: 0xEE4F94
    void SortGeometry(TMPro::VertexSortingOrder order);
    // public System.Void SortGeometry(System.Collections.Generic.IList`1<System.Int32> sortingOrder)
    // Offset: 0xEE4F9C
    void SortGeometry(System::Collections::Generic::IList_1<int>* sortingOrder);
    // public System.Void SwapVertexData(System.Int32 src, System.Int32 dst)
    // Offset: 0xEE4FA4
    void SwapVertexData(int src, int dst);
    // static private System.Void .cctor()
    // Offset: 0x115644C
    static void _cctor();
  }; // TMPro.TMP_MeshInfo
  #pragma pack(pop)
  static check_size<sizeof(TMP_MeshInfo), 64 + sizeof(::Array<int>*)> __TMPro_TMP_MeshInfoSizeCheck;
  static_assert(sizeof(TMP_MeshInfo) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_MeshInfo, "TMPro", "TMP_MeshInfo");
