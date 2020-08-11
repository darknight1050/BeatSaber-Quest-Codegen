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
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: UndoRedoBuffer`1
  template<typename T>
  class UndoRedoBuffer_1 : public ::CsObject {
    public:
    // private System.Collections.Generic.List`1<T> _data
    // Offset: 0x0
    System::Collections::Generic::List_1<T>* data;
    // private System.Int32 _capacity
    // Offset: 0x0
    int capacity;
    // private System.Int32 _cursor
    // Offset: 0x0
    int cursor;
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFF
    static UndoRedoBuffer_1<T>* New_ctor(int capacity) {
      return (UndoRedoBuffer_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UndoRedoBuffer_1<T>*>::get(), capacity));
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFF
    void Add(T item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", item));
    }
    // public T Undo()
    // Offset: 0xFFFFFFFF
    T Undo() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "Undo"));
    }
    // public T Redo()
    // Offset: 0xFFFFFFFF
    T Redo() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "Redo"));
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
    }
  }; // UndoRedoBuffer`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::UndoRedoBuffer_1, "", "UndoRedoBuffer`1");
#pragma pack(pop)
