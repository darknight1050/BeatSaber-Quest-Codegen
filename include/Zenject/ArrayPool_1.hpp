// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.StaticMemoryPoolBaseBase`1
#include "Zenject/StaticMemoryPoolBaseBase_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ArrayPool`1
  template<typename T>
  class ArrayPool_1 : public Zenject::StaticMemoryPoolBaseBase_1<::Array<T>*> {
    public:
    // private readonly System.Int32 _length
    // Offset: 0x0
    int length;
    // Autogenerated static field getter
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Int32,Zenject.ArrayPool`1<T>> _pools
    static System::Collections::Generic::Dictionary_2<int, Zenject::ArrayPool_1<T>*>* _get__pools() {
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::Dictionary_2<int, Zenject::ArrayPool_1<T>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayPool_1<T>*>::get(), "_pools")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Int32,Zenject.ArrayPool`1<T>> _pools
    static void _set__pools(System::Collections::Generic::Dictionary_2<int, Zenject::ArrayPool_1<T>*>* value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayPool_1<T>*>::get(), "_pools", value));
    }
    // public System.Void .ctor(System.Int32 length)
    // Offset: 0xFFFFFFFF
    static ArrayPool_1<T>* New_ctor(int length) {
      return (ArrayPool_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayPool_1<T>*>::get(), length));
    }
    // static private System.Void OnDespawned(T[] arr)
    // Offset: 0xFFFFFFFF
    static void OnDespawned(::Array<T>* arr) {
      THROW_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayPool_1<T>*>::get(), "OnDespawned", arr));
    }
    // public T[] Spawn()
    // Offset: 0xFFFFFFFF
    ::Array<T>* Spawn() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<T>*>(this, "Spawn"));
    }
    // protected T[] Alloc()
    // Offset: 0xFFFFFFFF
    ::Array<T>* Alloc() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<T>*>(this, "Alloc"));
    }
    // static public Zenject.ArrayPool`1<T> GetPool(System.Int32 length)
    // Offset: 0xFFFFFFFF
    static Zenject::ArrayPool_1<T>* GetPool(int length) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::ArrayPool_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayPool_1<T>*>::get(), "GetPool", length));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      THROW_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayPool_1<T>*>::get(), ".cctor"));
    }
  }; // Zenject.ArrayPool`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::ArrayPool_1, "Zenject", "ArrayPool`1");
#pragma pack(pop)
