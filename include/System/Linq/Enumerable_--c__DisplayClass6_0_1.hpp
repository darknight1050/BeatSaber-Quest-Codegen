// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Linq.Enumerable
#include "System/Linq/Enumerable.hpp"
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
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Enumerable/<>c__DisplayClass6_0`1
  // [CompilerGeneratedAttribute] Offset: D8A1E4
  template<typename TSource>
  class Enumerable::$$c__DisplayClass6_0_1 : public ::Il2CppObject {
    public:
    // public System.Func`2<TSource,System.Boolean> predicate1
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TSource, bool>* predicate1;
    // Field size check
    static_assert(sizeof(System::Func_2<TSource, bool>*) == 0x8);
    // public System.Func`2<TSource,System.Boolean> predicate2
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TSource, bool>* predicate2;
    // Field size check
    static_assert(sizeof(System::Func_2<TSource, bool>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass6_0_1
    $$c__DisplayClass6_0_1(System::Func_2<TSource, bool>* predicate1_ = {}, System::Func_2<TSource, bool>* predicate2_ = {}) noexcept : predicate1{predicate1_}, predicate2{predicate2_} {}
    // System.Boolean <CombinePredicates>b__0(TSource x)
    // Offset: 0xFFFFFFFF
    bool $CombinePredicates$b__0(TSource x) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$$c__DisplayClass6_0_1::<CombinePredicates>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<CombinePredicates>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, x);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Enumerable::$$c__DisplayClass6_0_1<TSource>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$$c__DisplayClass6_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Enumerable::$$c__DisplayClass6_0_1<TSource>*, creationType>()));
    }
  }; // System.Linq.Enumerable/<>c__DisplayClass6_0`1
  // Could not write size check! Type: System.Linq.Enumerable/<>c__DisplayClass6_0`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::$$c__DisplayClass6_0_1, "System.Linq", "Enumerable/<>c__DisplayClass6_0`1");
