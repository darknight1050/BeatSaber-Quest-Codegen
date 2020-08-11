// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: PickerOptions
  struct PickerOptions;
  // Forward declaring type: Face
  class Face;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.SelectionPicker
  class SelectionPicker : public ::CsObject {
    public:
    // static public System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.HashSet`1<System.Int32>> PickVerticesInRect(UnityEngine.Camera cam, UnityEngine.Rect rect, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.ProBuilderMesh> selectable, UnityEngine.ProBuilder.PickerOptions options, System.Single pixelsPerPoint)
    // Offset: 0x102A938
    static System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::HashSet_1<int>*>* PickVerticesInRect(UnityEngine::Camera* cam, UnityEngine::Rect rect, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::ProBuilderMesh*>* selectable, UnityEngine::ProBuilder::PickerOptions options, float pixelsPerPoint);
    // static public System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face>> PickFacesInRect(UnityEngine.Camera cam, UnityEngine.Rect rect, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.ProBuilderMesh> selectable, UnityEngine.ProBuilder.PickerOptions options, System.Single pixelsPerPoint)
    // Offset: 0x102B650
    static System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>*>* PickFacesInRect(UnityEngine::Camera* cam, UnityEngine::Rect rect, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::ProBuilderMesh*>* selectable, UnityEngine::ProBuilder::PickerOptions options, float pixelsPerPoint);
    // static public System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.ProBuilderMesh,System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Edge>> PickEdgesInRect(UnityEngine.Camera cam, UnityEngine.Rect rect, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.ProBuilderMesh> selectable, UnityEngine.ProBuilder.PickerOptions options, System.Single pixelsPerPoint)
    // Offset: 0x102CBB0
    static System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Edge>*>* PickEdgesInRect(UnityEngine::Camera* cam, UnityEngine::Rect rect, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::ProBuilderMesh*>* selectable, UnityEngine::ProBuilder::PickerOptions options, float pixelsPerPoint);
    // static public UnityEngine.ProBuilder.Face PickFace(UnityEngine.Camera camera, UnityEngine.Vector3 mousePosition, UnityEngine.ProBuilder.ProBuilderMesh pickable)
    // Offset: 0x102D900
    static UnityEngine::ProBuilder::Face* PickFace(UnityEngine::Camera* camera, UnityEngine::Vector3 mousePosition, UnityEngine::ProBuilder::ProBuilderMesh* pickable);
  }; // UnityEngine.ProBuilder.SelectionPicker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SelectionPicker*, "UnityEngine.ProBuilder", "SelectionPicker");
#pragma pack(pop)
