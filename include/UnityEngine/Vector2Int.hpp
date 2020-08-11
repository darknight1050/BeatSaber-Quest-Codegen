// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Vector2Int
  struct Vector2Int : public System::ValueType, public System::IEquatable_1<UnityEngine::Vector2Int> {
    public:
    // private System.Int32 m_X
    // Offset: 0x0
    int m_X;
    // private System.Int32 m_Y
    // Offset: 0x4
    int m_Y;
    // Get static field: static private readonly UnityEngine.Vector2Int s_Zero
    static UnityEngine::Vector2Int _get_s_Zero();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Zero
    static void _set_s_Zero(UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_One
    static UnityEngine::Vector2Int _get_s_One();
    // Set static field: static private readonly UnityEngine.Vector2Int s_One
    static void _set_s_One(UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_Up
    static UnityEngine::Vector2Int _get_s_Up();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Up
    static void _set_s_Up(UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_Down
    static UnityEngine::Vector2Int _get_s_Down();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Down
    static void _set_s_Down(UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_Left
    static UnityEngine::Vector2Int _get_s_Left();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Left
    static void _set_s_Left(UnityEngine::Vector2Int value);
    // Get static field: static private readonly UnityEngine.Vector2Int s_Right
    static UnityEngine::Vector2Int _get_s_Right();
    // Set static field: static private readonly UnityEngine.Vector2Int s_Right
    static void _set_s_Right(UnityEngine::Vector2Int value);
    // Creating value type constructor for type: Vector2Int
    Vector2Int(int m_X_ = {}, int m_Y_ = {}) : m_X{m_X_}, m_Y{m_Y_} {}
    // public System.Int32 get_x()
    // Offset: 0xA43C94
    int get_x();
    // public System.Int32 get_y()
    // Offset: 0xA43C9C
    int get_y();
    // public System.Void .ctor(System.Int32 x, System.Int32 y)
    // Offset: 0xA43CA4
    static Vector2Int* New_ctor(int x, int y);
    // static private System.Void .cctor()
    // Offset: 0x1381794
    static void _cctor();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xA43CAC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::CsObject* other);
    // public System.Boolean Equals(UnityEngine.Vector2Int other)
    // Offset: 0xA43CB4
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.Vector2Int other)
    bool Equals(UnityEngine::Vector2Int other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA43CBC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xA43CC4
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::CsString* ToString();
  }; // UnityEngine.Vector2Int
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Vector2Int, "UnityEngine", "Vector2Int");
#pragma pack(pop)
