// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.Edge
  struct Edge : public System::IEquatable_1<UnityEngine::ProBuilder::Edge>, public System::ValueType {
    public:
    // public System.Int32 a
    // Offset: 0x0
    int a;
    // public System.Int32 b
    // Offset: 0x4
    int b;
    // Get static field: static public readonly UnityEngine.ProBuilder.Edge Empty
    static UnityEngine::ProBuilder::Edge _get_Empty();
    // Set static field: static public readonly UnityEngine.ProBuilder.Edge Empty
    static void _set_Empty(UnityEngine::ProBuilder::Edge value);
    // Creating value type constructor for type: Edge
    Edge(int a_ = {}, int b_ = {}) : a{a_}, b{b_} {}
    // public System.Void .ctor(System.Int32 a, System.Int32 b)
    // Offset: 0x9A245C
    static Edge* New_ctor(int a, int b);
    // public System.Boolean IsValid()
    // Offset: 0x9A2464
    bool IsValid();
    // static public UnityEngine.ProBuilder.Edge Add(UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b)
    // Offset: 0xEED724
    static UnityEngine::ProBuilder::Edge Add(UnityEngine::ProBuilder::Edge a, UnityEngine::ProBuilder::Edge b);
    // static public UnityEngine.ProBuilder.Edge Subtract(UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b)
    // Offset: 0xEED7A4
    static UnityEngine::ProBuilder::Edge Subtract(UnityEngine::ProBuilder::Edge a, UnityEngine::ProBuilder::Edge b);
    // public System.Boolean Equals(UnityEngine.ProBuilder.Edge other, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x9A250C
    bool Equals(UnityEngine::ProBuilder::Edge other, System::Collections::Generic::Dictionary_2<int, int>* lookup);
    // public System.Boolean Contains(System.Int32 index)
    // Offset: 0x9A2514
    bool Contains(int index);
    // public System.Boolean Contains(UnityEngine.ProBuilder.Edge other)
    // Offset: 0x9A2538
    bool Contains(UnityEngine::ProBuilder::Edge other);
    // System.Boolean Contains(System.Int32 index, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x9A2568
    bool Contains(int index, System::Collections::Generic::Dictionary_2<int, int>* lookup);
    // static System.Void GetIndices(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges, System.Collections.Generic.List`1<System.Int32> indices)
    // Offset: 0xEEDA40
    static void GetIndices(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges, System::Collections::Generic::List_1<int>* indices);
    // static private System.Void .cctor()
    // Offset: 0xEEDCEC
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0x9A2490
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.Boolean Equals(UnityEngine.ProBuilder.Edge other)
    // Offset: 0x9A2498
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.ProBuilder.Edge other)
    bool Equals(UnityEngine::ProBuilder::Edge other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x9A24E0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x9A24E8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.Edge
  // static public UnityEngine.ProBuilder.Edge op_Addition(UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b)
  // Offset: 0xEED5F4
  UnityEngine::ProBuilder::Edge operator+(const UnityEngine::ProBuilder::Edge& a, const UnityEngine::ProBuilder::Edge& b);
  // static public UnityEngine.ProBuilder.Edge op_Subtraction(UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b)
  // Offset: 0xEED60C
  UnityEngine::ProBuilder::Edge operator-(const UnityEngine::ProBuilder::Edge& a, const UnityEngine::ProBuilder::Edge& b);
  // static public UnityEngine.ProBuilder.Edge op_Addition(UnityEngine.ProBuilder.Edge a, System.Int32 b)
  // Offset: 0xEED624
  UnityEngine::ProBuilder::Edge operator+(const UnityEngine::ProBuilder::Edge& a, const int& b);
  // static public UnityEngine.ProBuilder.Edge op_Subtraction(UnityEngine.ProBuilder.Edge a, System.Int32 b)
  // Offset: 0xEED638
  UnityEngine::ProBuilder::Edge operator-(const UnityEngine::ProBuilder::Edge& a, const int& b);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b)
  // Offset: 0xEED64C
  bool operator ==(const UnityEngine::ProBuilder::Edge& a, const UnityEngine::ProBuilder::Edge& b);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b)
  // Offset: 0xEED684
  bool operator !=(const UnityEngine::ProBuilder::Edge& a, const UnityEngine::ProBuilder::Edge& b);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Edge, "UnityEngine.ProBuilder", "Edge");
#pragma pack(pop)
