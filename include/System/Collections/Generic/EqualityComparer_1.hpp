// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IEqualityComparer
#include "System/Collections/IEqualityComparer.hpp"
// Including type: System.Collections.Generic.IEqualityComparer`1
#include "System/Collections/Generic/IEqualityComparer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.EqualityComparer`1
  // [] Offset: FFFFFFFF
  // [TypeDependencyAttribute] Offset: C9902C
  template<typename T>
  class EqualityComparer_1 : public ::Il2CppObject/*, public System::Collections::IEqualityComparer, public System::Collections::Generic::IEqualityComparer_1<T>*/ {
    public:
    // Creating value type constructor for type: EqualityComparer_1
    EqualityComparer_1() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IEqualityComparer
    operator System::Collections::IEqualityComparer() noexcept {
      return *reinterpret_cast<System::Collections::IEqualityComparer*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEqualityComparer_1<T>
    operator System::Collections::Generic::IEqualityComparer_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEqualityComparer_1<T>*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static private System.Collections.Generic.EqualityComparer`1<T> defaultComparer
    static System::Collections::Generic::EqualityComparer_1<T>* _get_defaultComparer() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::EqualityComparer_1::_get_defaultComparer");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::EqualityComparer_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EqualityComparer_1<T>*>::get(), "defaultComparer"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Collections.Generic.EqualityComparer`1<T> defaultComparer
    static void _set_defaultComparer(System::Collections::Generic::EqualityComparer_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::EqualityComparer_1::_set_defaultComparer");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EqualityComparer_1<T>*>::get(), "defaultComparer", value));
    }
    // static public System.Collections.Generic.EqualityComparer`1<T> get_Default()
    // Offset: 0xFFFFFFFF
    static System::Collections::Generic::EqualityComparer_1<T>* get_Default() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::EqualityComparer_1::get_Default");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EqualityComparer_1<T>*>::get(), "get_Default", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::EqualityComparer_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // static private System.Collections.Generic.EqualityComparer`1<T> CreateComparer()
    // Offset: 0xFFFFFFFF
    static System::Collections::Generic::EqualityComparer_1<T>* CreateComparer() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::EqualityComparer_1::CreateComparer");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EqualityComparer_1<T>*>::get(), "CreateComparer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::EqualityComparer_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // public System.Boolean Equals(T x, T y)
    // Offset: 0xFFFFFFFF
    bool Equals_NEW(T x, T y) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::EqualityComparer_1::Equals_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, x, y);
    }
    // public System.Int32 GetHashCode(T obj)
    // Offset: 0xFFFFFFFF
    int GetHashCode_NEW(T obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::EqualityComparer_1::GetHashCode_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetHashCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, obj);
    }
    // System.Int32 IndexOf(T[] array, T value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int IndexOf_NEW(::Array<T>* array, T value, int startIndex, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::EqualityComparer_1::IndexOf_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "IndexOf", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(array, value, startIndex, count)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, array, value, startIndex, count);
    }
    // System.Int32 LastIndexOf(T[] array, T value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int LastIndexOf_NEW(::Array<T>* array, T value, int startIndex, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::EqualityComparer_1::LastIndexOf_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "LastIndexOf", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(array, value, startIndex, count)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, array, value, startIndex, count);
    }
    // private System.Int32 System.Collections.IEqualityComparer.GetHashCode(System.Object obj)
    // Offset: 0xFFFFFFFF
    int System_Collections_IEqualityComparer_GetHashCode_NEW(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::EqualityComparer_1::System.Collections.IEqualityComparer.GetHashCode_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEqualityComparer.GetHashCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, obj);
    }
    // private System.Boolean System.Collections.IEqualityComparer.Equals(System.Object x, System.Object y)
    // Offset: 0xFFFFFFFF
    bool System_Collections_IEqualityComparer_Equals_NEW(::Il2CppObject* x, ::Il2CppObject* y) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::EqualityComparer_1::System.Collections.IEqualityComparer.Equals_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEqualityComparer.Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, x, y);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EqualityComparer_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::EqualityComparer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EqualityComparer_1<T>*, creationType>()));
    }
  }; // System.Collections.Generic.EqualityComparer`1
  // Could not write size check! Type: System.Collections.Generic.EqualityComparer`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::EqualityComparer_1, "System.Collections.Generic", "EqualityComparer`1");
