// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.FastAction`2
  template<typename A, typename B>
  class FastAction_2 : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.LinkedList`1<System.Action`2<A,B>> delegates
    // Offset: 0x0
    System::Collections::Generic::LinkedList_1<System::Action_2<A, B>*>* delegates;
    // private System.Collections.Generic.Dictionary`2<System.Action`2<A,B>,System.Collections.Generic.LinkedListNode`1<System.Action`2<A,B>>> lookup
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<System::Action_2<A, B>*, System::Collections::Generic::LinkedListNode_1<System::Action_2<A, B>*>*>* lookup;
    // public System.Void Add(System.Action`2<A,B> rhs)
    // Offset: 0xFFFFFFFF
    void Add(System::Action_2<A, B>* rhs) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", rhs));
    }
    // public System.Void Remove(System.Action`2<A,B> rhs)
    // Offset: 0xFFFFFFFF
    void Remove(System::Action_2<A, B>* rhs) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Remove", rhs));
    }
    // public System.Void Call(A a, B b)
    // Offset: 0xFFFFFFFF
    void Call(A a, B b) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Call", a, b));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FastAction_2<A, B>* New_ctor() {
      return (FastAction_2<A, B>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FastAction_2<A, B>*>::get())));
    }
  }; // TMPro.FastAction`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(TMPro::FastAction_2, "TMPro", "FastAction`2");
#pragma pack(pop)
