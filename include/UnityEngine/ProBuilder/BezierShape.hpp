// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ProBuilder.BezierPoint
#include "UnityEngine/ProBuilder/BezierPoint.hpp"
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
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.BezierShape
  // [AddComponentMenu] Offset: E38CE4
  // [DisallowMultipleComponent] Offset: E38CE4
  // [ExcludeFromPresetAttribute] Offset: E38CE4
  // [ExcludeFromObjectFactoryAttribute] Offset: E38CE4
  // [RequireComponent] Offset: E38CE4
  class BezierShape : public UnityEngine::MonoBehaviour {
    public:
    // public System.Collections.Generic.List`1<UnityEngine.ProBuilder.BezierPoint> points
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::BezierPoint>* points;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::ProBuilder::BezierPoint>*) == 0x8);
    // public System.Boolean closeLoop
    // Size: 0x1
    // Offset: 0x20
    bool closeLoop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: closeLoop and: radius
    char __padding1[0x3] = {};
    // public System.Single radius
    // Size: 0x4
    // Offset: 0x24
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 rows
    // Size: 0x4
    // Offset: 0x28
    int rows;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 columns
    // Size: 0x4
    // Offset: 0x2C
    int columns;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean smooth
    // Size: 0x1
    // Offset: 0x30
    bool smooth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_IsEditing
    // Size: 0x1
    // Offset: 0x31
    bool m_IsEditing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_IsEditing and: m_Mesh
    char __padding6[0x6] = {};
    // private UnityEngine.ProBuilder.ProBuilderMesh m_Mesh
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::ProBuilder::ProBuilderMesh* m_Mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::ProBuilderMesh*) == 0x8);
    // Creating value type constructor for type: BezierShape
    BezierShape(System::Collections::Generic::List_1<UnityEngine::ProBuilder::BezierPoint>* points_ = {}, bool closeLoop_ = {}, float radius_ = {}, int rows_ = {}, int columns_ = {}, bool smooth_ = {}, bool m_IsEditing_ = {}, UnityEngine::ProBuilder::ProBuilderMesh* m_Mesh_ = {}) noexcept : points{points_}, closeLoop{closeLoop_}, radius{radius_}, rows{rows_}, columns{columns_}, smooth{smooth_}, m_IsEditing{m_IsEditing_}, m_Mesh{m_Mesh_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_isEditing()
    // Offset: 0x1F42C40
    bool get_isEditing();
    // public System.Void set_isEditing(System.Boolean value)
    // Offset: 0x1F42C48
    void set_isEditing(bool value);
    // public UnityEngine.ProBuilder.ProBuilderMesh get_mesh()
    // Offset: 0x1F42C54
    UnityEngine::ProBuilder::ProBuilderMesh* get_mesh();
    // public System.Void set_mesh(UnityEngine.ProBuilder.ProBuilderMesh value)
    // Offset: 0x1F42CEC
    void set_mesh(UnityEngine::ProBuilder::ProBuilderMesh* value);
    // public System.Void Init()
    // Offset: 0x1F42CF4
    void Init();
    // public System.Void Refresh()
    // Offset: 0x1F42F28
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0x1F42FF8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BezierShape* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::BezierShape::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BezierShape*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.BezierShape
  #pragma pack(pop)
  static check_size<sizeof(BezierShape), 56 + sizeof(UnityEngine::ProBuilder::ProBuilderMesh*)> __UnityEngine_ProBuilder_BezierShapeSizeCheck;
  static_assert(sizeof(BezierShape) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::BezierShape*, "UnityEngine.ProBuilder", "BezierShape");
