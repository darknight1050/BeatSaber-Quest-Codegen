// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.RectOffset
  class RectOffset : public ::CsObject {
    public:
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // private readonly System.Object m_SourceStyle
    // Offset: 0x18
    ::CsObject* m_SourceStyle;
    // System.Void .ctor(System.Object sourceStyle, System.IntPtr source)
    // Offset: 0x1407B2C
    static RectOffset* New_ctor(::CsObject* sourceStyle, System::IntPtr source);
    // public System.Void .ctor(System.Int32 left, System.Int32 right, System.Int32 top, System.Int32 bottom)
    // Offset: 0x1407C74
    static RectOffset* New_ctor(int left, int right, int top, int bottom);
    // private System.Void Destroy()
    // Offset: 0x1407BE8
    void Destroy();
    // static private System.IntPtr InternalCreate()
    // Offset: 0x1407AF8
    static System::IntPtr InternalCreate();
    // static private System.Void InternalDestroy(System.IntPtr ptr)
    // Offset: 0x1408240
    static void InternalDestroy(System::IntPtr ptr);
    // public System.Int32 get_left()
    // Offset: 0x1408140
    int get_left();
    // public System.Void set_left(System.Int32 value)
    // Offset: 0x1407D8C
    void set_left(int value);
    // public System.Int32 get_right()
    // Offset: 0x1408180
    int get_right();
    // public System.Void set_right(System.Int32 value)
    // Offset: 0x1407DDC
    void set_right(int value);
    // public System.Int32 get_top()
    // Offset: 0x14081C0
    int get_top();
    // public System.Void set_top(System.Int32 value)
    // Offset: 0x1407E2C
    void set_top(int value);
    // public System.Int32 get_bottom()
    // Offset: 0x1408200
    int get_bottom();
    // public System.Void set_bottom(System.Int32 value)
    // Offset: 0x1407E7C
    void set_bottom(int value);
    // public System.Int32 get_horizontal()
    // Offset: 0x1408280
    int get_horizontal();
    // public System.Int32 get_vertical()
    // Offset: 0x14082C0
    int get_vertical();
    // public UnityEngine.Rect Remove(UnityEngine.Rect rect)
    // Offset: 0x1408300
    UnityEngine::Rect Remove(UnityEngine::Rect rect);
    // private System.Void Remove_Injected(UnityEngine.Rect rect, UnityEngine.Rect ret)
    // Offset: 0x1408368
    void Remove_Injected(UnityEngine::Rect& rect, UnityEngine::Rect& ret);
    // public System.Void .ctor()
    // Offset: 0x1407AAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RectOffset* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x1407B74
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.String ToString()
    // Offset: 0x1407ECC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::CsString* ToString();
  }; // UnityEngine.RectOffset
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RectOffset*, "UnityEngine", "RectOffset");
#pragma pack(pop)
