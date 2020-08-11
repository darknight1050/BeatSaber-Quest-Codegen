// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder::Experimental::CSG
namespace UnityEngine::ProBuilder::Experimental::CSG {
  // Forward declaring type: CSG_Polygon
  class CSG_Polygon;
  // Forward declaring type: CSG_Plane
  class CSG_Plane;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ProBuilder.Experimental.CSG
namespace UnityEngine::ProBuilder::Experimental::CSG {
  // Autogenerated type: UnityEngine.ProBuilder.Experimental.CSG.CSG_Node
  class CSG_Node : public ::CsObject {
    public:
    // public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Experimental.CSG.CSG_Polygon> polygons
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Experimental::CSG::CSG_Polygon*>* polygons;
    // public UnityEngine.ProBuilder.Experimental.CSG.CSG_Node front
    // Offset: 0x18
    UnityEngine::ProBuilder::Experimental::CSG::CSG_Node* front;
    // public UnityEngine.ProBuilder.Experimental.CSG.CSG_Node back
    // Offset: 0x20
    UnityEngine::ProBuilder::Experimental::CSG::CSG_Node* back;
    // public UnityEngine.ProBuilder.Experimental.CSG.CSG_Plane plane
    // Offset: 0x28
    UnityEngine::ProBuilder::Experimental::CSG::CSG_Plane* plane;
    // public System.Void .ctor(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Experimental.CSG.CSG_Polygon> list)
    // Offset: 0xF7C9B8
    static CSG_Node* New_ctor(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Experimental::CSG::CSG_Polygon*>* list);
    // public System.Void .ctor(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Experimental.CSG.CSG_Polygon> list, UnityEngine.ProBuilder.Experimental.CSG.CSG_Plane plane, UnityEngine.ProBuilder.Experimental.CSG.CSG_Node front, UnityEngine.ProBuilder.Experimental.CSG.CSG_Node back)
    // Offset: 0xF7E368
    static CSG_Node* New_ctor(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Experimental::CSG::CSG_Polygon*>* list, UnityEngine::ProBuilder::Experimental::CSG::CSG_Plane* plane, UnityEngine::ProBuilder::Experimental::CSG::CSG_Node* front, UnityEngine::ProBuilder::Experimental::CSG::CSG_Node* back);
    // public UnityEngine.ProBuilder.Experimental.CSG.CSG_Node Clone()
    // Offset: 0xF7E3E8
    UnityEngine::ProBuilder::Experimental::CSG::CSG_Node* Clone();
    // public System.Void ClipTo(UnityEngine.ProBuilder.Experimental.CSG.CSG_Node other)
    // Offset: 0xF7E46C
    void ClipTo(UnityEngine::ProBuilder::Experimental::CSG::CSG_Node* other);
    // public System.Void Invert()
    // Offset: 0xF7E650
    void Invert();
    // public System.Void Build(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Experimental.CSG.CSG_Polygon> list)
    // Offset: 0xF7E0BC
    void Build(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Experimental::CSG::CSG_Polygon*>* list);
    // public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Experimental.CSG.CSG_Polygon> ClipPolygons(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Experimental.CSG.CSG_Polygon> list)
    // Offset: 0xF7E4D4
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Experimental::CSG::CSG_Polygon*>* ClipPolygons(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Experimental::CSG::CSG_Polygon*>* list);
    // public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Experimental.CSG.CSG_Polygon> AllPolygons()
    // Offset: 0xF7CAE4
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Experimental::CSG::CSG_Polygon*>* AllPolygons();
    // static public UnityEngine.ProBuilder.Experimental.CSG.CSG_Node Union(UnityEngine.ProBuilder.Experimental.CSG.CSG_Node a1, UnityEngine.ProBuilder.Experimental.CSG.CSG_Node b1)
    // Offset: 0xF7C9E8
    static UnityEngine::ProBuilder::Experimental::CSG::CSG_Node* Union(UnityEngine::ProBuilder::Experimental::CSG::CSG_Node* a1, UnityEngine::ProBuilder::Experimental::CSG::CSG_Node* b1);
    // static public UnityEngine.ProBuilder.Experimental.CSG.CSG_Node Subtract(UnityEngine.ProBuilder.Experimental.CSG.CSG_Node a1, UnityEngine.ProBuilder.Experimental.CSG.CSG_Node b1)
    // Offset: 0xF7D068
    static UnityEngine::ProBuilder::Experimental::CSG::CSG_Node* Subtract(UnityEngine::ProBuilder::Experimental::CSG::CSG_Node* a1, UnityEngine::ProBuilder::Experimental::CSG::CSG_Node* b1);
    // static public UnityEngine.ProBuilder.Experimental.CSG.CSG_Node Intersect(UnityEngine.ProBuilder.Experimental.CSG.CSG_Node a1, UnityEngine.ProBuilder.Experimental.CSG.CSG_Node b1)
    // Offset: 0xF7D2A4
    static UnityEngine::ProBuilder::Experimental::CSG::CSG_Node* Intersect(UnityEngine::ProBuilder::Experimental::CSG::CSG_Node* a1, UnityEngine::ProBuilder::Experimental::CSG::CSG_Node* b1);
    // public System.Void .ctor()
    // Offset: 0xF7E07C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CSG_Node* New_ctor();
  }; // UnityEngine.ProBuilder.Experimental.CSG.CSG_Node
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Experimental::CSG::CSG_Node*, "UnityEngine.ProBuilder.Experimental.CSG", "CSG_Node");
#pragma pack(pop)
