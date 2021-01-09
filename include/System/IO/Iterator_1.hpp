// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // WARNING Size may be invalid!
  // Autogenerated type: System.IO.Iterator`1
  // [] Offset: FFFFFFFF
  template<typename TSource>
  class Iterator_1 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<TSource>, public System::Collections::Generic::IEnumerator_1<TSource>*/ {
    public:
    // private System.Int32 threadId
    // Size: 0x4
    // Offset: 0x0
    int threadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 state
    // Size: 0x4
    // Offset: 0x0
    int state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // TSource current
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TSource current;
    // Creating value type constructor for type: Iterator_1
    Iterator_1(int threadId_ = {}, int state_ = {}, TSource current_ = {}) noexcept : threadId{threadId_}, state{state_}, current{current_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<TSource>
    operator System::Collections::Generic::IEnumerable_1<TSource>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<TSource>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<TSource>
    operator System::Collections::Generic::IEnumerator_1<TSource>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<TSource>*>(this);
    }
    // protected System.IO.Iterator`1<TSource> Clone()
    // Offset: 0xFFFFFFFF
    System::IO::Iterator_1<TSource>* Clone() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Iterator_1::Clone");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Clone", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::IO::Iterator_1<TSource>*, false>(this, ___internal__method);
    }
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0xFFFFFFFF
    void Dispose(bool disposing) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Iterator_1::Dispose");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(disposing)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, disposing);
    }
    // public System.Collections.Generic.IEnumerator`1<TSource> GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<TSource>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Iterator_1::GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Iterator_1<TSource>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Iterator_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Iterator_1<TSource>*, creationType>()));
    }
    // public TSource get_Current()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    TSource get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Iterator_1::get_Current");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<TSource, false>(this, ___internal__method);
    }
    // Creating proxy method: System_Collections_Generic_IEnumerator_1_get_Current
    // Maps to method: get_Current
    TSource System_Collections_Generic_IEnumerator_1_get_Current() {
      return get_Current();
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Iterator_1::Dispose");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose() {
      Dispose();
    }
    // public System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Iterator_1::MoveNext");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext() {
      return MoveNext();
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Iterator_1::System.Collections.IEnumerator.get_Current");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Iterator_1::System.Collections.IEnumerable.GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Iterator_1::System.Collections.IEnumerator.Reset");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
  }; // System.IO.Iterator`1
  // Could not write size check! Type: System.IO.Iterator`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::IO::Iterator_1, "System.IO", "Iterator`1");
