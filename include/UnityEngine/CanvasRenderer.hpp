// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CanvasRenderer
  // [] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: CC7C78
  // [NativeHeaderAttribute] Offset: CC7C78
  class CanvasRenderer : public UnityEngine::Component {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xCC7EEC
    // [DebuggerBrowsableAttribute] Offset: 0xCC7EEC
    // private System.Boolean <isMask>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool isMask;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CanvasRenderer
    CanvasRenderer(bool isMask_ = {}) noexcept : isMask{isMask_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_hasPopInstruction(System.Boolean value)
    // Offset: 0x217A918
    void set_hasPopInstruction(bool value);
    // public System.Int32 get_materialCount()
    // Offset: 0x217A968
    int get_materialCount();
    // public System.Void set_materialCount(System.Int32 value)
    // Offset: 0x217A9A8
    void set_materialCount(int value);
    // public System.Void set_popMaterialCount(System.Int32 value)
    // Offset: 0x217A9F8
    void set_popMaterialCount(int value);
    // public System.Int32 get_absoluteDepth()
    // Offset: 0x217AA48
    int get_absoluteDepth();
    // public System.Boolean get_hasMoved()
    // Offset: 0x217AA88
    bool get_hasMoved();
    // public System.Boolean get_cull()
    // Offset: 0x217AAC8
    bool get_cull();
    // public System.Void set_cull(System.Boolean value)
    // Offset: 0x217AB08
    void set_cull(bool value);
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x217AB58
    void SetColor(UnityEngine::Color color);
    // public UnityEngine.Color GetColor()
    // Offset: 0x217AC00
    UnityEngine::Color GetColor();
    // public System.Void EnableRectClipping(UnityEngine.Rect rect)
    // Offset: 0x217ACAC
    void EnableRectClipping(UnityEngine::Rect rect);
    // public System.Void set_clippingSoftness(UnityEngine.Vector2 value)
    // Offset: 0x217AD54
    void set_clippingSoftness(UnityEngine::Vector2 value);
    // public System.Void DisableRectClipping()
    // Offset: 0x217ADF8
    void DisableRectClipping();
    // public System.Void SetMaterial(UnityEngine.Material material, System.Int32 index)
    // Offset: 0x217AE38
    void SetMaterial(UnityEngine::Material* material, int index);
    // public UnityEngine.Material GetMaterial(System.Int32 index)
    // Offset: 0x217AE90
    UnityEngine::Material* GetMaterial(int index);
    // public System.Void SetPopMaterial(UnityEngine.Material material, System.Int32 index)
    // Offset: 0x217AEE0
    void SetPopMaterial(UnityEngine::Material* material, int index);
    // public System.Void SetTexture(UnityEngine.Texture texture)
    // Offset: 0x217AF38
    void SetTexture(UnityEngine::Texture* texture);
    // public System.Void SetAlphaTexture(UnityEngine.Texture texture)
    // Offset: 0x217AF88
    void SetAlphaTexture(UnityEngine::Texture* texture);
    // public System.Void SetMesh(UnityEngine.Mesh mesh)
    // Offset: 0x217AFD8
    void SetMesh(UnityEngine::Mesh* mesh);
    // public System.Void Clear()
    // Offset: 0x217B028
    void Clear();
    // public System.Void SetMaterial(UnityEngine.Material material, UnityEngine.Texture texture)
    // Offset: 0x217B068
    void SetMaterial(UnityEngine::Material* material, UnityEngine::Texture* texture);
    // public UnityEngine.Material GetMaterial()
    // Offset: 0x217B1A8
    UnityEngine::Material* GetMaterial();
    // static public System.Void SplitUIVertexStreams(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, System.Collections.Generic.List`1<UnityEngine.Vector3> positions, System.Collections.Generic.List`1<UnityEngine.Color32> colors, System.Collections.Generic.List`1<UnityEngine.Vector2> uv0S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv1S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv2S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv3S, System.Collections.Generic.List`1<UnityEngine.Vector3> normals, System.Collections.Generic.List`1<UnityEngine.Vector4> tangents, System.Collections.Generic.List`1<System.Int32> indices)
    // Offset: 0x217B1EC
    static void SplitUIVertexStreams(System::Collections::Generic::List_1<UnityEngine::UIVertex>* verts, System::Collections::Generic::List_1<UnityEngine::Vector3>* positions, System::Collections::Generic::List_1<UnityEngine::Color32>* colors, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv0S, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv1S, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv2S, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv3S, System::Collections::Generic::List_1<UnityEngine::Vector3>* normals, System::Collections::Generic::List_1<UnityEngine::Vector4>* tangents, System::Collections::Generic::List_1<int>* indices);
    // static public System.Void CreateUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, System.Collections.Generic.List`1<UnityEngine.Vector3> positions, System.Collections.Generic.List`1<UnityEngine.Color32> colors, System.Collections.Generic.List`1<UnityEngine.Vector2> uv0S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv1S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv2S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv3S, System.Collections.Generic.List`1<UnityEngine.Vector3> normals, System.Collections.Generic.List`1<UnityEngine.Vector4> tangents, System.Collections.Generic.List`1<System.Int32> indices)
    // Offset: 0x217B3B8
    static void CreateUIVertexStream(System::Collections::Generic::List_1<UnityEngine::UIVertex>* verts, System::Collections::Generic::List_1<UnityEngine::Vector3>* positions, System::Collections::Generic::List_1<UnityEngine::Color32>* colors, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv0S, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv1S, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv2S, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv3S, System::Collections::Generic::List_1<UnityEngine::Vector3>* normals, System::Collections::Generic::List_1<UnityEngine::Vector4>* tangents, System::Collections::Generic::List_1<int>* indices);
    // static public System.Void AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, System.Collections.Generic.List`1<UnityEngine.Vector3> positions, System.Collections.Generic.List`1<UnityEngine.Color32> colors, System.Collections.Generic.List`1<UnityEngine.Vector2> uv0S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv1S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv2S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv3S, System.Collections.Generic.List`1<UnityEngine.Vector3> normals, System.Collections.Generic.List`1<UnityEngine.Vector4> tangents)
    // Offset: 0x217B500
    static void AddUIVertexStream(System::Collections::Generic::List_1<UnityEngine::UIVertex>* verts, System::Collections::Generic::List_1<UnityEngine::Vector3>* positions, System::Collections::Generic::List_1<UnityEngine::Color32>* colors, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv0S, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv1S, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv2S, System::Collections::Generic::List_1<UnityEngine::Vector2>* uv3S, System::Collections::Generic::List_1<UnityEngine::Vector3>* normals, System::Collections::Generic::List_1<UnityEngine::Vector4>* tangents);
    // static private System.Void SplitIndicesStreamsInternal(System.Object verts, System.Object indices)
    // Offset: 0x217B368
    static void SplitIndicesStreamsInternal(::Il2CppObject* verts, ::Il2CppObject* indices);
    // static private System.Void SplitUIVertexStreamsInternal(System.Object verts, System.Object positions, System.Object colors, System.Object uv0S, System.Object uv1S, System.Object uv2S, System.Object uv3S, System.Object normals, System.Object tangents)
    // Offset: 0x217B2C8
    static void SplitUIVertexStreamsInternal(::Il2CppObject* verts, ::Il2CppObject* positions, ::Il2CppObject* colors, ::Il2CppObject* uv0S, ::Il2CppObject* uv1S, ::Il2CppObject* uv2S, ::Il2CppObject* uv3S, ::Il2CppObject* normals, ::Il2CppObject* tangents);
    // static private System.Void CreateUIVertexStreamInternal(System.Object verts, System.Object positions, System.Object colors, System.Object uv0S, System.Object uv1S, System.Object uv2S, System.Object uv3S, System.Object normals, System.Object tangents, System.Object indices)
    // Offset: 0x217B45C
    static void CreateUIVertexStreamInternal(::Il2CppObject* verts, ::Il2CppObject* positions, ::Il2CppObject* colors, ::Il2CppObject* uv0S, ::Il2CppObject* uv1S, ::Il2CppObject* uv2S, ::Il2CppObject* uv3S, ::Il2CppObject* normals, ::Il2CppObject* tangents, ::Il2CppObject* indices);
    // private System.Void SetColor_Injected(ref UnityEngine.Color color)
    // Offset: 0x217ABB0
    void SetColor_Injected(UnityEngine::Color& color);
    // private System.Void GetColor_Injected(out UnityEngine.Color ret)
    // Offset: 0x217AC5C
    void GetColor_Injected(UnityEngine::Color& ret);
    // private System.Void EnableRectClipping_Injected(ref UnityEngine.Rect rect)
    // Offset: 0x217AD04
    void EnableRectClipping_Injected(UnityEngine::Rect& rect);
    // private System.Void set_clippingSoftness_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x217ADA8
    void set_clippingSoftness_Injected(UnityEngine::Vector2& value);
  }; // UnityEngine.CanvasRenderer
  #pragma pack(pop)
  static check_size<sizeof(CanvasRenderer), 24 + sizeof(bool)> __UnityEngine_CanvasRendererSizeCheck;
  static_assert(sizeof(CanvasRenderer) == 0x19);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CanvasRenderer*, "UnityEngine", "CanvasRenderer");
