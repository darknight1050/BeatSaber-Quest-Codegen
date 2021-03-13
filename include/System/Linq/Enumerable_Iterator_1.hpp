// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Linq.Enumerable
#include "System/Linq/Enumerable.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Enumerable/Iterator`1
  // [] Offset: FFFFFFFF
  template<typename TSource>
  class Enumerable::Iterator_1 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<TSource>, public System::Collections::Generic::IEnumerator_1<TSource>*/ {
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
    // public TSource get_Current()
    // Offset: 0xFFFFFFFF
    TSource get_Current_NEW() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::Iterator_1::get_Current_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<TSource, false>(this, ___internal__method);
    }
    // public System.Linq.Enumerable/Iterator`1<TSource> Clone()
    // Offset: 0xFFFFFFFF
    System::Linq::Enumerable::Iterator_1<TSource>* Clone_NEW() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::Iterator_1::Clone_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Clone", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Linq::Enumerable::Iterator_1<TSource>*, false>(this, ___internal__method);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFF
    void Dispose_NEW() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::Iterator_1::Dispose_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.IEnumerator`1<TSource> GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<TSource>* GetEnumerator_NEW() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::Iterator_1::GetEnumerator_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal__method);
    }
    // public System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    bool MoveNext_NEW() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::Iterator_1::MoveNext_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.IEnumerable`1<TResult> Select(System.Func`2<TSource,TResult> selector)
    // Offset: 0xFFFFFFFF
    template<class TResult>
    System::Collections::Generic::IEnumerable_1<TResult>* Select_NEW(System::Func_2<TSource, TResult>* selector) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::Iterator_1::Select_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Select", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, ::il2cpp_utils::ExtractTypes(selector)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___generic__method, selector);
    }
    // public System.Collections.Generic.IEnumerable`1<TSource> Where(System.Func`2<TSource,System.Boolean> predicate)
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<TSource>* Where_NEW(System::Func_2<TSource, bool>* predicate) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::Iterator_1::Where_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Where", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(predicate)));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<TSource>*, false>(this, ___internal__method, predicate);
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* System_Collections_IEnumerator_get_Current_NEW() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::Iterator_1::System.Collections.IEnumerator.get_Current_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator_NEW() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::Iterator_1::System.Collections.IEnumerable.GetEnumerator_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFFFFFFFF
    void System_Collections_IEnumerator_Reset_NEW() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::Iterator_1::System.Collections.IEnumerator.Reset_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Enumerable::Iterator_1<TSource>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::Iterator_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Enumerable::Iterator_1<TSource>*, creationType>()));
    }
  }; // System.Linq.Enumerable/Iterator`1
  // Could not write size check! Type: System.Linq.Enumerable/Iterator`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::Iterator_1, "System.Linq", "Enumerable/Iterator`1");
