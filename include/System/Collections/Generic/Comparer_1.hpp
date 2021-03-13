// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.Comparer`1
  // [] Offset: FFFFFFFF
  // [TypeDependencyAttribute] Offset: C98FF4
  template<typename T>
  class Comparer_1 : public ::Il2CppObject/*, public System::Collections::IComparer, public System::Collections::Generic::IComparer_1<T>*/ {
    public:
    // Creating value type constructor for type: Comparer_1
    Comparer_1() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IComparer
    operator System::Collections::IComparer() noexcept {
      return *reinterpret_cast<System::Collections::IComparer*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IComparer_1<T>
    operator System::Collections::Generic::IComparer_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IComparer_1<T>*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static private System.Collections.Generic.Comparer`1<T> defaultComparer
    static System::Collections::Generic::Comparer_1<T>* _get_defaultComparer() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::Comparer_1::_get_defaultComparer");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::Comparer_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Comparer_1<T>*>::get(), "defaultComparer"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Collections.Generic.Comparer`1<T> defaultComparer
    static void _set_defaultComparer(System::Collections::Generic::Comparer_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::Comparer_1::_set_defaultComparer");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Comparer_1<T>*>::get(), "defaultComparer", value));
    }
    // static public System.Collections.Generic.Comparer`1<T> get_Default()
    // Offset: 0xFFFFFFFF
    static System::Collections::Generic::Comparer_1<T>* get_Default() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::Comparer_1::get_Default");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Comparer_1<T>*>::get(), "get_Default", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::Comparer_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // static private System.Collections.Generic.Comparer`1<T> CreateComparer()
    // Offset: 0xFFFFFFFF
    static System::Collections::Generic::Comparer_1<T>* CreateComparer() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::Comparer_1::CreateComparer");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Comparer_1<T>*>::get(), "CreateComparer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::Comparer_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // public System.Int32 Compare(T x, T y)
    // Offset: 0xFFFFFFFF
    int Compare_NEW(T x, T y) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::Comparer_1::Compare_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Compare", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, x, y);
    }
    // private System.Int32 System.Collections.IComparer.Compare(System.Object x, System.Object y)
    // Offset: 0xFFFFFFFF
    int System_Collections_IComparer_Compare_NEW(::Il2CppObject* x, ::Il2CppObject* y) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::Comparer_1::System.Collections.IComparer.Compare_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IComparer.Compare", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, x, y);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Comparer_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::Comparer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Comparer_1<T>*, creationType>()));
    }
  }; // System.Collections.Generic.Comparer`1
  // Could not write size check! Type: System.Collections.Generic.Comparer`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::Comparer_1, "System.Collections.Generic", "Comparer`1");
