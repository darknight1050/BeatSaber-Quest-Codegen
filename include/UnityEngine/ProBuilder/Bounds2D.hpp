// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Bounds2D
  // [] Offset: FFFFFFFF
  class Bounds2D : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector2 center
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Vector2 center;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 m_Size
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Vector2 m_Size;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 m_Extents
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Vector2 m_Extents;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // Creating value type constructor for type: Bounds2D
    Bounds2D(UnityEngine::Vector2 center_ = {}, UnityEngine::Vector2 m_Size_ = {}, UnityEngine::Vector2 m_Extents_ = {}) noexcept : center{center_}, m_Size{m_Size_}, m_Extents{m_Extents_} {}
    // public UnityEngine.Vector2 get_size()
    // Offset: 0x1D82790
    UnityEngine::Vector2 get_size();
    // public System.Void set_size(UnityEngine.Vector2 value)
    // Offset: 0x1D82798
    void set_size(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_extents()
    // Offset: 0x1D827B0
    UnityEngine::Vector2 get_extents();
    // public UnityEngine.Vector2[] get_corners()
    // Offset: 0x1D827B8
    ::Array<UnityEngine::Vector2>* get_corners();
    // public System.Void .ctor(UnityEngine.Vector2 center, UnityEngine.Vector2 size)
    // Offset: 0x1D82988
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bounds2D* New_ctor(UnityEngine::Vector2 center, UnityEngine::Vector2 size) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Bounds2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bounds2D*, creationType>(center, size)));
    }
    // public System.Void .ctor(System.Collections.Generic.IList`1<UnityEngine.Vector2> points)
    // Offset: 0x1D82A50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bounds2D* New_ctor(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Bounds2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bounds2D*, creationType>(points)));
    }
    // public System.Void .ctor(System.Collections.Generic.IList`1<UnityEngine.Vector2> points, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x1D82E10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bounds2D* New_ctor(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points, System::Collections::Generic::IList_1<int>* indexes) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Bounds2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bounds2D*, creationType>(points, indexes)));
    }
    // System.Void .ctor(UnityEngine.Vector3[] points, UnityEngine.ProBuilder.Edge[] edges)
    // Offset: 0x1D83458
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bounds2D* New_ctor(::Array<UnityEngine::Vector3>* points, ::Array<UnityEngine::ProBuilder::Edge>* edges) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Bounds2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bounds2D*, creationType>(points, edges)));
    }
    // public System.Void .ctor(UnityEngine.Vector2[] points, System.Int32 length)
    // Offset: 0x1D837EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bounds2D* New_ctor(::Array<UnityEngine::Vector2>* points, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Bounds2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bounds2D*, creationType>(points, length)));
    }
    // public System.Boolean ContainsPoint(UnityEngine.Vector2 point)
    // Offset: 0x1D83A54
    bool ContainsPoint(UnityEngine::Vector2 point);
    // public System.Boolean IntersectsLineSegment(UnityEngine.Vector2 lineStart, UnityEngine.Vector2 lineEnd)
    // Offset: 0x1D83AA8
    bool IntersectsLineSegment(UnityEngine::Vector2 lineStart, UnityEngine::Vector2 lineEnd);
    // public System.Boolean Intersects(UnityEngine.ProBuilder.Bounds2D bounds)
    // Offset: 0x1D83C40
    bool Intersects(UnityEngine::ProBuilder::Bounds2D* bounds);
    // public System.Boolean Intersects(UnityEngine.Rect rect)
    // Offset: 0x1D83D68
    bool Intersects(UnityEngine::Rect rect);
    // public System.Void SetWithPoints(System.Collections.Generic.IList`1<UnityEngine.Vector2> points)
    // Offset: 0x1D82AF4
    void SetWithPoints(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points);
    // public System.Void SetWithPoints(System.Collections.Generic.IList`1<UnityEngine.Vector2> points, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x1D82EBC
    void SetWithPoints(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points, System::Collections::Generic::IList_1<int>* indexes);
    // static public UnityEngine.Vector2 Center(System.Collections.Generic.IList`1<UnityEngine.Vector2> points)
    // Offset: 0x1D83EB0
    static UnityEngine::Vector2 Center(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points);
    // static public UnityEngine.Vector2 Center(System.Collections.Generic.IList`1<UnityEngine.Vector2> points, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x1D8419C
    static UnityEngine::Vector2 Center(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points, System::Collections::Generic::IList_1<int>* indexes);
    // static public UnityEngine.Vector2 Size(System.Collections.Generic.IList`1<UnityEngine.Vector2> points, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x1D84650
    static UnityEngine::Vector2 Size(System::Collections::Generic::IList_1<UnityEngine::Vector2>* points, System::Collections::Generic::IList_1<int>* indexes);
    // static UnityEngine.Vector2 Center(System.Collections.Generic.IList`1<UnityEngine.Vector4> points, System.Collections.Generic.IEnumerable`1<System.Int32> indexes)
    // Offset: 0x1D84AF8
    static UnityEngine::Vector2 Center(System::Collections::Generic::IList_1<UnityEngine::Vector4>* points, System::Collections::Generic::IEnumerable_1<int>* indexes);
    // public System.Void .ctor()
    // Offset: 0x1D828FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bounds2D* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Bounds2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bounds2D*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1D84FDC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString_NEW()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.Bounds2D
  #pragma pack(pop)
  static check_size<sizeof(Bounds2D), 32 + sizeof(UnityEngine::Vector2)> __UnityEngine_ProBuilder_Bounds2DSizeCheck;
  static_assert(sizeof(Bounds2D) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Bounds2D*, "UnityEngine.ProBuilder", "Bounds2D");
