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
// Forward declaring namespace: Xft
namespace Xft {
  // Forward declaring type: SplineControlPoint
  class SplineControlPoint;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Xft
namespace Xft {
  // Autogenerated type: Xft.Spline
  class Spline : public ::CsObject {
    public:
    // private System.Collections.Generic.List`1<Xft.SplineControlPoint> mControlPoints
    // Offset: 0x10
    System::Collections::Generic::List_1<Xft::SplineControlPoint*>* mControlPoints;
    // private System.Collections.Generic.List`1<Xft.SplineControlPoint> mSegments
    // Offset: 0x18
    System::Collections::Generic::List_1<Xft::SplineControlPoint*>* mSegments;
    // public Xft.SplineControlPoint get_Item(System.Int32 index)
    // Offset: 0xC419E4
    Xft::SplineControlPoint* get_Item(int index);
    // public System.Collections.Generic.List`1<Xft.SplineControlPoint> get_Segments()
    // Offset: 0xC41A6C
    System::Collections::Generic::List_1<Xft::SplineControlPoint*>* get_Segments();
    // public System.Collections.Generic.List`1<Xft.SplineControlPoint> get_ControlPoints()
    // Offset: 0xC41A74
    System::Collections::Generic::List_1<Xft::SplineControlPoint*>* get_ControlPoints();
    // public Xft.SplineControlPoint NextControlPoint(Xft.SplineControlPoint controlpoint)
    // Offset: 0xC41A7C
    Xft::SplineControlPoint* NextControlPoint(Xft::SplineControlPoint* controlpoint);
    // public Xft.SplineControlPoint PreviousControlPoint(Xft.SplineControlPoint controlpoint)
    // Offset: 0xC41B14
    Xft::SplineControlPoint* PreviousControlPoint(Xft::SplineControlPoint* controlpoint);
    // public UnityEngine.Vector3 NextPosition(Xft.SplineControlPoint controlpoint)
    // Offset: 0xC41BA8
    UnityEngine::Vector3 NextPosition(Xft::SplineControlPoint* controlpoint);
    // public UnityEngine.Vector3 PreviousPosition(Xft.SplineControlPoint controlpoint)
    // Offset: 0xC41BE0
    UnityEngine::Vector3 PreviousPosition(Xft::SplineControlPoint* controlpoint);
    // public UnityEngine.Vector3 PreviousNormal(Xft.SplineControlPoint controlpoint)
    // Offset: 0xC41C18
    UnityEngine::Vector3 PreviousNormal(Xft::SplineControlPoint* controlpoint);
    // public UnityEngine.Vector3 NextNormal(Xft.SplineControlPoint controlpoint)
    // Offset: 0xC41C50
    UnityEngine::Vector3 NextNormal(Xft::SplineControlPoint* controlpoint);
    // public Xft.SplineControlPoint LenToSegment(System.Single t, System.Single localF)
    // Offset: 0xC41C88
    Xft::SplineControlPoint* LenToSegment(float t, float& localF);
    // static public UnityEngine.Vector3 CatmulRom(UnityEngine.Vector3 T0, UnityEngine.Vector3 P0, UnityEngine.Vector3 P1, UnityEngine.Vector3 T1, System.Single f)
    // Offset: 0xC41E34
    static UnityEngine::Vector3 CatmulRom(UnityEngine::Vector3 T0, UnityEngine::Vector3 P0, UnityEngine::Vector3 P1, UnityEngine::Vector3 T1, float f);
    // public UnityEngine.Vector3 InterpolateByLen(System.Single tl)
    // Offset: 0xC41F7C
    UnityEngine::Vector3 InterpolateByLen(float tl);
    // public UnityEngine.Vector3 InterpolateNormalByLen(System.Single tl)
    // Offset: 0xC420AC
    UnityEngine::Vector3 InterpolateNormalByLen(float tl);
    // public Xft.SplineControlPoint AddControlPoint(UnityEngine.Vector3 pos, UnityEngine.Vector3 up)
    // Offset: 0xC421DC
    Xft::SplineControlPoint* AddControlPoint(UnityEngine::Vector3 pos, UnityEngine::Vector3 up);
    // public System.Void Clear()
    // Offset: 0xC4231C
    void Clear();
    // private System.Void RefreshDistance()
    // Offset: 0xC42374
    void RefreshDistance();
    // public System.Void RefreshSpline()
    // Offset: 0xC4256C
    void RefreshSpline();
    // public System.Void .ctor()
    // Offset: 0xC426C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Spline* New_ctor();
  }; // Xft.Spline
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Xft::Spline*, "Xft", "Spline");
#pragma pack(pop)
