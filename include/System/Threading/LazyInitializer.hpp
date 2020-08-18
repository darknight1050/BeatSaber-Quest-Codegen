// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.LazyInitializer
  class LazyInitializer : public ::Il2CppObject {
    public:
    // static public T EnsureInitialized(T target, System.Func`1<T> valueFactory)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T EnsureInitialized(T& target, System::Func_1<T>* valueFactory) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("System.Threading", "LazyInitializer", "EnsureInitialized", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, target, valueFactory)));
    }
    // static private T EnsureInitializedCore(T target, System.Func`1<T> valueFactory)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T EnsureInitializedCore(T& target, System::Func_1<T>* valueFactory) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("System.Threading", "LazyInitializer", "EnsureInitializedCore", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, target, valueFactory)));
    }
  }; // System.Threading.LazyInitializer
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::LazyInitializer*, "System.Threading", "LazyInitializer");
#pragma pack(pop)
