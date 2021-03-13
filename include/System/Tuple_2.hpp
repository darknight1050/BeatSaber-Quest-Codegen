// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IStructuralEquatable
#include "System/Collections/IStructuralEquatable.hpp"
// Including type: System.Collections.IStructuralComparable
#include "System/Collections/IStructuralComparable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.ITupleInternal
#include "System/ITupleInternal.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
  // Forward declaring type: IComparer
  class IComparer;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Tuple`2
  // [] Offset: FFFFFFFF
  template<typename T1, typename T2>
  class Tuple_2 : public ::Il2CppObject/*, public System::Collections::IStructuralEquatable, public System::Collections::IStructuralComparable, public System::IComparable, public System::ITupleInternal*/ {
    public:
    // private readonly T1 m_Item1
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T1 m_Item1;
    // private readonly T2 m_Item2
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T2 m_Item2;
    // Creating value type constructor for type: Tuple_2
    Tuple_2(T1 m_Item1_ = {}, T2 m_Item2_ = {}) noexcept : m_Item1{m_Item1_}, m_Item2{m_Item2_} {}
    // Creating interface conversion operator: operator System::Collections::IStructuralEquatable
    operator System::Collections::IStructuralEquatable() noexcept {
      return *reinterpret_cast<System::Collections::IStructuralEquatable*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::IStructuralComparable
    operator System::Collections::IStructuralComparable() noexcept {
      return *reinterpret_cast<System::Collections::IStructuralComparable*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator System::ITupleInternal
    operator System::ITupleInternal() noexcept {
      return *reinterpret_cast<System::ITupleInternal*>(this);
    }
    // public T1 get_Item1()
    // Offset: 0xFFFFFFFF
    T1 get_Item1() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_2::get_Item1");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Item1", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<T1, false>(this, ___internal__method);
    }
    // public T2 get_Item2()
    // Offset: 0xFFFFFFFF
    T2 get_Item2() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_2::get_Item2");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Item2", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<T2, false>(this, ___internal__method);
    }
    // public System.Void .ctor(T1 item1, T2 item2)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tuple_2<T1, T2>* New_ctor(T1 item1, T2 item2) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tuple_2<T1, T2>*, creationType>(item1, item2)));
    }
    // private System.Boolean System.Collections.IStructuralEquatable.Equals(System.Object other, System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFF
    bool System_Collections_IStructuralEquatable_Equals_NEW(::Il2CppObject* other, System::Collections::IEqualityComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_2::System.Collections.IStructuralEquatable.Equals_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IStructuralEquatable.Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(other, comparer)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, other, comparer);
    }
    // private System.Int32 System.IComparable.CompareTo(System.Object obj)
    // Offset: 0xFFFFFFFF
    int System_IComparable_CompareTo_NEW(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_2::System.IComparable.CompareTo_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.IComparable.CompareTo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, obj);
    }
    // private System.Int32 System.Collections.IStructuralComparable.CompareTo(System.Object other, System.Collections.IComparer comparer)
    // Offset: 0xFFFFFFFF
    int System_Collections_IStructuralComparable_CompareTo_NEW(::Il2CppObject* other, System::Collections::IComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_2::System.Collections.IStructuralComparable.CompareTo_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IStructuralComparable.CompareTo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(other, comparer)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, other, comparer);
    }
    // private System.Int32 System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFF
    int System_Collections_IStructuralEquatable_GetHashCode_NEW(System::Collections::IEqualityComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_2::System.Collections.IStructuralEquatable.GetHashCode_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IStructuralEquatable.GetHashCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(comparer)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, comparer);
    }
    // private System.String System.ITupleInternal.ToString(System.Text.StringBuilder sb)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* System_ITupleInternal_ToString_NEW(System::Text::StringBuilder* sb) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_2::System.ITupleInternal.ToString_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.ITupleInternal.ToString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(sb)));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method, sb);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals_NEW(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_2::Equals");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, obj);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode_NEW()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_2::GetHashCode");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetHashCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.String Object::ToString_NEW()
    ::Il2CppString* ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Tuple_2::ToString");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ToString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
    }
  }; // System.Tuple`2
  // Could not write size check! Type: System.Tuple`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Tuple_2, "System", "Tuple`2");
