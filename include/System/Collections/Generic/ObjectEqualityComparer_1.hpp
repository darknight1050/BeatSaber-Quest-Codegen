// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.EqualityComparer`1
#include "System/Collections/Generic/EqualityComparer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.ObjectEqualityComparer`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class ObjectEqualityComparer_1 : public System::Collections::Generic::EqualityComparer_1<T> {
    public:
    // Creating value type constructor for type: ObjectEqualityComparer_1
    ObjectEqualityComparer_1() noexcept {}
    // public override System.Boolean Equals(T x, T y)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Boolean EqualityComparer_1::Equals_NEW(T x, T y)
    bool Equals(T x, T y) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::ObjectEqualityComparer_1::Equals");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, x, y);
    }
    // public override System.Int32 GetHashCode(T obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Int32 EqualityComparer_1::GetHashCode_NEW(T obj)
    int GetHashCode(T obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::ObjectEqualityComparer_1::GetHashCode");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetHashCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, obj);
    }
    // override System.Int32 IndexOf(T[] array, T value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Int32 EqualityComparer_1::IndexOf_NEW(T[] array, T value, System.Int32 startIndex, System.Int32 count)
    int IndexOf(::Array<T>* array, T value, int startIndex, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::ObjectEqualityComparer_1::IndexOf");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "IndexOf", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(array, value, startIndex, count)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, array, value, startIndex, count);
    }
    // override System.Int32 LastIndexOf(T[] array, T value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Int32 EqualityComparer_1::LastIndexOf_NEW(T[] array, T value, System.Int32 startIndex, System.Int32 count)
    int LastIndexOf(::Array<T>* array, T value, int startIndex, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::ObjectEqualityComparer_1::LastIndexOf");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "LastIndexOf", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(array, value, startIndex, count)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, array, value, startIndex, count);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals_NEW(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::ObjectEqualityComparer_1::Equals");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, obj);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode_NEW()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::ObjectEqualityComparer_1::GetHashCode");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetHashCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Void EqualityComparer_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectEqualityComparer_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::ObjectEqualityComparer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectEqualityComparer_1<T>*, creationType>()));
    }
  }; // System.Collections.Generic.ObjectEqualityComparer`1
  // Could not write size check! Type: System.Collections.Generic.ObjectEqualityComparer`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::ObjectEqualityComparer_1, "System.Collections.Generic", "ObjectEqualityComparer`1");
