// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Including type: UnityEngine.UIVertex
#include "UnityEngine/UIVertex.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Mesh
  class Mesh;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.CanvasRenderer
  class CanvasRenderer : public UnityEngine::Component {
    public:
    // private System.Boolean <isMask>k__BackingField
    // Offset: 0x18
    bool isMask;
    // public System.Void set_hasPopInstruction(System.Boolean value)
    // Offset: 0x1954480
    void set_hasPopInstruction(bool value);
    // public System.Int32 get_materialCount()
    // Offset: 0x19544D0
    int get_materialCount();
    // public System.Void set_materialCount(System.Int32 value)
    // Offset: 0x1954510
    void set_materialCount(int value);
    // public System.Void set_popMaterialCount(System.Int32 value)
    // Offset: 0x1954560
    void set_popMaterialCount(int value);
    // public System.Int32 get_absoluteDepth()
    // Offset: 0x19545B0
    int get_absoluteDepth();
    // public System.Boolean get_hasMoved()
    // Offset: 0x19545F0
    bool get_hasMoved();
    // public System.Boolean get_cull()
    // Offset: 0x1954630
    bool get_cull();
    // public System.Void set_cull(System.Boolean value)
    // Offset: 0x1954670
    void set_cull(bool value);
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x19546C0
    void SetColor(UnityEngine::Color color);
    // public UnityEngine.Color GetColor()
    // Offset: 0x1954768
    UnityEngine::Color GetColor();
    // public System.Void EnableRectClipping(UnityEngine.Rect rect)
    // Offset: 0x1954814
    void EnableRectClipping(UnityEngine::Rect rect);
    // public System.Void DisableRectClipping()
    // Offset: 0x19548BC
    void DisableRectClipping();
    // public System.Void SetMaterial(UnityEngine.Material material, System.Int32 index)
    // Offset: 0x19548FC
    void SetMaterial(UnityEngine::Material* material, int index);
    // public UnityEngine.Material GetMaterial(System.Int32 index)
    // Offset: 0x1954954
    UnityEngine::Material* GetMaterial(int index);
    // public System.Void SetPopMaterial(UnityEngine.Material material, System.Int32 index)
    // Offset: 0x19549A4
    void SetPopMaterial(UnityEngine::Material* material, int index);
    // public System.Void SetTexture(UnityEngine.Texture texture)
    // Offset: 0x19549FC
    void SetTexture(UnityEngine::Texture* texture);
    // public System.Void SetAlphaTexture(UnityEngine.Texture texture)
    // Offset: 0x1954A4C
    void SetAlphaTexture(UnityEngine::Texture* texture);
    // public System.Void SetMesh(UnityEngine.Mesh mesh)
    // Offset: 0x1954A9C
    void SetMesh(UnityEngine::Mesh* mesh);
    // public System.Void Clear()
    // Offset: 0x1954AEC
    void Clear();
    // public System.Void SetMaterial(UnityEngine.Material material, UnityEngine.Texture texture)
    // Offset: 0x1954B2C
    void SetMaterial(UnityEngine::Material* material, UnityEngine::Texture* texture);
    // public UnityEngine.Material GetMaterial()
    // Offset: 0x1954C6C
    UnityEngine::Material* GetMaterial();
    // static public System.Void SplitUIVertexStreams(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, System.Collections.Generic.List`1<UnityEngine.Vector3> positions, System.Collections.Generic.List`1<UnityEngine.Color32> colors, System.Collections.Generic.List`1<UnityEngine.Vector2> uv0S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv1S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv2S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv3S, System.Collections.Generic.List`1<UnityEngine.Vector3> normals, System.Collections.Generic.List`1<UnityEngine.Vector4> tangents, System.Collections.Generic.List`1<System.Int32> indices)
    // Offset: 0x1954CB0
    static void SplitUIVertexStreams(System::Collections::Generic::List_1<UnityEngine::UIVertex>* verts, System::Collections::Generic::List_1<UnityEngine::Vector3>* positions, System::Collections::Generic::List_1<UnityEngine::Color32>* colors, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv0S, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv1S, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv2S, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv3S, System::Collections::Generic::List_1<UnityEngine::Vector3>* normals, System::Collections::Generic::List_1<UnityEngine::Vector4>* tangents, System::Collections::Generic::List_1<int>* indices);
    // static public System.Void CreateUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, System.Collections.Generic.List`1<UnityEngine.Vector3> positions, System.Collections.Generic.List`1<UnityEngine.Color32> colors, System.Collections.Generic.List`1<UnityEngine.Vector2> uv0S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv1S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv2S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv3S, System.Collections.Generic.List`1<UnityEngine.Vector3> normals, System.Collections.Generic.List`1<UnityEngine.Vector4> tangents, System.Collections.Generic.List`1<System.Int32> indices)
    // Offset: 0x1954E7C
    static void CreateUIVertexStream(System::Collections::Generic::List_1<UnityEngine::UIVertex>* verts, System::Collections::Generic::List_1<UnityEngine::Vector3>* positions, System::Collections::Generic::List_1<UnityEngine::Color32>* colors, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv0S, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv1S, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv2S, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv3S, System::Collections::Generic::List_1<UnityEngine::Vector3>* normals, System::Collections::Generic::List_1<UnityEngine::Vector4>* tangents, System::Collections::Generic::List_1<int>* indices);
    // static public System.Void AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, System.Collections.Generic.List`1<UnityEngine.Vector3> positions, System.Collections.Generic.List`1<UnityEngine.Color32> colors, System.Collections.Generic.List`1<UnityEngine.Vector2> uv0S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv1S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv2S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv3S, System.Collections.Generic.List`1<UnityEngine.Vector3> normals, System.Collections.Generic.List`1<UnityEngine.Vector4> tangents)
    // Offset: 0x1954FC4
    static void AddUIVertexStream(System::Collections::Generic::List_1<UnityEngine::UIVertex>* verts, System::Collections::Generic::List_1<UnityEngine::Vector3>* positions, System::Collections::Generic::List_1<UnityEngine::Color32>* colors, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv0S, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv1S, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv2S, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv3S, System::Collections::Generic::List_1<UnityEngine::Vector3>* normals, System::Collections::Generic::List_1<UnityEngine::Vector4>* tangents);
    // static private System.Void SplitIndicesStreamsInternal(System.Object verts, System.Object indices)
    // Offset: 0x1954E2C
    static void SplitIndicesStreamsInternal(::CsObject* verts, ::CsObject* indices);
    // static private System.Void SplitUIVertexStreamsInternal(System.Object verts, System.Object positions, System.Object colors, System.Object uv0S, System.Object uv1S, System.Object uv2S, System.Object uv3S, System.Object normals, System.Object tangents)
    // Offset: 0x1954D8C
    static void SplitUIVertexStreamsInternal(::CsObject* verts, ::CsObject* positions, ::CsObject* colors, ::CsObject* uv0S, ::CsObject* uv1S, ::CsObject* uv2S, ::CsObject* uv3S, ::CsObject* normals, ::CsObject* tangents);
    // static private System.Void CreateUIVertexStreamInternal(System.Object verts, System.Object positions, System.Object colors, System.Object uv0S, System.Object uv1S, System.Object uv2S, System.Object uv3S, System.Object normals, System.Object tangents, System.Object indices)
    // Offset: 0x1954F20
    static void CreateUIVertexStreamInternal(::CsObject* verts, ::CsObject* positions, ::CsObject* colors, ::CsObject* uv0S, ::CsObject* uv1S, ::CsObject* uv2S, ::CsObject* uv3S, ::CsObject* normals, ::CsObject* tangents, ::CsObject* indices);
    // private System.Void SetColor_Injected(UnityEngine.Color color)
    // Offset: 0x1954718
    void SetColor_Injected(UnityEngine::Color& color);
    // private System.Void GetColor_Injected(UnityEngine.Color ret)
    // Offset: 0x19547C4
    void GetColor_Injected(UnityEngine::Color& ret);
    // private System.Void EnableRectClipping_Injected(UnityEngine.Rect rect)
    // Offset: 0x195486C
    void EnableRectClipping_Injected(UnityEngine::Rect& rect);
  }; // UnityEngine.CanvasRenderer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CanvasRenderer*, "UnityEngine", "CanvasRenderer");
#pragma pack(pop)
