// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.UIVertex
#include "UnityEngine/UIVertex.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x59
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.VertexHelper
  class VertexHelper : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private System.Collections.Generic.List`1<UnityEngine.Vector3> m_Positions
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Vector3>* m_Positions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector3>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Color32> m_Colors
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::Color32>* m_Colors;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Color32>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector2> m_Uv0S
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv0S;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector2>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector2> m_Uv1S
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv1S;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector2>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector2> m_Uv2S
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv2S;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector2>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector2> m_Uv3S
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv3S;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector2>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector3> m_Normals
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<UnityEngine::Vector3>* m_Normals;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector3>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector4> m_Tangents
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::List_1<UnityEngine::Vector4>* m_Tangents;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector4>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Int32> m_Indices
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<int>* m_Indices;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<int>*) == 0x8);
    // private System.Boolean m_ListsInitalized
    // Size: 0x1
    // Offset: 0x58
    bool m_ListsInitalized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: VertexHelper
    VertexHelper(System::Collections::Generic::List_1<UnityEngine::Vector3>* m_Positions_ = {}, System::Collections::Generic::List_1<UnityEngine::Color32>* m_Colors_ = {}, System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv0S_ = {}, System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv1S_ = {}, System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv2S_ = {}, System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv3S_ = {}, System::Collections::Generic::List_1<UnityEngine::Vector3>* m_Normals_ = {}, System::Collections::Generic::List_1<UnityEngine::Vector4>* m_Tangents_ = {}, System::Collections::Generic::List_1<int>* m_Indices_ = {}, bool m_ListsInitalized_ = {}) noexcept : m_Positions{m_Positions_}, m_Colors{m_Colors_}, m_Uv0S{m_Uv0S_}, m_Uv1S{m_Uv1S_}, m_Uv2S{m_Uv2S_}, m_Uv3S{m_Uv3S_}, m_Normals{m_Normals_}, m_Tangents{m_Tangents_}, m_Indices{m_Indices_}, m_ListsInitalized{m_ListsInitalized_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
    static UnityEngine::Vector4 _get_s_DefaultTangent();
    // Set static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
    static void _set_s_DefaultTangent(UnityEngine::Vector4 value);
    // Get static field: static private readonly UnityEngine.Vector3 s_DefaultNormal
    static UnityEngine::Vector3 _get_s_DefaultNormal();
    // Set static field: static private readonly UnityEngine.Vector3 s_DefaultNormal
    static void _set_s_DefaultNormal(UnityEngine::Vector3 value);
    // public System.Void .ctor(UnityEngine.Mesh m)
    // Offset: 0x2386980
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VertexHelper* New_ctor(UnityEngine::Mesh* m) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::VertexHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VertexHelper*, creationType>(m)));
    }
    // private System.Void InitializeListIfRequired()
    // Offset: 0x2386B5C
    void InitializeListIfRequired();
    // public System.Void Dispose()
    // Offset: 0x2386CE8
    void Dispose();
    // public System.Void Clear()
    // Offset: 0x23854F4
    void Clear();
    // public System.Int32 get_currentVertCount()
    // Offset: 0x2386E9C
    int get_currentVertCount();
    // public System.Int32 get_currentIndexCount()
    // Offset: 0x2386EF0
    int get_currentIndexCount();
    // public System.Void PopulateUIVertex(ref UnityEngine.UIVertex vertex, System.Int32 i)
    // Offset: 0x2386F44
    void PopulateUIVertex(UnityEngine::UIVertex& vertex, int i);
    // public System.Void SetUIVertex(UnityEngine.UIVertex vertex, System.Int32 i)
    // Offset: 0x2387124
    void SetUIVertex(UnityEngine::UIVertex vertex, int i);
    // public System.Void FillMesh(UnityEngine.Mesh mesh)
    // Offset: 0x2387270
    void FillMesh(UnityEngine::Mesh* mesh);
    // public System.Void AddVert(UnityEngine.Vector3 position, UnityEngine.Color32 color, UnityEngine.Vector2 uv0, UnityEngine.Vector2 uv1, UnityEngine.Vector2 uv2, UnityEngine.Vector2 uv3, UnityEngine.Vector3 normal, UnityEngine.Vector4 tangent)
    // Offset: 0x23873D4
    void AddVert(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector2 uv0, UnityEngine::Vector2 uv1, UnityEngine::Vector2 uv2, UnityEngine::Vector2 uv3, UnityEngine::Vector3 normal, UnityEngine::Vector4 tangent);
    // public System.Void AddVert(UnityEngine.Vector3 position, UnityEngine.Color32 color, UnityEngine.Vector2 uv0, UnityEngine.Vector2 uv1, UnityEngine.Vector3 normal, UnityEngine.Vector4 tangent)
    // Offset: 0x2387594
    void AddVert(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector2 uv0, UnityEngine::Vector2 uv1, UnityEngine::Vector3 normal, UnityEngine::Vector4 tangent);
    // public System.Void AddVert(UnityEngine.Vector3 position, UnityEngine.Color32 color, UnityEngine.Vector2 uv0)
    // Offset: 0x23876A0
    void AddVert(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector2 uv0);
    // public System.Void AddVert(UnityEngine.UIVertex v)
    // Offset: 0x23877D0
    void AddVert(UnityEngine::UIVertex v);
    // public System.Void AddTriangle(System.Int32 idx0, System.Int32 idx1, System.Int32 idx2)
    // Offset: 0x2387840
    void AddTriangle(int idx0, int idx1, int idx2);
    // public System.Void AddUIVertexQuad(UnityEngine.UIVertex[] verts)
    // Offset: 0x238560C
    void AddUIVertexQuad(::Array<UnityEngine::UIVertex>* verts);
    // public System.Void AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, System.Collections.Generic.List`1<System.Int32> indices)
    // Offset: 0x23878E8
    void AddUIVertexStream(System::Collections::Generic::List_1<UnityEngine::UIVertex>* verts, System::Collections::Generic::List_1<int>* indices);
    // public System.Void AddUIVertexTriangleStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts)
    // Offset: 0x238799C
    void AddUIVertexTriangleStream(System::Collections::Generic::List_1<UnityEngine::UIVertex>* verts);
    // public System.Void GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> stream)
    // Offset: 0x23879F0
    void GetUIVertexStream(System::Collections::Generic::List_1<UnityEngine::UIVertex>* stream);
    // static private System.Void .cctor()
    // Offset: 0x2387A44
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2386978
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VertexHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::VertexHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VertexHelper*, creationType>()));
    }
  }; // UnityEngine.UI.VertexHelper
  #pragma pack(pop)
  static check_size<sizeof(VertexHelper), 88 + sizeof(bool)> __UnityEngine_UI_VertexHelperSizeCheck;
  static_assert(sizeof(VertexHelper) == 0x59);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::VertexHelper*, "UnityEngine.UI", "VertexHelper");
