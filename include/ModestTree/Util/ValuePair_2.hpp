// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Autogenerated type: ModestTree.Util.ValuePair`2
  template<typename T1, typename T2>
  class ValuePair_2 : public ::CsObject {
    public:
    // public readonly T1 First
    // Offset: 0x0
    T1 First;
    // public readonly T2 Second
    // Offset: 0x0
    T2 Second;
    // public System.Void .ctor(T1 first, T2 second)
    // Offset: 0xFFFFFFFF
    static ValuePair_2<T1, T2>* New_ctor(T1 first, T2 second) {
      return (ValuePair_2<T1, T2>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ValuePair_2<T1, T2>*>::get(), first, second)));
    }
    // public System.Boolean Equals(ModestTree.Util.ValuePair`2<T1,T2> that)
    // Offset: 0xFFFFFFFF
    bool Equals(ModestTree::Util::ValuePair_2<T1, T2>* that) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", that));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ValuePair_2<T1, T2>* New_ctor() {
      return (ValuePair_2<T1, T2>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ValuePair_2<T1, T2>*>::get())));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::CsObject* obj) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
    }
  }; // ModestTree.Util.ValuePair`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(ModestTree::Util::ValuePair_2, "ModestTree.Util", "ValuePair`2");
#pragma pack(pop)
