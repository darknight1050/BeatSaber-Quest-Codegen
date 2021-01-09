// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Predicate`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class Predicate_1 : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: Predicate_1
    Predicate_1() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Predicate_1<T>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Predicate_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Predicate_1<T>*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(T obj)
    // Offset: 0xFFFFFFFF
    bool Invoke(T obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Predicate_1::Invoke");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, obj);
    }
    // public System.IAsyncResult BeginInvoke(T obj, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(T obj, System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Predicate_1::BeginInvoke");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj, callback, object)));
      return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, obj, callback, object);
    }
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    bool EndInvoke(System::IAsyncResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Predicate_1::EndInvoke");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(result)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, result);
    }
  }; // System.Predicate`1
  // Could not write size check! Type: System.Predicate`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Predicate_1, "System", "Predicate`1");
