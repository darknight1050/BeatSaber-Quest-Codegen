// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
  struct FixedBitArray3 : public System::ValueType, public System::Collections::Generic::IEnumerable_1<bool>, public System::Collections::IEnumerable {
    public:
    // Nested type: UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10
    class $Enumerate$d__10;
    // public System.Boolean _0
    // Offset: 0x0
    bool _0;
    // public System.Boolean _1
    // Offset: 0x1
    bool _1;
    // public System.Boolean _2
    // Offset: 0x2
    bool _2;
    // Creating value type constructor for type: FixedBitArray3
    FixedBitArray3(bool _0_ = {}, bool _1_ = {}, bool _2_ = {}) : _0{_0_}, _1{_1_}, _2{_2_} {}
    // public System.Boolean get_Item(System.Int32 index)
    // Offset: 0xA59CBC
    bool get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Boolean value)
    // Offset: 0xA59CC4
    void set_Item(int index, bool value);
    // public System.Void Clear()
    // Offset: 0xA59CD0
    void Clear();
    // private System.Collections.Generic.IEnumerable`1<System.Boolean> Enumerate()
    // Offset: 0xA59CDC
    System::Collections::Generic::IEnumerable_1<bool>* Enumerate();
    // public System.Collections.Generic.IEnumerator`1<System.Boolean> GetEnumerator()
    // Offset: 0xA59CE4
    System::Collections::Generic::IEnumerator_1<bool>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xA59CEC
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3, "UnityEngine.ProBuilder.Poly2Tri", "FixedBitArray3");
#pragma pack(pop)
