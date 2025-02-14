// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.MiscExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class MiscExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: MiscExtensions
    MiscExtensions() noexcept {}
    // static public System.String Fmt(System.String s, params System.Object[] args)
    // Offset: 0x13669C0
    static ::Il2CppString* Fmt(::Il2CppString* s, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.String Fmt(System.String s, params System.Object[] args)
    static ::Il2CppString* Fmt(::Il2CppString* s, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.String Fmt(System.String s, params System.Object[] args)
    template<class ...TParams>
    static ::Il2CppString* Fmt(::Il2CppString* s, TParams&&... args) {
      return Fmt(s, {args...});
    }
    // static public System.Int32 IndexOf(System.Collections.Generic.IList`1<T> list, T item)
    // Offset: 0xFFFFFFFF
    template<class T>
    static int IndexOf(System::Collections::Generic::IList_1<T>* list, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::MiscExtensions::IndexOf");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "MiscExtensions", "IndexOf", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list), ::il2cpp_utils::ExtractType(item)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list, item);
    }
    // static public System.String Join(System.Collections.Generic.IEnumerable`1<System.String> values, System.String separator)
    // Offset: 0x1367A5C
    static ::Il2CppString* Join(System::Collections::Generic::IEnumerable_1<::Il2CppString*>* values, ::Il2CppString* separator);
    // static public System.Void AllocFreeAddRange(System.Collections.Generic.IList`1<T> list, System.Collections.Generic.IList`1<T> items)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void AllocFreeAddRange(System::Collections::Generic::IList_1<T>* list, System::Collections::Generic::IList_1<T>* items) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::MiscExtensions::AllocFreeAddRange");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "MiscExtensions", "AllocFreeAddRange", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list), ::il2cpp_utils::ExtractType(items)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list, items);
    }
    // static public System.Void RemoveWithConfirm(System.Collections.Generic.IList`1<T> list, T item)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void RemoveWithConfirm(System::Collections::Generic::IList_1<T>* list, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::MiscExtensions::RemoveWithConfirm");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "MiscExtensions", "RemoveWithConfirm", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list), ::il2cpp_utils::ExtractType(item)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list, item);
    }
    // static public System.Void RemoveWithConfirm(System.Collections.Generic.LinkedList`1<T> list, T item)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void RemoveWithConfirm(System::Collections::Generic::LinkedList_1<T>* list, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::MiscExtensions::RemoveWithConfirm");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "MiscExtensions", "RemoveWithConfirm", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list), ::il2cpp_utils::ExtractType(item)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list, item);
    }
    // static public System.Void RemoveWithConfirm(System.Collections.Generic.IDictionary`2<TKey,TVal> dictionary, TKey key)
    // Offset: 0xFFFFFFFF
    template<class TKey, class TVal>
    static void RemoveWithConfirm(System::Collections::Generic::IDictionary_2<TKey, TVal>* dictionary, TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::MiscExtensions::RemoveWithConfirm");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "MiscExtensions", "RemoveWithConfirm", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TVal>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(dictionary), ::il2cpp_utils::ExtractType(key)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TVal>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, dictionary, key);
    }
    // static public System.Void RemoveWithConfirm(System.Collections.Generic.HashSet`1<T> set, T item)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void RemoveWithConfirm(System::Collections::Generic::HashSet_1<T>* set, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::MiscExtensions::RemoveWithConfirm");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "MiscExtensions", "RemoveWithConfirm", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(set), ::il2cpp_utils::ExtractType(item)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, set, item);
    }
    // static public TVal GetValueAndRemove(System.Collections.Generic.IDictionary`2<TKey,TVal> dictionary, TKey key)
    // Offset: 0xFFFFFFFF
    template<class TKey, class TVal>
    static TVal GetValueAndRemove(System::Collections::Generic::IDictionary_2<TKey, TVal>* dictionary, TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::MiscExtensions::GetValueAndRemove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "MiscExtensions", "GetValueAndRemove", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TVal>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(dictionary), ::il2cpp_utils::ExtractType(key)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TVal>::get()})));
      return ::il2cpp_utils::RunMethodThrow<TVal, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, dictionary, key);
    }
  }; // ModestTree.MiscExtensions
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::MiscExtensions*, "ModestTree", "MiscExtensions");
