// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.RuntimeType
#include "System/RuntimeType.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.RuntimeType/ListBuilder`1
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: C9345C
  template<typename T>
  struct RuntimeType::ListBuilder_1/*, public System::ValueType*/ {
    public:
    // private T[] _items
    // Size: 0x8
    // Offset: 0x0
    ::Array<T>* items;
    // Field size check
    static_assert(sizeof(::Array<T>*) == 0x8);
    // private T _item
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T item;
    // private System.Int32 _count
    // Size: 0x4
    // Offset: 0x0
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _capacity
    // Size: 0x4
    // Offset: 0x0
    int capacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ListBuilder_1
    constexpr ListBuilder_1(::Array<T>* items_ = {}, T item_ = {}, int count_ = {}, int capacity_ = {}) noexcept : items{items_}, item{item_}, count{count_}, capacity{capacity_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ListBuilder_1(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeType::ListBuilder_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(capacity)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, capacity);
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeType::ListBuilder_1::get_Item");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "get_Item", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index)));
      return ::il2cpp_utils::RunMethodThrow<T, false>(*this, ___internal__method, index);
    }
    // public T[] ToArray()
    // Offset: 0xFFFFFFFF
    ::Array<T>* ToArray() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeType::ListBuilder_1::ToArray");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "ToArray", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(*this, ___internal__method);
    }
    // public System.Void CopyTo(System.Object[] array, System.Int32 index)
    // Offset: 0xFFFFFFFF
    void CopyTo(::Array<::Il2CppObject*>* array, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeType::ListBuilder_1::CopyTo");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "CopyTo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(array, index)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, array, index);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeType::ListBuilder_1::get_Count");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "get_Count", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method);
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFF
    void Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::RuntimeType::ListBuilder_1::Add");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Add", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, item);
    }
  }; // System.RuntimeType/ListBuilder`1
  // Could not write size check! Type: System.RuntimeType/ListBuilder`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::RuntimeType::ListBuilder_1, "System", "RuntimeType/ListBuilder`1");
